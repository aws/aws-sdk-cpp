/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/OfferingTransaction.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>The result of the purchase offering (for example, success or
   * failure).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/PurchaseOfferingResult">AWS
   * API Reference</a></p>
   */
  class PurchaseOfferingResult
  {
  public:
    AWS_DEVICEFARM_API PurchaseOfferingResult() = default;
    AWS_DEVICEFARM_API PurchaseOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API PurchaseOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the offering transaction for the purchase result.</p>
     */
    inline const OfferingTransaction& GetOfferingTransaction() const { return m_offeringTransaction; }
    template<typename OfferingTransactionT = OfferingTransaction>
    void SetOfferingTransaction(OfferingTransactionT&& value) { m_offeringTransactionHasBeenSet = true; m_offeringTransaction = std::forward<OfferingTransactionT>(value); }
    template<typename OfferingTransactionT = OfferingTransaction>
    PurchaseOfferingResult& WithOfferingTransaction(OfferingTransactionT&& value) { SetOfferingTransaction(std::forward<OfferingTransactionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PurchaseOfferingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OfferingTransaction m_offeringTransaction;
    bool m_offeringTransactionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
