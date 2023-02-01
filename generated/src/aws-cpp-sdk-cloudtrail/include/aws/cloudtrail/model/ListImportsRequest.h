/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/ImportStatus.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class ListImportsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API ListImportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImports"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The maximum number of imports to display on a single page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of imports to display on a single page. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of imports to display on a single page. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of imports to display on a single page. </p>
     */
    inline ListImportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline ListImportsRequest& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline ListImportsRequest& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p> The ARN of the destination event data store. </p>
     */
    inline ListImportsRequest& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p> The status of the import. </p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }

    /**
     * <p> The status of the import. </p>
     */
    inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }

    /**
     * <p> The status of the import. </p>
     */
    inline void SetImportStatus(const ImportStatus& value) { m_importStatusHasBeenSet = true; m_importStatus = value; }

    /**
     * <p> The status of the import. </p>
     */
    inline void SetImportStatus(ImportStatus&& value) { m_importStatusHasBeenSet = true; m_importStatus = std::move(value); }

    /**
     * <p> The status of the import. </p>
     */
    inline ListImportsRequest& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}

    /**
     * <p> The status of the import. </p>
     */
    inline ListImportsRequest& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}


    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline ListImportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline ListImportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline ListImportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    ImportStatus m_importStatus;
    bool m_importStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
