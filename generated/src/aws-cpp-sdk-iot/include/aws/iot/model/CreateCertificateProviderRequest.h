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
    AWS_IOT_API CreateCertificateProviderRequest() = default;

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
    inline const Aws::String& GetCertificateProviderName() const { return m_certificateProviderName; }
    inline bool CertificateProviderNameHasBeenSet() const { return m_certificateProviderNameHasBeenSet; }
    template<typename CertificateProviderNameT = Aws::String>
    void SetCertificateProviderName(CertificateProviderNameT&& value) { m_certificateProviderNameHasBeenSet = true; m_certificateProviderName = std::forward<CertificateProviderNameT>(value); }
    template<typename CertificateProviderNameT = Aws::String>
    CreateCertificateProviderRequest& WithCertificateProviderName(CertificateProviderNameT&& value) { SetCertificateProviderName(std::forward<CertificateProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Lambda function that defines the authentication logic.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const { return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    template<typename LambdaFunctionArnT = Aws::String>
    void SetLambdaFunctionArn(LambdaFunctionArnT&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::forward<LambdaFunctionArnT>(value); }
    template<typename LambdaFunctionArnT = Aws::String>
    CreateCertificateProviderRequest& WithLambdaFunctionArn(LambdaFunctionArnT&& value) { SetLambdaFunctionArn(std::forward<LambdaFunctionArnT>(value)); return *this;}
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
    CreateCertificateProviderRequest& WithAccountDefaultForOperations(AccountDefaultForOperationsT&& value) { SetAccountDefaultForOperations(std::forward<AccountDefaultForOperationsT>(value)); return *this;}
    inline CreateCertificateProviderRequest& AddAccountDefaultForOperations(CertificateProviderOperation value) { m_accountDefaultForOperationsHasBeenSet = true; m_accountDefaultForOperations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that you can optionally pass in the
     * <code>CreateCertificateProvider</code> request to make sure the request is
     * idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateCertificateProviderRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the certificate provider.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCertificateProviderRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCertificateProviderRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_certificateProviderName;
    bool m_certificateProviderNameHasBeenSet = false;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;

    Aws::Vector<CertificateProviderOperation> m_accountDefaultForOperations;
    bool m_accountDefaultForOperationsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
