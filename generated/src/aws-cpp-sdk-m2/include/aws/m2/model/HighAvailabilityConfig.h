/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>

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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Defines the details of a high availability configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/HighAvailabilityConfig">AWS
   * API Reference</a></p>
   */
  class HighAvailabilityConfig
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API HighAvailabilityConfig() = default;
    AWS_MAINFRAMEMODERNIZATION_API HighAvailabilityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API HighAvailabilityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of instances in a high availability configuration. The minimum
     * possible value is 1 and the maximum is 100.</p>
     */
    inline int GetDesiredCapacity() const { return m_desiredCapacity; }
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }
    inline HighAvailabilityConfig& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}
    ///@}
  private:

    int m_desiredCapacity{0};
    bool m_desiredCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
