/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/SuccessfulProfileOutboundRequest.h>
#include <aws/connectcampaignsv2/model/FailedProfileOutboundRequest.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConnectCampaignsV2
{
namespace Model
{
  /**
   * <p>The response for PutProfileOutboundRequestBatch API</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PutProfileOutboundRequestBatchResponse">AWS
   * API Reference</a></p>
   */
  class PutProfileOutboundRequestBatchResult
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API PutProfileOutboundRequestBatchResult();
    AWS_CONNECTCAMPAIGNSV2_API PutProfileOutboundRequestBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNSV2_API PutProfileOutboundRequestBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<SuccessfulProfileOutboundRequest>& GetSuccessfulRequests() const{ return m_successfulRequests; }
    inline void SetSuccessfulRequests(const Aws::Vector<SuccessfulProfileOutboundRequest>& value) { m_successfulRequests = value; }
    inline void SetSuccessfulRequests(Aws::Vector<SuccessfulProfileOutboundRequest>&& value) { m_successfulRequests = std::move(value); }
    inline PutProfileOutboundRequestBatchResult& WithSuccessfulRequests(const Aws::Vector<SuccessfulProfileOutboundRequest>& value) { SetSuccessfulRequests(value); return *this;}
    inline PutProfileOutboundRequestBatchResult& WithSuccessfulRequests(Aws::Vector<SuccessfulProfileOutboundRequest>&& value) { SetSuccessfulRequests(std::move(value)); return *this;}
    inline PutProfileOutboundRequestBatchResult& AddSuccessfulRequests(const SuccessfulProfileOutboundRequest& value) { m_successfulRequests.push_back(value); return *this; }
    inline PutProfileOutboundRequestBatchResult& AddSuccessfulRequests(SuccessfulProfileOutboundRequest&& value) { m_successfulRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FailedProfileOutboundRequest>& GetFailedRequests() const{ return m_failedRequests; }
    inline void SetFailedRequests(const Aws::Vector<FailedProfileOutboundRequest>& value) { m_failedRequests = value; }
    inline void SetFailedRequests(Aws::Vector<FailedProfileOutboundRequest>&& value) { m_failedRequests = std::move(value); }
    inline PutProfileOutboundRequestBatchResult& WithFailedRequests(const Aws::Vector<FailedProfileOutboundRequest>& value) { SetFailedRequests(value); return *this;}
    inline PutProfileOutboundRequestBatchResult& WithFailedRequests(Aws::Vector<FailedProfileOutboundRequest>&& value) { SetFailedRequests(std::move(value)); return *this;}
    inline PutProfileOutboundRequestBatchResult& AddFailedRequests(const FailedProfileOutboundRequest& value) { m_failedRequests.push_back(value); return *this; }
    inline PutProfileOutboundRequestBatchResult& AddFailedRequests(FailedProfileOutboundRequest&& value) { m_failedRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutProfileOutboundRequestBatchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutProfileOutboundRequestBatchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutProfileOutboundRequestBatchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SuccessfulProfileOutboundRequest> m_successfulRequests;

    Aws::Vector<FailedProfileOutboundRequest> m_failedRequests;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
