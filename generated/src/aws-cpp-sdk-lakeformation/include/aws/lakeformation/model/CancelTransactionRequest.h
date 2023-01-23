/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class CancelTransactionRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API CancelTransactionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelTransaction"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The transaction to cancel.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction to cancel.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The transaction to cancel.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The transaction to cancel.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The transaction to cancel.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The transaction to cancel.</p>
     */
    inline CancelTransactionRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction to cancel.</p>
     */
    inline CancelTransactionRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction to cancel.</p>
     */
    inline CancelTransactionRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}

  private:

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
