/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class ListInterfaceRelationshipsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListInterfaceRelationshipsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInterfaceRelationships"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the interface asset model. This can be either the actual ID in UUID
     * format, or else externalId: followed by the external ID.</p>
     */
    inline const Aws::String& GetInterfaceAssetModelId() const { return m_interfaceAssetModelId; }
    inline bool InterfaceAssetModelIdHasBeenSet() const { return m_interfaceAssetModelIdHasBeenSet; }
    template<typename InterfaceAssetModelIdT = Aws::String>
    void SetInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { m_interfaceAssetModelIdHasBeenSet = true; m_interfaceAssetModelId = std::forward<InterfaceAssetModelIdT>(value); }
    template<typename InterfaceAssetModelIdT = Aws::String>
    ListInterfaceRelationshipsRequest& WithInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { SetInterfaceAssetModelId(std::forward<InterfaceAssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInterfaceRelationshipsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request. Default:
     * 50</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInterfaceRelationshipsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_interfaceAssetModelId;
    bool m_interfaceAssetModelIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
