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
    AWS_CONNECTCAMPAIGNSV2_API PutOutboundRequestBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutOutboundRequestBatch"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline PutOutboundRequestBatchRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PutOutboundRequestBatchRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PutOutboundRequestBatchRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<OutboundRequest>& GetOutboundRequests() const{ return m_outboundRequests; }
    inline bool OutboundRequestsHasBeenSet() const { return m_outboundRequestsHasBeenSet; }
    inline void SetOutboundRequests(const Aws::Vector<OutboundRequest>& value) { m_outboundRequestsHasBeenSet = true; m_outboundRequests = value; }
    inline void SetOutboundRequests(Aws::Vector<OutboundRequest>&& value) { m_outboundRequestsHasBeenSet = true; m_outboundRequests = std::move(value); }
    inline PutOutboundRequestBatchRequest& WithOutboundRequests(const Aws::Vector<OutboundRequest>& value) { SetOutboundRequests(value); return *this;}
    inline PutOutboundRequestBatchRequest& WithOutboundRequests(Aws::Vector<OutboundRequest>&& value) { SetOutboundRequests(std::move(value)); return *this;}
    inline PutOutboundRequestBatchRequest& AddOutboundRequests(const OutboundRequest& value) { m_outboundRequestsHasBeenSet = true; m_outboundRequests.push_back(value); return *this; }
    inline PutOutboundRequestBatchRequest& AddOutboundRequests(OutboundRequest&& value) { m_outboundRequestsHasBeenSet = true; m_outboundRequests.push_back(std::move(value)); return *this; }
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
