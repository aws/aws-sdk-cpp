/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{
  class AddInstanceFleetResult
  {
  public:
    AWS_EMR_API AddInstanceFleetResult();
    AWS_EMR_API AddInstanceFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API AddInstanceFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterId = value; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterId = std::move(value); }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterId.assign(value); }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline AddInstanceFleetResult& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline AddInstanceFleetResult& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline AddInstanceFleetResult& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline const Aws::String& GetInstanceFleetId() const{ return m_instanceFleetId; }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline void SetInstanceFleetId(const Aws::String& value) { m_instanceFleetId = value; }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline void SetInstanceFleetId(Aws::String&& value) { m_instanceFleetId = std::move(value); }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline void SetInstanceFleetId(const char* value) { m_instanceFleetId.assign(value); }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline AddInstanceFleetResult& WithInstanceFleetId(const Aws::String& value) { SetInstanceFleetId(value); return *this;}

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline AddInstanceFleetResult& WithInstanceFleetId(Aws::String&& value) { SetInstanceFleetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline AddInstanceFleetResult& WithInstanceFleetId(const char* value) { SetInstanceFleetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline AddInstanceFleetResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline AddInstanceFleetResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline AddInstanceFleetResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}

  private:

    Aws::String m_clusterId;

    Aws::String m_instanceFleetId;

    Aws::String m_clusterArn;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
