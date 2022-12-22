/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ThirdPartyJobDetails.h>
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
    AWS_CODEPIPELINE_API GetThirdPartyJobDetailsResult();
    AWS_CODEPIPELINE_API GetThirdPartyJobDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API GetThirdPartyJobDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the job, including any protected values defined for the
     * job.</p>
     */
    inline const ThirdPartyJobDetails& GetJobDetails() const{ return m_jobDetails; }

    /**
     * <p>The details of the job, including any protected values defined for the
     * job.</p>
     */
    inline void SetJobDetails(const ThirdPartyJobDetails& value) { m_jobDetails = value; }

    /**
     * <p>The details of the job, including any protected values defined for the
     * job.</p>
     */
    inline void SetJobDetails(ThirdPartyJobDetails&& value) { m_jobDetails = std::move(value); }

    /**
     * <p>The details of the job, including any protected values defined for the
     * job.</p>
     */
    inline GetThirdPartyJobDetailsResult& WithJobDetails(const ThirdPartyJobDetails& value) { SetJobDetails(value); return *this;}

    /**
     * <p>The details of the job, including any protected values defined for the
     * job.</p>
     */
    inline GetThirdPartyJobDetailsResult& WithJobDetails(ThirdPartyJobDetails&& value) { SetJobDetails(std::move(value)); return *this;}

  private:

    ThirdPartyJobDetails m_jobDetails;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
