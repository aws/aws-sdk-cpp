/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/SuccessfulRequest.h>
#include <aws/connectcampaignsv2/model/FailedRequest.h>
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
   * <p>The response for PutOutboundRequestBatch API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/PutOutboundRequestBatchResponse">AWS
   * API Reference</a></p>
   */
  class PutOutboundRequestBatchResult
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API PutOutboundRequestBatchResult();
    AWS_CONNECTCAMPAIGNSV2_API PutOutboundRequestBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNSV2_API PutOutboundRequestBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<SuccessfulRequest>& GetSuccessfulRequests() const{ return m_successfulRequests; }
    inline void SetSuccessfulRequests(const Aws::Vector<SuccessfulRequest>& value) { m_successfulRequests = value; }
    inline void SetSuccessfulRequests(Aws::Vector<SuccessfulRequest>&& value) { m_successfulRequests = std::move(value); }
    inline PutOutboundRequestBatchResult& WithSuccessfulRequests(const Aws::Vector<SuccessfulRequest>& value) { SetSuccessfulRequests(value); return *this;}
    inline PutOutboundRequestBatchResult& WithSuccessfulRequests(Aws::Vector<SuccessfulRequest>&& value) { SetSuccessfulRequests(std::move(value)); return *this;}
    inline PutOutboundRequestBatchResult& AddSuccessfulRequests(const SuccessfulRequest& value) { m_successfulRequests.push_back(value); return *this; }
    inline PutOutboundRequestBatchResult& AddSuccessfulRequests(SuccessfulRequest&& value) { m_successfulRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FailedRequest>& GetFailedRequests() const{ return m_failedRequests; }
    inline void SetFailedRequests(const Aws::Vector<FailedRequest>& value) { m_failedRequests = value; }
    inline void SetFailedRequests(Aws::Vector<FailedRequest>&& value) { m_failedRequests = std::move(value); }
    inline PutOutboundRequestBatchResult& WithFailedRequests(const Aws::Vector<FailedRequest>& value) { SetFailedRequests(value); return *this;}
    inline PutOutboundRequestBatchResult& WithFailedRequests(Aws::Vector<FailedRequest>&& value) { SetFailedRequests(std::move(value)); return *this;}
    inline PutOutboundRequestBatchResult& AddFailedRequests(const FailedRequest& value) { m_failedRequests.push_back(value); return *this; }
    inline PutOutboundRequestBatchResult& AddFailedRequests(FailedRequest&& value) { m_failedRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutOutboundRequestBatchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutOutboundRequestBatchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutOutboundRequestBatchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SuccessfulRequest> m_successfulRequests;

    Aws::Vector<FailedRequest> m_failedRequests;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
