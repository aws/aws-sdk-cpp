/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/NotificationConfiguration.h>
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
namespace CodeGuruProfiler
{
namespace Model
{
  /**
   * <p>The structure representing the
   * GetNotificationConfigurationResponse.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetNotificationConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class GetNotificationConfigurationResult
  {
  public:
    AWS_CODEGURUPROFILER_API GetNotificationConfigurationResult();
    AWS_CODEGURUPROFILER_API GetNotificationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API GetNotificationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current notification configuration for this profiling group.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }

    /**
     * <p>The current notification configuration for this profiling group.</p>
     */
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfiguration = value; }

    /**
     * <p>The current notification configuration for this profiling group.</p>
     */
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfiguration = std::move(value); }

    /**
     * <p>The current notification configuration for this profiling group.</p>
     */
    inline GetNotificationConfigurationResult& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

    /**
     * <p>The current notification configuration for this profiling group.</p>
     */
    inline GetNotificationConfigurationResult& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetNotificationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetNotificationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetNotificationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    NotificationConfiguration m_notificationConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
