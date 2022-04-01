/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
