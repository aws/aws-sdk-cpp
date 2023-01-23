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
   * <p>Represents a summary of data set imports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DataSetImportSummary">AWS
   * API Reference</a></p>
   */
  class DataSetImportSummary
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportSummary();
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of data set imports that have failed.</p>
     */
    inline int GetFailed() const{ return m_failed; }

    /**
     * <p>The number of data set imports that have failed.</p>
     */
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }

    /**
     * <p>The number of data set imports that have failed.</p>
     */
    inline void SetFailed(int value) { m_failedHasBeenSet = true; m_failed = value; }

    /**
     * <p>The number of data set imports that have failed.</p>
     */
    inline DataSetImportSummary& WithFailed(int value) { SetFailed(value); return *this;}


    /**
     * <p>The number of data set imports that are in progress.</p>
     */
    inline int GetInProgress() const{ return m_inProgress; }

    /**
     * <p>The number of data set imports that are in progress.</p>
     */
    inline bool InProgressHasBeenSet() const { return m_inProgressHasBeenSet; }

    /**
     * <p>The number of data set imports that are in progress.</p>
     */
    inline void SetInProgress(int value) { m_inProgressHasBeenSet = true; m_inProgress = value; }

    /**
     * <p>The number of data set imports that are in progress.</p>
     */
    inline DataSetImportSummary& WithInProgress(int value) { SetInProgress(value); return *this;}


    /**
     * <p>The number of data set imports that are pending.</p>
     */
    inline int GetPending() const{ return m_pending; }

    /**
     * <p>The number of data set imports that are pending.</p>
     */
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }

    /**
     * <p>The number of data set imports that are pending.</p>
     */
    inline void SetPending(int value) { m_pendingHasBeenSet = true; m_pending = value; }

    /**
     * <p>The number of data set imports that are pending.</p>
     */
    inline DataSetImportSummary& WithPending(int value) { SetPending(value); return *this;}


    /**
     * <p>The number of data set imports that have succeeded.</p>
     */
    inline int GetSucceeded() const{ return m_succeeded; }

    /**
     * <p>The number of data set imports that have succeeded.</p>
     */
    inline bool SucceededHasBeenSet() const { return m_succeededHasBeenSet; }

    /**
     * <p>The number of data set imports that have succeeded.</p>
     */
    inline void SetSucceeded(int value) { m_succeededHasBeenSet = true; m_succeeded = value; }

    /**
     * <p>The number of data set imports that have succeeded.</p>
     */
    inline DataSetImportSummary& WithSucceeded(int value) { SetSucceeded(value); return *this;}


    /**
     * <p>The total number of data set imports.</p>
     */
    inline int GetTotal() const{ return m_total; }

    /**
     * <p>The total number of data set imports.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The total number of data set imports.</p>
     */
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total number of data set imports.</p>
     */
    inline DataSetImportSummary& WithTotal(int value) { SetTotal(value); return *this;}

  private:

    int m_failed;
    bool m_failedHasBeenSet = false;

    int m_inProgress;
    bool m_inProgressHasBeenSet = false;

    int m_pending;
    bool m_pendingHasBeenSet = false;

    int m_succeeded;
    bool m_succeededHasBeenSet = false;

    int m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
