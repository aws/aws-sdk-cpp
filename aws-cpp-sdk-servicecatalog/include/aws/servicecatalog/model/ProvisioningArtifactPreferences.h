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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The user-defined preferences that will be applied during product
   * provisioning, unless overridden by <code>ProvisioningPreferences</code> or
   * <code>UpdateProvisioningPreferences</code>.</p> <p>For more information on
   * maximum concurrent accounts and failure tolerance, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">Stack
   * set operation options</a> in the <i>AWS CloudFormation User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactPreferences">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ProvisioningArtifactPreferences
  {
  public:
    ProvisioningArtifactPreferences();
    ProvisioningArtifactPreferences(Aws::Utils::Json::JsonView jsonValue);
    ProvisioningArtifactPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more AWS accounts where stack instances are deployed from the stack
     * set. These accounts can be scoped in
     * <code>ProvisioningPreferences$StackSetAccounts</code> and
     * <code>UpdateProvisioningPreferences$StackSetAccounts</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackSetAccounts() const{ return m_stackSetAccounts; }

    /**
     * <p>One or more AWS accounts where stack instances are deployed from the stack
     * set. These accounts can be scoped in
     * <code>ProvisioningPreferences$StackSetAccounts</code> and
     * <code>UpdateProvisioningPreferences$StackSetAccounts</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline bool StackSetAccountsHasBeenSet() const { return m_stackSetAccountsHasBeenSet; }

    /**
     * <p>One or more AWS accounts where stack instances are deployed from the stack
     * set. These accounts can be scoped in
     * <code>ProvisioningPreferences$StackSetAccounts</code> and
     * <code>UpdateProvisioningPreferences$StackSetAccounts</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline void SetStackSetAccounts(const Aws::Vector<Aws::String>& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts = value; }

    /**
     * <p>One or more AWS accounts where stack instances are deployed from the stack
     * set. These accounts can be scoped in
     * <code>ProvisioningPreferences$StackSetAccounts</code> and
     * <code>UpdateProvisioningPreferences$StackSetAccounts</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline void SetStackSetAccounts(Aws::Vector<Aws::String>&& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts = std::move(value); }

    /**
     * <p>One or more AWS accounts where stack instances are deployed from the stack
     * set. These accounts can be scoped in
     * <code>ProvisioningPreferences$StackSetAccounts</code> and
     * <code>UpdateProvisioningPreferences$StackSetAccounts</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline ProvisioningArtifactPreferences& WithStackSetAccounts(const Aws::Vector<Aws::String>& value) { SetStackSetAccounts(value); return *this;}

    /**
     * <p>One or more AWS accounts where stack instances are deployed from the stack
     * set. These accounts can be scoped in
     * <code>ProvisioningPreferences$StackSetAccounts</code> and
     * <code>UpdateProvisioningPreferences$StackSetAccounts</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline ProvisioningArtifactPreferences& WithStackSetAccounts(Aws::Vector<Aws::String>&& value) { SetStackSetAccounts(std::move(value)); return *this;}

    /**
     * <p>One or more AWS accounts where stack instances are deployed from the stack
     * set. These accounts can be scoped in
     * <code>ProvisioningPreferences$StackSetAccounts</code> and
     * <code>UpdateProvisioningPreferences$StackSetAccounts</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline ProvisioningArtifactPreferences& AddStackSetAccounts(const Aws::String& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts.push_back(value); return *this; }

    /**
     * <p>One or more AWS accounts where stack instances are deployed from the stack
     * set. These accounts can be scoped in
     * <code>ProvisioningPreferences$StackSetAccounts</code> and
     * <code>UpdateProvisioningPreferences$StackSetAccounts</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline ProvisioningArtifactPreferences& AddStackSetAccounts(Aws::String&& value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more AWS accounts where stack instances are deployed from the stack
     * set. These accounts can be scoped in
     * <code>ProvisioningPreferences$StackSetAccounts</code> and
     * <code>UpdateProvisioningPreferences$StackSetAccounts</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline ProvisioningArtifactPreferences& AddStackSetAccounts(const char* value) { m_stackSetAccountsHasBeenSet = true; m_stackSetAccounts.push_back(value); return *this; }


    /**
     * <p>One or more AWS Regions where stack instances are deployed from the stack
     * set. These regions can be scoped in
     * <code>ProvisioningPreferences$StackSetRegions</code> and
     * <code>UpdateProvisioningPreferences$StackSetRegions</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackSetRegions() const{ return m_stackSetRegions; }

    /**
     * <p>One or more AWS Regions where stack instances are deployed from the stack
     * set. These regions can be scoped in
     * <code>ProvisioningPreferences$StackSetRegions</code> and
     * <code>UpdateProvisioningPreferences$StackSetRegions</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline bool StackSetRegionsHasBeenSet() const { return m_stackSetRegionsHasBeenSet; }

    /**
     * <p>One or more AWS Regions where stack instances are deployed from the stack
     * set. These regions can be scoped in
     * <code>ProvisioningPreferences$StackSetRegions</code> and
     * <code>UpdateProvisioningPreferences$StackSetRegions</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline void SetStackSetRegions(const Aws::Vector<Aws::String>& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions = value; }

    /**
     * <p>One or more AWS Regions where stack instances are deployed from the stack
     * set. These regions can be scoped in
     * <code>ProvisioningPreferences$StackSetRegions</code> and
     * <code>UpdateProvisioningPreferences$StackSetRegions</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline void SetStackSetRegions(Aws::Vector<Aws::String>&& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions = std::move(value); }

    /**
     * <p>One or more AWS Regions where stack instances are deployed from the stack
     * set. These regions can be scoped in
     * <code>ProvisioningPreferences$StackSetRegions</code> and
     * <code>UpdateProvisioningPreferences$StackSetRegions</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline ProvisioningArtifactPreferences& WithStackSetRegions(const Aws::Vector<Aws::String>& value) { SetStackSetRegions(value); return *this;}

    /**
     * <p>One or more AWS Regions where stack instances are deployed from the stack
     * set. These regions can be scoped in
     * <code>ProvisioningPreferences$StackSetRegions</code> and
     * <code>UpdateProvisioningPreferences$StackSetRegions</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline ProvisioningArtifactPreferences& WithStackSetRegions(Aws::Vector<Aws::String>&& value) { SetStackSetRegions(std::move(value)); return *this;}

    /**
     * <p>One or more AWS Regions where stack instances are deployed from the stack
     * set. These regions can be scoped in
     * <code>ProvisioningPreferences$StackSetRegions</code> and
     * <code>UpdateProvisioningPreferences$StackSetRegions</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline ProvisioningArtifactPreferences& AddStackSetRegions(const Aws::String& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions.push_back(value); return *this; }

    /**
     * <p>One or more AWS Regions where stack instances are deployed from the stack
     * set. These regions can be scoped in
     * <code>ProvisioningPreferences$StackSetRegions</code> and
     * <code>UpdateProvisioningPreferences$StackSetRegions</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline ProvisioningArtifactPreferences& AddStackSetRegions(Aws::String&& value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more AWS Regions where stack instances are deployed from the stack
     * set. These regions can be scoped in
     * <code>ProvisioningPreferences$StackSetRegions</code> and
     * <code>UpdateProvisioningPreferences$StackSetRegions</code>.</p> <p>Applicable
     * only to a <code>CFN_STACKSET</code> provisioned product type.</p>
     */
    inline ProvisioningArtifactPreferences& AddStackSetRegions(const char* value) { m_stackSetRegionsHasBeenSet = true; m_stackSetRegions.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_stackSetAccounts;
    bool m_stackSetAccountsHasBeenSet;

    Aws::Vector<Aws::String> m_stackSetRegions;
    bool m_stackSetRegionsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
