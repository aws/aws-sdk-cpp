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
   * a condition can't be empty.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-limits.html">Quotas
   * for your Application Load Balancers</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RuleCondition">AWS
   * API Reference</a></p>
   */
  class RuleCondition
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API RuleCondition() = default;
    AWS_ELASTICLOADBALANCINGV2_API RuleCondition(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API RuleCondition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The field in the HTTP request. The following are the possible values:</p>
     * <ul> <li> <p> <code>http-header</code> </p> </li> <li> <p>
     * <code>http-request-method</code> </p> </li> <li> <p> <code>host-header</code>
     * </p> </li> <li> <p> <code>path-pattern</code> </p> </li> <li> <p>
     * <code>query-string</code> </p> </li> <li> <p> <code>source-ip</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    RuleCondition& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    RuleCondition& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    RuleCondition& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information for a host header condition. Specify only when <code>Field</code>
     * is <code>host-header</code>.</p>
     */
    inline const HostHeaderConditionConfig& GetHostHeaderConfig() const { return m_hostHeaderConfig; }
    inline bool HostHeaderConfigHasBeenSet() const { return m_hostHeaderConfigHasBeenSet; }
    template<typename HostHeaderConfigT = HostHeaderConditionConfig>
    void SetHostHeaderConfig(HostHeaderConfigT&& value) { m_hostHeaderConfigHasBeenSet = true; m_hostHeaderConfig = std::forward<HostHeaderConfigT>(value); }
    template<typename HostHeaderConfigT = HostHeaderConditionConfig>
    RuleCondition& WithHostHeaderConfig(HostHeaderConfigT&& value) { SetHostHeaderConfig(std::forward<HostHeaderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information for a path pattern condition. Specify only when
     * <code>Field</code> is <code>path-pattern</code>.</p>
     */
    inline const PathPatternConditionConfig& GetPathPatternConfig() const { return m_pathPatternConfig; }
    inline bool PathPatternConfigHasBeenSet() const { return m_pathPatternConfigHasBeenSet; }
    template<typename PathPatternConfigT = PathPatternConditionConfig>
    void SetPathPatternConfig(PathPatternConfigT&& value) { m_pathPatternConfigHasBeenSet = true; m_pathPatternConfig = std::forward<PathPatternConfigT>(value); }
    template<typename PathPatternConfigT = PathPatternConditionConfig>
    RuleCondition& WithPathPatternConfig(PathPatternConfigT&& value) { SetPathPatternConfig(std::forward<PathPatternConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information for an HTTP header condition. Specify only when
     * <code>Field</code> is <code>http-header</code>.</p>
     */
    inline const HttpHeaderConditionConfig& GetHttpHeaderConfig() const { return m_httpHeaderConfig; }
    inline bool HttpHeaderConfigHasBeenSet() const { return m_httpHeaderConfigHasBeenSet; }
    template<typename HttpHeaderConfigT = HttpHeaderConditionConfig>
    void SetHttpHeaderConfig(HttpHeaderConfigT&& value) { m_httpHeaderConfigHasBeenSet = true; m_httpHeaderConfig = std::forward<HttpHeaderConfigT>(value); }
    template<typename HttpHeaderConfigT = HttpHeaderConditionConfig>
    RuleCondition& WithHttpHeaderConfig(HttpHeaderConfigT&& value) { SetHttpHeaderConfig(std::forward<HttpHeaderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information for a query string condition. Specify only when
     * <code>Field</code> is <code>query-string</code>.</p>
     */
    inline const QueryStringConditionConfig& GetQueryStringConfig() const { return m_queryStringConfig; }
    inline bool QueryStringConfigHasBeenSet() const { return m_queryStringConfigHasBeenSet; }
    template<typename QueryStringConfigT = QueryStringConditionConfig>
    void SetQueryStringConfig(QueryStringConfigT&& value) { m_queryStringConfigHasBeenSet = true; m_queryStringConfig = std::forward<QueryStringConfigT>(value); }
    template<typename QueryStringConfigT = QueryStringConditionConfig>
    RuleCondition& WithQueryStringConfig(QueryStringConfigT&& value) { SetQueryStringConfig(std::forward<QueryStringConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information for an HTTP method condition. Specify only when
     * <code>Field</code> is <code>http-request-method</code>.</p>
     */
    inline const HttpRequestMethodConditionConfig& GetHttpRequestMethodConfig() const { return m_httpRequestMethodConfig; }
    inline bool HttpRequestMethodConfigHasBeenSet() const { return m_httpRequestMethodConfigHasBeenSet; }
    template<typename HttpRequestMethodConfigT = HttpRequestMethodConditionConfig>
    void SetHttpRequestMethodConfig(HttpRequestMethodConfigT&& value) { m_httpRequestMethodConfigHasBeenSet = true; m_httpRequestMethodConfig = std::forward<HttpRequestMethodConfigT>(value); }
    template<typename HttpRequestMethodConfigT = HttpRequestMethodConditionConfig>
    RuleCondition& WithHttpRequestMethodConfig(HttpRequestMethodConfigT&& value) { SetHttpRequestMethodConfig(std::forward<HttpRequestMethodConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information for a source IP condition. Specify only when <code>Field</code>
     * is <code>source-ip</code>.</p>
     */
    inline const SourceIpConditionConfig& GetSourceIpConfig() const { return m_sourceIpConfig; }
    inline bool SourceIpConfigHasBeenSet() const { return m_sourceIpConfigHasBeenSet; }
    template<typename SourceIpConfigT = SourceIpConditionConfig>
    void SetSourceIpConfig(SourceIpConfigT&& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = std::forward<SourceIpConfigT>(value); }
    template<typename SourceIpConfigT = SourceIpConditionConfig>
    RuleCondition& WithSourceIpConfig(SourceIpConfigT&& value) { SetSourceIpConfig(std::forward<SourceIpConfigT>(value)); return *this;}
    ///@}
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
