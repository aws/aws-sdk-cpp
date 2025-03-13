/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>

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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The number of objects that DataSync fails to prepare, transfer, verify, and
   * delete during your task execution.</p>  <p>Applies only to <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
   * mode tasks</a>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskExecutionFilesFailedDetail">AWS
   * API Reference</a></p>
   */
  class TaskExecutionFilesFailedDetail
  {
  public:
    AWS_DATASYNC_API TaskExecutionFilesFailedDetail() = default;
    AWS_DATASYNC_API TaskExecutionFilesFailedDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TaskExecutionFilesFailedDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of objects that DataSync fails to prepare during your task
     * execution.</p>
     */
    inline long long GetPrepare() const { return m_prepare; }
    inline bool PrepareHasBeenSet() const { return m_prepareHasBeenSet; }
    inline void SetPrepare(long long value) { m_prepareHasBeenSet = true; m_prepare = value; }
    inline TaskExecutionFilesFailedDetail& WithPrepare(long long value) { SetPrepare(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of objects that DataSync fails to transfer during your task
     * execution.</p>
     */
    inline long long GetTransfer() const { return m_transfer; }
    inline bool TransferHasBeenSet() const { return m_transferHasBeenSet; }
    inline void SetTransfer(long long value) { m_transferHasBeenSet = true; m_transfer = value; }
    inline TaskExecutionFilesFailedDetail& WithTransfer(long long value) { SetTransfer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of objects that DataSync fails to verify during your task
     * execution.</p>
     */
    inline long long GetVerify() const { return m_verify; }
    inline bool VerifyHasBeenSet() const { return m_verifyHasBeenSet; }
    inline void SetVerify(long long value) { m_verifyHasBeenSet = true; m_verify = value; }
    inline TaskExecutionFilesFailedDetail& WithVerify(long long value) { SetVerify(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of objects that DataSync fails to delete during your task
     * execution.</p>
     */
    inline long long GetDelete() const { return m_delete; }
    inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }
    inline void SetDelete(long long value) { m_deleteHasBeenSet = true; m_delete = value; }
    inline TaskExecutionFilesFailedDetail& WithDelete(long long value) { SetDelete(value); return *this;}
    ///@}
  private:

    long long m_prepare{0};
    bool m_prepareHasBeenSet = false;

    long long m_transfer{0};
    bool m_transferHasBeenSet = false;

    long long m_verify{0};
    bool m_verifyHasBeenSet = false;

    long long m_delete{0};
    bool m_deleteHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
