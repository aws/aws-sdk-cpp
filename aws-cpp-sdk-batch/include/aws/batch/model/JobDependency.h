/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>An object representing an AWS Batch job dependency.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobDependency">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API JobDependency
  {
  public:
    JobDependency();
    JobDependency(const Aws::Utils::Json::JsonValue& jsonValue);
    JobDependency& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The job ID of the AWS Batch job associated with this dependency.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID of the AWS Batch job associated with this dependency.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID of the AWS Batch job associated with this dependency.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID of the AWS Batch job associated with this dependency.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID of the AWS Batch job associated with this dependency.</p>
     */
    inline JobDependency& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID of the AWS Batch job associated with this dependency.</p>
     */
    inline JobDependency& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID of the AWS Batch job associated with this dependency.</p>
     */
    inline JobDependency& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:
    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
