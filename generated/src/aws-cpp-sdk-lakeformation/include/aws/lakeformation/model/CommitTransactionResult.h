/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/TransactionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LakeFormation
{
namespace Model
{
  class CommitTransactionResult
  {
  public:
    AWS_LAKEFORMATION_API CommitTransactionResult();
    AWS_LAKEFORMATION_API CommitTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API CommitTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the transaction.</p>
     */
    inline const TransactionStatus& GetTransactionStatus() const{ return m_transactionStatus; }

    /**
     * <p>The status of the transaction.</p>
     */
    inline void SetTransactionStatus(const TransactionStatus& value) { m_transactionStatus = value; }

    /**
     * <p>The status of the transaction.</p>
     */
    inline void SetTransactionStatus(TransactionStatus&& value) { m_transactionStatus = std::move(value); }

    /**
     * <p>The status of the transaction.</p>
     */
    inline CommitTransactionResult& WithTransactionStatus(const TransactionStatus& value) { SetTransactionStatus(value); return *this;}

    /**
     * <p>The status of the transaction.</p>
     */
    inline CommitTransactionResult& WithTransactionStatus(TransactionStatus&& value) { SetTransactionStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CommitTransactionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CommitTransactionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CommitTransactionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TransactionStatus m_transactionStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
