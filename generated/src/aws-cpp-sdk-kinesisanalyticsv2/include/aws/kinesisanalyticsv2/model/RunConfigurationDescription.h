/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationRestoreConfiguration.h>
#include <aws/kinesisanalyticsv2/model/FlinkRunConfiguration.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the starting properties for a Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RunConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class RunConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API RunConfigurationDescription();
    AWS_KINESISANALYTICSV2_API RunConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API RunConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline const ApplicationRestoreConfiguration& GetApplicationRestoreConfigurationDescription() const{ return m_applicationRestoreConfigurationDescription; }

    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline bool ApplicationRestoreConfigurationDescriptionHasBeenSet() const { return m_applicationRestoreConfigurationDescriptionHasBeenSet; }

    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline void SetApplicationRestoreConfigurationDescription(const ApplicationRestoreConfiguration& value) { m_applicationRestoreConfigurationDescriptionHasBeenSet = true; m_applicationRestoreConfigurationDescription = value; }

    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline void SetApplicationRestoreConfigurationDescription(ApplicationRestoreConfiguration&& value) { m_applicationRestoreConfigurationDescriptionHasBeenSet = true; m_applicationRestoreConfigurationDescription = std::move(value); }

    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline RunConfigurationDescription& WithApplicationRestoreConfigurationDescription(const ApplicationRestoreConfiguration& value) { SetApplicationRestoreConfigurationDescription(value); return *this;}

    /**
     * <p>Describes the restore behavior of a restarting application.</p>
     */
    inline RunConfigurationDescription& WithApplicationRestoreConfigurationDescription(ApplicationRestoreConfiguration&& value) { SetApplicationRestoreConfigurationDescription(std::move(value)); return *this;}


    
    inline const FlinkRunConfiguration& GetFlinkRunConfigurationDescription() const{ return m_flinkRunConfigurationDescription; }

    
    inline bool FlinkRunConfigurationDescriptionHasBeenSet() const { return m_flinkRunConfigurationDescriptionHasBeenSet; }

    
    inline void SetFlinkRunConfigurationDescription(const FlinkRunConfiguration& value) { m_flinkRunConfigurationDescriptionHasBeenSet = true; m_flinkRunConfigurationDescription = value; }

    
    inline void SetFlinkRunConfigurationDescription(FlinkRunConfiguration&& value) { m_flinkRunConfigurationDescriptionHasBeenSet = true; m_flinkRunConfigurationDescription = std::move(value); }

    
    inline RunConfigurationDescription& WithFlinkRunConfigurationDescription(const FlinkRunConfiguration& value) { SetFlinkRunConfigurationDescription(value); return *this;}

    
    inline RunConfigurationDescription& WithFlinkRunConfigurationDescription(FlinkRunConfiguration&& value) { SetFlinkRunConfigurationDescription(std::move(value)); return *this;}

  private:

    ApplicationRestoreConfiguration m_applicationRestoreConfigurationDescription;
    bool m_applicationRestoreConfigurationDescriptionHasBeenSet = false;

    FlinkRunConfiguration m_flinkRunConfigurationDescription;
    bool m_flinkRunConfigurationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
