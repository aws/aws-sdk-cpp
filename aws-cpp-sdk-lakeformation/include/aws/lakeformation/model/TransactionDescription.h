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
    AWS_LAKEFORMATION_API TransactionDescription();
    AWS_LAKEFORMATION_API TransactionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TransactionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The ID of the transaction.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The ID of the transaction.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The ID of the transaction.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The ID of the transaction.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The ID of the transaction.</p>
     */
    inline TransactionDescription& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The ID of the transaction.</p>
     */
    inline TransactionDescription& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transaction.</p>
     */
    inline TransactionDescription& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>A status of ACTIVE, COMMITTED, or ABORTED.</p>
     */
    inline const TransactionStatus& GetTransactionStatus() const{ return m_transactionStatus; }

    /**
     * <p>A status of ACTIVE, COMMITTED, or ABORTED.</p>
     */
    inline bool TransactionStatusHasBeenSet() const { return m_transactionStatusHasBeenSet; }

    /**
     * <p>A status of ACTIVE, COMMITTED, or ABORTED.</p>
     */
    inline void SetTransactionStatus(const TransactionStatus& value) { m_transactionStatusHasBeenSet = true; m_transactionStatus = value; }

    /**
     * <p>A status of ACTIVE, COMMITTED, or ABORTED.</p>
     */
    inline void SetTransactionStatus(TransactionStatus&& value) { m_transactionStatusHasBeenSet = true; m_transactionStatus = std::move(value); }

    /**
     * <p>A status of ACTIVE, COMMITTED, or ABORTED.</p>
     */
    inline TransactionDescription& WithTransactionStatus(const TransactionStatus& value) { SetTransactionStatus(value); return *this;}

    /**
     * <p>A status of ACTIVE, COMMITTED, or ABORTED.</p>
     */
    inline TransactionDescription& WithTransactionStatus(TransactionStatus&& value) { SetTransactionStatus(std::move(value)); return *this;}


    /**
     * <p>The time when the transaction started.</p>
     */
    inline const Aws::Utils::DateTime& GetTransactionStartTime() const{ return m_transactionStartTime; }

    /**
     * <p>The time when the transaction started.</p>
     */
    inline bool TransactionStartTimeHasBeenSet() const { return m_transactionStartTimeHasBeenSet; }

    /**
     * <p>The time when the transaction started.</p>
     */
    inline void SetTransactionStartTime(const Aws::Utils::DateTime& value) { m_transactionStartTimeHasBeenSet = true; m_transactionStartTime = value; }

    /**
     * <p>The time when the transaction started.</p>
     */
    inline void SetTransactionStartTime(Aws::Utils::DateTime&& value) { m_transactionStartTimeHasBeenSet = true; m_transactionStartTime = std::move(value); }

    /**
     * <p>The time when the transaction started.</p>
     */
    inline TransactionDescription& WithTransactionStartTime(const Aws::Utils::DateTime& value) { SetTransactionStartTime(value); return *this;}

    /**
     * <p>The time when the transaction started.</p>
     */
    inline TransactionDescription& WithTransactionStartTime(Aws::Utils::DateTime&& value) { SetTransactionStartTime(std::move(value)); return *this;}


    /**
     * <p>The time when the transaction committed or aborted, if it is not currently
     * active.</p>
     */
    inline const Aws::Utils::DateTime& GetTransactionEndTime() const{ return m_transactionEndTime; }

    /**
     * <p>The time when the transaction committed or aborted, if it is not currently
     * active.</p>
     */
    inline bool TransactionEndTimeHasBeenSet() const { return m_transactionEndTimeHasBeenSet; }

    /**
     * <p>The time when the transaction committed or aborted, if it is not currently
     * active.</p>
     */
    inline void SetTransactionEndTime(const Aws::Utils::DateTime& value) { m_transactionEndTimeHasBeenSet = true; m_transactionEndTime = value; }

    /**
     * <p>The time when the transaction committed or aborted, if it is not currently
     * active.</p>
     */
    inline void SetTransactionEndTime(Aws::Utils::DateTime&& value) { m_transactionEndTimeHasBeenSet = true; m_transactionEndTime = std::move(value); }

    /**
     * <p>The time when the transaction committed or aborted, if it is not currently
     * active.</p>
     */
    inline TransactionDescription& WithTransactionEndTime(const Aws::Utils::DateTime& value) { SetTransactionEndTime(value); return *this;}

    /**
     * <p>The time when the transaction committed or aborted, if it is not currently
     * active.</p>
     */
    inline TransactionDescription& WithTransactionEndTime(Aws::Utils::DateTime&& value) { SetTransactionEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    TransactionStatus m_transactionStatus;
    bool m_transactionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_transactionStartTime;
    bool m_transactionStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_transactionEndTime;
    bool m_transactionEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
