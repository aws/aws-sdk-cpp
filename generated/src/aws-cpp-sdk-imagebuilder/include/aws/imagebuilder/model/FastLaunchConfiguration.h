/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/FastLaunchSnapshotConfiguration.h>
#include <aws/imagebuilder/model/FastLaunchLaunchTemplateSpecification.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Define and configure faster launching for output Windows AMIs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/FastLaunchConfiguration">AWS
   * API Reference</a></p>
   */
  class FastLaunchConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API FastLaunchConfiguration() = default;
    AWS_IMAGEBUILDER_API FastLaunchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API FastLaunchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean that represents the current state of faster launching for the
     * Windows AMI. Set to <code>true</code> to start using Windows faster launching,
     * or <code>false</code> to stop using it.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline FastLaunchConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for managing the number of snapshots that are created
     * from pre-provisioned instances for the Windows AMI when faster launching is
     * enabled.</p>
     */
    inline const FastLaunchSnapshotConfiguration& GetSnapshotConfiguration() const { return m_snapshotConfiguration; }
    inline bool SnapshotConfigurationHasBeenSet() const { return m_snapshotConfigurationHasBeenSet; }
    template<typename SnapshotConfigurationT = FastLaunchSnapshotConfiguration>
    void SetSnapshotConfiguration(SnapshotConfigurationT&& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = std::forward<SnapshotConfigurationT>(value); }
    template<typename SnapshotConfigurationT = FastLaunchSnapshotConfiguration>
    FastLaunchConfiguration& WithSnapshotConfiguration(SnapshotConfigurationT&& value) { SetSnapshotConfiguration(std::forward<SnapshotConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of parallel instances that are launched for creating
     * resources.</p>
     */
    inline int GetMaxParallelLaunches() const { return m_maxParallelLaunches; }
    inline bool MaxParallelLaunchesHasBeenSet() const { return m_maxParallelLaunchesHasBeenSet; }
    inline void SetMaxParallelLaunches(int value) { m_maxParallelLaunchesHasBeenSet = true; m_maxParallelLaunches = value; }
    inline FastLaunchConfiguration& WithMaxParallelLaunches(int value) { SetMaxParallelLaunches(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template that the fast-launch enabled Windows AMI uses when it
     * launches Windows instances to create pre-provisioned snapshots.</p>
     */
    inline const FastLaunchLaunchTemplateSpecification& GetLaunchTemplate() const { return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    template<typename LaunchTemplateT = FastLaunchLaunchTemplateSpecification>
    void SetLaunchTemplate(LaunchTemplateT&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::forward<LaunchTemplateT>(value); }
    template<typename LaunchTemplateT = FastLaunchLaunchTemplateSpecification>
    FastLaunchConfiguration& WithLaunchTemplate(LaunchTemplateT&& value) { SetLaunchTemplate(std::forward<LaunchTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner account ID for the fast-launch enabled Windows AMI.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    FastLaunchConfiguration& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    FastLaunchSnapshotConfiguration m_snapshotConfiguration;
    bool m_snapshotConfigurationHasBeenSet = false;

    int m_maxParallelLaunches{0};
    bool m_maxParallelLaunchesHasBeenSet = false;

    FastLaunchLaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
