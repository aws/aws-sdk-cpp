/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/ScanState.h>
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
    AWS_CODEGURUSECURITY_API ScanSummary();
    AWS_CODEGURUSECURITY_API ScanSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API ScanSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The time when the scan was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ScanSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ScanSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the scan run. </p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline ScanSummary& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline ScanSummary& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline ScanSummary& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scan. </p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }
    inline void SetScanName(const Aws::String& value) { m_scanNameHasBeenSet = true; m_scanName = value; }
    inline void SetScanName(Aws::String&& value) { m_scanNameHasBeenSet = true; m_scanName = std::move(value); }
    inline void SetScanName(const char* value) { m_scanNameHasBeenSet = true; m_scanName.assign(value); }
    inline ScanSummary& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}
    inline ScanSummary& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}
    inline ScanSummary& WithScanName(const char* value) { SetScanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the scan name.</p>
     */
    inline const Aws::String& GetScanNameArn() const{ return m_scanNameArn; }
    inline bool ScanNameArnHasBeenSet() const { return m_scanNameArnHasBeenSet; }
    inline void SetScanNameArn(const Aws::String& value) { m_scanNameArnHasBeenSet = true; m_scanNameArn = value; }
    inline void SetScanNameArn(Aws::String&& value) { m_scanNameArnHasBeenSet = true; m_scanNameArn = std::move(value); }
    inline void SetScanNameArn(const char* value) { m_scanNameArnHasBeenSet = true; m_scanNameArn.assign(value); }
    inline ScanSummary& WithScanNameArn(const Aws::String& value) { SetScanNameArn(value); return *this;}
    inline ScanSummary& WithScanNameArn(Aws::String&& value) { SetScanNameArn(std::move(value)); return *this;}
    inline ScanSummary& WithScanNameArn(const char* value) { SetScanNameArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the scan. A scan can be <code>In Progress</code>,
     * <code>Complete</code>, or <code>Failed</code>. </p>
     */
    inline const ScanState& GetScanState() const{ return m_scanState; }
    inline bool ScanStateHasBeenSet() const { return m_scanStateHasBeenSet; }
    inline void SetScanState(const ScanState& value) { m_scanStateHasBeenSet = true; m_scanState = value; }
    inline void SetScanState(ScanState&& value) { m_scanStateHasBeenSet = true; m_scanState = std::move(value); }
    inline ScanSummary& WithScanState(const ScanState& value) { SetScanState(value); return *this;}
    inline ScanSummary& WithScanState(ScanState&& value) { SetScanState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the scan was last updated. A scan is updated when it is re-run.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ScanSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ScanSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    Aws::String m_scanNameArn;
    bool m_scanNameArnHasBeenSet = false;

    ScanState m_scanState;
    bool m_scanStateHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
