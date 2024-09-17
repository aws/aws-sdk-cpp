/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of a metered product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/MeteredProductSummary">AWS
   * API Reference</a></p>
   */
  class MeteredProductSummary
  {
  public:
    AWS_DEADLINE_API MeteredProductSummary();
    AWS_DEADLINE_API MeteredProductSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API MeteredProductSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The product ID.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline MeteredProductSummary& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline MeteredProductSummary& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline MeteredProductSummary& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The family to which the metered product belongs.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }
    inline MeteredProductSummary& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}
    inline MeteredProductSummary& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}
    inline MeteredProductSummary& WithFamily(const char* value) { SetFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vendor.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }
    inline MeteredProductSummary& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}
    inline MeteredProductSummary& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}
    inline MeteredProductSummary& WithVendor(const char* value) { SetVendor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on which the metered product should run.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline MeteredProductSummary& WithPort(int value) { SetPort(value); return *this;}
    ///@}
  private:

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
