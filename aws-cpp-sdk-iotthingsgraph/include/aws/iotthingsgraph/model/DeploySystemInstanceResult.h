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
#include <aws/iotthingsgraph/model/SystemInstanceSummary.h>
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
namespace IoTThingsGraph
{
namespace Model
{
  class AWS_IOTTHINGSGRAPH_API DeploySystemInstanceResult
  {
  public:
    DeploySystemInstanceResult();
    DeploySystemInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeploySystemInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains summary information about a system instance that was
     * deployed. </p>
     */
    inline const SystemInstanceSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>An object that contains summary information about a system instance that was
     * deployed. </p>
     */
    inline void SetSummary(const SystemInstanceSummary& value) { m_summary = value; }

    /**
     * <p>An object that contains summary information about a system instance that was
     * deployed. </p>
     */
    inline void SetSummary(SystemInstanceSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>An object that contains summary information about a system instance that was
     * deployed. </p>
     */
    inline DeploySystemInstanceResult& WithSummary(const SystemInstanceSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>An object that contains summary information about a system instance that was
     * deployed. </p>
     */
    inline DeploySystemInstanceResult& WithSummary(SystemInstanceSummary&& value) { SetSummary(std::move(value)); return *this;}


    /**
     * <p>The ID of the Greengrass deployment used to deploy the system instance.</p>
     */
    inline const Aws::String& GetGreengrassDeploymentId() const{ return m_greengrassDeploymentId; }

    /**
     * <p>The ID of the Greengrass deployment used to deploy the system instance.</p>
     */
    inline void SetGreengrassDeploymentId(const Aws::String& value) { m_greengrassDeploymentId = value; }

    /**
     * <p>The ID of the Greengrass deployment used to deploy the system instance.</p>
     */
    inline void SetGreengrassDeploymentId(Aws::String&& value) { m_greengrassDeploymentId = std::move(value); }

    /**
     * <p>The ID of the Greengrass deployment used to deploy the system instance.</p>
     */
    inline void SetGreengrassDeploymentId(const char* value) { m_greengrassDeploymentId.assign(value); }

    /**
     * <p>The ID of the Greengrass deployment used to deploy the system instance.</p>
     */
    inline DeploySystemInstanceResult& WithGreengrassDeploymentId(const Aws::String& value) { SetGreengrassDeploymentId(value); return *this;}

    /**
     * <p>The ID of the Greengrass deployment used to deploy the system instance.</p>
     */
    inline DeploySystemInstanceResult& WithGreengrassDeploymentId(Aws::String&& value) { SetGreengrassDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Greengrass deployment used to deploy the system instance.</p>
     */
    inline DeploySystemInstanceResult& WithGreengrassDeploymentId(const char* value) { SetGreengrassDeploymentId(value); return *this;}

  private:

    SystemInstanceSummary m_summary;

    Aws::String m_greengrassDeploymentId;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
