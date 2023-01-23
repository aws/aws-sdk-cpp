/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ApplicationResourceLifecycleConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/Tag.h>
#include <utility>

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
  class CreateApplicationRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the application. Must be unique within your account.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application. Must be unique within your account.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application. Must be unique within your account.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application. Must be unique within your account.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application. Must be unique within your account.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application. Must be unique within your account.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application. Must be unique within your account.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application. Must be unique within your account.</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Your description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Your description of the application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Your description of the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Your description of the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Your description of the application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Your description of the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Your description of the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Your description of the application.</p>
     */
    inline CreateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies an application resource lifecycle configuration to prevent your
     * application from accumulating too many versions.</p>
     */
    inline const ApplicationResourceLifecycleConfig& GetResourceLifecycleConfig() const{ return m_resourceLifecycleConfig; }

    /**
     * <p>Specifies an application resource lifecycle configuration to prevent your
     * application from accumulating too many versions.</p>
     */
    inline bool ResourceLifecycleConfigHasBeenSet() const { return m_resourceLifecycleConfigHasBeenSet; }

    /**
     * <p>Specifies an application resource lifecycle configuration to prevent your
     * application from accumulating too many versions.</p>
     */
    inline void SetResourceLifecycleConfig(const ApplicationResourceLifecycleConfig& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = value; }

    /**
     * <p>Specifies an application resource lifecycle configuration to prevent your
     * application from accumulating too many versions.</p>
     */
    inline void SetResourceLifecycleConfig(ApplicationResourceLifecycleConfig&& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = std::move(value); }

    /**
     * <p>Specifies an application resource lifecycle configuration to prevent your
     * application from accumulating too many versions.</p>
     */
    inline CreateApplicationRequest& WithResourceLifecycleConfig(const ApplicationResourceLifecycleConfig& value) { SetResourceLifecycleConfig(value); return *this;}

    /**
     * <p>Specifies an application resource lifecycle configuration to prevent your
     * application from accumulating too many versions.</p>
     */
    inline CreateApplicationRequest& WithResourceLifecycleConfig(ApplicationResourceLifecycleConfig&& value) { SetResourceLifecycleConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies the tags applied to the application.</p> <p>Elastic Beanstalk
     * applies these tags only to the application. Environments that you create in the
     * application don't inherit the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the tags applied to the application.</p> <p>Elastic Beanstalk
     * applies these tags only to the application. Environments that you create in the
     * application don't inherit the tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the tags applied to the application.</p> <p>Elastic Beanstalk
     * applies these tags only to the application. Environments that you create in the
     * application don't inherit the tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the tags applied to the application.</p> <p>Elastic Beanstalk
     * applies these tags only to the application. Environments that you create in the
     * application don't inherit the tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the tags applied to the application.</p> <p>Elastic Beanstalk
     * applies these tags only to the application. Environments that you create in the
     * application don't inherit the tags.</p>
     */
    inline CreateApplicationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the tags applied to the application.</p> <p>Elastic Beanstalk
     * applies these tags only to the application. Environments that you create in the
     * application don't inherit the tags.</p>
     */
    inline CreateApplicationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the tags applied to the application.</p> <p>Elastic Beanstalk
     * applies these tags only to the application. Environments that you create in the
     * application don't inherit the tags.</p>
     */
    inline CreateApplicationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the tags applied to the application.</p> <p>Elastic Beanstalk
     * applies these tags only to the application. Environments that you create in the
     * application don't inherit the tags.</p>
     */
    inline CreateApplicationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ApplicationResourceLifecycleConfig m_resourceLifecycleConfig;
    bool m_resourceLifecycleConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
