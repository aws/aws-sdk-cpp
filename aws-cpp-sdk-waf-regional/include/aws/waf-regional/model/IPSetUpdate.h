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
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/ChangeAction.h>
#include <aws/waf-regional/model/IPSetDescriptor.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFRegional
{
namespace Model
{

  /**
   * <p>Specifies the type of update to perform to an <a>IPSet</a> with
   * <a>UpdateIPSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/IPSetUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_WAFREGIONAL_API IPSetUpdate
  {
  public:
    IPSetUpdate();
    IPSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    IPSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to insert or delete an IP address with
     * <a>UpdateIPSet</a>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies whether to insert or delete an IP address with
     * <a>UpdateIPSet</a>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies whether to insert or delete an IP address with
     * <a>UpdateIPSet</a>.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies whether to insert or delete an IP address with
     * <a>UpdateIPSet</a>.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies whether to insert or delete an IP address with
     * <a>UpdateIPSet</a>.</p>
     */
    inline IPSetUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies whether to insert or delete an IP address with
     * <a>UpdateIPSet</a>.</p>
     */
    inline IPSetUpdate& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from.</p>
     */
    inline const IPSetDescriptor& GetIPSetDescriptor() const{ return m_iPSetDescriptor; }

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from.</p>
     */
    inline bool IPSetDescriptorHasBeenSet() const { return m_iPSetDescriptorHasBeenSet; }

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from.</p>
     */
    inline void SetIPSetDescriptor(const IPSetDescriptor& value) { m_iPSetDescriptorHasBeenSet = true; m_iPSetDescriptor = value; }

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from.</p>
     */
    inline void SetIPSetDescriptor(IPSetDescriptor&& value) { m_iPSetDescriptorHasBeenSet = true; m_iPSetDescriptor = std::move(value); }

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from.</p>
     */
    inline IPSetUpdate& WithIPSetDescriptor(const IPSetDescriptor& value) { SetIPSetDescriptor(value); return *this;}

    /**
     * <p>The IP address type (<code>IPV4</code> or <code>IPV6</code>) and the IP
     * address range (in CIDR notation) that web requests originate from.</p>
     */
    inline IPSetUpdate& WithIPSetDescriptor(IPSetDescriptor&& value) { SetIPSetDescriptor(std::move(value)); return *this;}

  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet;

    IPSetDescriptor m_iPSetDescriptor;
    bool m_iPSetDescriptorHasBeenSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
