/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A key group configuration.</p> <p>A key group contains a list of public keys
   * that you can use with <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">CloudFront
   * signed URLs and signed cookies</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/KeyGroupConfig">AWS
   * API Reference</a></p>
   */
  class KeyGroupConfig
  {
  public:
    AWS_CLOUDFRONT_API KeyGroupConfig();
    AWS_CLOUDFRONT_API KeyGroupConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API KeyGroupConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A name to identify the key group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name to identify the key group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name to identify the key group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name to identify the key group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name to identify the key group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name to identify the key group.</p>
     */
    inline KeyGroupConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name to identify the key group.</p>
     */
    inline KeyGroupConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name to identify the key group.</p>
     */
    inline KeyGroupConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of the identifiers of the public keys in the key group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * <p>A list of the identifiers of the public keys in the key group.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A list of the identifiers of the public keys in the key group.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A list of the identifiers of the public keys in the key group.</p>
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A list of the identifiers of the public keys in the key group.</p>
     */
    inline KeyGroupConfig& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of the identifiers of the public keys in the key group.</p>
     */
    inline KeyGroupConfig& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of the identifiers of the public keys in the key group.</p>
     */
    inline KeyGroupConfig& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A list of the identifiers of the public keys in the key group.</p>
     */
    inline KeyGroupConfig& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the identifiers of the public keys in the key group.</p>
     */
    inline KeyGroupConfig& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }


    /**
     * <p>A comment to describe the key group. The comment cannot be longer than 128
     * characters.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A comment to describe the key group. The comment cannot be longer than 128
     * characters.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A comment to describe the key group. The comment cannot be longer than 128
     * characters.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A comment to describe the key group. The comment cannot be longer than 128
     * characters.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A comment to describe the key group. The comment cannot be longer than 128
     * characters.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A comment to describe the key group. The comment cannot be longer than 128
     * characters.</p>
     */
    inline KeyGroupConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment to describe the key group. The comment cannot be longer than 128
     * characters.</p>
     */
    inline KeyGroupConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment to describe the key group. The comment cannot be longer than 128
     * characters.</p>
     */
    inline KeyGroupConfig& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
