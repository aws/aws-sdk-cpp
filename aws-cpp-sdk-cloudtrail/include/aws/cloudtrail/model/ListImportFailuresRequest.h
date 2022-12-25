/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class ListImportFailuresRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API ListImportFailuresRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImportFailures"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ID of the import. </p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }

    /**
     * <p> The ID of the import. </p>
     */
    inline bool ImportIdHasBeenSet() const { return m_importIdHasBeenSet; }

    /**
     * <p> The ID of the import. </p>
     */
    inline void SetImportId(const Aws::String& value) { m_importIdHasBeenSet = true; m_importId = value; }

    /**
     * <p> The ID of the import. </p>
     */
    inline void SetImportId(Aws::String&& value) { m_importIdHasBeenSet = true; m_importId = std::move(value); }

    /**
     * <p> The ID of the import. </p>
     */
    inline void SetImportId(const char* value) { m_importIdHasBeenSet = true; m_importId.assign(value); }

    /**
     * <p> The ID of the import. </p>
     */
    inline ListImportFailuresRequest& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}

    /**
     * <p> The ID of the import. </p>
     */
    inline ListImportFailuresRequest& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}

    /**
     * <p> The ID of the import. </p>
     */
    inline ListImportFailuresRequest& WithImportId(const char* value) { SetImportId(value); return *this;}


    /**
     * <p> The maximum number of failures to display on a single page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of failures to display on a single page. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of failures to display on a single page. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of failures to display on a single page. </p>
     */
    inline ListImportFailuresRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> A token you can use to get the next page of import failures. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token you can use to get the next page of import failures. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A token you can use to get the next page of import failures. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A token you can use to get the next page of import failures. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A token you can use to get the next page of import failures. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A token you can use to get the next page of import failures. </p>
     */
    inline ListImportFailuresRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token you can use to get the next page of import failures. </p>
     */
    inline ListImportFailuresRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token you can use to get the next page of import failures. </p>
     */
    inline ListImportFailuresRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
