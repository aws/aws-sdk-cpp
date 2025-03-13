/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/Job.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace drs
{
namespace Model
{
  class StartSourceNetworkRecoveryResult
  {
  public:
    AWS_DRS_API StartSourceNetworkRecoveryResult() = default;
    AWS_DRS_API StartSourceNetworkRecoveryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API StartSourceNetworkRecoveryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Source Network recovery Job.</p>
     */
    inline const Job& GetJob() const { return m_job; }
    template<typename JobT = Job>
    void SetJob(JobT&& value) { m_jobHasBeenSet = true; m_job = std::forward<JobT>(value); }
    template<typename JobT = Job>
    StartSourceNetworkRecoveryResult& WithJob(JobT&& value) { SetJob(std::forward<JobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSourceNetworkRecoveryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Job m_job;
    bool m_jobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
