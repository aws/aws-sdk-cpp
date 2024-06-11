/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/EventType.h>
#include <aws/iot/model/Configuration.h>
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
namespace IoT
{
namespace Model
{
  class DescribeEventConfigurationsResult
  {
  public:
    AWS_IOT_API DescribeEventConfigurationsResult();
    AWS_IOT_API DescribeEventConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeEventConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The event configurations.</p>
     */
    inline const Aws::Map<EventType, Configuration>& GetEventConfigurations() const{ return m_eventConfigurations; }
    inline void SetEventConfigurations(const Aws::Map<EventType, Configuration>& value) { m_eventConfigurations = value; }
    inline void SetEventConfigurations(Aws::Map<EventType, Configuration>&& value) { m_eventConfigurations = std::move(value); }
    inline DescribeEventConfigurationsResult& WithEventConfigurations(const Aws::Map<EventType, Configuration>& value) { SetEventConfigurations(value); return *this;}
    inline DescribeEventConfigurationsResult& WithEventConfigurations(Aws::Map<EventType, Configuration>&& value) { SetEventConfigurations(std::move(value)); return *this;}
    inline DescribeEventConfigurationsResult& AddEventConfigurations(const EventType& key, const Configuration& value) { m_eventConfigurations.emplace(key, value); return *this; }
    inline DescribeEventConfigurationsResult& AddEventConfigurations(EventType&& key, const Configuration& value) { m_eventConfigurations.emplace(std::move(key), value); return *this; }
    inline DescribeEventConfigurationsResult& AddEventConfigurations(const EventType& key, Configuration&& value) { m_eventConfigurations.emplace(key, std::move(value)); return *this; }
    inline DescribeEventConfigurationsResult& AddEventConfigurations(EventType&& key, Configuration&& value) { m_eventConfigurations.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation date of the event configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline DescribeEventConfigurationsResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DescribeEventConfigurationsResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the event configurations were last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline DescribeEventConfigurationsResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline DescribeEventConfigurationsResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEventConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEventConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEventConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<EventType, Configuration> m_eventConfigurations;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
