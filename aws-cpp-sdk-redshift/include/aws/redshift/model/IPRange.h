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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes an IP range used in a security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/IPRange">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API IPRange
  {
  public:
    IPRange();
    IPRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    IPRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The status of the IP range, for example, "authorized".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the IP range, for example, "authorized".</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the IP range, for example, "authorized".</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the IP range, for example, "authorized".</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the IP range, for example, "authorized".</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the IP range, for example, "authorized".</p>
     */
    inline IPRange& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the IP range, for example, "authorized".</p>
     */
    inline IPRange& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the IP range, for example, "authorized".</p>
     */
    inline IPRange& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The IP range in Classless Inter-Domain Routing (CIDR) notation.</p>
     */
    inline const Aws::String& GetCIDRIP() const{ return m_cIDRIP; }

    /**
     * <p>The IP range in Classless Inter-Domain Routing (CIDR) notation.</p>
     */
    inline bool CIDRIPHasBeenSet() const { return m_cIDRIPHasBeenSet; }

    /**
     * <p>The IP range in Classless Inter-Domain Routing (CIDR) notation.</p>
     */
    inline void SetCIDRIP(const Aws::String& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = value; }

    /**
     * <p>The IP range in Classless Inter-Domain Routing (CIDR) notation.</p>
     */
    inline void SetCIDRIP(Aws::String&& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = std::move(value); }

    /**
     * <p>The IP range in Classless Inter-Domain Routing (CIDR) notation.</p>
     */
    inline void SetCIDRIP(const char* value) { m_cIDRIPHasBeenSet = true; m_cIDRIP.assign(value); }

    /**
     * <p>The IP range in Classless Inter-Domain Routing (CIDR) notation.</p>
     */
    inline IPRange& WithCIDRIP(const Aws::String& value) { SetCIDRIP(value); return *this;}

    /**
     * <p>The IP range in Classless Inter-Domain Routing (CIDR) notation.</p>
     */
    inline IPRange& WithCIDRIP(Aws::String&& value) { SetCIDRIP(std::move(value)); return *this;}

    /**
     * <p>The IP range in Classless Inter-Domain Routing (CIDR) notation.</p>
     */
    inline IPRange& WithCIDRIP(const char* value) { SetCIDRIP(value); return *this;}


    /**
     * <p>The list of tags for the IP range.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags for the IP range.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags for the IP range.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags for the IP range.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags for the IP range.</p>
     */
    inline IPRange& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags for the IP range.</p>
     */
    inline IPRange& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags for the IP range.</p>
     */
    inline IPRange& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags for the IP range.</p>
     */
    inline IPRange& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_cIDRIP;
    bool m_cIDRIPHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
