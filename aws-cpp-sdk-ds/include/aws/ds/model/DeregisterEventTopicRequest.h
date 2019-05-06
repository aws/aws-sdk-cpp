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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Removes the specified directory as a publisher to the specified SNS
   * topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeregisterEventTopicRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API DeregisterEventTopicRequest : public DirectoryServiceRequest
  {
  public:
    DeregisterEventTopicRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterEventTopic"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Directory ID to remove as a publisher. This directory will no longer send
     * messages to the specified SNS topic.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The Directory ID to remove as a publisher. This directory will no longer send
     * messages to the specified SNS topic.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The Directory ID to remove as a publisher. This directory will no longer send
     * messages to the specified SNS topic.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The Directory ID to remove as a publisher. This directory will no longer send
     * messages to the specified SNS topic.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The Directory ID to remove as a publisher. This directory will no longer send
     * messages to the specified SNS topic.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The Directory ID to remove as a publisher. This directory will no longer send
     * messages to the specified SNS topic.</p>
     */
    inline DeregisterEventTopicRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The Directory ID to remove as a publisher. This directory will no longer send
     * messages to the specified SNS topic.</p>
     */
    inline DeregisterEventTopicRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The Directory ID to remove as a publisher. This directory will no longer send
     * messages to the specified SNS topic.</p>
     */
    inline DeregisterEventTopicRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The name of the SNS topic from which to remove the directory as a
     * publisher.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The name of the SNS topic from which to remove the directory as a
     * publisher.</p>
     */
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }

    /**
     * <p>The name of the SNS topic from which to remove the directory as a
     * publisher.</p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The name of the SNS topic from which to remove the directory as a
     * publisher.</p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }

    /**
     * <p>The name of the SNS topic from which to remove the directory as a
     * publisher.</p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The name of the SNS topic from which to remove the directory as a
     * publisher.</p>
     */
    inline DeregisterEventTopicRequest& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The name of the SNS topic from which to remove the directory as a
     * publisher.</p>
     */
    inline DeregisterEventTopicRequest& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}

    /**
     * <p>The name of the SNS topic from which to remove the directory as a
     * publisher.</p>
     */
    inline DeregisterEventTopicRequest& WithTopicName(const char* value) { SetTopicName(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
