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
  class AWS_EMR_API AddInstanceFleetResult
  {
  public:
    AddInstanceFleetResult();
    AddInstanceFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddInstanceFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::String m_clusterId;

    Aws::String m_instanceFleetId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
