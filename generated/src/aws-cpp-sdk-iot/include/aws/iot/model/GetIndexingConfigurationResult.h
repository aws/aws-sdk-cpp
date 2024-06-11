/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ThingIndexingConfiguration.h>
#include <aws/iot/model/ThingGroupIndexingConfiguration.h>
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
namespace IoT
{
namespace Model
{
  class GetIndexingConfigurationResult
  {
  public:
    AWS_IOT_API GetIndexingConfigurationResult();
    AWS_IOT_API GetIndexingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetIndexingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Thing indexing configuration.</p>
     */
    inline const ThingIndexingConfiguration& GetThingIndexingConfiguration() const{ return m_thingIndexingConfiguration; }
    inline void SetThingIndexingConfiguration(const ThingIndexingConfiguration& value) { m_thingIndexingConfiguration = value; }
    inline void SetThingIndexingConfiguration(ThingIndexingConfiguration&& value) { m_thingIndexingConfiguration = std::move(value); }
    inline GetIndexingConfigurationResult& WithThingIndexingConfiguration(const ThingIndexingConfiguration& value) { SetThingIndexingConfiguration(value); return *this;}
    inline GetIndexingConfigurationResult& WithThingIndexingConfiguration(ThingIndexingConfiguration&& value) { SetThingIndexingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index configuration.</p>
     */
    inline const ThingGroupIndexingConfiguration& GetThingGroupIndexingConfiguration() const{ return m_thingGroupIndexingConfiguration; }
    inline void SetThingGroupIndexingConfiguration(const ThingGroupIndexingConfiguration& value) { m_thingGroupIndexingConfiguration = value; }
    inline void SetThingGroupIndexingConfiguration(ThingGroupIndexingConfiguration&& value) { m_thingGroupIndexingConfiguration = std::move(value); }
    inline GetIndexingConfigurationResult& WithThingGroupIndexingConfiguration(const ThingGroupIndexingConfiguration& value) { SetThingGroupIndexingConfiguration(value); return *this;}
    inline GetIndexingConfigurationResult& WithThingGroupIndexingConfiguration(ThingGroupIndexingConfiguration&& value) { SetThingGroupIndexingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIndexingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIndexingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIndexingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ThingIndexingConfiguration m_thingIndexingConfiguration;

    ThingGroupIndexingConfiguration m_thingGroupIndexingConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
