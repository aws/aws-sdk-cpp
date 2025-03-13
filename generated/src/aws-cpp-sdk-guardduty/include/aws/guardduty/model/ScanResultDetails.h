/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ScanResult.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Represents the result of the scan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanResultDetails">AWS
   * API Reference</a></p>
   */
  class ScanResultDetails
  {
  public:
    AWS_GUARDDUTY_API ScanResultDetails() = default;
    AWS_GUARDDUTY_API ScanResultDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanResultDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An enum value representing possible scan results.</p>
     */
    inline ScanResult GetScanResult() const { return m_scanResult; }
    inline bool ScanResultHasBeenSet() const { return m_scanResultHasBeenSet; }
    inline void SetScanResult(ScanResult value) { m_scanResultHasBeenSet = true; m_scanResult = value; }
    inline ScanResultDetails& WithScanResult(ScanResult value) { SetScanResult(value); return *this;}
    ///@}
  private:

    ScanResult m_scanResult{ScanResult::NOT_SET};
    bool m_scanResultHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
