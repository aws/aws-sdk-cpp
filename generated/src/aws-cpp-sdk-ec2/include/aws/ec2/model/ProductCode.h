﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ProductCodeValues.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a product code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ProductCode">AWS API
   * Reference</a></p>
   */
  class ProductCode
  {
  public:
    AWS_EC2_API ProductCode();
    AWS_EC2_API ProductCode(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ProductCode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The product code.</p>
     */
    inline const Aws::String& GetProductCodeId() const{ return m_productCodeId; }
    inline bool ProductCodeIdHasBeenSet() const { return m_productCodeIdHasBeenSet; }
    inline void SetProductCodeId(const Aws::String& value) { m_productCodeIdHasBeenSet = true; m_productCodeId = value; }
    inline void SetProductCodeId(Aws::String&& value) { m_productCodeIdHasBeenSet = true; m_productCodeId = std::move(value); }
    inline void SetProductCodeId(const char* value) { m_productCodeIdHasBeenSet = true; m_productCodeId.assign(value); }
    inline ProductCode& WithProductCodeId(const Aws::String& value) { SetProductCodeId(value); return *this;}
    inline ProductCode& WithProductCodeId(Aws::String&& value) { SetProductCodeId(std::move(value)); return *this;}
    inline ProductCode& WithProductCodeId(const char* value) { SetProductCodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of product code.</p>
     */
    inline const ProductCodeValues& GetProductCodeType() const{ return m_productCodeType; }
    inline bool ProductCodeTypeHasBeenSet() const { return m_productCodeTypeHasBeenSet; }
    inline void SetProductCodeType(const ProductCodeValues& value) { m_productCodeTypeHasBeenSet = true; m_productCodeType = value; }
    inline void SetProductCodeType(ProductCodeValues&& value) { m_productCodeTypeHasBeenSet = true; m_productCodeType = std::move(value); }
    inline ProductCode& WithProductCodeType(const ProductCodeValues& value) { SetProductCodeType(value); return *this;}
    inline ProductCode& WithProductCodeType(ProductCodeValues&& value) { SetProductCodeType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_productCodeId;
    bool m_productCodeIdHasBeenSet = false;

    ProductCodeValues m_productCodeType;
    bool m_productCodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
