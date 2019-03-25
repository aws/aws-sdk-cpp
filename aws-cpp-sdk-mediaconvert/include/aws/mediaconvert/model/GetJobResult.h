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
#include <aws/mediaconvert/model/Job.h>
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
  class AWS_MEDIACONVERT_API GetJobResult
  {
  public:
    GetJobResult();
    GetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Each job converts an input file into an output file or files. For more
     * information, see the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline const Job& GetJob() const{ return m_job; }

    /**
     * Each job converts an input file into an output file or files. For more
     * information, see the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline void SetJob(const Job& value) { m_job = value; }

    /**
     * Each job converts an input file into an output file or files. For more
     * information, see the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline void SetJob(Job&& value) { m_job = std::move(value); }

    /**
     * Each job converts an input file into an output file or files. For more
     * information, see the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline GetJobResult& WithJob(const Job& value) { SetJob(value); return *this;}

    /**
     * Each job converts an input file into an output file or files. For more
     * information, see the User Guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline GetJobResult& WithJob(Job&& value) { SetJob(std::move(value)); return *this;}

  private:

    Job m_job;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
