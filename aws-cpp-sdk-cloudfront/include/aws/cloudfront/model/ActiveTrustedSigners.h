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
#include <aws/cloudfront/model/Signer.h>
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
   * <p>A complex type that lists the AWS accounts, if any, that you included in the
   * <code>TrustedSigners</code> complex type for this distribution. These are the
   * accounts that you want to allow to create signed URLs for private content.</p>
   * <p>The <code>Signer</code> complex type lists the AWS account number of the
   * trusted signer or <code>self</code> if the signer is the AWS account that
   * created the distribution. The <code>Signer</code> element also includes the IDs
   * of any active CloudFront key pairs that are associated with the trusted signer's
   * AWS account. If no <code>KeyPairId</code> element appears for a
   * <code>Signer</code>, that signer can't create signed URLs. </p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
   * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ActiveTrustedSigners">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ActiveTrustedSigners
  {
  public:
    ActiveTrustedSigners();
    ActiveTrustedSigners(const Aws::Utils::Xml::XmlNode& xmlNode);
    ActiveTrustedSigners& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Enabled is <code>true</code> if any of the AWS accounts listed in the
     * <code>TrustedSigners</code> complex type for this distribution have active
     * CloudFront key pairs. If not, <code>Enabled</code> is <code>false</code>.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enabled is <code>true</code> if any of the AWS accounts listed in the
     * <code>TrustedSigners</code> complex type for this distribution have active
     * CloudFront key pairs. If not, <code>Enabled</code> is <code>false</code>.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Enabled is <code>true</code> if any of the AWS accounts listed in the
     * <code>TrustedSigners</code> complex type for this distribution have active
     * CloudFront key pairs. If not, <code>Enabled</code> is <code>false</code>.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enabled is <code>true</code> if any of the AWS accounts listed in the
     * <code>TrustedSigners</code> complex type for this distribution have active
     * CloudFront key pairs. If not, <code>Enabled</code> is <code>false</code>.</p>
     */
    inline ActiveTrustedSigners& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The number of trusted signers specified in the <code>TrustedSigners</code>
     * complex type.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of trusted signers specified in the <code>TrustedSigners</code>
     * complex type.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of trusted signers specified in the <code>TrustedSigners</code>
     * complex type.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of trusted signers specified in the <code>TrustedSigners</code>
     * complex type.</p>
     */
    inline ActiveTrustedSigners& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>A complex type that contains one <code>Signer</code> complex type for each
     * trusted signer that is specified in the <code>TrustedSigners</code> complex
     * type.</p>
     */
    inline const Aws::Vector<Signer>& GetItems() const{ return m_items; }

    /**
     * <p>A complex type that contains one <code>Signer</code> complex type for each
     * trusted signer that is specified in the <code>TrustedSigners</code> complex
     * type.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A complex type that contains one <code>Signer</code> complex type for each
     * trusted signer that is specified in the <code>TrustedSigners</code> complex
     * type.</p>
     */
    inline void SetItems(const Aws::Vector<Signer>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A complex type that contains one <code>Signer</code> complex type for each
     * trusted signer that is specified in the <code>TrustedSigners</code> complex
     * type.</p>
     */
    inline void SetItems(Aws::Vector<Signer>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A complex type that contains one <code>Signer</code> complex type for each
     * trusted signer that is specified in the <code>TrustedSigners</code> complex
     * type.</p>
     */
    inline ActiveTrustedSigners& WithItems(const Aws::Vector<Signer>& value) { SetItems(value); return *this;}

    /**
     * <p>A complex type that contains one <code>Signer</code> complex type for each
     * trusted signer that is specified in the <code>TrustedSigners</code> complex
     * type.</p>
     */
    inline ActiveTrustedSigners& WithItems(Aws::Vector<Signer>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains one <code>Signer</code> complex type for each
     * trusted signer that is specified in the <code>TrustedSigners</code> complex
     * type.</p>
     */
    inline ActiveTrustedSigners& AddItems(const Signer& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one <code>Signer</code> complex type for each
     * trusted signer that is specified in the <code>TrustedSigners</code> complex
     * type.</p>
     */
    inline ActiveTrustedSigners& AddItems(Signer&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

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
