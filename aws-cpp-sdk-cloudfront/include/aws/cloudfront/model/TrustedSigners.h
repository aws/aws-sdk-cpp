/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A complex type that specifies the AWS accounts, if any, that you want to
   * allow to create signed URLs for private content.</p> <p>If you want to require
   * signed URLs in requests for objects in the target origin that match the
   * <code>PathPattern</code> for this cache behavior, specify <code>true</code> for
   * <code>Enabled</code>, and specify the applicable values for
   * <code>Quantity</code> and <code>Items</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
   * Private Content through CloudFront</a> in the <i> Amazon CloudFront Developer
   * Guide</i>.</p> <p>If you don't want to require signed URLs in requests for
   * objects that match <code>PathPattern</code>, specify <code>false</code> for
   * <code>Enabled</code> and <code>0</code> for <code>Quantity</code>. Omit
   * <code>Items</code>.</p> <p>To add, change, or remove one or more trusted
   * signers, change <code>Enabled</code> to <code>true</code> (if it's currently
   * <code>false</code>), change <code>Quantity</code> as applicable, and specify all
   * of the trusted signers that you want to include in the updated distribution.</p>
   * <p>For more information about updating the distribution configuration, see <a
   * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/DistributionConfig.html">DistributionConfig</a>
   * in the <i>Amazon CloudFront API Reference</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/TrustedSigners">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API TrustedSigners
  {
  public:
    TrustedSigners();
    TrustedSigners(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrustedSigners& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies whether you want to require viewers to use signed URLs to access
     * the files specified by <code>PathPattern</code> and
     * <code>TargetOriginId</code>.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether you want to require viewers to use signed URLs to access
     * the files specified by <code>PathPattern</code> and
     * <code>TargetOriginId</code>.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether you want to require viewers to use signed URLs to access
     * the files specified by <code>PathPattern</code> and
     * <code>TargetOriginId</code>.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether you want to require viewers to use signed URLs to access
     * the files specified by <code>PathPattern</code> and
     * <code>TargetOriginId</code>.</p>
     */
    inline TrustedSigners& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The number of trusted signers for this cache behavior.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of trusted signers for this cache behavior.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of trusted signers for this cache behavior.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of trusted signers for this cache behavior.</p>
     */
    inline TrustedSigners& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p> <b>Optional</b>: A complex type that contains trusted signers for this cache
     * behavior. If <code>Quantity</code> is <code>0</code>, you can omit
     * <code>Items</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * <p> <b>Optional</b>: A complex type that contains trusted signers for this cache
     * behavior. If <code>Quantity</code> is <code>0</code>, you can omit
     * <code>Items</code>.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p> <b>Optional</b>: A complex type that contains trusted signers for this cache
     * behavior. If <code>Quantity</code> is <code>0</code>, you can omit
     * <code>Items</code>.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p> <b>Optional</b>: A complex type that contains trusted signers for this cache
     * behavior. If <code>Quantity</code> is <code>0</code>, you can omit
     * <code>Items</code>.</p>
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p> <b>Optional</b>: A complex type that contains trusted signers for this cache
     * behavior. If <code>Quantity</code> is <code>0</code>, you can omit
     * <code>Items</code>.</p>
     */
    inline TrustedSigners& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * <p> <b>Optional</b>: A complex type that contains trusted signers for this cache
     * behavior. If <code>Quantity</code> is <code>0</code>, you can omit
     * <code>Items</code>.</p>
     */
    inline TrustedSigners& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p> <b>Optional</b>: A complex type that contains trusted signers for this cache
     * behavior. If <code>Quantity</code> is <code>0</code>, you can omit
     * <code>Items</code>.</p>
     */
    inline TrustedSigners& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p> <b>Optional</b>: A complex type that contains trusted signers for this cache
     * behavior. If <code>Quantity</code> is <code>0</code>, you can omit
     * <code>Items</code>.</p>
     */
    inline TrustedSigners& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

    /**
     * <p> <b>Optional</b>: A complex type that contains trusted signers for this cache
     * behavior. If <code>Quantity</code> is <code>0</code>, you can omit
     * <code>Items</code>.</p>
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
