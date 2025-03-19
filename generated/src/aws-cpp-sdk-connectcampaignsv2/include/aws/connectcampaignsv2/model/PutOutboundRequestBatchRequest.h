/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaignsv2/model/OutboundRequest.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for PutOutboundRequestBatch API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PutOutboundRequestBatchRequest">AWS
   * API Reference</a></p>
   */
  class PutOutboundRequestBatchRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API PutOutboundRequestBatchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutOutboundRequestBatch"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PutOutboundRequestBatchRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<OutboundRequest>& GetOutboundRequests() const { return m_outboundRequests; }
    inline bool OutboundRequestsHasBeenSet() const { return m_outboundRequestsHasBeenSet; }
    template<typename OutboundRequestsT = Aws::Vector<OutboundRequest>>
    void SetOutboundRequests(OutboundRequestsT&& value) { m_outboundRequestsHasBeenSet = true; m_outboundRequests = std::forward<OutboundRequestsT>(value); }
    template<typename OutboundRequestsT = Aws::Vector<OutboundRequest>>
    PutOutboundRequestBatchRequest& WithOutboundRequests(OutboundRequestsT&& value) { SetOutboundRequests(std::forward<OutboundRequestsT>(value)); return *this;}
    template<typename OutboundRequestsT = OutboundRequest>
    PutOutboundRequestBatchRequest& AddOutboundRequests(OutboundRequestsT&& value) { m_outboundRequestsHasBeenSet = true; m_outboundRequests.emplace_back(std::forward<OutboundRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<OutboundRequest> m_outboundRequests;
    bool m_outboundRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
