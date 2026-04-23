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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ApplicationVersionLifecycleConfig.h>
#include <utility>

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
     * assume.</p> <p>The <code>ServiceRole</code> property is required the first time
     * that you provide a <code>VersionLifecycleConfig</code> for the application in
     * one of the supporting calls (<code>CreateApplication</code> or
     * <code>UpdateApplicationResourceLifecycle</code>). After you provide it once, in
     * either one of the calls, Elastic Beanstalk persists the Service Role with the
     * application, and you don't need to specify it again in subsequent
     * <code>UpdateApplicationResourceLifecycle</code> calls. You can, however, specify
     * it in subsequent calls to change the Service Role to another value.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p> <p>The <code>ServiceRole</code> property is required the first time
     * that you provide a <code>VersionLifecycleConfig</code> for the application in
     * one of the supporting calls (<code>CreateApplication</code> or
     * <code>UpdateApplicationResourceLifecycle</code>). After you provide it once, in
     * either one of the calls, Elastic Beanstalk persists the Service Role with the
     * application, and you don't need to specify it again in subsequent
     * <code>UpdateApplicationResourceLifecycle</code> calls. You can, however, specify
     * it in subsequent calls to change the Service Role to another value.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p> <p>The <code>ServiceRole</code> property is required the first time
     * that you provide a <code>VersionLifecycleConfig</code> for the application in
     * one of the supporting calls (<code>CreateApplication</code> or
     * <code>UpdateApplicationResourceLifecycle</code>). After you provide it once, in
     * either one of the calls, Elastic Beanstalk persists the Service Role with the
     * application, and you don't need to specify it again in subsequent
     * <code>UpdateApplicationResourceLifecycle</code> calls. You can, however, specify
     * it in subsequent calls to change the Service Role to another value.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p> <p>The <code>ServiceRole</code> property is required the first time
     * that you provide a <code>VersionLifecycleConfig</code> for the application in
     * one of the supporting calls (<code>CreateApplication</code> or
     * <code>UpdateApplicationResourceLifecycle</code>). After you provide it once, in
     * either one of the calls, Elastic Beanstalk persists the Service Role with the
     * application, and you don't need to specify it again in subsequent
     * <code>UpdateApplicationResourceLifecycle</code> calls. You can, however, specify
     * it in subsequent calls to change the Service Role to another value.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p> <p>The <code>ServiceRole</code> property is required the first time
     * that you provide a <code>VersionLifecycleConfig</code> for the application in
     * one of the supporting calls (<code>CreateApplication</code> or
     * <code>UpdateApplicationResourceLifecycle</code>). After you provide it once, in
     * either one of the calls, Elastic Beanstalk persists the Service Role with the
     * application, and you don't need to specify it again in subsequent
     * <code>UpdateApplicationResourceLifecycle</code> calls. You can, however, specify
     * it in subsequent calls to change the Service Role to another value.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p> <p>The <code>ServiceRole</code> property is required the first time
     * that you provide a <code>VersionLifecycleConfig</code> for the application in
     * one of the supporting calls (<code>CreateApplication</code> or
     * <code>UpdateApplicationResourceLifecycle</code>). After you provide it once, in
     * either one of the calls, Elastic Beanstalk persists the Service Role with the
     * application, and you don't need to specify it again in subsequent
     * <code>UpdateApplicationResourceLifecycle</code> calls. You can, however, specify
     * it in subsequent calls to change the Service Role to another value.</p>
     */
    inline ApplicationResourceLifecycleConfig& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p> <p>The <code>ServiceRole</code> property is required the first time
     * that you provide a <code>VersionLifecycleConfig</code> for the application in
     * one of the supporting calls (<code>CreateApplication</code> or
     * <code>UpdateApplicationResourceLifecycle</code>). After you provide it once, in
     * either one of the calls, Elastic Beanstalk persists the Service Role with the
     * application, and you don't need to specify it again in subsequent
     * <code>UpdateApplicationResourceLifecycle</code> calls. You can, however, specify
     * it in subsequent calls to change the Service Role to another value.</p>
     */
    inline ApplicationResourceLifecycleConfig& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM service role that Elastic Beanstalk has permission to
     * assume.</p> <p>The <code>ServiceRole</code> property is required the first time
     * that you provide a <code>VersionLifecycleConfig</code> for the application in
     * one of the supporting calls (<code>CreateApplication</code> or
     * <code>UpdateApplicationResourceLifecycle</code>). After you provide it once, in
     * either one of the calls, Elastic Beanstalk persists the Service Role with the
     * application, and you don't need to specify it again in subsequent
     * <code>UpdateApplicationResourceLifecycle</code> calls. You can, however, specify
     * it in subsequent calls to change the Service Role to another value.</p>
     */
    inline ApplicationResourceLifecycleConfig& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>The application version lifecycle configuration.</p>
     */
    inline const ApplicationVersionLifecycleConfig& GetVersionLifecycleConfig() const{ return m_versionLifecycleConfig; }

    /**
     * <p>The application version lifecycle configuration.</p>
     */
    inline bool VersionLifecycleConfigHasBeenSet() const { return m_versionLifecycleConfigHasBeenSet; }

    /**
     * <p>The application version lifecycle configuration.</p>
     */
    inline void SetVersionLifecycleConfig(const ApplicationVersionLifecycleConfig& value) { m_versionLifecycleConfigHasBeenSet = true; m_versionLifecycleConfig = value; }

    /**
     * <p>The application version lifecycle configuration.</p>
     */
    inline void SetVersionLifecycleConfig(ApplicationVersionLifecycleConfig&& value) { m_versionLifecycleConfigHasBeenSet = true; m_versionLifecycleConfig = std::move(value); }

    /**
     * <p>The application version lifecycle configuration.</p>
     */
    inline ApplicationResourceLifecycleConfig& WithVersionLifecycleConfig(const ApplicationVersionLifecycleConfig& value) { SetVersionLifecycleConfig(value); return *this;}

    /**
     * <p>The application version lifecycle configuration.</p>
     */
    inline ApplicationResourceLifecycleConfig& WithVersionLifecycleConfig(ApplicationVersionLifecycleConfig&& value) { SetVersionLifecycleConfig(std::move(value)); return *this;}

  private:

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    ApplicationVersionLifecycleConfig m_versionLifecycleConfig;
    bool m_versionLifecycleConfigHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
