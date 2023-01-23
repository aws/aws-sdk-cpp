/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaigns/model/FailedRequest.h>
#include <aws/connectcampaigns/model/SuccessfulRequest.h>
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
namespace ConnectCampaigns
{
namespace Model
{
  /**
   * <p>PutDialRequestBatchResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/PutDialRequestBatchResponse">AWS
   * API Reference</a></p>
   */
  class PutDialRequestBatchResult
  {
  public:
    AWS_CONNECTCAMPAIGNS_API PutDialRequestBatchResult();
    AWS_CONNECTCAMPAIGNS_API PutDialRequestBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNS_API PutDialRequestBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<FailedRequest>& GetFailedRequests() const{ return m_failedRequests; }

    
    inline void SetFailedRequests(const Aws::Vector<FailedRequest>& value) { m_failedRequests = value; }

    
    inline void SetFailedRequests(Aws::Vector<FailedRequest>&& value) { m_failedRequests = std::move(value); }

    
    inline PutDialRequestBatchResult& WithFailedRequests(const Aws::Vector<FailedRequest>& value) { SetFailedRequests(value); return *this;}

    
    inline PutDialRequestBatchResult& WithFailedRequests(Aws::Vector<FailedRequest>&& value) { SetFailedRequests(std::move(value)); return *this;}

    
    inline PutDialRequestBatchResult& AddFailedRequests(const FailedRequest& value) { m_failedRequests.push_back(value); return *this; }

    
    inline PutDialRequestBatchResult& AddFailedRequests(FailedRequest&& value) { m_failedRequests.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<SuccessfulRequest>& GetSuccessfulRequests() const{ return m_successfulRequests; }

    
    inline void SetSuccessfulRequests(const Aws::Vector<SuccessfulRequest>& value) { m_successfulRequests = value; }

    
    inline void SetSuccessfulRequests(Aws::Vector<SuccessfulRequest>&& value) { m_successfulRequests = std::move(value); }

    
    inline PutDialRequestBatchResult& WithSuccessfulRequests(const Aws::Vector<SuccessfulRequest>& value) { SetSuccessfulRequests(value); return *this;}

    
    inline PutDialRequestBatchResult& WithSuccessfulRequests(Aws::Vector<SuccessfulRequest>&& value) { SetSuccessfulRequests(std::move(value)); return *this;}

    
    inline PutDialRequestBatchResult& AddSuccessfulRequests(const SuccessfulRequest& value) { m_successfulRequests.push_back(value); return *this; }

    
    inline PutDialRequestBatchResult& AddSuccessfulRequests(SuccessfulRequest&& value) { m_successfulRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedRequest> m_failedRequests;

    Aws::Vector<SuccessfulRequest> m_successfulRequests;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
