/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Ec2ScanMode.h>
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
   * <p>Enables agent-based scanning, which scans instances that are not managed by
   * SSM.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Ec2Configuration">AWS
   * API Reference</a></p>
   */
  class Ec2Configuration
  {
  public:
    AWS_INSPECTOR2_API Ec2Configuration() = default;
    AWS_INSPECTOR2_API Ec2Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Ec2Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scan method that is applied to the instance.</p>
     */
    inline Ec2ScanMode GetScanMode() const { return m_scanMode; }
    inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
    inline void SetScanMode(Ec2ScanMode value) { m_scanModeHasBeenSet = true; m_scanMode = value; }
    inline Ec2Configuration& WithScanMode(Ec2ScanMode value) { SetScanMode(value); return *this;}
    ///@}
  private:

    Ec2ScanMode m_scanMode{Ec2ScanMode::NOT_SET};
    bool m_scanModeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
