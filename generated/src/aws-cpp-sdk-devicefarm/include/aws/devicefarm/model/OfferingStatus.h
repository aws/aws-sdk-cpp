﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/OfferingTransactionType.h>
#include <aws/devicefarm/model/Offering.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>The status of the offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/OfferingStatus">AWS
   * API Reference</a></p>
   */
  class OfferingStatus
  {
  public:
    AWS_DEVICEFARM_API OfferingStatus();
    AWS_DEVICEFARM_API OfferingStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API OfferingStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type specified for the offering status.</p>
     */
    inline const OfferingTransactionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const OfferingTransactionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(OfferingTransactionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline OfferingStatus& WithType(const OfferingTransactionType& value) { SetType(value); return *this;}
    inline OfferingStatus& WithType(OfferingTransactionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the metadata of an offering status.</p>
     */
    inline const Offering& GetOffering() const{ return m_offering; }
    inline bool OfferingHasBeenSet() const { return m_offeringHasBeenSet; }
    inline void SetOffering(const Offering& value) { m_offeringHasBeenSet = true; m_offering = value; }
    inline void SetOffering(Offering&& value) { m_offeringHasBeenSet = true; m_offering = std::move(value); }
    inline OfferingStatus& WithOffering(const Offering& value) { SetOffering(value); return *this;}
    inline OfferingStatus& WithOffering(Offering&& value) { SetOffering(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of available devices in the offering.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline OfferingStatus& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the offering is effective.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveOn() const{ return m_effectiveOn; }
    inline bool EffectiveOnHasBeenSet() const { return m_effectiveOnHasBeenSet; }
    inline void SetEffectiveOn(const Aws::Utils::DateTime& value) { m_effectiveOnHasBeenSet = true; m_effectiveOn = value; }
    inline void SetEffectiveOn(Aws::Utils::DateTime&& value) { m_effectiveOnHasBeenSet = true; m_effectiveOn = std::move(value); }
    inline OfferingStatus& WithEffectiveOn(const Aws::Utils::DateTime& value) { SetEffectiveOn(value); return *this;}
    inline OfferingStatus& WithEffectiveOn(Aws::Utils::DateTime&& value) { SetEffectiveOn(std::move(value)); return *this;}
    ///@}
  private:

    OfferingTransactionType m_type;
    bool m_typeHasBeenSet = false;

    Offering m_offering;
    bool m_offeringHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveOn;
    bool m_effectiveOnHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
