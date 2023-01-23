/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/NotificationConfiguration.h>
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
namespace CodeGuruProfiler
{
namespace Model
{
  /**
   * <p>The structure representing the
   * RemoveNotificationChannelResponse.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/RemoveNotificationChannelResponse">AWS
   * API Reference</a></p>
   */
  class RemoveNotificationChannelResult
  {
  public:
    AWS_CODEGURUPROFILER_API RemoveNotificationChannelResult();
    AWS_CODEGURUPROFILER_API RemoveNotificationChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API RemoveNotificationChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new notification configuration for this profiling group.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }

    /**
     * <p>The new notification configuration for this profiling group.</p>
     */
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfiguration = value; }

    /**
     * <p>The new notification configuration for this profiling group.</p>
     */
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfiguration = std::move(value); }

    /**
     * <p>The new notification configuration for this profiling group.</p>
     */
    inline RemoveNotificationChannelResult& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

    /**
     * <p>The new notification configuration for this profiling group.</p>
     */
    inline RemoveNotificationChannelResult& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}

  private:

    NotificationConfiguration m_notificationConfiguration;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
