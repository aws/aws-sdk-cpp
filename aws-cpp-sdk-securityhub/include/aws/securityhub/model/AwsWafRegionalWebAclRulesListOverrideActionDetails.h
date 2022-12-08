/**
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
   * <p>Provides details about the action to use in the place of the action that
   * results from the rule group evaluation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalWebAclRulesListOverrideActionDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRegionalWebAclRulesListOverrideActionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListOverrideActionDetails();
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListOverrideActionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListOverrideActionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline AwsWafRegionalWebAclRulesListOverrideActionDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline AwsWafRegionalWebAclRulesListOverrideActionDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline AwsWafRegionalWebAclRulesListOverrideActionDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
