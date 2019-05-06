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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to create or update a group of environments.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ComposeEnvironmentsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API ComposeEnvironmentsRequest : public ElasticBeanstalkRequest
  {
  public:
    ComposeEnvironmentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ComposeEnvironments"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the application to which the specified source bundles belong.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application to which the specified source bundles belong.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application to which the specified source bundles belong.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application to which the specified source bundles belong.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application to which the specified source bundles belong.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application to which the specified source bundles belong.</p>
     */
    inline ComposeEnvironmentsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application to which the specified source bundles belong.</p>
     */
    inline ComposeEnvironmentsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application to which the specified source bundles belong.</p>
     */
    inline ComposeEnvironmentsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The name of the group to which the target environments belong. Specify a
     * group name only if the environment name defined in each target environment's
     * manifest ends with a + (plus) character. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group to which the target environments belong. Specify a
     * group name only if the environment name defined in each target environment's
     * manifest ends with a + (plus) character. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the group to which the target environments belong. Specify a
     * group name only if the environment name defined in each target environment's
     * manifest ends with a + (plus) character. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group to which the target environments belong. Specify a
     * group name only if the environment name defined in each target environment's
     * manifest ends with a + (plus) character. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the group to which the target environments belong. Specify a
     * group name only if the environment name defined in each target environment's
     * manifest ends with a + (plus) character. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the group to which the target environments belong. Specify a
     * group name only if the environment name defined in each target environment's
     * manifest ends with a + (plus) character. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline ComposeEnvironmentsRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group to which the target environments belong. Specify a
     * group name only if the environment name defined in each target environment's
     * manifest ends with a + (plus) character. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline ComposeEnvironmentsRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the group to which the target environments belong. Specify a
     * group name only if the environment name defined in each target environment's
     * manifest ends with a + (plus) character. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline ComposeEnvironmentsRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>A list of version labels, specifying one or more application source bundles
     * that belong to the target application. Each source bundle must include an
     * environment manifest that specifies the name of the environment and the name of
     * the solution stack to use, and optionally can specify environment links to
     * create.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionLabels() const{ return m_versionLabels; }

    /**
     * <p>A list of version labels, specifying one or more application source bundles
     * that belong to the target application. Each source bundle must include an
     * environment manifest that specifies the name of the environment and the name of
     * the solution stack to use, and optionally can specify environment links to
     * create.</p>
     */
    inline bool VersionLabelsHasBeenSet() const { return m_versionLabelsHasBeenSet; }

    /**
     * <p>A list of version labels, specifying one or more application source bundles
     * that belong to the target application. Each source bundle must include an
     * environment manifest that specifies the name of the environment and the name of
     * the solution stack to use, and optionally can specify environment links to
     * create.</p>
     */
    inline void SetVersionLabels(const Aws::Vector<Aws::String>& value) { m_versionLabelsHasBeenSet = true; m_versionLabels = value; }

    /**
     * <p>A list of version labels, specifying one or more application source bundles
     * that belong to the target application. Each source bundle must include an
     * environment manifest that specifies the name of the environment and the name of
     * the solution stack to use, and optionally can specify environment links to
     * create.</p>
     */
    inline void SetVersionLabels(Aws::Vector<Aws::String>&& value) { m_versionLabelsHasBeenSet = true; m_versionLabels = std::move(value); }

    /**
     * <p>A list of version labels, specifying one or more application source bundles
     * that belong to the target application. Each source bundle must include an
     * environment manifest that specifies the name of the environment and the name of
     * the solution stack to use, and optionally can specify environment links to
     * create.</p>
     */
    inline ComposeEnvironmentsRequest& WithVersionLabels(const Aws::Vector<Aws::String>& value) { SetVersionLabels(value); return *this;}

    /**
     * <p>A list of version labels, specifying one or more application source bundles
     * that belong to the target application. Each source bundle must include an
     * environment manifest that specifies the name of the environment and the name of
     * the solution stack to use, and optionally can specify environment links to
     * create.</p>
     */
    inline ComposeEnvironmentsRequest& WithVersionLabels(Aws::Vector<Aws::String>&& value) { SetVersionLabels(std::move(value)); return *this;}

    /**
     * <p>A list of version labels, specifying one or more application source bundles
     * that belong to the target application. Each source bundle must include an
     * environment manifest that specifies the name of the environment and the name of
     * the solution stack to use, and optionally can specify environment links to
     * create.</p>
     */
    inline ComposeEnvironmentsRequest& AddVersionLabels(const Aws::String& value) { m_versionLabelsHasBeenSet = true; m_versionLabels.push_back(value); return *this; }

    /**
     * <p>A list of version labels, specifying one or more application source bundles
     * that belong to the target application. Each source bundle must include an
     * environment manifest that specifies the name of the environment and the name of
     * the solution stack to use, and optionally can specify environment links to
     * create.</p>
     */
    inline ComposeEnvironmentsRequest& AddVersionLabels(Aws::String&& value) { m_versionLabelsHasBeenSet = true; m_versionLabels.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of version labels, specifying one or more application source bundles
     * that belong to the target application. Each source bundle must include an
     * environment manifest that specifies the name of the environment and the name of
     * the solution stack to use, and optionally can specify environment links to
     * create.</p>
     */
    inline ComposeEnvironmentsRequest& AddVersionLabels(const char* value) { m_versionLabelsHasBeenSet = true; m_versionLabels.push_back(value); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::Vector<Aws::String> m_versionLabels;
    bool m_versionLabelsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
