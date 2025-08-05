/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/model/ScanStatus.h>
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
   * <p>Contains information about on-demand scans performed on a code
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeRepositoryOnDemandScan">AWS
   * API Reference</a></p>
   */
  class CodeRepositoryOnDemandScan
  {
  public:
    AWS_INSPECTOR2_API CodeRepositoryOnDemandScan() = default;
    AWS_INSPECTOR2_API CodeRepositoryOnDemandScan(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeRepositoryOnDemandScan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the last commit that was scanned during an on-demand scan.</p>
     */
    inline const Aws::String& GetLastScannedCommitId() const { return m_lastScannedCommitId; }
    inline bool LastScannedCommitIdHasBeenSet() const { return m_lastScannedCommitIdHasBeenSet; }
    template<typename LastScannedCommitIdT = Aws::String>
    void SetLastScannedCommitId(LastScannedCommitIdT&& value) { m_lastScannedCommitIdHasBeenSet = true; m_lastScannedCommitId = std::forward<LastScannedCommitIdT>(value); }
    template<typename LastScannedCommitIdT = Aws::String>
    CodeRepositoryOnDemandScan& WithLastScannedCommitId(LastScannedCommitIdT&& value) { SetLastScannedCommitId(std::forward<LastScannedCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the last on-demand scan was performed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastScanAt() const { return m_lastScanAt; }
    inline bool LastScanAtHasBeenSet() const { return m_lastScanAtHasBeenSet; }
    template<typename LastScanAtT = Aws::Utils::DateTime>
    void SetLastScanAt(LastScanAtT&& value) { m_lastScanAtHasBeenSet = true; m_lastScanAt = std::forward<LastScanAtT>(value); }
    template<typename LastScanAtT = Aws::Utils::DateTime>
    CodeRepositoryOnDemandScan& WithLastScanAt(LastScanAtT&& value) { SetLastScanAt(std::forward<LastScanAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ScanStatus& GetScanStatus() const { return m_scanStatus; }
    inline bool ScanStatusHasBeenSet() const { return m_scanStatusHasBeenSet; }
    template<typename ScanStatusT = ScanStatus>
    void SetScanStatus(ScanStatusT&& value) { m_scanStatusHasBeenSet = true; m_scanStatus = std::forward<ScanStatusT>(value); }
    template<typename ScanStatusT = ScanStatus>
    CodeRepositoryOnDemandScan& WithScanStatus(ScanStatusT&& value) { SetScanStatus(std::forward<ScanStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lastScannedCommitId;
    bool m_lastScannedCommitIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastScanAt{};
    bool m_lastScanAtHasBeenSet = false;

    ScanStatus m_scanStatus;
    bool m_scanStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
