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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a condition for a rule.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API RuleCondition
  {
  public:
    RuleCondition();
    RuleCondition(const Aws::Utils::Xml::XmlNode& xmlNode);
    RuleCondition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The only possible value is <code>path-pattern</code>.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The only possible value is <code>path-pattern</code>.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The only possible value is <code>path-pattern</code>.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The only possible value is <code>path-pattern</code>.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The only possible value is <code>path-pattern</code>.</p>
     */
    inline RuleCondition& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The only possible value is <code>path-pattern</code>.</p>
     */
    inline RuleCondition& WithField(Aws::String&& value) { SetField(value); return *this;}

    /**
     * <p>The only possible value is <code>path-pattern</code>.</p>
     */
    inline RuleCondition& WithField(const char* value) { SetField(value); return *this;}

    /**
     * <p>The path pattern. You can specify a single path pattern.</p> <p>A path
     * pattern is case sensitive, can be up to 255 characters in length, and can
     * contain any of the following characters:</p> <ul> <li> <p>A-Z, a-z, 0-9</p>
     * </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp; (using
     * &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li> <li>
     * <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The path pattern. You can specify a single path pattern.</p> <p>A path
     * pattern is case sensitive, can be up to 255 characters in length, and can
     * contain any of the following characters:</p> <ul> <li> <p>A-Z, a-z, 0-9</p>
     * </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp; (using
     * &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li> <li>
     * <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The path pattern. You can specify a single path pattern.</p> <p>A path
     * pattern is case sensitive, can be up to 255 characters in length, and can
     * contain any of the following characters:</p> <ul> <li> <p>A-Z, a-z, 0-9</p>
     * </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp; (using
     * &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li> <li>
     * <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The path pattern. You can specify a single path pattern.</p> <p>A path
     * pattern is case sensitive, can be up to 255 characters in length, and can
     * contain any of the following characters:</p> <ul> <li> <p>A-Z, a-z, 0-9</p>
     * </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp; (using
     * &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li> <li>
     * <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline RuleCondition& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The path pattern. You can specify a single path pattern.</p> <p>A path
     * pattern is case sensitive, can be up to 255 characters in length, and can
     * contain any of the following characters:</p> <ul> <li> <p>A-Z, a-z, 0-9</p>
     * </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp; (using
     * &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li> <li>
     * <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline RuleCondition& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(value); return *this;}

    /**
     * <p>The path pattern. You can specify a single path pattern.</p> <p>A path
     * pattern is case sensitive, can be up to 255 characters in length, and can
     * contain any of the following characters:</p> <ul> <li> <p>A-Z, a-z, 0-9</p>
     * </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp; (using
     * &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li> <li>
     * <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline RuleCondition& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The path pattern. You can specify a single path pattern.</p> <p>A path
     * pattern is case sensitive, can be up to 255 characters in length, and can
     * contain any of the following characters:</p> <ul> <li> <p>A-Z, a-z, 0-9</p>
     * </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp; (using
     * &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li> <li>
     * <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline RuleCondition& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The path pattern. You can specify a single path pattern.</p> <p>A path
     * pattern is case sensitive, can be up to 255 characters in length, and can
     * contain any of the following characters:</p> <ul> <li> <p>A-Z, a-z, 0-9</p>
     * </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp; (using
     * &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li> <li>
     * <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline RuleCondition& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:
    Aws::String m_field;
    bool m_fieldHasBeenSet;
    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
