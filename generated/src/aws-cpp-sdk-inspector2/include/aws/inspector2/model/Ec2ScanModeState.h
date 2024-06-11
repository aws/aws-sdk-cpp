﻿/**
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
    AWS_INSPECTOR2_API Ec2ScanModeState();
    AWS_INSPECTOR2_API Ec2ScanModeState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Ec2ScanModeState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scan method that is applied to the instance.</p>
     */
    inline const Ec2ScanMode& GetScanMode() const{ return m_scanMode; }
    inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
    inline void SetScanMode(const Ec2ScanMode& value) { m_scanModeHasBeenSet = true; m_scanMode = value; }
    inline void SetScanMode(Ec2ScanMode&& value) { m_scanModeHasBeenSet = true; m_scanMode = std::move(value); }
    inline Ec2ScanModeState& WithScanMode(const Ec2ScanMode& value) { SetScanMode(value); return *this;}
    inline Ec2ScanModeState& WithScanMode(Ec2ScanMode&& value) { SetScanMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon EC2 scan mode setting.</p>
     */
    inline const Ec2ScanModeStatus& GetScanModeStatus() const{ return m_scanModeStatus; }
    inline bool ScanModeStatusHasBeenSet() const { return m_scanModeStatusHasBeenSet; }
    inline void SetScanModeStatus(const Ec2ScanModeStatus& value) { m_scanModeStatusHasBeenSet = true; m_scanModeStatus = value; }
    inline void SetScanModeStatus(Ec2ScanModeStatus&& value) { m_scanModeStatusHasBeenSet = true; m_scanModeStatus = std::move(value); }
    inline Ec2ScanModeState& WithScanModeStatus(const Ec2ScanModeStatus& value) { SetScanModeStatus(value); return *this;}
    inline Ec2ScanModeState& WithScanModeStatus(Ec2ScanModeStatus&& value) { SetScanModeStatus(std::move(value)); return *this;}
    ///@}
  private:

    Ec2ScanMode m_scanMode;
    bool m_scanModeHasBeenSet = false;

    Ec2ScanModeStatus m_scanModeStatus;
    bool m_scanModeStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
