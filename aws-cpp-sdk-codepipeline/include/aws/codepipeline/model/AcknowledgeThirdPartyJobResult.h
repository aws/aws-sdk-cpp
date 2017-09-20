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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/JobStatus.h>
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
   * <p>Represents the output of an AcknowledgeThirdPartyJob action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/AcknowledgeThirdPartyJobOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API AcknowledgeThirdPartyJobResult
  {
  public:
    AcknowledgeThirdPartyJobResult();
    AcknowledgeThirdPartyJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AcknowledgeThirdPartyJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status information for the third party job, if any.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status information for the third party job, if any.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_status = value; }

    /**
     * <p>The status information for the third party job, if any.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status information for the third party job, if any.</p>
     */
    inline AcknowledgeThirdPartyJobResult& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status information for the third party job, if any.</p>
     */
    inline AcknowledgeThirdPartyJobResult& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    JobStatus m_status;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
