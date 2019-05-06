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
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to update an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplicationMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API UpdateApplicationRequest : public ElasticBeanstalkRequest
  {
  public:
    UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the application to update. If no such application is found,
     * <code>UpdateApplication</code> returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application to update. If no such application is found,
     * <code>UpdateApplication</code> returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application to update. If no such application is found,
     * <code>UpdateApplication</code> returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application to update. If no such application is found,
     * <code>UpdateApplication</code> returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application to update. If no such application is found,
     * <code>UpdateApplication</code> returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application to update. If no such application is found,
     * <code>UpdateApplication</code> returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline UpdateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application to update. If no such application is found,
     * <code>UpdateApplication</code> returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline UpdateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application to update. If no such application is found,
     * <code>UpdateApplication</code> returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline UpdateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>A new description for the application.</p> <p>Default: If not specified, AWS
     * Elastic Beanstalk does not update the description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description for the application.</p> <p>Default: If not specified, AWS
     * Elastic Beanstalk does not update the description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description for the application.</p> <p>Default: If not specified, AWS
     * Elastic Beanstalk does not update the description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description for the application.</p> <p>Default: If not specified, AWS
     * Elastic Beanstalk does not update the description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description for the application.</p> <p>Default: If not specified, AWS
     * Elastic Beanstalk does not update the description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description for the application.</p> <p>Default: If not specified, AWS
     * Elastic Beanstalk does not update the description.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description for the application.</p> <p>Default: If not specified, AWS
     * Elastic Beanstalk does not update the description.</p>
     */
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description for the application.</p> <p>Default: If not specified, AWS
     * Elastic Beanstalk does not update the description.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
