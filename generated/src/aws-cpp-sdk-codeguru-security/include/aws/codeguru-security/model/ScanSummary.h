/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/model/ScanState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>Information about a scan. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/ScanSummary">AWS
   * API Reference</a></p>
   */
  class ScanSummary
  {
  public:
    AWS_CODEGURUSECURITY_API ScanSummary() = default;
    AWS_CODEGURUSECURITY_API ScanSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API ScanSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the scan. A scan can be <code>In Progress</code>,
     * <code>Complete</code>, or <code>Failed</code>. </p>
     */
    inline ScanState GetScanState() const { return m_scanState; }
    inline bool ScanStateHasBeenSet() const { return m_scanStateHasBeenSet; }
    inline void SetScanState(ScanState value) { m_scanStateHasBeenSet = true; m_scanState = value; }
    inline ScanSummary& WithScanState(ScanState value) { SetScanState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the scan was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ScanSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the scan was last updated. A scan is updated when it is re-run.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ScanSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scan. </p>
     */
    inline const Aws::String& GetScanName() const { return m_scanName; }
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }
    template<typename ScanNameT = Aws::String>
    void SetScanName(ScanNameT&& value) { m_scanNameHasBeenSet = true; m_scanName = std::forward<ScanNameT>(value); }
    template<typename ScanNameT = Aws::String>
    ScanSummary& WithScanName(ScanNameT&& value) { SetScanName(std::forward<ScanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the scan run. </p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    ScanSummary& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the scan name.</p>
     */
    inline const Aws::String& GetScanNameArn() const { return m_scanNameArn; }
    inline bool ScanNameArnHasBeenSet() const { return m_scanNameArnHasBeenSet; }
    template<typename ScanNameArnT = Aws::String>
    void SetScanNameArn(ScanNameArnT&& value) { m_scanNameArnHasBeenSet = true; m_scanNameArn = std::forward<ScanNameArnT>(value); }
    template<typename ScanNameArnT = Aws::String>
    ScanSummary& WithScanNameArn(ScanNameArnT&& value) { SetScanNameArn(std::forward<ScanNameArnT>(value)); return *this;}
    ///@}
  private:

    ScanState m_scanState{ScanState::NOT_SET};
    bool m_scanStateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::String m_scanNameArn;
    bool m_scanNameArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
