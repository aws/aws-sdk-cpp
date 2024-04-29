/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Ec2ScanModeState.h>
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
   * <p>Details about the state of the EC2 scan configuration for your
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Ec2ConfigurationState">AWS
   * API Reference</a></p>
   */
  class Ec2ConfigurationState
  {
  public:
    AWS_INSPECTOR2_API Ec2ConfigurationState();
    AWS_INSPECTOR2_API Ec2ConfigurationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Ec2ConfigurationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains details about the state of the Amazon EC2 scan
     * mode.</p>
     */
    inline const Ec2ScanModeState& GetScanModeState() const{ return m_scanModeState; }

    /**
     * <p>An object that contains details about the state of the Amazon EC2 scan
     * mode.</p>
     */
    inline bool ScanModeStateHasBeenSet() const { return m_scanModeStateHasBeenSet; }

    /**
     * <p>An object that contains details about the state of the Amazon EC2 scan
     * mode.</p>
     */
    inline void SetScanModeState(const Ec2ScanModeState& value) { m_scanModeStateHasBeenSet = true; m_scanModeState = value; }

    /**
     * <p>An object that contains details about the state of the Amazon EC2 scan
     * mode.</p>
     */
    inline void SetScanModeState(Ec2ScanModeState&& value) { m_scanModeStateHasBeenSet = true; m_scanModeState = std::move(value); }

    /**
     * <p>An object that contains details about the state of the Amazon EC2 scan
     * mode.</p>
     */
    inline Ec2ConfigurationState& WithScanModeState(const Ec2ScanModeState& value) { SetScanModeState(value); return *this;}

    /**
     * <p>An object that contains details about the state of the Amazon EC2 scan
     * mode.</p>
     */
    inline Ec2ConfigurationState& WithScanModeState(Ec2ScanModeState&& value) { SetScanModeState(std::move(value)); return *this;}

  private:

    Ec2ScanModeState m_scanModeState;
    bool m_scanModeStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
