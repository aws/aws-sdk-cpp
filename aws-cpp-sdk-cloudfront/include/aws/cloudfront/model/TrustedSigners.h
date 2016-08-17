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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * A complex type that specifies the AWS accounts, if any, that you want to allow
   * to create signed URLs for private content. If you want to require signed URLs in
   * requests for objects in the target origin that match the PathPattern for this
   * cache behavior, specify true for Enabled, and specify the applicable values for
   * Quantity and Items. For more information, go to Using a Signed URL to Serve
   * Private Content in the Amazon CloudFront Developer Guide. If you don't want to
   * require signed URLs in requests for objects that match PathPattern, specify
   * false for Enabled and 0 for Quantity. Omit Items. To add, change, or remove one
   * or more trusted signers, change Enabled to true (if it's currently false),
   * change Quantity as applicable, and specify all of the trusted signers that you
   * want to include in the updated distribution.
   */
  class AWS_CLOUDFRONT_API TrustedSigners
  {
  public:
    TrustedSigners();
    TrustedSigners(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrustedSigners& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * Specifies whether you want to require end users to use signed URLs to access the
     * files specified by PathPattern and TargetOriginId.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * Specifies whether you want to require end users to use signed URLs to access the
     * files specified by PathPattern and TargetOriginId.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * Specifies whether you want to require end users to use signed URLs to access the
     * files specified by PathPattern and TargetOriginId.
     */
    inline TrustedSigners& WithEnabled(bool value) { SetEnabled(value); return *this;}

    /**
     * The number of trusted signers for this cache behavior.
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * The number of trusted signers for this cache behavior.
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * The number of trusted signers for this cache behavior.
     */
    inline TrustedSigners& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * Optional: A complex type that contains trusted signers for this cache behavior.
     * If Quantity is 0, you can omit Items.
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * Optional: A complex type that contains trusted signers for this cache behavior.
     * If Quantity is 0, you can omit Items.
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * Optional: A complex type that contains trusted signers for this cache behavior.
     * If Quantity is 0, you can omit Items.
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * Optional: A complex type that contains trusted signers for this cache behavior.
     * If Quantity is 0, you can omit Items.
     */
    inline TrustedSigners& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * Optional: A complex type that contains trusted signers for this cache behavior.
     * If Quantity is 0, you can omit Items.
     */
    inline TrustedSigners& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(value); return *this;}

    /**
     * Optional: A complex type that contains trusted signers for this cache behavior.
     * If Quantity is 0, you can omit Items.
     */
    inline TrustedSigners& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * Optional: A complex type that contains trusted signers for this cache behavior.
     * If Quantity is 0, you can omit Items.
     */
    inline TrustedSigners& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * Optional: A complex type that contains trusted signers for this cache behavior.
     * If Quantity is 0, you can omit Items.
     */
    inline TrustedSigners& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:
    bool m_enabled;
    bool m_enabledHasBeenSet;
    int m_quantity;
    bool m_quantityHasBeenSet;
    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
