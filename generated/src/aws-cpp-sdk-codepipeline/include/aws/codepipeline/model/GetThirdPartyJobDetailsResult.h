/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ThirdPartyJobDetails.h>
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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetThirdPartyJobDetails</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetThirdPartyJobDetailsOutput">AWS
   * API Reference</a></p>
   */
  class GetThirdPartyJobDetailsResult
  {
  public:
    AWS_CODEPIPELINE_API GetThirdPartyJobDetailsResult() = default;
    AWS_CODEPIPELINE_API GetThirdPartyJobDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API GetThirdPartyJobDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the job, including any protected values defined for the
     * job.</p>
     */
    inline const ThirdPartyJobDetails& GetJobDetails() const { return m_jobDetails; }
    template<typename JobDetailsT = ThirdPartyJobDetails>
    void SetJobDetails(JobDetailsT&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::forward<JobDetailsT>(value); }
    template<typename JobDetailsT = ThirdPartyJobDetails>
    GetThirdPartyJobDetailsResult& WithJobDetails(JobDetailsT&& value) { SetJobDetails(std::forward<JobDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetThirdPartyJobDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ThirdPartyJobDetails m_jobDetails;
    bool m_jobDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
