/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/ConnectCampaignsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaigns/model/DialRequest.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>PutDialRequestBatchRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/PutDialRequestBatchRequest">AWS
   * API Reference</a></p>
   */
  class PutDialRequestBatchRequest : public ConnectCampaignsRequest
  {
  public:
    AWS_CONNECTCAMPAIGNS_API PutDialRequestBatchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDialRequestBatch"; }

    AWS_CONNECTCAMPAIGNS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PutDialRequestBatchRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<DialRequest>& GetDialRequests() const { return m_dialRequests; }
    inline bool DialRequestsHasBeenSet() const { return m_dialRequestsHasBeenSet; }
    template<typename DialRequestsT = Aws::Vector<DialRequest>>
    void SetDialRequests(DialRequestsT&& value) { m_dialRequestsHasBeenSet = true; m_dialRequests = std::forward<DialRequestsT>(value); }
    template<typename DialRequestsT = Aws::Vector<DialRequest>>
    PutDialRequestBatchRequest& WithDialRequests(DialRequestsT&& value) { SetDialRequests(std::forward<DialRequestsT>(value)); return *this;}
    template<typename DialRequestsT = DialRequest>
    PutDialRequestBatchRequest& AddDialRequests(DialRequestsT&& value) { m_dialRequestsHasBeenSet = true; m_dialRequests.emplace_back(std::forward<DialRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<DialRequest> m_dialRequests;
    bool m_dialRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
