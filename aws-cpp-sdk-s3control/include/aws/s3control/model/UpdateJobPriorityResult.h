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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class AWS_S3CONTROL_API UpdateJobPriorityResult
  {
  public:
    UpdateJobPriorityResult();
    UpdateJobPriorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateJobPriorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID for the job whose priority Amazon S3 updated.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID for the job whose priority Amazon S3 updated.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The ID for the job whose priority Amazon S3 updated.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The ID for the job whose priority Amazon S3 updated.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The ID for the job whose priority Amazon S3 updated.</p>
     */
    inline UpdateJobPriorityResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID for the job whose priority Amazon S3 updated.</p>
     */
    inline UpdateJobPriorityResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID for the job whose priority Amazon S3 updated.</p>
     */
    inline UpdateJobPriorityResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The new priority assigned to the specified job.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The new priority assigned to the specified job.</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p>The new priority assigned to the specified job.</p>
     */
    inline UpdateJobPriorityResult& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    Aws::String m_jobId;

    int m_priority;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
