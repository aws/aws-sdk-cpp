/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/ConnectorEntity.h>
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
namespace Appflow
{
namespace Model
{
  class AWS_APPFLOW_API ListConnectorEntitiesResult
  {
  public:
    ListConnectorEntitiesResult();
    ListConnectorEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListConnectorEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ConnectorEntity>>& GetConnectorEntityMap() const{ return m_connectorEntityMap; }

    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline void SetConnectorEntityMap(const Aws::Map<Aws::String, Aws::Vector<ConnectorEntity>>& value) { m_connectorEntityMap = value; }

    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline void SetConnectorEntityMap(Aws::Map<Aws::String, Aws::Vector<ConnectorEntity>>&& value) { m_connectorEntityMap = std::move(value); }

    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline ListConnectorEntitiesResult& WithConnectorEntityMap(const Aws::Map<Aws::String, Aws::Vector<ConnectorEntity>>& value) { SetConnectorEntityMap(value); return *this;}

    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline ListConnectorEntitiesResult& WithConnectorEntityMap(Aws::Map<Aws::String, Aws::Vector<ConnectorEntity>>&& value) { SetConnectorEntityMap(std::move(value)); return *this;}

    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline ListConnectorEntitiesResult& AddConnectorEntityMap(const Aws::String& key, const Aws::Vector<ConnectorEntity>& value) { m_connectorEntityMap.emplace(key, value); return *this; }

    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline ListConnectorEntitiesResult& AddConnectorEntityMap(Aws::String&& key, const Aws::Vector<ConnectorEntity>& value) { m_connectorEntityMap.emplace(std::move(key), value); return *this; }

    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline ListConnectorEntitiesResult& AddConnectorEntityMap(const Aws::String& key, Aws::Vector<ConnectorEntity>&& value) { m_connectorEntityMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline ListConnectorEntitiesResult& AddConnectorEntityMap(Aws::String&& key, Aws::Vector<ConnectorEntity>&& value) { m_connectorEntityMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline ListConnectorEntitiesResult& AddConnectorEntityMap(const char* key, Aws::Vector<ConnectorEntity>&& value) { m_connectorEntityMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The response of <code>ListConnectorEntities</code> lists entities grouped by
     * category. This map's key represents the group name, and its value contains the
     * list of entities belonging to that group. </p>
     */
    inline ListConnectorEntitiesResult& AddConnectorEntityMap(const char* key, const Aws::Vector<ConnectorEntity>& value) { m_connectorEntityMap.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Vector<ConnectorEntity>> m_connectorEntityMap;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
