/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Ec2ScanMode.h>
#include <aws/inspector2/model/Ec2ScanModeStatus.h>
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
   * <p>The state of your Amazon EC2 scan mode configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Ec2ScanModeState">AWS
   * API Reference</a></p>
   */
  class Ec2ScanModeState
  {
  public:
    AWS_INSPECTOR2_API Ec2ScanModeState() = default;
    AWS_INSPECTOR2_API Ec2ScanModeState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Ec2ScanModeState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scan method that is applied to the instance.</p>
     */
    inline Ec2ScanMode GetScanMode() const { return m_scanMode; }
    inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
    inline void SetScanMode(Ec2ScanMode value) { m_scanModeHasBeenSet = true; m_scanMode = value; }
    inline Ec2ScanModeState& WithScanMode(Ec2ScanMode value) { SetScanMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon EC2 scan mode setting.</p>
     */
    inline Ec2ScanModeStatus GetScanModeStatus() const { return m_scanModeStatus; }
    inline bool ScanModeStatusHasBeenSet() const { return m_scanModeStatusHasBeenSet; }
    inline void SetScanModeStatus(Ec2ScanModeStatus value) { m_scanModeStatusHasBeenSet = true; m_scanModeStatus = value; }
    inline Ec2ScanModeState& WithScanModeStatus(Ec2ScanModeStatus value) { SetScanModeStatus(value); return *this;}
    ///@}
  private:

    Ec2ScanMode m_scanMode{Ec2ScanMode::NOT_SET};
    bool m_scanModeHasBeenSet = false;

    Ec2ScanModeStatus m_scanModeStatus{Ec2ScanModeStatus::NOT_SET};
    bool m_scanModeStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
