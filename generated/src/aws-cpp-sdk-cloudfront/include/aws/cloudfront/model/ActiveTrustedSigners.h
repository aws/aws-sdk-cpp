/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A list of Amazon Web Services accounts and the active CloudFront key pairs in
   * each account that CloudFront can use to verify the signatures of signed URLs and
   * signed cookies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ActiveTrustedSigners">AWS
   * API Reference</a></p>
   */
  class ActiveTrustedSigners
  {
  public:
    AWS_CLOUDFRONT_API ActiveTrustedSigners();
    AWS_CLOUDFRONT_API ActiveTrustedSigners(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ActiveTrustedSigners& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>This field is <code>true</code> if any of the Amazon Web Services accounts in
     * the list have active CloudFront key pairs that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies. If not, this field is
     * <code>false</code>.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>This field is <code>true</code> if any of the Amazon Web Services accounts in
     * the list have active CloudFront key pairs that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies. If not, this field is
     * <code>false</code>.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>This field is <code>true</code> if any of the Amazon Web Services accounts in
     * the list have active CloudFront key pairs that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies. If not, this field is
     * <code>false</code>.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>This field is <code>true</code> if any of the Amazon Web Services accounts in
     * the list have active CloudFront key pairs that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies. If not, this field is
     * <code>false</code>.</p>
     */
    inline ActiveTrustedSigners& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The number of Amazon Web Services accounts in the list.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of Amazon Web Services accounts in the list.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of Amazon Web Services accounts in the list.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of Amazon Web Services accounts in the list.</p>
     */
    inline ActiveTrustedSigners& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>A list of Amazon Web Services accounts and the identifiers of active
     * CloudFront key pairs in each account that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies.</p>
     */
    inline const Aws::Vector<Signer>& GetItems() const{ return m_items; }

    /**
     * <p>A list of Amazon Web Services accounts and the identifiers of active
     * CloudFront key pairs in each account that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A list of Amazon Web Services accounts and the identifiers of active
     * CloudFront key pairs in each account that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies.</p>
     */
    inline void SetItems(const Aws::Vector<Signer>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A list of Amazon Web Services accounts and the identifiers of active
     * CloudFront key pairs in each account that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies.</p>
     */
    inline void SetItems(Aws::Vector<Signer>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A list of Amazon Web Services accounts and the identifiers of active
     * CloudFront key pairs in each account that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies.</p>
     */
    inline ActiveTrustedSigners& WithItems(const Aws::Vector<Signer>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of Amazon Web Services accounts and the identifiers of active
     * CloudFront key pairs in each account that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies.</p>
     */
    inline ActiveTrustedSigners& WithItems(Aws::Vector<Signer>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Web Services accounts and the identifiers of active
     * CloudFront key pairs in each account that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies.</p>
     */
    inline ActiveTrustedSigners& AddItems(const Signer& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Web Services accounts and the identifiers of active
     * CloudFront key pairs in each account that CloudFront can use to verify the
     * signatures of signed URLs and signed cookies.</p>
     */
    inline ActiveTrustedSigners& AddItems(Signer&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<Signer> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
