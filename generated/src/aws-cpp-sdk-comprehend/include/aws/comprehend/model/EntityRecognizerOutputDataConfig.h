/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Output data configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognizerOutputDataConfig">AWS
   * API Reference</a></p>
   */
  class EntityRecognizerOutputDataConfig
  {
  public:
    AWS_COMPREHEND_API EntityRecognizerOutputDataConfig() = default;
    AWS_COMPREHEND_API EntityRecognizerOutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerOutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline const Aws::String& GetFlywheelStatsS3Prefix() const { return m_flywheelStatsS3Prefix; }
    inline bool FlywheelStatsS3PrefixHasBeenSet() const { return m_flywheelStatsS3PrefixHasBeenSet; }
    template<typename FlywheelStatsS3PrefixT = Aws::String>
    void SetFlywheelStatsS3Prefix(FlywheelStatsS3PrefixT&& value) { m_flywheelStatsS3PrefixHasBeenSet = true; m_flywheelStatsS3Prefix = std::forward<FlywheelStatsS3PrefixT>(value); }
    template<typename FlywheelStatsS3PrefixT = Aws::String>
    EntityRecognizerOutputDataConfig& WithFlywheelStatsS3Prefix(FlywheelStatsS3PrefixT&& value) { SetFlywheelStatsS3Prefix(std::forward<FlywheelStatsS3PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flywheelStatsS3Prefix;
    bool m_flywheelStatsS3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
