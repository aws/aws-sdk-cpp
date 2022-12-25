/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/KeyGroup.h>
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
   * <p>Contains information about a key group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/KeyGroupSummary">AWS
   * API Reference</a></p>
   */
  class KeyGroupSummary
  {
  public:
    AWS_CLOUDFRONT_API KeyGroupSummary();
    AWS_CLOUDFRONT_API KeyGroupSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API KeyGroupSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A key group.</p>
     */
    inline const KeyGroup& GetKeyGroup() const{ return m_keyGroup; }

    /**
     * <p>A key group.</p>
     */
    inline bool KeyGroupHasBeenSet() const { return m_keyGroupHasBeenSet; }

    /**
     * <p>A key group.</p>
     */
    inline void SetKeyGroup(const KeyGroup& value) { m_keyGroupHasBeenSet = true; m_keyGroup = value; }

    /**
     * <p>A key group.</p>
     */
    inline void SetKeyGroup(KeyGroup&& value) { m_keyGroupHasBeenSet = true; m_keyGroup = std::move(value); }

    /**
     * <p>A key group.</p>
     */
    inline KeyGroupSummary& WithKeyGroup(const KeyGroup& value) { SetKeyGroup(value); return *this;}

    /**
     * <p>A key group.</p>
     */
    inline KeyGroupSummary& WithKeyGroup(KeyGroup&& value) { SetKeyGroup(std::move(value)); return *this;}

  private:

    KeyGroup m_keyGroup;
    bool m_keyGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
