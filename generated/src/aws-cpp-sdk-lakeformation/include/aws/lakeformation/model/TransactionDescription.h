/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/TransactionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure that contains information about a transaction.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/TransactionDescription">AWS
   * API Reference</a></p>
   */
  class TransactionDescription
  {
  public:
    AWS_LAKEFORMATION_API TransactionDescription() = default;
    AWS_LAKEFORMATION_API TransactionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TransactionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    TransactionDescription& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status of ACTIVE, COMMITTED, or ABORTED.</p>
     */
    inline TransactionStatus GetTransactionStatus() const { return m_transactionStatus; }
    inline bool TransactionStatusHasBeenSet() const { return m_transactionStatusHasBeenSet; }
    inline void SetTransactionStatus(TransactionStatus value) { m_transactionStatusHasBeenSet = true; m_transactionStatus = value; }
    inline TransactionDescription& WithTransactionStatus(TransactionStatus value) { SetTransactionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the transaction started.</p>
     */
    inline const Aws::Utils::DateTime& GetTransactionStartTime() const { return m_transactionStartTime; }
    inline bool TransactionStartTimeHasBeenSet() const { return m_transactionStartTimeHasBeenSet; }
    template<typename TransactionStartTimeT = Aws::Utils::DateTime>
    void SetTransactionStartTime(TransactionStartTimeT&& value) { m_transactionStartTimeHasBeenSet = true; m_transactionStartTime = std::forward<TransactionStartTimeT>(value); }
    template<typename TransactionStartTimeT = Aws::Utils::DateTime>
    TransactionDescription& WithTransactionStartTime(TransactionStartTimeT&& value) { SetTransactionStartTime(std::forward<TransactionStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the transaction committed or aborted, if it is not currently
     * active.</p>
     */
    inline const Aws::Utils::DateTime& GetTransactionEndTime() const { return m_transactionEndTime; }
    inline bool TransactionEndTimeHasBeenSet() const { return m_transactionEndTimeHasBeenSet; }
    template<typename TransactionEndTimeT = Aws::Utils::DateTime>
    void SetTransactionEndTime(TransactionEndTimeT&& value) { m_transactionEndTimeHasBeenSet = true; m_transactionEndTime = std::forward<TransactionEndTimeT>(value); }
    template<typename TransactionEndTimeT = Aws::Utils::DateTime>
    TransactionDescription& WithTransactionEndTime(TransactionEndTimeT&& value) { SetTransactionEndTime(std::forward<TransactionEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    TransactionStatus m_transactionStatus{TransactionStatus::NOT_SET};
    bool m_transactionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_transactionStartTime{};
    bool m_transactionStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_transactionEndTime{};
    bool m_transactionEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
