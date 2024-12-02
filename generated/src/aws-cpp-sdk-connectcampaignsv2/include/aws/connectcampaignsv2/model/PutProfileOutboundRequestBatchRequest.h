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
    AWS_CONNECTCAMPAIGNSV2_API PutProfileOutboundRequestBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutProfileOutboundRequestBatch"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline PutProfileOutboundRequestBatchRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PutProfileOutboundRequestBatchRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PutProfileOutboundRequestBatchRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<ProfileOutboundRequest>& GetProfileOutboundRequests() const{ return m_profileOutboundRequests; }
    inline bool ProfileOutboundRequestsHasBeenSet() const { return m_profileOutboundRequestsHasBeenSet; }
    inline void SetProfileOutboundRequests(const Aws::Vector<ProfileOutboundRequest>& value) { m_profileOutboundRequestsHasBeenSet = true; m_profileOutboundRequests = value; }
    inline void SetProfileOutboundRequests(Aws::Vector<ProfileOutboundRequest>&& value) { m_profileOutboundRequestsHasBeenSet = true; m_profileOutboundRequests = std::move(value); }
    inline PutProfileOutboundRequestBatchRequest& WithProfileOutboundRequests(const Aws::Vector<ProfileOutboundRequest>& value) { SetProfileOutboundRequests(value); return *this;}
    inline PutProfileOutboundRequestBatchRequest& WithProfileOutboundRequests(Aws::Vector<ProfileOutboundRequest>&& value) { SetProfileOutboundRequests(std::move(value)); return *this;}
    inline PutProfileOutboundRequestBatchRequest& AddProfileOutboundRequests(const ProfileOutboundRequest& value) { m_profileOutboundRequestsHasBeenSet = true; m_profileOutboundRequests.push_back(value); return *this; }
    inline PutProfileOutboundRequestBatchRequest& AddProfileOutboundRequests(ProfileOutboundRequest&& value) { m_profileOutboundRequestsHasBeenSet = true; m_profileOutboundRequests.push_back(std::move(value)); return *this; }
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
