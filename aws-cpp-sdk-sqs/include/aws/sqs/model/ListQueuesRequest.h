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
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListQueuesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SQS_API ListQueuesRequest : public SQSRequest
  {
  public:
    ListQueuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQueues"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A string to use for filtering the list results. Only those queues whose name
     * begins with the specified string are returned.</p> <p>Queue URLs and names are
     * case-sensitive.</p>
     */
    inline const Aws::String& GetQueueNamePrefix() const{ return m_queueNamePrefix; }

    /**
     * <p>A string to use for filtering the list results. Only those queues whose name
     * begins with the specified string are returned.</p> <p>Queue URLs and names are
     * case-sensitive.</p>
     */
    inline bool QueueNamePrefixHasBeenSet() const { return m_queueNamePrefixHasBeenSet; }

    /**
     * <p>A string to use for filtering the list results. Only those queues whose name
     * begins with the specified string are returned.</p> <p>Queue URLs and names are
     * case-sensitive.</p>
     */
    inline void SetQueueNamePrefix(const Aws::String& value) { m_queueNamePrefixHasBeenSet = true; m_queueNamePrefix = value; }

    /**
     * <p>A string to use for filtering the list results. Only those queues whose name
     * begins with the specified string are returned.</p> <p>Queue URLs and names are
     * case-sensitive.</p>
     */
    inline void SetQueueNamePrefix(Aws::String&& value) { m_queueNamePrefixHasBeenSet = true; m_queueNamePrefix = std::move(value); }

    /**
     * <p>A string to use for filtering the list results. Only those queues whose name
     * begins with the specified string are returned.</p> <p>Queue URLs and names are
     * case-sensitive.</p>
     */
    inline void SetQueueNamePrefix(const char* value) { m_queueNamePrefixHasBeenSet = true; m_queueNamePrefix.assign(value); }

    /**
     * <p>A string to use for filtering the list results. Only those queues whose name
     * begins with the specified string are returned.</p> <p>Queue URLs and names are
     * case-sensitive.</p>
     */
    inline ListQueuesRequest& WithQueueNamePrefix(const Aws::String& value) { SetQueueNamePrefix(value); return *this;}

    /**
     * <p>A string to use for filtering the list results. Only those queues whose name
     * begins with the specified string are returned.</p> <p>Queue URLs and names are
     * case-sensitive.</p>
     */
    inline ListQueuesRequest& WithQueueNamePrefix(Aws::String&& value) { SetQueueNamePrefix(std::move(value)); return *this;}

    /**
     * <p>A string to use for filtering the list results. Only those queues whose name
     * begins with the specified string are returned.</p> <p>Queue URLs and names are
     * case-sensitive.</p>
     */
    inline ListQueuesRequest& WithQueueNamePrefix(const char* value) { SetQueueNamePrefix(value); return *this;}

  private:

    Aws::String m_queueNamePrefix;
    bool m_queueNamePrefixHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
