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
    AWS_COMPREHEND_API EntityRecognizerOutputDataConfig();
    AWS_COMPREHEND_API EntityRecognizerOutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerOutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline const Aws::String& GetFlywheelStatsS3Prefix() const{ return m_flywheelStatsS3Prefix; }

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline bool FlywheelStatsS3PrefixHasBeenSet() const { return m_flywheelStatsS3PrefixHasBeenSet; }

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline void SetFlywheelStatsS3Prefix(const Aws::String& value) { m_flywheelStatsS3PrefixHasBeenSet = true; m_flywheelStatsS3Prefix = value; }

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline void SetFlywheelStatsS3Prefix(Aws::String&& value) { m_flywheelStatsS3PrefixHasBeenSet = true; m_flywheelStatsS3Prefix = std::move(value); }

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline void SetFlywheelStatsS3Prefix(const char* value) { m_flywheelStatsS3PrefixHasBeenSet = true; m_flywheelStatsS3Prefix.assign(value); }

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline EntityRecognizerOutputDataConfig& WithFlywheelStatsS3Prefix(const Aws::String& value) { SetFlywheelStatsS3Prefix(value); return *this;}

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline EntityRecognizerOutputDataConfig& WithFlywheelStatsS3Prefix(Aws::String&& value) { SetFlywheelStatsS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 prefix for the data lake location of the flywheel
     * statistics.</p>
     */
    inline EntityRecognizerOutputDataConfig& WithFlywheelStatsS3Prefix(const char* value) { SetFlywheelStatsS3Prefix(value); return *this;}

  private:

    Aws::String m_flywheelStatsS3Prefix;
    bool m_flywheelStatsS3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
