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
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The combination of AWS Regions and accounts targeted by the current
   * Automation execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TargetLocation">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API TargetLocation
  {
  public:
    TargetLocation();
    TargetLocation(Aws::Utils::Json::JsonView jsonValue);
    TargetLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS accounts targeted by the current Automation execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>The AWS accounts targeted by the current Automation execution.</p>
     */
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }

    /**
     * <p>The AWS accounts targeted by the current Automation execution.</p>
     */
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>The AWS accounts targeted by the current Automation execution.</p>
     */
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>The AWS accounts targeted by the current Automation execution.</p>
     */
    inline TargetLocation& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}

    /**
     * <p>The AWS accounts targeted by the current Automation execution.</p>
     */
    inline TargetLocation& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>The AWS accounts targeted by the current Automation execution.</p>
     */
    inline TargetLocation& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>The AWS accounts targeted by the current Automation execution.</p>
     */
    inline TargetLocation& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The AWS accounts targeted by the current Automation execution.</p>
     */
    inline TargetLocation& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }


    /**
     * <p>The AWS Regions targeted by the current Automation execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>The AWS Regions targeted by the current Automation execution.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>The AWS Regions targeted by the current Automation execution.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>The AWS Regions targeted by the current Automation execution.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>The AWS Regions targeted by the current Automation execution.</p>
     */
    inline TargetLocation& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>The AWS Regions targeted by the current Automation execution.</p>
     */
    inline TargetLocation& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>The AWS Regions targeted by the current Automation execution.</p>
     */
    inline TargetLocation& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>The AWS Regions targeted by the current Automation execution.</p>
     */
    inline TargetLocation& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>The AWS Regions targeted by the current Automation execution.</p>
     */
    inline TargetLocation& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }


    /**
     * <p>The maximum number of AWS accounts and AWS regions allowed to run the
     * Automation concurrently </p>
     */
    inline const Aws::String& GetTargetLocationMaxConcurrency() const{ return m_targetLocationMaxConcurrency; }

    /**
     * <p>The maximum number of AWS accounts and AWS regions allowed to run the
     * Automation concurrently </p>
     */
    inline bool TargetLocationMaxConcurrencyHasBeenSet() const { return m_targetLocationMaxConcurrencyHasBeenSet; }

    /**
     * <p>The maximum number of AWS accounts and AWS regions allowed to run the
     * Automation concurrently </p>
     */
    inline void SetTargetLocationMaxConcurrency(const Aws::String& value) { m_targetLocationMaxConcurrencyHasBeenSet = true; m_targetLocationMaxConcurrency = value; }

    /**
     * <p>The maximum number of AWS accounts and AWS regions allowed to run the
     * Automation concurrently </p>
     */
    inline void SetTargetLocationMaxConcurrency(Aws::String&& value) { m_targetLocationMaxConcurrencyHasBeenSet = true; m_targetLocationMaxConcurrency = std::move(value); }

    /**
     * <p>The maximum number of AWS accounts and AWS regions allowed to run the
     * Automation concurrently </p>
     */
    inline void SetTargetLocationMaxConcurrency(const char* value) { m_targetLocationMaxConcurrencyHasBeenSet = true; m_targetLocationMaxConcurrency.assign(value); }

    /**
     * <p>The maximum number of AWS accounts and AWS regions allowed to run the
     * Automation concurrently </p>
     */
    inline TargetLocation& WithTargetLocationMaxConcurrency(const Aws::String& value) { SetTargetLocationMaxConcurrency(value); return *this;}

    /**
     * <p>The maximum number of AWS accounts and AWS regions allowed to run the
     * Automation concurrently </p>
     */
    inline TargetLocation& WithTargetLocationMaxConcurrency(Aws::String&& value) { SetTargetLocationMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The maximum number of AWS accounts and AWS regions allowed to run the
     * Automation concurrently </p>
     */
    inline TargetLocation& WithTargetLocationMaxConcurrency(const char* value) { SetTargetLocationMaxConcurrency(value); return *this;}


    /**
     * <p>The maximum number of errors allowed before the system stops queueing
     * additional Automation executions for the currently running Automation. </p>
     */
    inline const Aws::String& GetTargetLocationMaxErrors() const{ return m_targetLocationMaxErrors; }

    /**
     * <p>The maximum number of errors allowed before the system stops queueing
     * additional Automation executions for the currently running Automation. </p>
     */
    inline bool TargetLocationMaxErrorsHasBeenSet() const { return m_targetLocationMaxErrorsHasBeenSet; }

    /**
     * <p>The maximum number of errors allowed before the system stops queueing
     * additional Automation executions for the currently running Automation. </p>
     */
    inline void SetTargetLocationMaxErrors(const Aws::String& value) { m_targetLocationMaxErrorsHasBeenSet = true; m_targetLocationMaxErrors = value; }

    /**
     * <p>The maximum number of errors allowed before the system stops queueing
     * additional Automation executions for the currently running Automation. </p>
     */
    inline void SetTargetLocationMaxErrors(Aws::String&& value) { m_targetLocationMaxErrorsHasBeenSet = true; m_targetLocationMaxErrors = std::move(value); }

    /**
     * <p>The maximum number of errors allowed before the system stops queueing
     * additional Automation executions for the currently running Automation. </p>
     */
    inline void SetTargetLocationMaxErrors(const char* value) { m_targetLocationMaxErrorsHasBeenSet = true; m_targetLocationMaxErrors.assign(value); }

    /**
     * <p>The maximum number of errors allowed before the system stops queueing
     * additional Automation executions for the currently running Automation. </p>
     */
    inline TargetLocation& WithTargetLocationMaxErrors(const Aws::String& value) { SetTargetLocationMaxErrors(value); return *this;}

    /**
     * <p>The maximum number of errors allowed before the system stops queueing
     * additional Automation executions for the currently running Automation. </p>
     */
    inline TargetLocation& WithTargetLocationMaxErrors(Aws::String&& value) { SetTargetLocationMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The maximum number of errors allowed before the system stops queueing
     * additional Automation executions for the currently running Automation. </p>
     */
    inline TargetLocation& WithTargetLocationMaxErrors(const char* value) { SetTargetLocationMaxErrors(value); return *this;}


    /**
     * <p>The Automation execution role used by the currently running Automation.</p>
     */
    inline const Aws::String& GetExecutionRoleName() const{ return m_executionRoleName; }

    /**
     * <p>The Automation execution role used by the currently running Automation.</p>
     */
    inline bool ExecutionRoleNameHasBeenSet() const { return m_executionRoleNameHasBeenSet; }

    /**
     * <p>The Automation execution role used by the currently running Automation.</p>
     */
    inline void SetExecutionRoleName(const Aws::String& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = value; }

    /**
     * <p>The Automation execution role used by the currently running Automation.</p>
     */
    inline void SetExecutionRoleName(Aws::String&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::move(value); }

    /**
     * <p>The Automation execution role used by the currently running Automation.</p>
     */
    inline void SetExecutionRoleName(const char* value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName.assign(value); }

    /**
     * <p>The Automation execution role used by the currently running Automation.</p>
     */
    inline TargetLocation& WithExecutionRoleName(const Aws::String& value) { SetExecutionRoleName(value); return *this;}

    /**
     * <p>The Automation execution role used by the currently running Automation.</p>
     */
    inline TargetLocation& WithExecutionRoleName(Aws::String&& value) { SetExecutionRoleName(std::move(value)); return *this;}

    /**
     * <p>The Automation execution role used by the currently running Automation.</p>
     */
    inline TargetLocation& WithExecutionRoleName(const char* value) { SetExecutionRoleName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet;

    Aws::String m_targetLocationMaxConcurrency;
    bool m_targetLocationMaxConcurrencyHasBeenSet;

    Aws::String m_targetLocationMaxErrors;
    bool m_targetLocationMaxErrorsHasBeenSet;

    Aws::String m_executionRoleName;
    bool m_executionRoleNameHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
