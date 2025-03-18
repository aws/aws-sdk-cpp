/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CvssScoreDetails.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Information about the Amazon Inspector score given to a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/InspectorScoreDetails">AWS
   * API Reference</a></p>
   */
  class InspectorScoreDetails
  {
  public:
    AWS_INSPECTOR2_API InspectorScoreDetails() = default;
    AWS_INSPECTOR2_API InspectorScoreDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API InspectorScoreDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains details about the CVSS score given to a finding.</p>
     */
    inline const CvssScoreDetails& GetAdjustedCvss() const { return m_adjustedCvss; }
    inline bool AdjustedCvssHasBeenSet() const { return m_adjustedCvssHasBeenSet; }
    template<typename AdjustedCvssT = CvssScoreDetails>
    void SetAdjustedCvss(AdjustedCvssT&& value) { m_adjustedCvssHasBeenSet = true; m_adjustedCvss = std::forward<AdjustedCvssT>(value); }
    template<typename AdjustedCvssT = CvssScoreDetails>
    InspectorScoreDetails& WithAdjustedCvss(AdjustedCvssT&& value) { SetAdjustedCvss(std::forward<AdjustedCvssT>(value)); return *this;}
    ///@}
  private:

    CvssScoreDetails m_adjustedCvss;
    bool m_adjustedCvssHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
