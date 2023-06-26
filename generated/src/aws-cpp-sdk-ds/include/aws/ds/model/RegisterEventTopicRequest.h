/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Registers a new event topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RegisterEventTopicRequest">AWS
   * API Reference</a></p>
   */
  class RegisterEventTopicRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API RegisterEventTopicRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterEventTopic"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Directory ID that will publish status messages to the Amazon SNS
     * topic.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The Directory ID that will publish status messages to the Amazon SNS
     * topic.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The Directory ID that will publish status messages to the Amazon SNS
     * topic.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The Directory ID that will publish status messages to the Amazon SNS
     * topic.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The Directory ID that will publish status messages to the Amazon SNS
     * topic.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The Directory ID that will publish status messages to the Amazon SNS
     * topic.</p>
     */
    inline RegisterEventTopicRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The Directory ID that will publish status messages to the Amazon SNS
     * topic.</p>
     */
    inline RegisterEventTopicRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The Directory ID that will publish status messages to the Amazon SNS
     * topic.</p>
     */
    inline RegisterEventTopicRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The Amazon SNS topic name to which the directory will publish status
     * messages. This Amazon SNS topic must be in the same region as the specified
     * Directory ID.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The Amazon SNS topic name to which the directory will publish status
     * messages. This Amazon SNS topic must be in the same region as the specified
     * Directory ID.</p>
     */
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }

    /**
     * <p>The Amazon SNS topic name to which the directory will publish status
     * messages. This Amazon SNS topic must be in the same region as the specified
     * Directory ID.</p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The Amazon SNS topic name to which the directory will publish status
     * messages. This Amazon SNS topic must be in the same region as the specified
     * Directory ID.</p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }

    /**
     * <p>The Amazon SNS topic name to which the directory will publish status
     * messages. This Amazon SNS topic must be in the same region as the specified
     * Directory ID.</p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The Amazon SNS topic name to which the directory will publish status
     * messages. This Amazon SNS topic must be in the same region as the specified
     * Directory ID.</p>
     */
    inline RegisterEventTopicRequest& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The Amazon SNS topic name to which the directory will publish status
     * messages. This Amazon SNS topic must be in the same region as the specified
     * Directory ID.</p>
     */
    inline RegisterEventTopicRequest& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}

    /**
     * <p>The Amazon SNS topic name to which the directory will publish status
     * messages. This Amazon SNS topic must be in the same region as the specified
     * Directory ID.</p>
     */
    inline RegisterEventTopicRequest& WithTopicName(const char* value) { SetTopicName(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
