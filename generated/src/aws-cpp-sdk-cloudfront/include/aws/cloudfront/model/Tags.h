/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/Tag.h>
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
   * <p>A complex type that contains zero or more <code>Tag</code>
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/Tags">AWS API
   * Reference</a></p>
   */
  class Tags
  {
  public:
    AWS_CLOUDFRONT_API Tags();
    AWS_CLOUDFRONT_API Tags(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API Tags& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A complex type that contains <code>Tag</code> elements.</p>
     */
    inline const Aws::Vector<Tag>& GetItems() const{ return m_items; }

    /**
     * <p>A complex type that contains <code>Tag</code> elements.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A complex type that contains <code>Tag</code> elements.</p>
     */
    inline void SetItems(const Aws::Vector<Tag>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A complex type that contains <code>Tag</code> elements.</p>
     */
    inline void SetItems(Aws::Vector<Tag>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A complex type that contains <code>Tag</code> elements.</p>
     */
    inline Tags& WithItems(const Aws::Vector<Tag>& value) { SetItems(value); return *this;}

    /**
     * <p>A complex type that contains <code>Tag</code> elements.</p>
     */
    inline Tags& WithItems(Aws::Vector<Tag>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains <code>Tag</code> elements.</p>
     */
    inline Tags& AddItems(const Tag& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A complex type that contains <code>Tag</code> elements.</p>
     */
    inline Tags& AddItems(Tag&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Tag> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
