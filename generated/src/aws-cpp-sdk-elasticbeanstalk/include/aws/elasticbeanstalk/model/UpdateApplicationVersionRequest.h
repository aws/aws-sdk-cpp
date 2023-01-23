/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplicationVersionMessage">AWS
   * API Reference</a></p>
   */
  class UpdateApplicationVersionRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API UpdateApplicationVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplicationVersion"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the application associated with this version.</p> <p> If no
     * application is found with this name, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application associated with this version.</p> <p> If no
     * application is found with this name, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application associated with this version.</p> <p> If no
     * application is found with this name, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application associated with this version.</p> <p> If no
     * application is found with this name, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application associated with this version.</p> <p> If no
     * application is found with this name, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application associated with this version.</p> <p> If no
     * application is found with this name, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline UpdateApplicationVersionRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application associated with this version.</p> <p> If no
     * application is found with this name, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline UpdateApplicationVersionRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application associated with this version.</p> <p> If no
     * application is found with this name, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error.</p>
     */
    inline UpdateApplicationVersionRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The name of the version to update.</p> <p>If no application version is found
     * with this label, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>The name of the version to update.</p> <p>If no application version is found
     * with this label, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }

    /**
     * <p>The name of the version to update.</p> <p>If no application version is found
     * with this label, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>The name of the version to update.</p> <p>If no application version is found
     * with this label, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }

    /**
     * <p>The name of the version to update.</p> <p>If no application version is found
     * with this label, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>The name of the version to update.</p> <p>If no application version is found
     * with this label, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateApplicationVersionRequest& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>The name of the version to update.</p> <p>If no application version is found
     * with this label, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateApplicationVersionRequest& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}

    /**
     * <p>The name of the version to update.</p> <p>If no application version is found
     * with this label, <code>UpdateApplication</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateApplicationVersionRequest& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}


    /**
     * <p>A new description for this version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description for this version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description for this version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description for this version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description for this version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description for this version.</p>
     */
    inline UpdateApplicationVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description for this version.</p>
     */
    inline UpdateApplicationVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description for this version.</p>
     */
    inline UpdateApplicationVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
