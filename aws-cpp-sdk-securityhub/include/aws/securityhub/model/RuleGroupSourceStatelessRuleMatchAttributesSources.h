﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A source IP addresses and address range to inspect for.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatelessRuleMatchAttributesSources">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributesSources
  {
  public:
    RuleGroupSourceStatelessRuleMatchAttributesSources();
    RuleGroupSourceStatelessRuleMatchAttributesSources(Aws::Utils::Json::JsonView jsonValue);
    RuleGroupSourceStatelessRuleMatchAttributesSources& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An IP address or a block of IP addresses.</p>
     */
    inline const Aws::String& GetAddressDefinition() const{ return m_addressDefinition; }

    /**
     * <p>An IP address or a block of IP addresses.</p>
     */
    inline bool AddressDefinitionHasBeenSet() const { return m_addressDefinitionHasBeenSet; }

    /**
     * <p>An IP address or a block of IP addresses.</p>
     */
    inline void SetAddressDefinition(const Aws::String& value) { m_addressDefinitionHasBeenSet = true; m_addressDefinition = value; }

    /**
     * <p>An IP address or a block of IP addresses.</p>
     */
    inline void SetAddressDefinition(Aws::String&& value) { m_addressDefinitionHasBeenSet = true; m_addressDefinition = std::move(value); }

    /**
     * <p>An IP address or a block of IP addresses.</p>
     */
    inline void SetAddressDefinition(const char* value) { m_addressDefinitionHasBeenSet = true; m_addressDefinition.assign(value); }

    /**
     * <p>An IP address or a block of IP addresses.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesSources& WithAddressDefinition(const Aws::String& value) { SetAddressDefinition(value); return *this;}

    /**
     * <p>An IP address or a block of IP addresses.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesSources& WithAddressDefinition(Aws::String&& value) { SetAddressDefinition(std::move(value)); return *this;}

    /**
     * <p>An IP address or a block of IP addresses.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributesSources& WithAddressDefinition(const char* value) { SetAddressDefinition(value); return *this;}

  private:

    Aws::String m_addressDefinition;
    bool m_addressDefinitionHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
