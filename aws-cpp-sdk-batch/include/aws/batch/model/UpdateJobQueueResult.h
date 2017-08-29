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
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{
  class AWS_BATCH_API UpdateJobQueueResult
  {
  public:
    UpdateJobQueueResult();
    UpdateJobQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateJobQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueName() const{ return m_jobQueueName; }

    /**
     * <p>The name of the job queue.</p>
     */
    inline void SetJobQueueName(const Aws::String& value) { m_jobQueueName = value; }

    /**
     * <p>The name of the job queue.</p>
     */
    inline void SetJobQueueName(Aws::String&& value) { m_jobQueueName = std::move(value); }

    /**
     * <p>The name of the job queue.</p>
     */
    inline void SetJobQueueName(const char* value) { m_jobQueueName.assign(value); }

    /**
     * <p>The name of the job queue.</p>
     */
    inline UpdateJobQueueResult& WithJobQueueName(const Aws::String& value) { SetJobQueueName(value); return *this;}

    /**
     * <p>The name of the job queue.</p>
     */
    inline UpdateJobQueueResult& WithJobQueueName(Aws::String&& value) { SetJobQueueName(std::move(value)); return *this;}

    /**
     * <p>The name of the job queue.</p>
     */
    inline UpdateJobQueueResult& WithJobQueueName(const char* value) { SetJobQueueName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline const Aws::String& GetJobQueueArn() const{ return m_jobQueueArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline void SetJobQueueArn(const Aws::String& value) { m_jobQueueArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline void SetJobQueueArn(Aws::String&& value) { m_jobQueueArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline void SetJobQueueArn(const char* value) { m_jobQueueArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline UpdateJobQueueResult& WithJobQueueArn(const Aws::String& value) { SetJobQueueArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline UpdateJobQueueResult& WithJobQueueArn(Aws::String&& value) { SetJobQueueArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job queue.</p>
     */
    inline UpdateJobQueueResult& WithJobQueueArn(const char* value) { SetJobQueueArn(value); return *this;}

  private:

    Aws::String m_jobQueueName;

    Aws::String m_jobQueueArn;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
