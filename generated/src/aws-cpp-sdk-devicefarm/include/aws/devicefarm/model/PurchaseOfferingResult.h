/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/OfferingTransaction.h>
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
    AWS_DEVICEFARM_API PurchaseOfferingResult();
    AWS_DEVICEFARM_API PurchaseOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API PurchaseOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the offering transaction for the purchase result.</p>
     */
    inline const OfferingTransaction& GetOfferingTransaction() const{ return m_offeringTransaction; }

    /**
     * <p>Represents the offering transaction for the purchase result.</p>
     */
    inline void SetOfferingTransaction(const OfferingTransaction& value) { m_offeringTransaction = value; }

    /**
     * <p>Represents the offering transaction for the purchase result.</p>
     */
    inline void SetOfferingTransaction(OfferingTransaction&& value) { m_offeringTransaction = std::move(value); }

    /**
     * <p>Represents the offering transaction for the purchase result.</p>
     */
    inline PurchaseOfferingResult& WithOfferingTransaction(const OfferingTransaction& value) { SetOfferingTransaction(value); return *this;}

    /**
     * <p>Represents the offering transaction for the purchase result.</p>
     */
    inline PurchaseOfferingResult& WithOfferingTransaction(OfferingTransaction&& value) { SetOfferingTransaction(std::move(value)); return *this;}

  private:

    OfferingTransaction m_offeringTransaction;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
