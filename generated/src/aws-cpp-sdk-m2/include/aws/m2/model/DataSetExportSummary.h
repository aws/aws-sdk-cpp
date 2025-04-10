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
   * <p>Represents a summary of data set exports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DataSetExportSummary">AWS
   * API Reference</a></p>
   */
  class DataSetExportSummary
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportSummary() = default;
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSetExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of data set exports that have failed.</p>
     */
    inline int GetFailed() const { return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }
    inline DataSetExportSummary& WithFailed(int value) { SetFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data set exports that are in progress.</p>
     */
    inline int GetInProgress() const { return m_inProgress; }
    inline bool InProgressHasBeenSet() const { return m_inProgressHasBeenSet; }
    inline void SetInProgress(int value) { m_inProgressHasBeenSet = true; m_inProgress = value; }
    inline DataSetExportSummary& WithInProgress(int value) { SetInProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data set exports that are pending.</p>
     */
    inline int GetPending() const { return m_pending; }
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }
    inline void SetPending(int value) { m_pendingHasBeenSet = true; m_pending = value; }
    inline DataSetExportSummary& WithPending(int value) { SetPending(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data set exports that have succeeded.</p>
     */
    inline int GetSucceeded() const { return m_succeeded; }
    inline bool SucceededHasBeenSet() const { return m_succeededHasBeenSet; }
    inline void SetSucceeded(int value) { m_succeededHasBeenSet = true; m_succeeded = value; }
    inline DataSetExportSummary& WithSucceeded(int value) { SetSucceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of data set exports.</p>
     */
    inline int GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }
    inline DataSetExportSummary& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}
  private:

    int m_failed{0};
    bool m_failedHasBeenSet = false;

    int m_inProgress{0};
    bool m_inProgressHasBeenSet = false;

    int m_pending{0};
    bool m_pendingHasBeenSet = false;

    int m_succeeded{0};
    bool m_succeededHasBeenSet = false;

    int m_total{0};
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
