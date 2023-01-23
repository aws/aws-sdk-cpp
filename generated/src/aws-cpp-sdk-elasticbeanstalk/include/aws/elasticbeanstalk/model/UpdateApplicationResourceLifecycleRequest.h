/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ApplicationResourceLifecycleConfig.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   */
  class UpdateApplicationResourceLifecycleRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API UpdateApplicationResourceLifecycleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplicationResourceLifecycle"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

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
    inline UpdateApplicationResourceLifecycleRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

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
    inline bool ResourceLifecycleConfigHasBeenSet() const { return m_resourceLifecycleConfigHasBeenSet; }

    /**
     * <p>The lifecycle configuration.</p>
     */
    inline void SetResourceLifecycleConfig(const ApplicationResourceLifecycleConfig& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = value; }

    /**
     * <p>The lifecycle configuration.</p>
     */
    inline void SetResourceLifecycleConfig(ApplicationResourceLifecycleConfig&& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = std::move(value); }

    /**
     * <p>The lifecycle configuration.</p>
     */
    inline UpdateApplicationResourceLifecycleRequest& WithResourceLifecycleConfig(const ApplicationResourceLifecycleConfig& value) { SetResourceLifecycleConfig(value); return *this;}

    /**
     * <p>The lifecycle configuration.</p>
     */
    inline UpdateApplicationResourceLifecycleRequest& WithResourceLifecycleConfig(ApplicationResourceLifecycleConfig&& value) { SetResourceLifecycleConfig(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    ApplicationResourceLifecycleConfig m_resourceLifecycleConfig;
    bool m_resourceLifecycleConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
