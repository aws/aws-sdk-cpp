/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>

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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>The ungraceful settings for Amazon Web Services EKS resource
   * scaling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/EksResourceScalingUngraceful">AWS
   * API Reference</a></p>
   */
  class EksResourceScalingUngraceful
  {
  public:
    AWS_ARCREGIONSWITCH_API EksResourceScalingUngraceful() = default;
    AWS_ARCREGIONSWITCH_API EksResourceScalingUngraceful(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API EksResourceScalingUngraceful& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum success percentage for the configuration.</p>
     */
    inline int GetMinimumSuccessPercentage() const { return m_minimumSuccessPercentage; }
    inline bool MinimumSuccessPercentageHasBeenSet() const { return m_minimumSuccessPercentageHasBeenSet; }
    inline void SetMinimumSuccessPercentage(int value) { m_minimumSuccessPercentageHasBeenSet = true; m_minimumSuccessPercentage = value; }
    inline EksResourceScalingUngraceful& WithMinimumSuccessPercentage(int value) { SetMinimumSuccessPercentage(value); return *this;}
    ///@}
  private:

    int m_minimumSuccessPercentage{0};
    bool m_minimumSuccessPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
