/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A list of IP addresses and address ranges, in CIDR notation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupVariablesIpSetsDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API RuleGroupVariablesIpSetsDetails
  {
  public:
    RuleGroupVariablesIpSetsDetails();
    RuleGroupVariablesIpSetsDetails(Aws::Utils::Json::JsonView jsonValue);
    RuleGroupVariablesIpSetsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of IP addresses and ranges.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDefinition() const{ return m_definition; }

    /**
     * <p>The list of IP addresses and ranges.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The list of IP addresses and ranges.</p>
     */
    inline void SetDefinition(const Aws::Vector<Aws::String>& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The list of IP addresses and ranges.</p>
     */
    inline void SetDefinition(Aws::Vector<Aws::String>&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The list of IP addresses and ranges.</p>
     */
    inline RuleGroupVariablesIpSetsDetails& WithDefinition(const Aws::Vector<Aws::String>& value) { SetDefinition(value); return *this;}

    /**
     * <p>The list of IP addresses and ranges.</p>
     */
    inline RuleGroupVariablesIpSetsDetails& WithDefinition(Aws::Vector<Aws::String>&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The list of IP addresses and ranges.</p>
     */
    inline RuleGroupVariablesIpSetsDetails& AddDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition.push_back(value); return *this; }

    /**
     * <p>The list of IP addresses and ranges.</p>
     */
    inline RuleGroupVariablesIpSetsDetails& AddDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of IP addresses and ranges.</p>
     */
    inline RuleGroupVariablesIpSetsDetails& AddDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_definition;
    bool m_definitionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
