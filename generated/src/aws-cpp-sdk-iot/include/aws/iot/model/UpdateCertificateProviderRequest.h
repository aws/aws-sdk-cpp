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
    AWS_IOT_API UpdateCertificateProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCertificateProvider"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderName() const{ return m_certificateProviderName; }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline bool CertificateProviderNameHasBeenSet() const { return m_certificateProviderNameHasBeenSet; }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline void SetCertificateProviderName(const Aws::String& value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName = value; }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline void SetCertificateProviderName(Aws::String&& value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName = std::move(value); }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline void SetCertificateProviderName(const char* value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName.assign(value); }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline UpdateCertificateProviderRequest& WithCertificateProviderName(const Aws::String& value) { SetCertificateProviderName(value); return *this;}

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline UpdateCertificateProviderRequest& WithCertificateProviderName(Aws::String&& value) { SetCertificateProviderName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline UpdateCertificateProviderRequest& WithCertificateProviderName(const char* value) { SetCertificateProviderName(value); return *this;}


    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline UpdateCertificateProviderRequest& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline UpdateCertificateProviderRequest& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline UpdateCertificateProviderRequest& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}


    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline const Aws::Vector<CertificateProviderOperation>& GetAccountDefaultForOperations() const{ return m_accountDefaultForOperations; }

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline bool AccountDefaultForOperationsHasBeenSet() const { return m_accountDefaultForOperationsHasBeenSet; }

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline void SetAccountDefaultForOperations(const Aws::Vector<CertificateProviderOperation>& value) { m_accountDefaultForOperationsHasBeenSet = true; m_accountDefaultForOperations = value; }

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline void SetAccountDefaultForOperations(Aws::Vector<CertificateProviderOperation>&& value) { m_accountDefaultForOperationsHasBeenSet = true; m_accountDefaultForOperations = std::move(value); }

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline UpdateCertificateProviderRequest& WithAccountDefaultForOperations(const Aws::Vector<CertificateProviderOperation>& value) { SetAccountDefaultForOperations(value); return *this;}

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline UpdateCertificateProviderRequest& WithAccountDefaultForOperations(Aws::Vector<CertificateProviderOperation>&& value) { SetAccountDefaultForOperations(std::move(value)); return *this;}

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline UpdateCertificateProviderRequest& AddAccountDefaultForOperations(const CertificateProviderOperation& value) { m_accountDefaultForOperationsHasBeenSet = true; m_accountDefaultForOperations.push_back(value); return *this; }

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline UpdateCertificateProviderRequest& AddAccountDefaultForOperations(CertificateProviderOperation&& value) { m_accountDefaultForOperationsHasBeenSet = true; m_accountDefaultForOperations.push_back(std::move(value)); return *this; }

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
