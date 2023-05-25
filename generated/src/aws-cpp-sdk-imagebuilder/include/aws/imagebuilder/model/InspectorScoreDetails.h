/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/CvssScoreDetails.h>
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
   * <p>Information about the factors that influenced the score that Amazon Inspector
   * assigned for a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/InspectorScoreDetails">AWS
   * API Reference</a></p>
   */
  class InspectorScoreDetails
  {
  public:
    AWS_IMAGEBUILDER_API InspectorScoreDetails();
    AWS_IMAGEBUILDER_API InspectorScoreDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API InspectorScoreDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains details about an adjustment that Amazon Inspector
     * made to the CVSS score for the finding.</p>
     */
    inline const CvssScoreDetails& GetAdjustedCvss() const{ return m_adjustedCvss; }

    /**
     * <p>An object that contains details about an adjustment that Amazon Inspector
     * made to the CVSS score for the finding.</p>
     */
    inline bool AdjustedCvssHasBeenSet() const { return m_adjustedCvssHasBeenSet; }

    /**
     * <p>An object that contains details about an adjustment that Amazon Inspector
     * made to the CVSS score for the finding.</p>
     */
    inline void SetAdjustedCvss(const CvssScoreDetails& value) { m_adjustedCvssHasBeenSet = true; m_adjustedCvss = value; }

    /**
     * <p>An object that contains details about an adjustment that Amazon Inspector
     * made to the CVSS score for the finding.</p>
     */
    inline void SetAdjustedCvss(CvssScoreDetails&& value) { m_adjustedCvssHasBeenSet = true; m_adjustedCvss = std::move(value); }

    /**
     * <p>An object that contains details about an adjustment that Amazon Inspector
     * made to the CVSS score for the finding.</p>
     */
    inline InspectorScoreDetails& WithAdjustedCvss(const CvssScoreDetails& value) { SetAdjustedCvss(value); return *this;}

    /**
     * <p>An object that contains details about an adjustment that Amazon Inspector
     * made to the CVSS score for the finding.</p>
     */
    inline InspectorScoreDetails& WithAdjustedCvss(CvssScoreDetails&& value) { SetAdjustedCvss(std::move(value)); return *this;}

  private:

    CvssScoreDetails m_adjustedCvss;
    bool m_adjustedCvssHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
