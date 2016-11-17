/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ProvisioningParameter.h>
#include <aws/servicecatalog/model/Tag.h>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API ProvisionProductRequest : public ServiceCatalogRequest
  {
  public:
    ProvisionProductRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline ProvisionProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline ProvisionProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline ProvisionProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionProductRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionProductRequest& WithProductId(Aws::String&& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionProductRequest& WithProductId(const char* value) { SetProductId(value); return *this;}

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline ProvisionProductRequest& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline ProvisionProductRequest& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline ProvisionProductRequest& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the path for this product's provisioning. This value is
     * optional if the product has a default path, and is required if there is more
     * than one path for the specified product.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }

    /**
     * <p>The identifier of the path for this product's provisioning. This value is
     * optional if the product has a default path, and is required if there is more
     * than one path for the specified product.</p>
     */
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The identifier of the path for this product's provisioning. This value is
     * optional if the product has a default path, and is required if there is more
     * than one path for the specified product.</p>
     */
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The identifier of the path for this product's provisioning. This value is
     * optional if the product has a default path, and is required if there is more
     * than one path for the specified product.</p>
     */
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }

    /**
     * <p>The identifier of the path for this product's provisioning. This value is
     * optional if the product has a default path, and is required if there is more
     * than one path for the specified product.</p>
     */
    inline ProvisionProductRequest& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}

    /**
     * <p>The identifier of the path for this product's provisioning. This value is
     * optional if the product has a default path, and is required if there is more
     * than one path for the specified product.</p>
     */
    inline ProvisionProductRequest& WithPathId(Aws::String&& value) { SetPathId(value); return *this;}

    /**
     * <p>The identifier of the path for this product's provisioning. This value is
     * optional if the product has a default path, and is required if there is more
     * than one path for the specified product.</p>
     */
    inline ProvisionProductRequest& WithPathId(const char* value) { SetPathId(value); return *this;}

    /**
     * <p>A user-friendly name to identify the ProvisionedProduct object. This value
     * must be unique for the AWS account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }

    /**
     * <p>A user-friendly name to identify the ProvisionedProduct object. This value
     * must be unique for the AWS account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>A user-friendly name to identify the ProvisionedProduct object. This value
     * must be unique for the AWS account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>A user-friendly name to identify the ProvisionedProduct object. This value
     * must be unique for the AWS account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }

    /**
     * <p>A user-friendly name to identify the ProvisionedProduct object. This value
     * must be unique for the AWS account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline ProvisionProductRequest& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>A user-friendly name to identify the ProvisionedProduct object. This value
     * must be unique for the AWS account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline ProvisionProductRequest& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>A user-friendly name to identify the ProvisionedProduct object. This value
     * must be unique for the AWS account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline ProvisionProductRequest& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline const Aws::Vector<ProvisioningParameter>& GetProvisioningParameters() const{ return m_provisioningParameters; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline void SetProvisioningParameters(const Aws::Vector<ProvisioningParameter>& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = value; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline void SetProvisioningParameters(Aws::Vector<ProvisioningParameter>&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = value; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionProductRequest& WithProvisioningParameters(const Aws::Vector<ProvisioningParameter>& value) { SetProvisioningParameters(value); return *this;}

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionProductRequest& WithProvisioningParameters(Aws::Vector<ProvisioningParameter>&& value) { SetProvisioningParameters(value); return *this;}

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionProductRequest& AddProvisioningParameters(const ProvisioningParameter& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionProductRequest& AddProvisioningParameters(ProvisioningParameter&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }

    /**
     * <p>A list of tags to use as provisioning options.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to use as provisioning options.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to use as provisioning options.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to use as provisioning options.</p>
     */
    inline ProvisionProductRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to use as provisioning options.</p>
     */
    inline ProvisionProductRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to use as provisioning options.</p>
     */
    inline ProvisionProductRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to use as provisioning options.</p>
     */
    inline ProvisionProductRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationArns() const{ return m_notificationArns; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline void SetNotificationArns(const Aws::Vector<Aws::String>& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = value; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline void SetNotificationArns(Aws::Vector<Aws::String>&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = value; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionProductRequest& WithNotificationArns(const Aws::Vector<Aws::String>& value) { SetNotificationArns(value); return *this;}

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionProductRequest& WithNotificationArns(Aws::Vector<Aws::String>&& value) { SetNotificationArns(value); return *this;}

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionProductRequest& AddNotificationArns(const Aws::String& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionProductRequest& AddNotificationArns(Aws::String&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionProductRequest& AddNotificationArns(const char* value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request. </p>
     */
    inline const Aws::String& GetProvisionToken() const{ return m_provisionToken; }

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request. </p>
     */
    inline void SetProvisionToken(const Aws::String& value) { m_provisionTokenHasBeenSet = true; m_provisionToken = value; }

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request. </p>
     */
    inline void SetProvisionToken(Aws::String&& value) { m_provisionTokenHasBeenSet = true; m_provisionToken = value; }

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request. </p>
     */
    inline void SetProvisionToken(const char* value) { m_provisionTokenHasBeenSet = true; m_provisionToken.assign(value); }

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request. </p>
     */
    inline ProvisionProductRequest& WithProvisionToken(const Aws::String& value) { SetProvisionToken(value); return *this;}

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request. </p>
     */
    inline ProvisionProductRequest& WithProvisionToken(Aws::String&& value) { SetProvisionToken(value); return *this;}

    /**
     * <p>An idempotency token that uniquely identifies the provisioning request. </p>
     */
    inline ProvisionProductRequest& WithProvisionToken(const char* value) { SetProvisionToken(value); return *this;}

  private:
    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;
    Aws::String m_productId;
    bool m_productIdHasBeenSet;
    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet;
    Aws::String m_pathId;
    bool m_pathIdHasBeenSet;
    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet;
    Aws::Vector<ProvisioningParameter> m_provisioningParameters;
    bool m_provisioningParametersHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::Vector<Aws::String> m_notificationArns;
    bool m_notificationArnsHasBeenSet;
    Aws::String m_provisionToken;
    bool m_provisionTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
