/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>

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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p> Information related to the utilization of resources that have been billed or
   * charged for in a given context, such as a protected job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/BilledJobResourceUtilization">AWS
   * API Reference</a></p>
   */
  class BilledJobResourceUtilization
  {
  public:
    AWS_CLEANROOMS_API BilledJobResourceUtilization() = default;
    AWS_CLEANROOMS_API BilledJobResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API BilledJobResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number of Clean Rooms Processing Unit (CRPU) hours that have been
     * billed.</p>
     */
    inline double GetUnits() const { return m_units; }
    inline bool UnitsHasBeenSet() const { return m_unitsHasBeenSet; }
    inline void SetUnits(double value) { m_unitsHasBeenSet = true; m_units = value; }
    inline BilledJobResourceUtilization& WithUnits(double value) { SetUnits(value); return *this;}
    ///@}
  private:

    double m_units{0.0};
    bool m_unitsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
