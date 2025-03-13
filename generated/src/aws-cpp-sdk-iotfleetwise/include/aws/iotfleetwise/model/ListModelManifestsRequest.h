/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/ListResponseScope.h>
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
    AWS_IOTFLEETWISE_API ListModelManifestsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModelManifests"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN of a signal catalog. If you specify a signal catalog, only the
     * vehicle models associated with it are returned.</p>
     */
    inline const Aws::String& GetSignalCatalogArn() const { return m_signalCatalogArn; }
    inline bool SignalCatalogArnHasBeenSet() const { return m_signalCatalogArnHasBeenSet; }
    template<typename SignalCatalogArnT = Aws::String>
    void SetSignalCatalogArn(SignalCatalogArnT&& value) { m_signalCatalogArnHasBeenSet = true; m_signalCatalogArn = std::forward<SignalCatalogArnT>(value); }
    template<typename SignalCatalogArnT = Aws::String>
    ListModelManifestsRequest& WithSignalCatalogArn(SignalCatalogArnT&& value) { SetSignalCatalogArn(std::forward<SignalCatalogArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token for the next set of results.</p> <p>If the results of a
     * search are large, only a portion of the results are returned, and a
     * <code>nextToken</code> pagination token is returned in the response. To retrieve
     * the next set of results, reissue the search request and include the returned
     * token. When all results have been returned, the response does not contain a
     * pagination token value. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelManifestsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return, between 1 and 100, inclusive.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListModelManifestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you set the <code>listResponseScope</code> parameter to
     * <code>METADATA_ONLY</code>, the list response includes: model manifest name,
     * Amazon Resource Name (ARN), creation time, and last modification time.</p>
     */
    inline ListResponseScope GetListResponseScope() const { return m_listResponseScope; }
    inline bool ListResponseScopeHasBeenSet() const { return m_listResponseScopeHasBeenSet; }
    inline void SetListResponseScope(ListResponseScope value) { m_listResponseScopeHasBeenSet = true; m_listResponseScope = value; }
    inline ListModelManifestsRequest& WithListResponseScope(ListResponseScope value) { SetListResponseScope(value); return *this;}
    ///@}
  private:

    Aws::String m_signalCatalogArn;
    bool m_signalCatalogArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ListResponseScope m_listResponseScope{ListResponseScope::NOT_SET};
    bool m_listResponseScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
