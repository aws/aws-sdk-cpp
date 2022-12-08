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
   * <p>The result of a renewal offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RenewOfferingResult">AWS
   * API Reference</a></p>
   */
  class RenewOfferingResult
  {
  public:
    AWS_DEVICEFARM_API RenewOfferingResult();
    AWS_DEVICEFARM_API RenewOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API RenewOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the status of the offering transaction for the renewal.</p>
     */
    inline const OfferingTransaction& GetOfferingTransaction() const{ return m_offeringTransaction; }

    /**
     * <p>Represents the status of the offering transaction for the renewal.</p>
     */
    inline void SetOfferingTransaction(const OfferingTransaction& value) { m_offeringTransaction = value; }

    /**
     * <p>Represents the status of the offering transaction for the renewal.</p>
     */
    inline void SetOfferingTransaction(OfferingTransaction&& value) { m_offeringTransaction = std::move(value); }

    /**
     * <p>Represents the status of the offering transaction for the renewal.</p>
     */
    inline RenewOfferingResult& WithOfferingTransaction(const OfferingTransaction& value) { SetOfferingTransaction(value); return *this;}

    /**
     * <p>Represents the status of the offering transaction for the renewal.</p>
     */
    inline RenewOfferingResult& WithOfferingTransaction(OfferingTransaction&& value) { SetOfferingTransaction(std::move(value)); return *this;}

  private:

    OfferingTransaction m_offeringTransaction;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
