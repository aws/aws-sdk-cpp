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
   */
  class AWS_ELASTICBEANSTALK_API UpdateApplicationResourceLifecycleRequest : public ElasticBeanstalkRequest
  {
  public:
    UpdateApplicationResourceLifecycleRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline UpdateApplicationResourceLifecycleRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline UpdateApplicationResourceLifecycleRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline UpdateApplicationResourceLifecycleRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The lifecycle configuration.</p>
     */
    inline const ApplicationResourceLifecycleConfig& GetResourceLifecycleConfig() const{ return m_resourceLifecycleConfig; }

    /**
     * <p>The lifecycle configuration.</p>
     */
    inline void SetResourceLifecycleConfig(const ApplicationResourceLifecycleConfig& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = value; }

    /**
     * <p>The lifecycle configuration.</p>
     */
    inline void SetResourceLifecycleConfig(ApplicationResourceLifecycleConfig&& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = value; }

    /**
     * <p>The lifecycle configuration.</p>
     */
    inline UpdateApplicationResourceLifecycleRequest& WithResourceLifecycleConfig(const ApplicationResourceLifecycleConfig& value) { SetResourceLifecycleConfig(value); return *this;}

    /**
     * <p>The lifecycle configuration.</p>
     */
    inline UpdateApplicationResourceLifecycleRequest& WithResourceLifecycleConfig(ApplicationResourceLifecycleConfig&& value) { SetResourceLifecycleConfig(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    ApplicationResourceLifecycleConfig m_resourceLifecycleConfig;
    bool m_resourceLifecycleConfigHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
