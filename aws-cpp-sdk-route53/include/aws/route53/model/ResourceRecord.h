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
#include <aws/route53/Route53_EXPORTS.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>Information specific to the resource record.</p> <note> <p>If you're creating
   * an alias resource record set, omit <code>ResourceRecord</code>.</p>
   * </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ResourceRecord">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ResourceRecord
  {
  public:
    ResourceRecord();
    ResourceRecord(const Aws::Utils::Xml::XmlNode& xmlNode);
    ResourceRecord& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p> <note> <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> </note>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p> <note> <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> </note>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p> <note> <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> </note>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p> <note> <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> </note>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p> <note> <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> </note>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p> <note> <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> </note>
     */
    inline ResourceRecord& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p> <note> <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> </note>
     */
    inline ResourceRecord& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The current or new DNS record value, not to exceed 4,000 characters. In the
     * case of a <code>DELETE</code> action, if the current value does not match the
     * actual value, an error is returned. For descriptions about how to format
     * <code>Value</code> for different record types, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/ResourceRecordTypes.html">Supported
     * DNS Resource Record Types</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
     * <p>You can specify more than one value for all record types except
     * <code>CNAME</code> and <code>SOA</code>. </p> <note> <p>If you're creating an
     * alias resource record set, omit <code>Value</code>.</p> </note>
     */
    inline ResourceRecord& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
