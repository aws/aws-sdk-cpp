/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for quality-defined variable bitrate encoding with the AV1 codec.
   * Required when you set Rate control mode to QVBR. Not valid when you set Rate
   * control mode to a value other than QVBR, or when you don't define Rate control
   * mode.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Av1QvbrSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Av1QvbrSettings
  {
  public:
    Av1QvbrSettings();
    Av1QvbrSettings(Aws::Utils::Json::JsonView jsonValue);
    Av1QvbrSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Required when you use QVBR rate control mode. That is, when you specify
     * qvbrSettings within av1Settings. Specify the general target quality level for
     * this output, from 1 to 10. Use higher numbers for greater quality. Level 10
     * results in nearly lossless compression. The quality level for most
     * broadcast-quality transcodes is between 6 and 9. Optionally, to specify a value
     * between whole numbers, also provide a value for the setting
     * qvbrQualityLevelFineTune. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     */
    inline int GetQvbrQualityLevel() const{ return m_qvbrQualityLevel; }

    /**
     * Required when you use QVBR rate control mode. That is, when you specify
     * qvbrSettings within av1Settings. Specify the general target quality level for
     * this output, from 1 to 10. Use higher numbers for greater quality. Level 10
     * results in nearly lossless compression. The quality level for most
     * broadcast-quality transcodes is between 6 and 9. Optionally, to specify a value
     * between whole numbers, also provide a value for the setting
     * qvbrQualityLevelFineTune. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     */
    inline bool QvbrQualityLevelHasBeenSet() const { return m_qvbrQualityLevelHasBeenSet; }

    /**
     * Required when you use QVBR rate control mode. That is, when you specify
     * qvbrSettings within av1Settings. Specify the general target quality level for
     * this output, from 1 to 10. Use higher numbers for greater quality. Level 10
     * results in nearly lossless compression. The quality level for most
     * broadcast-quality transcodes is between 6 and 9. Optionally, to specify a value
     * between whole numbers, also provide a value for the setting
     * qvbrQualityLevelFineTune. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     */
    inline void SetQvbrQualityLevel(int value) { m_qvbrQualityLevelHasBeenSet = true; m_qvbrQualityLevel = value; }

    /**
     * Required when you use QVBR rate control mode. That is, when you specify
     * qvbrSettings within av1Settings. Specify the general target quality level for
     * this output, from 1 to 10. Use higher numbers for greater quality. Level 10
     * results in nearly lossless compression. The quality level for most
     * broadcast-quality transcodes is between 6 and 9. Optionally, to specify a value
     * between whole numbers, also provide a value for the setting
     * qvbrQualityLevelFineTune. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     */
    inline Av1QvbrSettings& WithQvbrQualityLevel(int value) { SetQvbrQualityLevel(value); return *this;}


    /**
     * Optional. Specify a value here to set the QVBR quality to a level that is
     * between whole numbers. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     * MediaConvert rounds your QVBR quality level to the nearest third of a whole
     * number. For example, if you set qvbrQualityLevel to 7 and you set
     * qvbrQualityLevelFineTune to .25, your actual QVBR quality level is 7.33.
     */
    inline double GetQvbrQualityLevelFineTune() const{ return m_qvbrQualityLevelFineTune; }

    /**
     * Optional. Specify a value here to set the QVBR quality to a level that is
     * between whole numbers. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     * MediaConvert rounds your QVBR quality level to the nearest third of a whole
     * number. For example, if you set qvbrQualityLevel to 7 and you set
     * qvbrQualityLevelFineTune to .25, your actual QVBR quality level is 7.33.
     */
    inline bool QvbrQualityLevelFineTuneHasBeenSet() const { return m_qvbrQualityLevelFineTuneHasBeenSet; }

    /**
     * Optional. Specify a value here to set the QVBR quality to a level that is
     * between whole numbers. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     * MediaConvert rounds your QVBR quality level to the nearest third of a whole
     * number. For example, if you set qvbrQualityLevel to 7 and you set
     * qvbrQualityLevelFineTune to .25, your actual QVBR quality level is 7.33.
     */
    inline void SetQvbrQualityLevelFineTune(double value) { m_qvbrQualityLevelFineTuneHasBeenSet = true; m_qvbrQualityLevelFineTune = value; }

    /**
     * Optional. Specify a value here to set the QVBR quality to a level that is
     * between whole numbers. For example, if you want your QVBR quality level to be
     * 7.33, set qvbrQualityLevel to 7 and set qvbrQualityLevelFineTune to .33.
     * MediaConvert rounds your QVBR quality level to the nearest third of a whole
     * number. For example, if you set qvbrQualityLevel to 7 and you set
     * qvbrQualityLevelFineTune to .25, your actual QVBR quality level is 7.33.
     */
    inline Av1QvbrSettings& WithQvbrQualityLevelFineTune(double value) { SetQvbrQualityLevelFineTune(value); return *this;}

  private:

    int m_qvbrQualityLevel;
    bool m_qvbrQualityLevelHasBeenSet;

    double m_qvbrQualityLevelFineTune;
    bool m_qvbrQualityLevelFineTuneHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
