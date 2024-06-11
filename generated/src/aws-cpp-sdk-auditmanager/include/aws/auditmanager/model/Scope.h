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
   * Web Services are in scope when you create or update an assessment. Audit Manager
   * infers the services in scope by examining your assessment controls and their
   * data sources, and then mapping this information to the relevant Amazon Web
   * Services. </p> <p>If an underlying data source changes for your assessment, we
   * automatically update the services scope as needed to reflect the correct Amazon
   * Web Services. This ensures that your assessment collects accurate and
   * comprehensive evidence about all of the relevant services in your AWS
   * environment.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Scope">AWS
   * API Reference</a></p>
   */
  class Scope
  {
  public:
    AWS_AUDITMANAGER_API Scope();
    AWS_AUDITMANAGER_API Scope(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Scope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services accounts that are included in the scope of the
     * assessment. </p>
     */
    inline const Aws::Vector<AWSAccount>& GetAwsAccounts() const{ return m_awsAccounts; }
    inline bool AwsAccountsHasBeenSet() const { return m_awsAccountsHasBeenSet; }
    inline void SetAwsAccounts(const Aws::Vector<AWSAccount>& value) { m_awsAccountsHasBeenSet = true; m_awsAccounts = value; }
    inline void SetAwsAccounts(Aws::Vector<AWSAccount>&& value) { m_awsAccountsHasBeenSet = true; m_awsAccounts = std::move(value); }
    inline Scope& WithAwsAccounts(const Aws::Vector<AWSAccount>& value) { SetAwsAccounts(value); return *this;}
    inline Scope& WithAwsAccounts(Aws::Vector<AWSAccount>&& value) { SetAwsAccounts(std::move(value)); return *this;}
    inline Scope& AddAwsAccounts(const AWSAccount& value) { m_awsAccountsHasBeenSet = true; m_awsAccounts.push_back(value); return *this; }
    inline Scope& AddAwsAccounts(AWSAccount&& value) { m_awsAccountsHasBeenSet = true; m_awsAccounts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AWSAccount> m_awsAccounts;
    bool m_awsAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
