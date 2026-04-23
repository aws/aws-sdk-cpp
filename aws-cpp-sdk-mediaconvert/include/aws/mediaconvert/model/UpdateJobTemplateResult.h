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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/JobTemplate.h>
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
namespace MediaConvert
{
namespace Model
{
  class AWS_MEDIACONVERT_API UpdateJobTemplateResult
  {
  public:
    UpdateJobTemplateResult();
    UpdateJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A job template is a pre-made set of encoding instructions that you can use to
     * quickly create a job.
     */
    inline const JobTemplate& GetJobTemplate() const{ return m_jobTemplate; }

    /**
     * A job template is a pre-made set of encoding instructions that you can use to
     * quickly create a job.
     */
    inline void SetJobTemplate(const JobTemplate& value) { m_jobTemplate = value; }

    /**
     * A job template is a pre-made set of encoding instructions that you can use to
     * quickly create a job.
     */
    inline void SetJobTemplate(JobTemplate&& value) { m_jobTemplate = std::move(value); }

    /**
     * A job template is a pre-made set of encoding instructions that you can use to
     * quickly create a job.
     */
    inline UpdateJobTemplateResult& WithJobTemplate(const JobTemplate& value) { SetJobTemplate(value); return *this;}

    /**
     * A job template is a pre-made set of encoding instructions that you can use to
     * quickly create a job.
     */
    inline UpdateJobTemplateResult& WithJobTemplate(JobTemplate&& value) { SetJobTemplate(std::move(value)); return *this;}

  private:

    JobTemplate m_jobTemplate;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
