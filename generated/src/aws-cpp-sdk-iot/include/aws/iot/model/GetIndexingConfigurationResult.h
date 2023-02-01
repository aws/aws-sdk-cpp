/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ThingIndexingConfiguration.h>
#include <aws/iot/model/ThingGroupIndexingConfiguration.h>
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


    /**
     * <p>Thing indexing configuration.</p>
     */
    inline const ThingIndexingConfiguration& GetThingIndexingConfiguration() const{ return m_thingIndexingConfiguration; }

    /**
     * <p>Thing indexing configuration.</p>
     */
    inline void SetThingIndexingConfiguration(const ThingIndexingConfiguration& value) { m_thingIndexingConfiguration = value; }

    /**
     * <p>Thing indexing configuration.</p>
     */
    inline void SetThingIndexingConfiguration(ThingIndexingConfiguration&& value) { m_thingIndexingConfiguration = std::move(value); }

    /**
     * <p>Thing indexing configuration.</p>
     */
    inline GetIndexingConfigurationResult& WithThingIndexingConfiguration(const ThingIndexingConfiguration& value) { SetThingIndexingConfiguration(value); return *this;}

    /**
     * <p>Thing indexing configuration.</p>
     */
    inline GetIndexingConfigurationResult& WithThingIndexingConfiguration(ThingIndexingConfiguration&& value) { SetThingIndexingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The index configuration.</p>
     */
    inline const ThingGroupIndexingConfiguration& GetThingGroupIndexingConfiguration() const{ return m_thingGroupIndexingConfiguration; }

    /**
     * <p>The index configuration.</p>
     */
    inline void SetThingGroupIndexingConfiguration(const ThingGroupIndexingConfiguration& value) { m_thingGroupIndexingConfiguration = value; }

    /**
     * <p>The index configuration.</p>
     */
    inline void SetThingGroupIndexingConfiguration(ThingGroupIndexingConfiguration&& value) { m_thingGroupIndexingConfiguration = std::move(value); }

    /**
     * <p>The index configuration.</p>
     */
    inline GetIndexingConfigurationResult& WithThingGroupIndexingConfiguration(const ThingGroupIndexingConfiguration& value) { SetThingGroupIndexingConfiguration(value); return *this;}

    /**
     * <p>The index configuration.</p>
     */
    inline GetIndexingConfigurationResult& WithThingGroupIndexingConfiguration(ThingGroupIndexingConfiguration&& value) { SetThingGroupIndexingConfiguration(std::move(value)); return *this;}

  private:

    ThingIndexingConfiguration m_thingIndexingConfiguration;

    ThingGroupIndexingConfiguration m_thingGroupIndexingConfiguration;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
