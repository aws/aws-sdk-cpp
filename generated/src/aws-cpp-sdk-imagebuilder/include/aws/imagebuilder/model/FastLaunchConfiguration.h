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
    AWS_IMAGEBUILDER_API FastLaunchConfiguration();
    AWS_IMAGEBUILDER_API FastLaunchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API FastLaunchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean that represents the current state of faster launching for the
     * Windows AMI. Set to <code>true</code> to start using Windows faster launching,
     * or <code>false</code> to stop using it.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A Boolean that represents the current state of faster launching for the
     * Windows AMI. Set to <code>true</code> to start using Windows faster launching,
     * or <code>false</code> to stop using it.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>A Boolean that represents the current state of faster launching for the
     * Windows AMI. Set to <code>true</code> to start using Windows faster launching,
     * or <code>false</code> to stop using it.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>A Boolean that represents the current state of faster launching for the
     * Windows AMI. Set to <code>true</code> to start using Windows faster launching,
     * or <code>false</code> to stop using it.</p>
     */
    inline FastLaunchConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Configuration settings for managing the number of snapshots that are created
     * from pre-provisioned instances for the Windows AMI when faster launching is
     * enabled.</p>
     */
    inline const FastLaunchSnapshotConfiguration& GetSnapshotConfiguration() const{ return m_snapshotConfiguration; }

    /**
     * <p>Configuration settings for managing the number of snapshots that are created
     * from pre-provisioned instances for the Windows AMI when faster launching is
     * enabled.</p>
     */
    inline bool SnapshotConfigurationHasBeenSet() const { return m_snapshotConfigurationHasBeenSet; }

    /**
     * <p>Configuration settings for managing the number of snapshots that are created
     * from pre-provisioned instances for the Windows AMI when faster launching is
     * enabled.</p>
     */
    inline void SetSnapshotConfiguration(const FastLaunchSnapshotConfiguration& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = value; }

    /**
     * <p>Configuration settings for managing the number of snapshots that are created
     * from pre-provisioned instances for the Windows AMI when faster launching is
     * enabled.</p>
     */
    inline void SetSnapshotConfiguration(FastLaunchSnapshotConfiguration&& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = std::move(value); }

    /**
     * <p>Configuration settings for managing the number of snapshots that are created
     * from pre-provisioned instances for the Windows AMI when faster launching is
     * enabled.</p>
     */
    inline FastLaunchConfiguration& WithSnapshotConfiguration(const FastLaunchSnapshotConfiguration& value) { SetSnapshotConfiguration(value); return *this;}

    /**
     * <p>Configuration settings for managing the number of snapshots that are created
     * from pre-provisioned instances for the Windows AMI when faster launching is
     * enabled.</p>
     */
    inline FastLaunchConfiguration& WithSnapshotConfiguration(FastLaunchSnapshotConfiguration&& value) { SetSnapshotConfiguration(std::move(value)); return *this;}


    /**
     * <p>The maximum number of parallel instances that are launched for creating
     * resources.</p>
     */
    inline int GetMaxParallelLaunches() const{ return m_maxParallelLaunches; }

    /**
     * <p>The maximum number of parallel instances that are launched for creating
     * resources.</p>
     */
    inline bool MaxParallelLaunchesHasBeenSet() const { return m_maxParallelLaunchesHasBeenSet; }

    /**
     * <p>The maximum number of parallel instances that are launched for creating
     * resources.</p>
     */
    inline void SetMaxParallelLaunches(int value) { m_maxParallelLaunchesHasBeenSet = true; m_maxParallelLaunches = value; }

    /**
     * <p>The maximum number of parallel instances that are launched for creating
     * resources.</p>
     */
    inline FastLaunchConfiguration& WithMaxParallelLaunches(int value) { SetMaxParallelLaunches(value); return *this;}


    /**
     * <p>The launch template that the fast-launch enabled Windows AMI uses when it
     * launches Windows instances to create pre-provisioned snapshots.</p>
     */
    inline const FastLaunchLaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>The launch template that the fast-launch enabled Windows AMI uses when it
     * launches Windows instances to create pre-provisioned snapshots.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>The launch template that the fast-launch enabled Windows AMI uses when it
     * launches Windows instances to create pre-provisioned snapshots.</p>
     */
    inline void SetLaunchTemplate(const FastLaunchLaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>The launch template that the fast-launch enabled Windows AMI uses when it
     * launches Windows instances to create pre-provisioned snapshots.</p>
     */
    inline void SetLaunchTemplate(FastLaunchLaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>The launch template that the fast-launch enabled Windows AMI uses when it
     * launches Windows instances to create pre-provisioned snapshots.</p>
     */
    inline FastLaunchConfiguration& WithLaunchTemplate(const FastLaunchLaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>The launch template that the fast-launch enabled Windows AMI uses when it
     * launches Windows instances to create pre-provisioned snapshots.</p>
     */
    inline FastLaunchConfiguration& WithLaunchTemplate(FastLaunchLaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}


    /**
     * <p>The owner account ID for the fast-launch enabled Windows AMI.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The owner account ID for the fast-launch enabled Windows AMI.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The owner account ID for the fast-launch enabled Windows AMI.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The owner account ID for the fast-launch enabled Windows AMI.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The owner account ID for the fast-launch enabled Windows AMI.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The owner account ID for the fast-launch enabled Windows AMI.</p>
     */
    inline FastLaunchConfiguration& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The owner account ID for the fast-launch enabled Windows AMI.</p>
     */
    inline FastLaunchConfiguration& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The owner account ID for the fast-launch enabled Windows AMI.</p>
     */
    inline FastLaunchConfiguration& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    FastLaunchSnapshotConfiguration m_snapshotConfiguration;
    bool m_snapshotConfigurationHasBeenSet = false;

    int m_maxParallelLaunches;
    bool m_maxParallelLaunchesHasBeenSet = false;

    FastLaunchLaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
