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


    /**
     * <p>The family to which the metered product belongs.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>The family to which the metered product belongs.</p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p>The family to which the metered product belongs.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>The family to which the metered product belongs.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>The family to which the metered product belongs.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>The family to which the metered product belongs.</p>
     */
    inline MeteredProductSummary& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>The family to which the metered product belongs.</p>
     */
    inline MeteredProductSummary& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>The family to which the metered product belongs.</p>
     */
    inline MeteredProductSummary& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p>The port on which the metered product should run.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on which the metered product should run.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port on which the metered product should run.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on which the metered product should run.</p>
     */
    inline MeteredProductSummary& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The product ID.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product ID.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product ID.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product ID.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product ID.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product ID.</p>
     */
    inline MeteredProductSummary& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product ID.</p>
     */
    inline MeteredProductSummary& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product ID.</p>
     */
    inline MeteredProductSummary& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The vendor.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }

    /**
     * <p>The vendor.</p>
     */
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }

    /**
     * <p>The vendor.</p>
     */
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }

    /**
     * <p>The vendor.</p>
     */
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }

    /**
     * <p>The vendor.</p>
     */
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }

    /**
     * <p>The vendor.</p>
     */
    inline MeteredProductSummary& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}

    /**
     * <p>The vendor.</p>
     */
    inline MeteredProductSummary& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}

    /**
     * <p>The vendor.</p>
     */
    inline MeteredProductSummary& WithVendor(const char* value) { SetVendor(value); return *this;}

  private:

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
