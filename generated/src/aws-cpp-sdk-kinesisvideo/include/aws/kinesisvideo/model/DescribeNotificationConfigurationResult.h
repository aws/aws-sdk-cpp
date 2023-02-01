/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/NotificationConfiguration.h>
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
namespace KinesisVideo
{
namespace Model
{
  class DescribeNotificationConfigurationResult
  {
  public:
    AWS_KINESISVIDEO_API DescribeNotificationConfigurationResult();
    AWS_KINESISVIDEO_API DescribeNotificationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API DescribeNotificationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The structure that contains the information required for notifications. If
     * the structure is null, the configuration will be deleted from the stream.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }

    /**
     * <p>The structure that contains the information required for notifications. If
     * the structure is null, the configuration will be deleted from the stream.</p>
     */
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfiguration = value; }

    /**
     * <p>The structure that contains the information required for notifications. If
     * the structure is null, the configuration will be deleted from the stream.</p>
     */
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfiguration = std::move(value); }

    /**
     * <p>The structure that contains the information required for notifications. If
     * the structure is null, the configuration will be deleted from the stream.</p>
     */
    inline DescribeNotificationConfigurationResult& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

    /**
     * <p>The structure that contains the information required for notifications. If
     * the structure is null, the configuration will be deleted from the stream.</p>
     */
    inline DescribeNotificationConfigurationResult& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}

  private:

    NotificationConfiguration m_notificationConfiguration;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
