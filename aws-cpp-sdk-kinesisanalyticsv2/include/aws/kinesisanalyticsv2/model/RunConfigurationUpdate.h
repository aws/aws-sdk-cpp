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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ApplicationRestoreConfiguration.h>
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
   * <p>Describes the updates to the starting parameters for a Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RunConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API RunConfigurationUpdate
  {
  public:
    RunConfigurationUpdate();
    RunConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    RunConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes updates to the restore behavior of a restarting application.</p>
     */
    inline const ApplicationRestoreConfiguration& GetApplicationRestoreConfiguration() const{ return m_applicationRestoreConfiguration; }

    /**
     * <p>Describes updates to the restore behavior of a restarting application.</p>
     */
    inline bool ApplicationRestoreConfigurationHasBeenSet() const { return m_applicationRestoreConfigurationHasBeenSet; }

    /**
     * <p>Describes updates to the restore behavior of a restarting application.</p>
     */
    inline void SetApplicationRestoreConfiguration(const ApplicationRestoreConfiguration& value) { m_applicationRestoreConfigurationHasBeenSet = true; m_applicationRestoreConfiguration = value; }

    /**
     * <p>Describes updates to the restore behavior of a restarting application.</p>
     */
    inline void SetApplicationRestoreConfiguration(ApplicationRestoreConfiguration&& value) { m_applicationRestoreConfigurationHasBeenSet = true; m_applicationRestoreConfiguration = std::move(value); }

    /**
     * <p>Describes updates to the restore behavior of a restarting application.</p>
     */
    inline RunConfigurationUpdate& WithApplicationRestoreConfiguration(const ApplicationRestoreConfiguration& value) { SetApplicationRestoreConfiguration(value); return *this;}

    /**
     * <p>Describes updates to the restore behavior of a restarting application.</p>
     */
    inline RunConfigurationUpdate& WithApplicationRestoreConfiguration(ApplicationRestoreConfiguration&& value) { SetApplicationRestoreConfiguration(std::move(value)); return *this;}

  private:

    ApplicationRestoreConfiguration m_applicationRestoreConfiguration;
    bool m_applicationRestoreConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
