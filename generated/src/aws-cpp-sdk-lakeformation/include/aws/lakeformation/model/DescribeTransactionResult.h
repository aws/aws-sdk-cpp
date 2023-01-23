/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/TransactionDescription.h>
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
  class DescribeTransactionResult
  {
  public:
    AWS_LAKEFORMATION_API DescribeTransactionResult();
    AWS_LAKEFORMATION_API DescribeTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API DescribeTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a <code>TransactionDescription</code> object containing information
     * about the transaction.</p>
     */
    inline const TransactionDescription& GetTransactionDescription() const{ return m_transactionDescription; }

    /**
     * <p>Returns a <code>TransactionDescription</code> object containing information
     * about the transaction.</p>
     */
    inline void SetTransactionDescription(const TransactionDescription& value) { m_transactionDescription = value; }

    /**
     * <p>Returns a <code>TransactionDescription</code> object containing information
     * about the transaction.</p>
     */
    inline void SetTransactionDescription(TransactionDescription&& value) { m_transactionDescription = std::move(value); }

    /**
     * <p>Returns a <code>TransactionDescription</code> object containing information
     * about the transaction.</p>
     */
    inline DescribeTransactionResult& WithTransactionDescription(const TransactionDescription& value) { SetTransactionDescription(value); return *this;}

    /**
     * <p>Returns a <code>TransactionDescription</code> object containing information
     * about the transaction.</p>
     */
    inline DescribeTransactionResult& WithTransactionDescription(TransactionDescription&& value) { SetTransactionDescription(std::move(value)); return *this;}

  private:

    TransactionDescription m_transactionDescription;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
