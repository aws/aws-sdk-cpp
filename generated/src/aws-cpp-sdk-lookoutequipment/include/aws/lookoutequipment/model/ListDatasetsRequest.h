/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListDatasetsRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListDatasetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatasets"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline ListDatasetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline ListDatasetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline ListDatasetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Specifies the maximum number of datasets to list. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Specifies the maximum number of datasets to list. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Specifies the maximum number of datasets to list. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Specifies the maximum number of datasets to list. </p>
     */
    inline ListDatasetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The beginning of the name of the datasets to be listed. </p>
     */
    inline const Aws::String& GetDatasetNameBeginsWith() const{ return m_datasetNameBeginsWith; }

    /**
     * <p>The beginning of the name of the datasets to be listed. </p>
     */
    inline bool DatasetNameBeginsWithHasBeenSet() const { return m_datasetNameBeginsWithHasBeenSet; }

    /**
     * <p>The beginning of the name of the datasets to be listed. </p>
     */
    inline void SetDatasetNameBeginsWith(const Aws::String& value) { m_datasetNameBeginsWithHasBeenSet = true; m_datasetNameBeginsWith = value; }

    /**
     * <p>The beginning of the name of the datasets to be listed. </p>
     */
    inline void SetDatasetNameBeginsWith(Aws::String&& value) { m_datasetNameBeginsWithHasBeenSet = true; m_datasetNameBeginsWith = std::move(value); }

    /**
     * <p>The beginning of the name of the datasets to be listed. </p>
     */
    inline void SetDatasetNameBeginsWith(const char* value) { m_datasetNameBeginsWithHasBeenSet = true; m_datasetNameBeginsWith.assign(value); }

    /**
     * <p>The beginning of the name of the datasets to be listed. </p>
     */
    inline ListDatasetsRequest& WithDatasetNameBeginsWith(const Aws::String& value) { SetDatasetNameBeginsWith(value); return *this;}

    /**
     * <p>The beginning of the name of the datasets to be listed. </p>
     */
    inline ListDatasetsRequest& WithDatasetNameBeginsWith(Aws::String&& value) { SetDatasetNameBeginsWith(std::move(value)); return *this;}

    /**
     * <p>The beginning of the name of the datasets to be listed. </p>
     */
    inline ListDatasetsRequest& WithDatasetNameBeginsWith(const char* value) { SetDatasetNameBeginsWith(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_datasetNameBeginsWith;
    bool m_datasetNameBeginsWithHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
