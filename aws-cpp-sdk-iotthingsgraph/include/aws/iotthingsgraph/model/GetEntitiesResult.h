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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotthingsgraph/model/EntityDescription.h>
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
namespace IoTThingsGraph
{
namespace Model
{
  class AWS_IOTTHINGSGRAPH_API GetEntitiesResult
  {
  public:
    GetEntitiesResult();
    GetEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of descriptions for the specified entities.</p>
     */
    inline const Aws::Vector<EntityDescription>& GetDescriptions() const{ return m_descriptions; }

    /**
     * <p>An array of descriptions for the specified entities.</p>
     */
    inline void SetDescriptions(const Aws::Vector<EntityDescription>& value) { m_descriptions = value; }

    /**
     * <p>An array of descriptions for the specified entities.</p>
     */
    inline void SetDescriptions(Aws::Vector<EntityDescription>&& value) { m_descriptions = std::move(value); }

    /**
     * <p>An array of descriptions for the specified entities.</p>
     */
    inline GetEntitiesResult& WithDescriptions(const Aws::Vector<EntityDescription>& value) { SetDescriptions(value); return *this;}

    /**
     * <p>An array of descriptions for the specified entities.</p>
     */
    inline GetEntitiesResult& WithDescriptions(Aws::Vector<EntityDescription>&& value) { SetDescriptions(std::move(value)); return *this;}

    /**
     * <p>An array of descriptions for the specified entities.</p>
     */
    inline GetEntitiesResult& AddDescriptions(const EntityDescription& value) { m_descriptions.push_back(value); return *this; }

    /**
     * <p>An array of descriptions for the specified entities.</p>
     */
    inline GetEntitiesResult& AddDescriptions(EntityDescription&& value) { m_descriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EntityDescription> m_descriptions;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
