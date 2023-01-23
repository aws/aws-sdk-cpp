/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class ListModelManifestsRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API ListModelManifestsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModelManifests"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ARN of a signal catalog. If you specify a signal catalog, only the
     * vehicle models associated with it are returned.</p>
     */
    inline const Aws::String& GetSignalCatalogArn() const{ return m_signalCatalogArn; }

    /**
     * <p> The ARN of a signal catalog. If you specify a signal catalog, only the
     * vehicle models associated with it are returned.</p>
     */
    inline bool SignalCatalogArnHasBeenSet() const { return m_signalCatalogArnHasBeenSet; }

    /**
     * <p> The ARN of a signal catalog. If you specify a signal catalog, only the
     * vehicle models associated with it are returned.</p>
     */
    inline void SetSignalCatalogArn(const Aws::String& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = value; }

    /**
     * <p> The ARN of a signal catalog. If you specify a signal catalog, only the
     * vehicle models associated with it are returned.</p>
     */
    inline void SetSignalCatalogArn(Aws::String&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::move(value); }

    /**
     * <p> The ARN of a signal catalog. If you specify a signal catalog, only the
     * vehicle models associated with it are returned.</p>
     */
    inline void SetSignalCatalogArn(const char* value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn.assign(value); }

    /**
     * <p> The ARN of a signal catalog. If you specify a signal catalog, only the
     * vehicle models associated with it are returned.</p>
     */
    inline ListModelManifestsRequest& WithSignalCatalogArn(const Aws::String& value) { SetSignalCatalogArn(value); return *this;}

    /**
     * <p> The ARN of a signal catalog. If you specify a signal catalog, only the
     * vehicle models associated with it are returned.</p>
     */
    inline ListModelManifestsRequest& WithSignalCatalogArn(Aws::String&& value) { SetSignalCatalogArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of a signal catalog. If you specify a signal catalog, only the
     * vehicle models associated with it are returned.</p>
     */
    inline ListModelManifestsRequest& WithSignalCatalogArn(const char* value) { SetSignalCatalogArn(value); return *this;}


    /**
     * <p>A pagination token for the next set of results.</p> <p>If the results of a
     * search are large, only a portion of the results are returned, and a
     * <code>nextToken</code> pagination token is returned in the response. To retrieve
     * the next set of results, reissue the search request and include the returned
     * token. When all results have been returned, the response does not contain a
     * pagination token value. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token for the next set of results.</p> <p>If the results of a
     * search are large, only a portion of the results are returned, and a
     * <code>nextToken</code> pagination token is returned in the response. To retrieve
     * the next set of results, reissue the search request and include the returned
     * token. When all results have been returned, the response does not contain a
     * pagination token value. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token for the next set of results.</p> <p>If the results of a
     * search are large, only a portion of the results are returned, and a
     * <code>nextToken</code> pagination token is returned in the response. To retrieve
     * the next set of results, reissue the search request and include the returned
     * token. When all results have been returned, the response does not contain a
     * pagination token value. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token for the next set of results.</p> <p>If the results of a
     * search are large, only a portion of the results are returned, and a
     * <code>nextToken</code> pagination token is returned in the response. To retrieve
     * the next set of results, reissue the search request and include the returned
     * token. When all results have been returned, the response does not contain a
     * pagination token value. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token for the next set of results.</p> <p>If the results of a
     * search are large, only a portion of the results are returned, and a
     * <code>nextToken</code> pagination token is returned in the response. To retrieve
     * the next set of results, reissue the search request and include the returned
     * token. When all results have been returned, the response does not contain a
     * pagination token value. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token for the next set of results.</p> <p>If the results of a
     * search are large, only a portion of the results are returned, and a
     * <code>nextToken</code> pagination token is returned in the response. To retrieve
     * the next set of results, reissue the search request and include the returned
     * token. When all results have been returned, the response does not contain a
     * pagination token value. </p>
     */
    inline ListModelManifestsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token for the next set of results.</p> <p>If the results of a
     * search are large, only a portion of the results are returned, and a
     * <code>nextToken</code> pagination token is returned in the response. To retrieve
     * the next set of results, reissue the search request and include the returned
     * token. When all results have been returned, the response does not contain a
     * pagination token value. </p>
     */
    inline ListModelManifestsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token for the next set of results.</p> <p>If the results of a
     * search are large, only a portion of the results are returned, and a
     * <code>nextToken</code> pagination token is returned in the response. To retrieve
     * the next set of results, reissue the search request and include the returned
     * token. When all results have been returned, the response does not contain a
     * pagination token value. </p>
     */
    inline ListModelManifestsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of items to return, between 1 and 100, inclusive. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of items to return, between 1 and 100, inclusive. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of items to return, between 1 and 100, inclusive. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of items to return, between 1 and 100, inclusive. </p>
     */
    inline ListModelManifestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_signalCatalogArn;
    bool m_signalCatalogArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
