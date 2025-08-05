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
   * <p>Configuration for handling failures when performing operations on EC2
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/Ec2Ungraceful">AWS
   * API Reference</a></p>
   */
  class Ec2Ungraceful
  {
  public:
    AWS_ARCREGIONSWITCH_API Ec2Ungraceful() = default;
    AWS_ARCREGIONSWITCH_API Ec2Ungraceful(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Ec2Ungraceful& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum success percentage that you specify for EC2 Auto Scaling
     * groups.</p>
     */
    inline int GetMinimumSuccessPercentage() const { return m_minimumSuccessPercentage; }
    inline bool MinimumSuccessPercentageHasBeenSet() const { return m_minimumSuccessPercentageHasBeenSet; }
    inline void SetMinimumSuccessPercentage(int value) { m_minimumSuccessPercentageHasBeenSet = true; m_minimumSuccessPercentage = value; }
    inline Ec2Ungraceful& WithMinimumSuccessPercentage(int value) { SetMinimumSuccessPercentage(value); return *this;}
    ///@}
  private:

    int m_minimumSuccessPercentage{0};
    bool m_minimumSuccessPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
