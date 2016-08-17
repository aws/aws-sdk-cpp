/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/OfferingTransactionType.h>
#include <aws/devicefarm/model/Offering.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
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
   * <p>The status of the offering.</p>
   */
  class AWS_DEVICEFARM_API OfferingStatus
  {
  public:
    OfferingStatus();
    OfferingStatus(const Aws::Utils::Json::JsonValue& jsonValue);
    OfferingStatus& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type specified for the offering status.</p>
     */
    inline const OfferingTransactionType& GetType() const{ return m_type; }

    /**
     * <p>The type specified for the offering status.</p>
     */
    inline void SetType(const OfferingTransactionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type specified for the offering status.</p>
     */
    inline void SetType(OfferingTransactionType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type specified for the offering status.</p>
     */
    inline OfferingStatus& WithType(const OfferingTransactionType& value) { SetType(value); return *this;}

    /**
     * <p>The type specified for the offering status.</p>
     */
    inline OfferingStatus& WithType(OfferingTransactionType&& value) { SetType(value); return *this;}

    /**
     * <p>Represents the metadata of an offering status.</p>
     */
    inline const Offering& GetOffering() const{ return m_offering; }

    /**
     * <p>Represents the metadata of an offering status.</p>
     */
    inline void SetOffering(const Offering& value) { m_offeringHasBeenSet = true; m_offering = value; }

    /**
     * <p>Represents the metadata of an offering status.</p>
     */
    inline void SetOffering(Offering&& value) { m_offeringHasBeenSet = true; m_offering = value; }

    /**
     * <p>Represents the metadata of an offering status.</p>
     */
    inline OfferingStatus& WithOffering(const Offering& value) { SetOffering(value); return *this;}

    /**
     * <p>Represents the metadata of an offering status.</p>
     */
    inline OfferingStatus& WithOffering(Offering&& value) { SetOffering(value); return *this;}

    /**
     * <p>The number of available devices in the offering.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of available devices in the offering.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of available devices in the offering.</p>
     */
    inline OfferingStatus& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * <p>The date on which the offering is effective.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveOn() const{ return m_effectiveOn; }

    /**
     * <p>The date on which the offering is effective.</p>
     */
    inline void SetEffectiveOn(const Aws::Utils::DateTime& value) { m_effectiveOnHasBeenSet = true; m_effectiveOn = value; }

    /**
     * <p>The date on which the offering is effective.</p>
     */
    inline void SetEffectiveOn(Aws::Utils::DateTime&& value) { m_effectiveOnHasBeenSet = true; m_effectiveOn = value; }

    /**
     * <p>The date on which the offering is effective.</p>
     */
    inline OfferingStatus& WithEffectiveOn(const Aws::Utils::DateTime& value) { SetEffectiveOn(value); return *this;}

    /**
     * <p>The date on which the offering is effective.</p>
     */
    inline OfferingStatus& WithEffectiveOn(Aws::Utils::DateTime&& value) { SetEffectiveOn(value); return *this;}

  private:
    OfferingTransactionType m_type;
    bool m_typeHasBeenSet;
    Offering m_offering;
    bool m_offeringHasBeenSet;
    int m_quantity;
    bool m_quantityHasBeenSet;
    Aws::Utils::DateTime m_effectiveOn;
    bool m_effectiveOnHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
