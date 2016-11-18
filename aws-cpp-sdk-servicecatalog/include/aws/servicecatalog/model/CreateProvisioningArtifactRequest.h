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
#include <aws/servicecatalog/model/ProvisioningArtifactProperties.h>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API CreateProvisioningArtifactRequest : public ServiceCatalogRequest
  {
  public:
    CreateProvisioningArtifactRequest();
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
    inline CreateProvisioningArtifactRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline CreateProvisioningArtifactRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline CreateProvisioningArtifactRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

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
    inline CreateProvisioningArtifactRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline CreateProvisioningArtifactRequest& WithProductId(Aws::String&& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline CreateProvisioningArtifactRequest& WithProductId(const char* value) { SetProductId(value); return *this;}

    /**
     * <p>The parameters to use when creating the new provisioning artifact.</p>
     */
    inline const ProvisioningArtifactProperties& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters to use when creating the new provisioning artifact.</p>
     */
    inline void SetParameters(const ProvisioningArtifactProperties& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters to use when creating the new provisioning artifact.</p>
     */
    inline void SetParameters(ProvisioningArtifactProperties&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters to use when creating the new provisioning artifact.</p>
     */
    inline CreateProvisioningArtifactRequest& WithParameters(const ProvisioningArtifactProperties& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters to use when creating the new provisioning artifact.</p>
     */
    inline CreateProvisioningArtifactRequest& WithParameters(ProvisioningArtifactProperties&& value) { SetParameters(value); return *this;}

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline CreateProvisioningArtifactRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline CreateProvisioningArtifactRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline CreateProvisioningArtifactRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:
    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;
    Aws::String m_productId;
    bool m_productIdHasBeenSet;
    ProvisioningArtifactProperties m_parameters;
    bool m_parametersHasBeenSet;
    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
