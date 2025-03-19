/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaignsv2/model/ProfileOutboundRequest.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for PutProfileOutboundRequestBatch API</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PutProfileOutboundRequestBatchRequest">AWS
   * API Reference</a></p>
   */
  class PutProfileOutboundRequestBatchRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API PutProfileOutboundRequestBatchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutProfileOutboundRequestBatch"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PutProfileOutboundRequestBatchRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<ProfileOutboundRequest>& GetProfileOutboundRequests() const { return m_profileOutboundRequests; }
    inline bool ProfileOutboundRequestsHasBeenSet() const { return m_profileOutboundRequestsHasBeenSet; }
    template<typename ProfileOutboundRequestsT = Aws::Vector<ProfileOutboundRequest>>
    void SetProfileOutboundRequests(ProfileOutboundRequestsT&& value) { m_profileOutboundRequestsHasBeenSet = true; m_profileOutboundRequests = std::forward<ProfileOutboundRequestsT>(value); }
    template<typename ProfileOutboundRequestsT = Aws::Vector<ProfileOutboundRequest>>
    PutProfileOutboundRequestBatchRequest& WithProfileOutboundRequests(ProfileOutboundRequestsT&& value) { SetProfileOutboundRequests(std::forward<ProfileOutboundRequestsT>(value)); return *this;}
    template<typename ProfileOutboundRequestsT = ProfileOutboundRequest>
    PutProfileOutboundRequestBatchRequest& AddProfileOutboundRequests(ProfileOutboundRequestsT&& value) { m_profileOutboundRequestsHasBeenSet = true; m_profileOutboundRequests.emplace_back(std::forward<ProfileOutboundRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<ProfileOutboundRequest> m_profileOutboundRequests;
    bool m_profileOutboundRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
