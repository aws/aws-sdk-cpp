/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/AWSAccount.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The wrapper that contains the Amazon Web Services accounts that are in scope
   * for the assessment. </p>  <p>You no longer need to specify which Amazon
   * Web Services services are in scope when you create or update an assessment.
   * Audit Manager infers the services in scope by examining your assessment controls
   * and their data sources, and then mapping this information to the relevant Amazon
   * Web Services services. </p> <p>If an underlying data source changes for your
   * assessment, we automatically update the services scope as needed to reflect the
   * correct Amazon Web Services services. This ensures that your assessment collects
   * accurate and comprehensive evidence about all of the relevant services in your
   * AWS environment.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Scope">AWS
   * API Reference</a></p>
   */
  class Scope
  {
  public:
    AWS_AUDITMANAGER_API Scope() = default;
    AWS_AUDITMANAGER_API Scope(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Scope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services accounts that are included in the scope of the
     * assessment. </p>
     */
    inline const Aws::Vector<AWSAccount>& GetAwsAccounts() const { return m_awsAccounts; }
    inline bool AwsAccountsHasBeenSet() const { return m_awsAccountsHasBeenSet; }
    template<typename AwsAccountsT = Aws::Vector<AWSAccount>>
    void SetAwsAccounts(AwsAccountsT&& value) { m_awsAccountsHasBeenSet = true; m_awsAccounts = std::forward<AwsAccountsT>(value); }
    template<typename AwsAccountsT = Aws::Vector<AWSAccount>>
    Scope& WithAwsAccounts(AwsAccountsT&& value) { SetAwsAccounts(std::forward<AwsAccountsT>(value)); return *this;}
    template<typename AwsAccountsT = AWSAccount>
    Scope& AddAwsAccounts(AwsAccountsT&& value) { m_awsAccountsHasBeenSet = true; m_awsAccounts.emplace_back(std::forward<AwsAccountsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AWSAccount> m_awsAccounts;
    bool m_awsAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
