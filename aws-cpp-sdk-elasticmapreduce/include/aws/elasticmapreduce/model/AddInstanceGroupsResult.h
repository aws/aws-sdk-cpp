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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  /**
   * <p>Output from an AddInstanceGroups call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddInstanceGroupsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API AddInstanceGroupsResult
  {
  public:
    AddInstanceGroupsResult();
    AddInstanceGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddInstanceGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline const Aws::String& GetJobFlowId() const{ return m_jobFlowId; }

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline void SetJobFlowId(const Aws::String& value) { m_jobFlowId = value; }

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline void SetJobFlowId(Aws::String&& value) { m_jobFlowId = std::move(value); }

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline void SetJobFlowId(const char* value) { m_jobFlowId.assign(value); }

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline AddInstanceGroupsResult& WithJobFlowId(const Aws::String& value) { SetJobFlowId(value); return *this;}

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline AddInstanceGroupsResult& WithJobFlowId(Aws::String&& value) { SetJobFlowId(std::move(value)); return *this;}

    /**
     * <p>The job flow ID in which the instance groups are added.</p>
     */
    inline AddInstanceGroupsResult& WithJobFlowId(const char* value) { SetJobFlowId(value); return *this;}


    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceGroupIds() const{ return m_instanceGroupIds; }

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline void SetInstanceGroupIds(const Aws::Vector<Aws::String>& value) { m_instanceGroupIds = value; }

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline void SetInstanceGroupIds(Aws::Vector<Aws::String>&& value) { m_instanceGroupIds = std::move(value); }

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline AddInstanceGroupsResult& WithInstanceGroupIds(const Aws::Vector<Aws::String>& value) { SetInstanceGroupIds(value); return *this;}

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline AddInstanceGroupsResult& WithInstanceGroupIds(Aws::Vector<Aws::String>&& value) { SetInstanceGroupIds(std::move(value)); return *this;}

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline AddInstanceGroupsResult& AddInstanceGroupIds(const Aws::String& value) { m_instanceGroupIds.push_back(value); return *this; }

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline AddInstanceGroupsResult& AddInstanceGroupIds(Aws::String&& value) { m_instanceGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Instance group IDs of the newly created instance groups.</p>
     */
    inline AddInstanceGroupsResult& AddInstanceGroupIds(const char* value) { m_instanceGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_jobFlowId;

    Aws::Vector<Aws::String> m_instanceGroupIds;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
