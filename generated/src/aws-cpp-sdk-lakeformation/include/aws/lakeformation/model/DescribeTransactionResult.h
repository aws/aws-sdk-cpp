/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/TransactionDescription.h>
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
  class DescribeTransactionResult
  {
  public:
    AWS_LAKEFORMATION_API DescribeTransactionResult() = default;
    AWS_LAKEFORMATION_API DescribeTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API DescribeTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a <code>TransactionDescription</code> object containing information
     * about the transaction.</p>
     */
    inline const TransactionDescription& GetTransactionDescription() const { return m_transactionDescription; }
    template<typename TransactionDescriptionT = TransactionDescription>
    void SetTransactionDescription(TransactionDescriptionT&& value) { m_transactionDescriptionHasBeenSet = true; m_transactionDescription = std::forward<TransactionDescriptionT>(value); }
    template<typename TransactionDescriptionT = TransactionDescription>
    DescribeTransactionResult& WithTransactionDescription(TransactionDescriptionT&& value) { SetTransactionDescription(std::forward<TransactionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTransactionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TransactionDescription m_transactionDescription;
    bool m_transactionDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
