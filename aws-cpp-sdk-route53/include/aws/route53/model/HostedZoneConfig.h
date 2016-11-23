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
#include <aws/route53/Route53_EXPORTS.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains an optional comment about your hosted zone. If
   * you don't want to specify a comment, omit both the <code>HostedZoneConfig</code>
   * and <code>Comment</code> elements.</p>
   */
  class AWS_ROUTE53_API HostedZoneConfig
  {
  public:
    HostedZoneConfig();
    HostedZoneConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    HostedZoneConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * <p>Any comments that you want to include about the hosted zone.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>Any comments that you want to include about the hosted zone.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>Any comments that you want to include about the hosted zone.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>Any comments that you want to include about the hosted zone.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>Any comments that you want to include about the hosted zone.</p>
     */
    inline HostedZoneConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>Any comments that you want to include about the hosted zone.</p>
     */
    inline HostedZoneConfig& WithComment(Aws::String&& value) { SetComment(value); return *this;}

    /**
     * <p>Any comments that you want to include about the hosted zone.</p>
     */
    inline HostedZoneConfig& WithComment(const char* value) { SetComment(value); return *this;}

    /**
     * <p>A value that indicates whether this is a private hosted zone.</p>
     */
    inline bool GetPrivateZone() const{ return m_privateZone; }

    /**
     * <p>A value that indicates whether this is a private hosted zone.</p>
     */
    inline void SetPrivateZone(bool value) { m_privateZoneHasBeenSet = true; m_privateZone = value; }

    /**
     * <p>A value that indicates whether this is a private hosted zone.</p>
     */
    inline HostedZoneConfig& WithPrivateZone(bool value) { SetPrivateZone(value); return *this;}

  private:
    Aws::String m_comment;
    bool m_commentHasBeenSet;
    bool m_privateZone;
    bool m_privateZoneHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
