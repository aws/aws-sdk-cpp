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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/Signer.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * A complex type that lists the AWS accounts, if any, that you included in the
   * TrustedSigners complex type for the default cache behavior or for any of the
   * other cache behaviors for this distribution. These are accounts that you want to
   * allow to create signed URLs for private content.
   */
  class AWS_CLOUDFRONT_API ActiveTrustedSigners
  {
  public:
    ActiveTrustedSigners();
    ActiveTrustedSigners(const Aws::Utils::Xml::XmlNode& xmlNode);
    ActiveTrustedSigners& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * Each active trusted signer.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * Each active trusted signer.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * Each active trusted signer.
     */
    inline ActiveTrustedSigners& WithEnabled(bool value) { SetEnabled(value); return *this;}

    /**
     * The number of unique trusted signers included in all cache behaviors. For
     * example, if three cache behaviors all list the same three AWS accounts, the
     * value of Quantity for ActiveTrustedSigners will be 3.
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * The number of unique trusted signers included in all cache behaviors. For
     * example, if three cache behaviors all list the same three AWS accounts, the
     * value of Quantity for ActiveTrustedSigners will be 3.
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * The number of unique trusted signers included in all cache behaviors. For
     * example, if three cache behaviors all list the same three AWS accounts, the
     * value of Quantity for ActiveTrustedSigners will be 3.
     */
    inline ActiveTrustedSigners& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * A complex type that contains one Signer complex type for each unique trusted
     * signer that is specified in the TrustedSigners complex type, including trusted
     * signers in the default cache behavior and in all of the other cache behaviors.
     */
    inline const Aws::Vector<Signer>& GetItems() const{ return m_items; }

    /**
     * A complex type that contains one Signer complex type for each unique trusted
     * signer that is specified in the TrustedSigners complex type, including trusted
     * signers in the default cache behavior and in all of the other cache behaviors.
     */
    inline void SetItems(const Aws::Vector<Signer>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains one Signer complex type for each unique trusted
     * signer that is specified in the TrustedSigners complex type, including trusted
     * signers in the default cache behavior and in all of the other cache behaviors.
     */
    inline void SetItems(Aws::Vector<Signer>&& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains one Signer complex type for each unique trusted
     * signer that is specified in the TrustedSigners complex type, including trusted
     * signers in the default cache behavior and in all of the other cache behaviors.
     */
    inline ActiveTrustedSigners& WithItems(const Aws::Vector<Signer>& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains one Signer complex type for each unique trusted
     * signer that is specified in the TrustedSigners complex type, including trusted
     * signers in the default cache behavior and in all of the other cache behaviors.
     */
    inline ActiveTrustedSigners& WithItems(Aws::Vector<Signer>&& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains one Signer complex type for each unique trusted
     * signer that is specified in the TrustedSigners complex type, including trusted
     * signers in the default cache behavior and in all of the other cache behaviors.
     */
    inline ActiveTrustedSigners& AddItems(const Signer& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * A complex type that contains one Signer complex type for each unique trusted
     * signer that is specified in the TrustedSigners complex type, including trusted
     * signers in the default cache behavior and in all of the other cache behaviors.
     */
    inline ActiveTrustedSigners& AddItems(Signer&& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:
    bool m_enabled;
    bool m_enabledHasBeenSet;
    int m_quantity;
    bool m_quantityHasBeenSet;
    Aws::Vector<Signer> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
