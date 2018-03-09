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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ThingIndexingConfiguration.h>
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
  class AWS_IOT_API GetIndexingConfigurationResult
  {
  public:
    GetIndexingConfigurationResult();
    GetIndexingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetIndexingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    ThingIndexingConfiguration m_thingIndexingConfiguration;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
