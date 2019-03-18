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
   * <p>Describes the starting properties for a Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/RunConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API RunConfigurationDescription
  {
  public:
    RunConfigurationDescription();
    RunConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    RunConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    ApplicationRestoreConfiguration m_applicationRestoreConfigurationDescription;
    bool m_applicationRestoreConfigurationDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
