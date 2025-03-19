/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ComposeEnvironmentsRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API ComposeEnvironmentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ComposeEnvironments"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the application to which the specified source bundles belong.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ComposeEnvironmentsRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group to which the target environments belong. Specify a
     * group name only if the environment name defined in each target environment's
     * manifest ends with a + (plus) character. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    ComposeEnvironmentsRequest& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of version labels, specifying one or more application source bundles
     * that belong to the target application. Each source bundle must include an
     * environment manifest that specifies the name of the environment and the name of
     * the solution stack to use, and optionally can specify environment links to
     * create.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionLabels() const { return m_versionLabels; }
    inline bool VersionLabelsHasBeenSet() const { return m_versionLabelsHasBeenSet; }
    template<typename VersionLabelsT = Aws::Vector<Aws::String>>
    void SetVersionLabels(VersionLabelsT&& value) { m_versionLabelsHasBeenSet = true; m_versionLabels = std::forward<VersionLabelsT>(value); }
    template<typename VersionLabelsT = Aws::Vector<Aws::String>>
    ComposeEnvironmentsRequest& WithVersionLabels(VersionLabelsT&& value) { SetVersionLabels(std::forward<VersionLabelsT>(value)); return *this;}
    template<typename VersionLabelsT = Aws::String>
    ComposeEnvironmentsRequest& AddVersionLabels(VersionLabelsT&& value) { m_versionLabelsHasBeenSet = true; m_versionLabels.emplace_back(std::forward<VersionLabelsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_versionLabels;
    bool m_versionLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
