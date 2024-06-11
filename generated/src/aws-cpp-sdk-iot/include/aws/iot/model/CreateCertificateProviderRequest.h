﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/CertificateProviderOperation.h>
#include <aws/iot/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateCertificateProviderRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateCertificateProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCertificateProvider"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderName() const{ return m_certificateProviderName; }
    inline bool CertificateProviderNameHasBeenSet() const { return m_certificateProviderNameHasBeenSet; }
    inline void SetCertificateProviderName(const Aws::String& value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName = value; }
    inline void SetCertificateProviderName(Aws::String&& value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName = std::move(value); }
    inline void SetCertificateProviderName(const char* value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName.assign(value); }
    inline CreateCertificateProviderRequest& WithCertificateProviderName(const Aws::String& value) { SetCertificateProviderName(value); return *this;}
    inline CreateCertificateProviderRequest& WithCertificateProviderName(Aws::String&& value) { SetCertificateProviderName(std::move(value)); return *this;}
    inline CreateCertificateProviderRequest& WithCertificateProviderName(const char* value) { SetCertificateProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Lambda function that defines the authentication logic.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = value; }
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::move(value); }
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn.assign(value); }
    inline CreateCertificateProviderRequest& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}
    inline CreateCertificateProviderRequest& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}
    inline CreateCertificateProviderRequest& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline const Aws::Vector<CertificateProviderOperation>& GetAccountDefaultForOperations() const{ return m_accountDefaultForOperations; }
    inline bool AccountDefaultForOperationsHasBeenSet() const { return m_accountDefaultForOperationsHasBeenSet; }
    inline void SetAccountDefaultForOperations(const Aws::Vector<CertificateProviderOperation>& value) { m_accountDefaultForOperationsHasBeenSet = true; m_accountDefaultForOperations = value; }
    inline void SetAccountDefaultForOperations(Aws::Vector<CertificateProviderOperation>&& value) { m_accountDefaultForOperationsHasBeenSet = true; m_accountDefaultForOperations = std::move(value); }
    inline CreateCertificateProviderRequest& WithAccountDefaultForOperations(const Aws::Vector<CertificateProviderOperation>& value) { SetAccountDefaultForOperations(value); return *this;}
    inline CreateCertificateProviderRequest& WithAccountDefaultForOperations(Aws::Vector<CertificateProviderOperation>&& value) { SetAccountDefaultForOperations(std::move(value)); return *this;}
    inline CreateCertificateProviderRequest& AddAccountDefaultForOperations(const CertificateProviderOperation& value) { m_accountDefaultForOperationsHasBeenSet = true; m_accountDefaultForOperations.push_back(value); return *this; }
    inline CreateCertificateProviderRequest& AddAccountDefaultForOperations(CertificateProviderOperation&& value) { m_accountDefaultForOperationsHasBeenSet = true; m_accountDefaultForOperations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that you can optionally pass in the
     * <code>CreateCertificateProvider</code> request to make sure the request is
     * idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateCertificateProviderRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateCertificateProviderRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateCertificateProviderRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the certificate provider.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCertificateProviderRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateCertificateProviderRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCertificateProviderRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateCertificateProviderRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_certificateProviderName;
    bool m_certificateProviderNameHasBeenSet = false;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;

    Aws::Vector<CertificateProviderOperation> m_accountDefaultForOperations;
    bool m_accountDefaultForOperationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
