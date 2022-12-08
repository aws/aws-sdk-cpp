/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a host header condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/HostHeaderConditionConfig">AWS
   * API Reference</a></p>
   */
  class HostHeaderConditionConfig
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API HostHeaderConditionConfig();
    AWS_ELASTICLOADBALANCINGV2_API HostHeaderConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API HostHeaderConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The host names. The maximum size of each name is 128 characters. The
     * comparison is case insensitive. The following wildcard characters are supported:
     * * (matches 0 or more characters) and ? (matches exactly 1 character).</p> <p>If
     * you specify multiple strings, the condition is satisfied if one of the strings
     * matches the host name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The host names. The maximum size of each name is 128 characters. The
     * comparison is case insensitive. The following wildcard characters are supported:
     * * (matches 0 or more characters) and ? (matches exactly 1 character).</p> <p>If
     * you specify multiple strings, the condition is satisfied if one of the strings
     * matches the host name.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The host names. The maximum size of each name is 128 characters. The
     * comparison is case insensitive. The following wildcard characters are supported:
     * * (matches 0 or more characters) and ? (matches exactly 1 character).</p> <p>If
     * you specify multiple strings, the condition is satisfied if one of the strings
     * matches the host name.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The host names. The maximum size of each name is 128 characters. The
     * comparison is case insensitive. The following wildcard characters are supported:
     * * (matches 0 or more characters) and ? (matches exactly 1 character).</p> <p>If
     * you specify multiple strings, the condition is satisfied if one of the strings
     * matches the host name.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The host names. The maximum size of each name is 128 characters. The
     * comparison is case insensitive. The following wildcard characters are supported:
     * * (matches 0 or more characters) and ? (matches exactly 1 character).</p> <p>If
     * you specify multiple strings, the condition is satisfied if one of the strings
     * matches the host name.</p>
     */
    inline HostHeaderConditionConfig& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The host names. The maximum size of each name is 128 characters. The
     * comparison is case insensitive. The following wildcard characters are supported:
     * * (matches 0 or more characters) and ? (matches exactly 1 character).</p> <p>If
     * you specify multiple strings, the condition is satisfied if one of the strings
     * matches the host name.</p>
     */
    inline HostHeaderConditionConfig& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The host names. The maximum size of each name is 128 characters. The
     * comparison is case insensitive. The following wildcard characters are supported:
     * * (matches 0 or more characters) and ? (matches exactly 1 character).</p> <p>If
     * you specify multiple strings, the condition is satisfied if one of the strings
     * matches the host name.</p>
     */
    inline HostHeaderConditionConfig& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The host names. The maximum size of each name is 128 characters. The
     * comparison is case insensitive. The following wildcard characters are supported:
     * * (matches 0 or more characters) and ? (matches exactly 1 character).</p> <p>If
     * you specify multiple strings, the condition is satisfied if one of the strings
     * matches the host name.</p>
     */
    inline HostHeaderConditionConfig& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The host names. The maximum size of each name is 128 characters. The
     * comparison is case insensitive. The following wildcard characters are supported:
     * * (matches 0 or more characters) and ? (matches exactly 1 character).</p> <p>If
     * you specify multiple strings, the condition is satisfied if one of the strings
     * matches the host name.</p>
     */
    inline HostHeaderConditionConfig& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
