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
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class AWS_EMR_API CreateSecurityConfigurationRequest : public EMRRequest
  {
  public:
    CreateSecurityConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecurityConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the security configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the security configuration.</p>
     */
    inline CreateSecurityConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the security configuration.</p>
     */
    inline CreateSecurityConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the security configuration.</p>
     */
    inline CreateSecurityConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The security configuration details in JSON format. For JSON parameters and
     * examples, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-security-configurations.html">Use
     * Security Configurations to Set Up Cluster Security</a> in the <i>Amazon EMR
     * Management Guide</i>.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }

    /**
     * <p>The security configuration details in JSON format. For JSON parameters and
     * examples, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-security-configurations.html">Use
     * Security Configurations to Set Up Cluster Security</a> in the <i>Amazon EMR
     * Management Guide</i>.</p>
     */
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }

    /**
     * <p>The security configuration details in JSON format. For JSON parameters and
     * examples, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-security-configurations.html">Use
     * Security Configurations to Set Up Cluster Security</a> in the <i>Amazon EMR
     * Management Guide</i>.</p>
     */
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }

    /**
     * <p>The security configuration details in JSON format. For JSON parameters and
     * examples, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-security-configurations.html">Use
     * Security Configurations to Set Up Cluster Security</a> in the <i>Amazon EMR
     * Management Guide</i>.</p>
     */
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }

    /**
     * <p>The security configuration details in JSON format. For JSON parameters and
     * examples, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-security-configurations.html">Use
     * Security Configurations to Set Up Cluster Security</a> in the <i>Amazon EMR
     * Management Guide</i>.</p>
     */
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }

    /**
     * <p>The security configuration details in JSON format. For JSON parameters and
     * examples, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-security-configurations.html">Use
     * Security Configurations to Set Up Cluster Security</a> in the <i>Amazon EMR
     * Management Guide</i>.</p>
     */
    inline CreateSecurityConfigurationRequest& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}

    /**
     * <p>The security configuration details in JSON format. For JSON parameters and
     * examples, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-security-configurations.html">Use
     * Security Configurations to Set Up Cluster Security</a> in the <i>Amazon EMR
     * Management Guide</i>.</p>
     */
    inline CreateSecurityConfigurationRequest& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}

    /**
     * <p>The security configuration details in JSON format. For JSON parameters and
     * examples, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-security-configurations.html">Use
     * Security Configurations to Set Up Cluster Security</a> in the <i>Amazon EMR
     * Management Guide</i>.</p>
     */
    inline CreateSecurityConfigurationRequest& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
