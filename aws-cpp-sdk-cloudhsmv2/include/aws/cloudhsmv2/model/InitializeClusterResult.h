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
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/ClusterState.h>
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
namespace CloudHSMV2
{
namespace Model
{
  class AWS_CLOUDHSMV2_API InitializeClusterResult
  {
  public:
    InitializeClusterResult();
    InitializeClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    InitializeClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The cluster's state.</p>
     */
    inline const ClusterState& GetState() const{ return m_state; }

    /**
     * <p>The cluster's state.</p>
     */
    inline void SetState(const ClusterState& value) { m_state = value; }

    /**
     * <p>The cluster's state.</p>
     */
    inline void SetState(ClusterState&& value) { m_state = std::move(value); }

    /**
     * <p>The cluster's state.</p>
     */
    inline InitializeClusterResult& WithState(const ClusterState& value) { SetState(value); return *this;}

    /**
     * <p>The cluster's state.</p>
     */
    inline InitializeClusterResult& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A description of the cluster's state.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline void SetStateMessage(const Aws::String& value) { m_stateMessage = value; }

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline void SetStateMessage(Aws::String&& value) { m_stateMessage = std::move(value); }

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline void SetStateMessage(const char* value) { m_stateMessage.assign(value); }

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline InitializeClusterResult& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline InitializeClusterResult& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the cluster's state.</p>
     */
    inline InitializeClusterResult& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}

  private:

    ClusterState m_state;

    Aws::String m_stateMessage;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
