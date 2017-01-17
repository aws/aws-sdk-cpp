﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ApplicationVersionLifecycleConfig.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>The resource lifecycle configuration for an application. Defines lifecycle
   * settings for resources that belong to the application, and the service role that
   * Elastic Beanstalk assumes in order to apply lifecycle settings. The version
   * lifecycle configuration defines lifecycle settings for application
   * versions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationResourceLifecycleConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API ApplicationResourceLifecycleConfig
  {
  public:
    ApplicationResourceLifecycleConfig();
    ApplicationResourceLifecycleConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    ApplicationResourceLifecycleConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p>
     */
    inline ApplicationResourceLifecycleConfig& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p>
     */
    inline ApplicationResourceLifecycleConfig& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p>
     */
    inline ApplicationResourceLifecycleConfig& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

    /**
     * <p>The application version lifecycle configuration.</p>
     */
    inline const ApplicationVersionLifecycleConfig& GetVersionLifecycleConfig() const{ return m_versionLifecycleConfig; }

    /**
     * <p>The application version lifecycle configuration.</p>
     */
    inline void SetVersionLifecycleConfig(const ApplicationVersionLifecycleConfig& value) { m_versionLifecycleConfigHasBeenSet = true; m_versionLifecycleConfig = value; }

    /**
     * <p>The application version lifecycle configuration.</p>
     */
    inline void SetVersionLifecycleConfig(ApplicationVersionLifecycleConfig&& value) { m_versionLifecycleConfigHasBeenSet = true; m_versionLifecycleConfig = value; }

    /**
     * <p>The application version lifecycle configuration.</p>
     */
    inline ApplicationResourceLifecycleConfig& WithVersionLifecycleConfig(const ApplicationVersionLifecycleConfig& value) { SetVersionLifecycleConfig(value); return *this;}

    /**
     * <p>The application version lifecycle configuration.</p>
     */
    inline ApplicationResourceLifecycleConfig& WithVersionLifecycleConfig(ApplicationVersionLifecycleConfig&& value) { SetVersionLifecycleConfig(value); return *this;}

  private:
    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;
    ApplicationVersionLifecycleConfig m_versionLifecycleConfig;
    bool m_versionLifecycleConfigHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
