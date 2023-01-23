/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/ConnectCampaignsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CONNECTCAMPAIGNS_API PutDialRequestBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDialRequestBatch"; }

    AWS_CONNECTCAMPAIGNS_API Aws::String SerializePayload() const override;


    
    inline const Aws::Vector<DialRequest>& GetDialRequests() const{ return m_dialRequests; }

    
    inline bool DialRequestsHasBeenSet() const { return m_dialRequestsHasBeenSet; }

    
    inline void SetDialRequests(const Aws::Vector<DialRequest>& value) { m_dialRequestsHasBeenSet = true; m_dialRequests = value; }

    
    inline void SetDialRequests(Aws::Vector<DialRequest>&& value) { m_dialRequestsHasBeenSet = true; m_dialRequests = std::move(value); }

    
    inline PutDialRequestBatchRequest& WithDialRequests(const Aws::Vector<DialRequest>& value) { SetDialRequests(value); return *this;}

    
    inline PutDialRequestBatchRequest& WithDialRequests(Aws::Vector<DialRequest>&& value) { SetDialRequests(std::move(value)); return *this;}

    
    inline PutDialRequestBatchRequest& AddDialRequests(const DialRequest& value) { m_dialRequestsHasBeenSet = true; m_dialRequests.push_back(value); return *this; }

    
    inline PutDialRequestBatchRequest& AddDialRequests(DialRequest&& value) { m_dialRequestsHasBeenSet = true; m_dialRequests.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline PutDialRequestBatchRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline PutDialRequestBatchRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline PutDialRequestBatchRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::Vector<DialRequest> m_dialRequests;
    bool m_dialRequestsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
