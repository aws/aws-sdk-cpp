/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
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
   * <p>An origin in an origin group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginGroupMember">AWS
   * API Reference</a></p>
   */
  class OriginGroupMember
  {
  public:
    AWS_CLOUDFRONT_API OriginGroupMember();
    AWS_CLOUDFRONT_API OriginGroupMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginGroupMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ID for an origin in an origin group.</p>
     */
    inline const Aws::String& GetOriginId() const{ return m_originId; }

    /**
     * <p>The ID for an origin in an origin group.</p>
     */
    inline bool OriginIdHasBeenSet() const { return m_originIdHasBeenSet; }

    /**
     * <p>The ID for an origin in an origin group.</p>
     */
    inline void SetOriginId(const Aws::String& value) { m_originIdHasBeenSet = true; m_originId = value; }

    /**
     * <p>The ID for an origin in an origin group.</p>
     */
    inline void SetOriginId(Aws::String&& value) { m_originIdHasBeenSet = true; m_originId = std::move(value); }

    /**
     * <p>The ID for an origin in an origin group.</p>
     */
    inline void SetOriginId(const char* value) { m_originIdHasBeenSet = true; m_originId.assign(value); }

    /**
     * <p>The ID for an origin in an origin group.</p>
     */
    inline OriginGroupMember& WithOriginId(const Aws::String& value) { SetOriginId(value); return *this;}

    /**
     * <p>The ID for an origin in an origin group.</p>
     */
    inline OriginGroupMember& WithOriginId(Aws::String&& value) { SetOriginId(std::move(value)); return *this;}

    /**
     * <p>The ID for an origin in an origin group.</p>
     */
    inline OriginGroupMember& WithOriginId(const char* value) { SetOriginId(value); return *this;}

  private:

    Aws::String m_originId;
    bool m_originIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
