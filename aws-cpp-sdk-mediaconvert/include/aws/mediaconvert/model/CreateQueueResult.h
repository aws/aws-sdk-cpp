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
#include <aws/mediaconvert/model/Queue.h>
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
  class AWS_MEDIACONVERT_API CreateQueueResult
  {
  public:
    CreateQueueResult();
    CreateQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * You can use queues to manage the resources that are available to your AWS
     * account for running multiple transcoding jobs at the same time. If you don't
     * specify a queue, the service sends all jobs through the default queue. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.
     */
    inline const Queue& GetQueue() const{ return m_queue; }

    /**
     * You can use queues to manage the resources that are available to your AWS
     * account for running multiple transcoding jobs at the same time. If you don't
     * specify a queue, the service sends all jobs through the default queue. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.
     */
    inline void SetQueue(const Queue& value) { m_queue = value; }

    /**
     * You can use queues to manage the resources that are available to your AWS
     * account for running multiple transcoding jobs at the same time. If you don't
     * specify a queue, the service sends all jobs through the default queue. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.
     */
    inline void SetQueue(Queue&& value) { m_queue = std::move(value); }

    /**
     * You can use queues to manage the resources that are available to your AWS
     * account for running multiple transcoding jobs at the same time. If you don't
     * specify a queue, the service sends all jobs through the default queue. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.
     */
    inline CreateQueueResult& WithQueue(const Queue& value) { SetQueue(value); return *this;}

    /**
     * You can use queues to manage the resources that are available to your AWS
     * account for running multiple transcoding jobs at the same time. If you don't
     * specify a queue, the service sends all jobs through the default queue. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/working-with-queues.html.
     */
    inline CreateQueueResult& WithQueue(Queue&& value) { SetQueue(std::move(value)); return *this;}

  private:

    Queue m_queue;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
