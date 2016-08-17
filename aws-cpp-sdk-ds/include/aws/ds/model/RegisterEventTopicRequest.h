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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Registers a new event topic.</p>
   */
  class AWS_DIRECTORYSERVICE_API RegisterEventTopicRequest : public DirectoryServiceRequest
  {
  public:
    RegisterEventTopicRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Directory ID that will publish status messages to the SNS topic.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The Directory ID that will publish status messages to the SNS topic.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The Directory ID that will publish status messages to the SNS topic.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The Directory ID that will publish status messages to the SNS topic.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The Directory ID that will publish status messages to the SNS topic.</p>
     */
    inline RegisterEventTopicRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The Directory ID that will publish status messages to the SNS topic.</p>
     */
    inline RegisterEventTopicRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The Directory ID that will publish status messages to the SNS topic.</p>
     */
    inline RegisterEventTopicRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The SNS topic name to which the directory will publish status messages. This
     * SNS topic must be in the same region as the specified Directory ID.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The SNS topic name to which the directory will publish status messages. This
     * SNS topic must be in the same region as the specified Directory ID.</p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The SNS topic name to which the directory will publish status messages. This
     * SNS topic must be in the same region as the specified Directory ID.</p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The SNS topic name to which the directory will publish status messages. This
     * SNS topic must be in the same region as the specified Directory ID.</p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The SNS topic name to which the directory will publish status messages. This
     * SNS topic must be in the same region as the specified Directory ID.</p>
     */
    inline RegisterEventTopicRequest& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The SNS topic name to which the directory will publish status messages. This
     * SNS topic must be in the same region as the specified Directory ID.</p>
     */
    inline RegisterEventTopicRequest& WithTopicName(Aws::String&& value) { SetTopicName(value); return *this;}

    /**
     * <p>The SNS topic name to which the directory will publish status messages. This
     * SNS topic must be in the same region as the specified Directory ID.</p>
     */
    inline RegisterEventTopicRequest& WithTopicName(const char* value) { SetTopicName(value); return *this;}

  private:
    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;
    Aws::String m_topicName;
    bool m_topicNameHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
