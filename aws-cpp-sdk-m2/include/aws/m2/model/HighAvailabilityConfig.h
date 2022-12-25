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
    AWS_MAINFRAMEMODERNIZATION_API HighAvailabilityConfig();
    AWS_MAINFRAMEMODERNIZATION_API HighAvailabilityConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API HighAvailabilityConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of instances in a high availability configuration.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p>The number of instances in a high availability configuration.</p>
     */
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }

    /**
     * <p>The number of instances in a high availability configuration.</p>
     */
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p>The number of instances in a high availability configuration.</p>
     */
    inline HighAvailabilityConfig& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}

  private:

    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
