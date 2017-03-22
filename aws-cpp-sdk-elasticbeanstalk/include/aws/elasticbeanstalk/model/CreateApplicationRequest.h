/*
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
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ApplicationResourceLifecycleConfig.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to create an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateApplicationMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API CreateApplicationRequest : public ElasticBeanstalkRequest
  {
  public:
    CreateApplicationRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The name of the application.</p> <p>Constraint: This name must be unique
     * within your account. If the specified name already exists, the action returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application.</p> <p>Constraint: This name must be unique
     * within your account. If the specified name already exists, the action returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application.</p> <p>Constraint: This name must be unique
     * within your account. If the specified name already exists, the action returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application.</p> <p>Constraint: This name must be unique
     * within your account. If the specified name already exists, the action returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application.</p> <p>Constraint: This name must be unique
     * within your account. If the specified name already exists, the action returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application.</p> <p>Constraint: This name must be unique
     * within your account. If the specified name already exists, the action returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application.</p> <p>Constraint: This name must be unique
     * within your account. If the specified name already exists, the action returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>Describes the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Describes the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Describes the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Describes the application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Describes the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Specify an application resource lifecycle configuration to prevent your
     * application from accumulating too many versions.</p>
     */
    inline const ApplicationResourceLifecycleConfig& GetResourceLifecycleConfig() const{ return m_resourceLifecycleConfig; }

    /**
     * <p>Specify an application resource lifecycle configuration to prevent your
     * application from accumulating too many versions.</p>
     */
    inline void SetResourceLifecycleConfig(const ApplicationResourceLifecycleConfig& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = value; }

    /**
     * <p>Specify an application resource lifecycle configuration to prevent your
     * application from accumulating too many versions.</p>
     */
    inline void SetResourceLifecycleConfig(ApplicationResourceLifecycleConfig&& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = value; }

    /**
     * <p>Specify an application resource lifecycle configuration to prevent your
     * application from accumulating too many versions.</p>
     */
    inline CreateApplicationRequest& WithResourceLifecycleConfig(const ApplicationResourceLifecycleConfig& value) { SetResourceLifecycleConfig(value); return *this;}

    /**
     * <p>Specify an application resource lifecycle configuration to prevent your
     * application from accumulating too many versions.</p>
     */
    inline CreateApplicationRequest& WithResourceLifecycleConfig(ApplicationResourceLifecycleConfig&& value) { SetResourceLifecycleConfig(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    ApplicationResourceLifecycleConfig m_resourceLifecycleConfig;
    bool m_resourceLifecycleConfigHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
