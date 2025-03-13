/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/CertificateProviderOperation.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateCertificateProviderRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateCertificateProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificateProvider"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderName() const { return m_certificateProviderName; }
    inline bool CertificateProviderNameHasBeenSet() const { return m_certificateProviderNameHasBeenSet; }
    template<typename CertificateProviderNameT = Aws::String>
    void SetCertificateProviderName(CertificateProviderNameT&& value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName = std::forward<CertificateProviderNameT>(value); }
    template<typename CertificateProviderNameT = Aws::String>
    UpdateCertificateProviderRequest& WithCertificateProviderName(CertificateProviderNameT&& value) { SetCertificateProviderName(std::forward<CertificateProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const { return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    template<typename LambdaFunctionArnT = Aws::String>
    void SetLambdaFunctionArn(LambdaFunctionArnT&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::forward<LambdaFunctionArnT>(value); }
    template<typename LambdaFunctionArnT = Aws::String>
    UpdateCertificateProviderRequest& WithLambdaFunctionArn(LambdaFunctionArnT&& value) { SetLambdaFunctionArn(std::forward<LambdaFunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline const Aws::Vector<CertificateProviderOperation>& GetAccountDefaultForOperations() const { return m_accountDefaultForOperations; }
    inline bool AccountDefaultForOperationsHasBeenSet() const { return m_accountDefaultForOperationsHasBeenSet; }
    template<typename AccountDefaultForOperationsT = Aws::Vector<CertificateProviderOperation>>
    void SetAccountDefaultForOperations(AccountDefaultForOperationsT&& value) { m_accountDefaultForOperationsHasBeenSet = true; m_accountDefaultForOperations = std::forward<AccountDefaultForOperationsT>(value); }
    template<typename AccountDefaultForOperationsT = Aws::Vector<CertificateProviderOperation>>
    UpdateCertificateProviderRequest& WithAccountDefaultForOperations(AccountDefaultForOperationsT&& value) { SetAccountDefaultForOperations(std::forward<AccountDefaultForOperationsT>(value)); return *this;}
    inline UpdateCertificateProviderRequest& AddAccountDefaultForOperations(CertificateProviderOperation value) { m_accountDefaultForOperationsHasBeenSet = true; m_accountDefaultForOperations.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_certificateProviderName;
    bool m_certificateProviderNameHasBeenSet = false;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;

    Aws::Vector<CertificateProviderOperation> m_accountDefaultForOperations;
    bool m_accountDefaultForOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
