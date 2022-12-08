/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/AWSAccount.h>
#include <aws/auditmanager/model/AWSService.h>
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
   * <p> The wrapper that contains the Amazon Web Services accounts and services that
   * are in scope for the assessment. </p><p><h3>See Also:</h3>   <a
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


    /**
     * <p> The Amazon Web Services accounts that are included in the scope of the
     * assessment. </p>
     */
    inline const Aws::Vector<AWSAccount>& GetAwsAccounts() const{ return m_awsAccounts; }

    /**
     * <p> The Amazon Web Services accounts that are included in the scope of the
     * assessment. </p>
     */
    inline bool AwsAccountsHasBeenSet() const { return m_awsAccountsHasBeenSet; }

    /**
     * <p> The Amazon Web Services accounts that are included in the scope of the
     * assessment. </p>
     */
    inline void SetAwsAccounts(const Aws::Vector<AWSAccount>& value) { m_awsAccountsHasBeenSet = true; m_awsAccounts = value; }

    /**
     * <p> The Amazon Web Services accounts that are included in the scope of the
     * assessment. </p>
     */
    inline void SetAwsAccounts(Aws::Vector<AWSAccount>&& value) { m_awsAccountsHasBeenSet = true; m_awsAccounts = std::move(value); }

    /**
     * <p> The Amazon Web Services accounts that are included in the scope of the
     * assessment. </p>
     */
    inline Scope& WithAwsAccounts(const Aws::Vector<AWSAccount>& value) { SetAwsAccounts(value); return *this;}

    /**
     * <p> The Amazon Web Services accounts that are included in the scope of the
     * assessment. </p>
     */
    inline Scope& WithAwsAccounts(Aws::Vector<AWSAccount>&& value) { SetAwsAccounts(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services accounts that are included in the scope of the
     * assessment. </p>
     */
    inline Scope& AddAwsAccounts(const AWSAccount& value) { m_awsAccountsHasBeenSet = true; m_awsAccounts.push_back(value); return *this; }

    /**
     * <p> The Amazon Web Services accounts that are included in the scope of the
     * assessment. </p>
     */
    inline Scope& AddAwsAccounts(AWSAccount&& value) { m_awsAccountsHasBeenSet = true; m_awsAccounts.push_back(std::move(value)); return *this; }


    /**
     * <p> The Amazon Web Services services that are included in the scope of the
     * assessment. </p>
     */
    inline const Aws::Vector<AWSService>& GetAwsServices() const{ return m_awsServices; }

    /**
     * <p> The Amazon Web Services services that are included in the scope of the
     * assessment. </p>
     */
    inline bool AwsServicesHasBeenSet() const { return m_awsServicesHasBeenSet; }

    /**
     * <p> The Amazon Web Services services that are included in the scope of the
     * assessment. </p>
     */
    inline void SetAwsServices(const Aws::Vector<AWSService>& value) { m_awsServicesHasBeenSet = true; m_awsServices = value; }

    /**
     * <p> The Amazon Web Services services that are included in the scope of the
     * assessment. </p>
     */
    inline void SetAwsServices(Aws::Vector<AWSService>&& value) { m_awsServicesHasBeenSet = true; m_awsServices = std::move(value); }

    /**
     * <p> The Amazon Web Services services that are included in the scope of the
     * assessment. </p>
     */
    inline Scope& WithAwsServices(const Aws::Vector<AWSService>& value) { SetAwsServices(value); return *this;}

    /**
     * <p> The Amazon Web Services services that are included in the scope of the
     * assessment. </p>
     */
    inline Scope& WithAwsServices(Aws::Vector<AWSService>&& value) { SetAwsServices(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services services that are included in the scope of the
     * assessment. </p>
     */
    inline Scope& AddAwsServices(const AWSService& value) { m_awsServicesHasBeenSet = true; m_awsServices.push_back(value); return *this; }

    /**
     * <p> The Amazon Web Services services that are included in the scope of the
     * assessment. </p>
     */
    inline Scope& AddAwsServices(AWSService&& value) { m_awsServicesHasBeenSet = true; m_awsServices.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AWSAccount> m_awsAccounts;
    bool m_awsAccountsHasBeenSet = false;

    Aws::Vector<AWSService> m_awsServices;
    bool m_awsServicesHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
