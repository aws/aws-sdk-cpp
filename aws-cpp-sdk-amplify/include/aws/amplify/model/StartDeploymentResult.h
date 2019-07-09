/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/JobSummary.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> Result structure for start a deployment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/StartDeploymentResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API StartDeploymentResult
  {
  public:
    StartDeploymentResult();
    StartDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Summary for the Job. </p>
     */
    inline const JobSummary& GetJobSummary() const{ return m_jobSummary; }

    /**
     * <p> Summary for the Job. </p>
     */
    inline void SetJobSummary(const JobSummary& value) { m_jobSummary = value; }

    /**
     * <p> Summary for the Job. </p>
     */
    inline void SetJobSummary(JobSummary&& value) { m_jobSummary = std::move(value); }

    /**
     * <p> Summary for the Job. </p>
     */
    inline StartDeploymentResult& WithJobSummary(const JobSummary& value) { SetJobSummary(value); return *this;}

    /**
     * <p> Summary for the Job. </p>
     */
    inline StartDeploymentResult& WithJobSummary(JobSummary&& value) { SetJobSummary(std::move(value)); return *this;}

  private:

    JobSummary m_jobSummary;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
