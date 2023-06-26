/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/HostHeaderConditionConfig.h>
#include <aws/elasticloadbalancingv2/model/PathPatternConditionConfig.h>
#include <aws/elasticloadbalancingv2/model/HttpHeaderConditionConfig.h>
#include <aws/elasticloadbalancingv2/model/QueryStringConditionConfig.h>
#include <aws/elasticloadbalancingv2/model/HttpRequestMethodConditionConfig.h>
#include <aws/elasticloadbalancingv2/model/SourceIpConditionConfig.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a condition for a rule.</p> <p>Each rule can optionally
   * include up to one of each of the following conditions:
   * <code>http-request-method</code>, <code>host-header</code>,
   * <code>path-pattern</code>, and <code>source-ip</code>. Each rule can also
   * optionally include one or more of each of the following conditions:
   * <code>http-header</code> and <code>query-string</code>. Note that the value for
   * a condition cannot be empty.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RuleCondition">AWS
   * API Reference</a></p>
   */
  class RuleCondition
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API RuleCondition();
    AWS_ELASTICLOADBALANCINGV2_API RuleCondition(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API RuleCondition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The field in the HTTP request. The following are the possible values:</p>
     * <ul> <li> <p> <code>http-header</code> </p> </li> <li> <p>
     * <code>http-request-method</code> </p> </li> <li> <p> <code>host-header</code>
     * </p> </li> <li> <p> <code>path-pattern</code> </p> </li> <li> <p>
     * <code>query-string</code> </p> </li> <li> <p> <code>source-ip</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The field in the HTTP request. The following are the possible values:</p>
     * <ul> <li> <p> <code>http-header</code> </p> </li> <li> <p>
     * <code>http-request-method</code> </p> </li> <li> <p> <code>host-header</code>
     * </p> </li> <li> <p> <code>path-pattern</code> </p> </li> <li> <p>
     * <code>query-string</code> </p> </li> <li> <p> <code>source-ip</code> </p> </li>
     * </ul>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The field in the HTTP request. The following are the possible values:</p>
     * <ul> <li> <p> <code>http-header</code> </p> </li> <li> <p>
     * <code>http-request-method</code> </p> </li> <li> <p> <code>host-header</code>
     * </p> </li> <li> <p> <code>path-pattern</code> </p> </li> <li> <p>
     * <code>query-string</code> </p> </li> <li> <p> <code>source-ip</code> </p> </li>
     * </ul>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The field in the HTTP request. The following are the possible values:</p>
     * <ul> <li> <p> <code>http-header</code> </p> </li> <li> <p>
     * <code>http-request-method</code> </p> </li> <li> <p> <code>host-header</code>
     * </p> </li> <li> <p> <code>path-pattern</code> </p> </li> <li> <p>
     * <code>query-string</code> </p> </li> <li> <p> <code>source-ip</code> </p> </li>
     * </ul>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The field in the HTTP request. The following are the possible values:</p>
     * <ul> <li> <p> <code>http-header</code> </p> </li> <li> <p>
     * <code>http-request-method</code> </p> </li> <li> <p> <code>host-header</code>
     * </p> </li> <li> <p> <code>path-pattern</code> </p> </li> <li> <p>
     * <code>query-string</code> </p> </li> <li> <p> <code>source-ip</code> </p> </li>
     * </ul>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The field in the HTTP request. The following are the possible values:</p>
     * <ul> <li> <p> <code>http-header</code> </p> </li> <li> <p>
     * <code>http-request-method</code> </p> </li> <li> <p> <code>host-header</code>
     * </p> </li> <li> <p> <code>path-pattern</code> </p> </li> <li> <p>
     * <code>query-string</code> </p> </li> <li> <p> <code>source-ip</code> </p> </li>
     * </ul>
     */
    inline RuleCondition& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The field in the HTTP request. The following are the possible values:</p>
     * <ul> <li> <p> <code>http-header</code> </p> </li> <li> <p>
     * <code>http-request-method</code> </p> </li> <li> <p> <code>host-header</code>
     * </p> </li> <li> <p> <code>path-pattern</code> </p> </li> <li> <p>
     * <code>query-string</code> </p> </li> <li> <p> <code>source-ip</code> </p> </li>
     * </ul>
     */
    inline RuleCondition& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The field in the HTTP request. The following are the possible values:</p>
     * <ul> <li> <p> <code>http-header</code> </p> </li> <li> <p>
     * <code>http-request-method</code> </p> </li> <li> <p> <code>host-header</code>
     * </p> </li> <li> <p> <code>path-pattern</code> </p> </li> <li> <p>
     * <code>query-string</code> </p> </li> <li> <p> <code>source-ip</code> </p> </li>
     * </ul>
     */
    inline RuleCondition& WithField(const char* value) { SetField(value); return *this;}


    /**
     * <p>The condition value. Specify only when <code>Field</code> is
     * <code>host-header</code> or <code>path-pattern</code>. Alternatively, to specify
     * multiple host names or multiple path patterns, use <code>HostHeaderConfig</code>
     * or <code>PathPatternConfig</code>.</p> <p>If <code>Field</code> is
     * <code>host-header</code> and you are not using <code>HostHeaderConfig</code>,
     * you can specify a single host name (for example, my.example.com) in
     * <code>Values</code>. A host name is case insensitive, can be up to 128
     * characters in length, and can contain any of the following characters.</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If <code>Field</code> is <code>path-pattern</code> and you are not
     * using <code>PathPatternConfig</code>, you can specify a single path pattern (for
     * example, /img/ *) in <code>Values</code>. A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The condition value. Specify only when <code>Field</code> is
     * <code>host-header</code> or <code>path-pattern</code>. Alternatively, to specify
     * multiple host names or multiple path patterns, use <code>HostHeaderConfig</code>
     * or <code>PathPatternConfig</code>.</p> <p>If <code>Field</code> is
     * <code>host-header</code> and you are not using <code>HostHeaderConfig</code>,
     * you can specify a single host name (for example, my.example.com) in
     * <code>Values</code>. A host name is case insensitive, can be up to 128
     * characters in length, and can contain any of the following characters.</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If <code>Field</code> is <code>path-pattern</code> and you are not
     * using <code>PathPatternConfig</code>, you can specify a single path pattern (for
     * example, /img/ *) in <code>Values</code>. A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The condition value. Specify only when <code>Field</code> is
     * <code>host-header</code> or <code>path-pattern</code>. Alternatively, to specify
     * multiple host names or multiple path patterns, use <code>HostHeaderConfig</code>
     * or <code>PathPatternConfig</code>.</p> <p>If <code>Field</code> is
     * <code>host-header</code> and you are not using <code>HostHeaderConfig</code>,
     * you can specify a single host name (for example, my.example.com) in
     * <code>Values</code>. A host name is case insensitive, can be up to 128
     * characters in length, and can contain any of the following characters.</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If <code>Field</code> is <code>path-pattern</code> and you are not
     * using <code>PathPatternConfig</code>, you can specify a single path pattern (for
     * example, /img/ *) in <code>Values</code>. A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The condition value. Specify only when <code>Field</code> is
     * <code>host-header</code> or <code>path-pattern</code>. Alternatively, to specify
     * multiple host names or multiple path patterns, use <code>HostHeaderConfig</code>
     * or <code>PathPatternConfig</code>.</p> <p>If <code>Field</code> is
     * <code>host-header</code> and you are not using <code>HostHeaderConfig</code>,
     * you can specify a single host name (for example, my.example.com) in
     * <code>Values</code>. A host name is case insensitive, can be up to 128
     * characters in length, and can contain any of the following characters.</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If <code>Field</code> is <code>path-pattern</code> and you are not
     * using <code>PathPatternConfig</code>, you can specify a single path pattern (for
     * example, /img/ *) in <code>Values</code>. A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The condition value. Specify only when <code>Field</code> is
     * <code>host-header</code> or <code>path-pattern</code>. Alternatively, to specify
     * multiple host names or multiple path patterns, use <code>HostHeaderConfig</code>
     * or <code>PathPatternConfig</code>.</p> <p>If <code>Field</code> is
     * <code>host-header</code> and you are not using <code>HostHeaderConfig</code>,
     * you can specify a single host name (for example, my.example.com) in
     * <code>Values</code>. A host name is case insensitive, can be up to 128
     * characters in length, and can contain any of the following characters.</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If <code>Field</code> is <code>path-pattern</code> and you are not
     * using <code>PathPatternConfig</code>, you can specify a single path pattern (for
     * example, /img/ *) in <code>Values</code>. A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline RuleCondition& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The condition value. Specify only when <code>Field</code> is
     * <code>host-header</code> or <code>path-pattern</code>. Alternatively, to specify
     * multiple host names or multiple path patterns, use <code>HostHeaderConfig</code>
     * or <code>PathPatternConfig</code>.</p> <p>If <code>Field</code> is
     * <code>host-header</code> and you are not using <code>HostHeaderConfig</code>,
     * you can specify a single host name (for example, my.example.com) in
     * <code>Values</code>. A host name is case insensitive, can be up to 128
     * characters in length, and can contain any of the following characters.</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If <code>Field</code> is <code>path-pattern</code> and you are not
     * using <code>PathPatternConfig</code>, you can specify a single path pattern (for
     * example, /img/ *) in <code>Values</code>. A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline RuleCondition& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The condition value. Specify only when <code>Field</code> is
     * <code>host-header</code> or <code>path-pattern</code>. Alternatively, to specify
     * multiple host names or multiple path patterns, use <code>HostHeaderConfig</code>
     * or <code>PathPatternConfig</code>.</p> <p>If <code>Field</code> is
     * <code>host-header</code> and you are not using <code>HostHeaderConfig</code>,
     * you can specify a single host name (for example, my.example.com) in
     * <code>Values</code>. A host name is case insensitive, can be up to 128
     * characters in length, and can contain any of the following characters.</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If <code>Field</code> is <code>path-pattern</code> and you are not
     * using <code>PathPatternConfig</code>, you can specify a single path pattern (for
     * example, /img/ *) in <code>Values</code>. A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline RuleCondition& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The condition value. Specify only when <code>Field</code> is
     * <code>host-header</code> or <code>path-pattern</code>. Alternatively, to specify
     * multiple host names or multiple path patterns, use <code>HostHeaderConfig</code>
     * or <code>PathPatternConfig</code>.</p> <p>If <code>Field</code> is
     * <code>host-header</code> and you are not using <code>HostHeaderConfig</code>,
     * you can specify a single host name (for example, my.example.com) in
     * <code>Values</code>. A host name is case insensitive, can be up to 128
     * characters in length, and can contain any of the following characters.</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If <code>Field</code> is <code>path-pattern</code> and you are not
     * using <code>PathPatternConfig</code>, you can specify a single path pattern (for
     * example, /img/ *) in <code>Values</code>. A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline RuleCondition& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The condition value. Specify only when <code>Field</code> is
     * <code>host-header</code> or <code>path-pattern</code>. Alternatively, to specify
     * multiple host names or multiple path patterns, use <code>HostHeaderConfig</code>
     * or <code>PathPatternConfig</code>.</p> <p>If <code>Field</code> is
     * <code>host-header</code> and you are not using <code>HostHeaderConfig</code>,
     * you can specify a single host name (for example, my.example.com) in
     * <code>Values</code>. A host name is case insensitive, can be up to 128
     * characters in length, and can contain any of the following characters.</p> <ul>
     * <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If <code>Field</code> is <code>path-pattern</code> and you are not
     * using <code>PathPatternConfig</code>, you can specify a single path pattern (for
     * example, /img/ *) in <code>Values</code>. A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters.</p> <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ :
     * +</p> </li> <li> <p>&amp; (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or
     * more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul>
     */
    inline RuleCondition& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>Information for a host header condition. Specify only when <code>Field</code>
     * is <code>host-header</code>.</p>
     */
    inline const HostHeaderConditionConfig& GetHostHeaderConfig() const{ return m_hostHeaderConfig; }

    /**
     * <p>Information for a host header condition. Specify only when <code>Field</code>
     * is <code>host-header</code>.</p>
     */
    inline bool HostHeaderConfigHasBeenSet() const { return m_hostHeaderConfigHasBeenSet; }

    /**
     * <p>Information for a host header condition. Specify only when <code>Field</code>
     * is <code>host-header</code>.</p>
     */
    inline void SetHostHeaderConfig(const HostHeaderConditionConfig& value) { m_hostHeaderConfigHasBeenSet = true; m_hostHeaderConfig = value; }

    /**
     * <p>Information for a host header condition. Specify only when <code>Field</code>
     * is <code>host-header</code>.</p>
     */
    inline void SetHostHeaderConfig(HostHeaderConditionConfig&& value) { m_hostHeaderConfigHasBeenSet = true; m_hostHeaderConfig = std::move(value); }

    /**
     * <p>Information for a host header condition. Specify only when <code>Field</code>
     * is <code>host-header</code>.</p>
     */
    inline RuleCondition& WithHostHeaderConfig(const HostHeaderConditionConfig& value) { SetHostHeaderConfig(value); return *this;}

    /**
     * <p>Information for a host header condition. Specify only when <code>Field</code>
     * is <code>host-header</code>.</p>
     */
    inline RuleCondition& WithHostHeaderConfig(HostHeaderConditionConfig&& value) { SetHostHeaderConfig(std::move(value)); return *this;}


    /**
     * <p>Information for a path pattern condition. Specify only when
     * <code>Field</code> is <code>path-pattern</code>.</p>
     */
    inline const PathPatternConditionConfig& GetPathPatternConfig() const{ return m_pathPatternConfig; }

    /**
     * <p>Information for a path pattern condition. Specify only when
     * <code>Field</code> is <code>path-pattern</code>.</p>
     */
    inline bool PathPatternConfigHasBeenSet() const { return m_pathPatternConfigHasBeenSet; }

    /**
     * <p>Information for a path pattern condition. Specify only when
     * <code>Field</code> is <code>path-pattern</code>.</p>
     */
    inline void SetPathPatternConfig(const PathPatternConditionConfig& value) { m_pathPatternConfigHasBeenSet = true; m_pathPatternConfig = value; }

    /**
     * <p>Information for a path pattern condition. Specify only when
     * <code>Field</code> is <code>path-pattern</code>.</p>
     */
    inline void SetPathPatternConfig(PathPatternConditionConfig&& value) { m_pathPatternConfigHasBeenSet = true; m_pathPatternConfig = std::move(value); }

    /**
     * <p>Information for a path pattern condition. Specify only when
     * <code>Field</code> is <code>path-pattern</code>.</p>
     */
    inline RuleCondition& WithPathPatternConfig(const PathPatternConditionConfig& value) { SetPathPatternConfig(value); return *this;}

    /**
     * <p>Information for a path pattern condition. Specify only when
     * <code>Field</code> is <code>path-pattern</code>.</p>
     */
    inline RuleCondition& WithPathPatternConfig(PathPatternConditionConfig&& value) { SetPathPatternConfig(std::move(value)); return *this;}


    /**
     * <p>Information for an HTTP header condition. Specify only when
     * <code>Field</code> is <code>http-header</code>.</p>
     */
    inline const HttpHeaderConditionConfig& GetHttpHeaderConfig() const{ return m_httpHeaderConfig; }

    /**
     * <p>Information for an HTTP header condition. Specify only when
     * <code>Field</code> is <code>http-header</code>.</p>
     */
    inline bool HttpHeaderConfigHasBeenSet() const { return m_httpHeaderConfigHasBeenSet; }

    /**
     * <p>Information for an HTTP header condition. Specify only when
     * <code>Field</code> is <code>http-header</code>.</p>
     */
    inline void SetHttpHeaderConfig(const HttpHeaderConditionConfig& value) { m_httpHeaderConfigHasBeenSet = true; m_httpHeaderConfig = value; }

    /**
     * <p>Information for an HTTP header condition. Specify only when
     * <code>Field</code> is <code>http-header</code>.</p>
     */
    inline void SetHttpHeaderConfig(HttpHeaderConditionConfig&& value) { m_httpHeaderConfigHasBeenSet = true; m_httpHeaderConfig = std::move(value); }

    /**
     * <p>Information for an HTTP header condition. Specify only when
     * <code>Field</code> is <code>http-header</code>.</p>
     */
    inline RuleCondition& WithHttpHeaderConfig(const HttpHeaderConditionConfig& value) { SetHttpHeaderConfig(value); return *this;}

    /**
     * <p>Information for an HTTP header condition. Specify only when
     * <code>Field</code> is <code>http-header</code>.</p>
     */
    inline RuleCondition& WithHttpHeaderConfig(HttpHeaderConditionConfig&& value) { SetHttpHeaderConfig(std::move(value)); return *this;}


    /**
     * <p>Information for a query string condition. Specify only when
     * <code>Field</code> is <code>query-string</code>.</p>
     */
    inline const QueryStringConditionConfig& GetQueryStringConfig() const{ return m_queryStringConfig; }

    /**
     * <p>Information for a query string condition. Specify only when
     * <code>Field</code> is <code>query-string</code>.</p>
     */
    inline bool QueryStringConfigHasBeenSet() const { return m_queryStringConfigHasBeenSet; }

    /**
     * <p>Information for a query string condition. Specify only when
     * <code>Field</code> is <code>query-string</code>.</p>
     */
    inline void SetQueryStringConfig(const QueryStringConditionConfig& value) { m_queryStringConfigHasBeenSet = true; m_queryStringConfig = value; }

    /**
     * <p>Information for a query string condition. Specify only when
     * <code>Field</code> is <code>query-string</code>.</p>
     */
    inline void SetQueryStringConfig(QueryStringConditionConfig&& value) { m_queryStringConfigHasBeenSet = true; m_queryStringConfig = std::move(value); }

    /**
     * <p>Information for a query string condition. Specify only when
     * <code>Field</code> is <code>query-string</code>.</p>
     */
    inline RuleCondition& WithQueryStringConfig(const QueryStringConditionConfig& value) { SetQueryStringConfig(value); return *this;}

    /**
     * <p>Information for a query string condition. Specify only when
     * <code>Field</code> is <code>query-string</code>.</p>
     */
    inline RuleCondition& WithQueryStringConfig(QueryStringConditionConfig&& value) { SetQueryStringConfig(std::move(value)); return *this;}


    /**
     * <p>Information for an HTTP method condition. Specify only when
     * <code>Field</code> is <code>http-request-method</code>.</p>
     */
    inline const HttpRequestMethodConditionConfig& GetHttpRequestMethodConfig() const{ return m_httpRequestMethodConfig; }

    /**
     * <p>Information for an HTTP method condition. Specify only when
     * <code>Field</code> is <code>http-request-method</code>.</p>
     */
    inline bool HttpRequestMethodConfigHasBeenSet() const { return m_httpRequestMethodConfigHasBeenSet; }

    /**
     * <p>Information for an HTTP method condition. Specify only when
     * <code>Field</code> is <code>http-request-method</code>.</p>
     */
    inline void SetHttpRequestMethodConfig(const HttpRequestMethodConditionConfig& value) { m_httpRequestMethodConfigHasBeenSet = true; m_httpRequestMethodConfig = value; }

    /**
     * <p>Information for an HTTP method condition. Specify only when
     * <code>Field</code> is <code>http-request-method</code>.</p>
     */
    inline void SetHttpRequestMethodConfig(HttpRequestMethodConditionConfig&& value) { m_httpRequestMethodConfigHasBeenSet = true; m_httpRequestMethodConfig = std::move(value); }

    /**
     * <p>Information for an HTTP method condition. Specify only when
     * <code>Field</code> is <code>http-request-method</code>.</p>
     */
    inline RuleCondition& WithHttpRequestMethodConfig(const HttpRequestMethodConditionConfig& value) { SetHttpRequestMethodConfig(value); return *this;}

    /**
     * <p>Information for an HTTP method condition. Specify only when
     * <code>Field</code> is <code>http-request-method</code>.</p>
     */
    inline RuleCondition& WithHttpRequestMethodConfig(HttpRequestMethodConditionConfig&& value) { SetHttpRequestMethodConfig(std::move(value)); return *this;}


    /**
     * <p>Information for a source IP condition. Specify only when <code>Field</code>
     * is <code>source-ip</code>.</p>
     */
    inline const SourceIpConditionConfig& GetSourceIpConfig() const{ return m_sourceIpConfig; }

    /**
     * <p>Information for a source IP condition. Specify only when <code>Field</code>
     * is <code>source-ip</code>.</p>
     */
    inline bool SourceIpConfigHasBeenSet() const { return m_sourceIpConfigHasBeenSet; }

    /**
     * <p>Information for a source IP condition. Specify only when <code>Field</code>
     * is <code>source-ip</code>.</p>
     */
    inline void SetSourceIpConfig(const SourceIpConditionConfig& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = value; }

    /**
     * <p>Information for a source IP condition. Specify only when <code>Field</code>
     * is <code>source-ip</code>.</p>
     */
    inline void SetSourceIpConfig(SourceIpConditionConfig&& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = std::move(value); }

    /**
     * <p>Information for a source IP condition. Specify only when <code>Field</code>
     * is <code>source-ip</code>.</p>
     */
    inline RuleCondition& WithSourceIpConfig(const SourceIpConditionConfig& value) { SetSourceIpConfig(value); return *this;}

    /**
     * <p>Information for a source IP condition. Specify only when <code>Field</code>
     * is <code>source-ip</code>.</p>
     */
    inline RuleCondition& WithSourceIpConfig(SourceIpConditionConfig&& value) { SetSourceIpConfig(std::move(value)); return *this;}

  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    HostHeaderConditionConfig m_hostHeaderConfig;
    bool m_hostHeaderConfigHasBeenSet = false;

    PathPatternConditionConfig m_pathPatternConfig;
    bool m_pathPatternConfigHasBeenSet = false;

    HttpHeaderConditionConfig m_httpHeaderConfig;
    bool m_httpHeaderConfigHasBeenSet = false;

    QueryStringConditionConfig m_queryStringConfig;
    bool m_queryStringConfigHasBeenSet = false;

    HttpRequestMethodConditionConfig m_httpRequestMethodConfig;
    bool m_httpRequestMethodConfigHasBeenSet = false;

    SourceIpConditionConfig m_sourceIpConfig;
    bool m_sourceIpConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
