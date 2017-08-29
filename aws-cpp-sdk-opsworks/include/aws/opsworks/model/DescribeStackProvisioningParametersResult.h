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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeStackProvisioningParameters</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStackProvisioningParametersResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeStackProvisioningParametersResult
  {
  public:
    DescribeStackProvisioningParametersResult();
    DescribeStackProvisioningParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeStackProvisioningParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The AWS OpsWorks Stacks agent installer's URL.</p>
     */
    inline const Aws::String& GetAgentInstallerUrl() const{ return m_agentInstallerUrl; }

    /**
     * <p>The AWS OpsWorks Stacks agent installer's URL.</p>
     */
    inline void SetAgentInstallerUrl(const Aws::String& value) { m_agentInstallerUrl = value; }

    /**
     * <p>The AWS OpsWorks Stacks agent installer's URL.</p>
     */
    inline void SetAgentInstallerUrl(Aws::String&& value) { m_agentInstallerUrl = std::move(value); }

    /**
     * <p>The AWS OpsWorks Stacks agent installer's URL.</p>
     */
    inline void SetAgentInstallerUrl(const char* value) { m_agentInstallerUrl.assign(value); }

    /**
     * <p>The AWS OpsWorks Stacks agent installer's URL.</p>
     */
    inline DescribeStackProvisioningParametersResult& WithAgentInstallerUrl(const Aws::String& value) { SetAgentInstallerUrl(value); return *this;}

    /**
     * <p>The AWS OpsWorks Stacks agent installer's URL.</p>
     */
    inline DescribeStackProvisioningParametersResult& WithAgentInstallerUrl(Aws::String&& value) { SetAgentInstallerUrl(std::move(value)); return *this;}

    /**
     * <p>The AWS OpsWorks Stacks agent installer's URL.</p>
     */
    inline DescribeStackProvisioningParametersResult& WithAgentInstallerUrl(const char* value) { SetAgentInstallerUrl(value); return *this;}


    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parameters = value; }

    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parameters = std::move(value); }

    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline DescribeStackProvisioningParametersResult& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline DescribeStackProvisioningParametersResult& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline DescribeStackProvisioningParametersResult& AddParameters(const Aws::String& key, const Aws::String& value) { m_parameters.emplace(key, value); return *this; }

    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline DescribeStackProvisioningParametersResult& AddParameters(Aws::String&& key, const Aws::String& value) { m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline DescribeStackProvisioningParametersResult& AddParameters(const Aws::String& key, Aws::String&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline DescribeStackProvisioningParametersResult& AddParameters(Aws::String&& key, Aws::String&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline DescribeStackProvisioningParametersResult& AddParameters(const char* key, Aws::String&& value) { m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline DescribeStackProvisioningParametersResult& AddParameters(Aws::String&& key, const char* value) { m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>An embedded object that contains the provisioning parameters.</p>
     */
    inline DescribeStackProvisioningParametersResult& AddParameters(const char* key, const char* value) { m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_agentInstallerUrl;

    Aws::Map<Aws::String, Aws::String> m_parameters;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
