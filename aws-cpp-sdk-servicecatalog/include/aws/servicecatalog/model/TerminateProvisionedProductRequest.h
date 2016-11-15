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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API TerminateProvisionedProductRequest : public ServiceCatalogRequest
  {
  public:
    TerminateProvisionedProductRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the ProvisionedProduct object to terminate. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }

    /**
     * <p>The name of the ProvisionedProduct object to terminate. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>The name of the ProvisionedProduct object to terminate. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>The name of the ProvisionedProduct object to terminate. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }

    /**
     * <p>The name of the ProvisionedProduct object to terminate. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The name of the ProvisionedProduct object to terminate. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The name of the ProvisionedProduct object to terminate. You must specify
     * either <code>ProvisionedProductName</code> or <code>ProvisionedProductId</code>,
     * but not both.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object to terminate. You must
     * specify either <code>ProvisionedProductName</code> or
     * <code>ProvisionedProductId</code>, but not both.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }

    /**
     * <p>The identifier of the ProvisionedProduct object to terminate. You must
     * specify either <code>ProvisionedProductName</code> or
     * <code>ProvisionedProductId</code>, but not both.</p>
     */
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object to terminate. You must
     * specify either <code>ProvisionedProductName</code> or
     * <code>ProvisionedProductId</code>, but not both.</p>
     */
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object to terminate. You must
     * specify either <code>ProvisionedProductName</code> or
     * <code>ProvisionedProductId</code>, but not both.</p>
     */
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId.assign(value); }

    /**
     * <p>The identifier of the ProvisionedProduct object to terminate. You must
     * specify either <code>ProvisionedProductName</code> or
     * <code>ProvisionedProductId</code>, but not both.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object to terminate. You must
     * specify either <code>ProvisionedProductName</code> or
     * <code>ProvisionedProductId</code>, but not both.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object to terminate. You must
     * specify either <code>ProvisionedProductName</code> or
     * <code>ProvisionedProductId</code>, but not both.</p>
     */
    inline TerminateProvisionedProductRequest& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the ProvisionedProduct
     * object is terminated, further requests to terminate the same ProvisionedProduct
     * object always return <b>ResourceNotFound</b> regardless of the value of
     * <code>TerminateToken</code>.</p>
     */
    inline const Aws::String& GetTerminateToken() const{ return m_terminateToken; }

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the ProvisionedProduct
     * object is terminated, further requests to terminate the same ProvisionedProduct
     * object always return <b>ResourceNotFound</b> regardless of the value of
     * <code>TerminateToken</code>.</p>
     */
    inline void SetTerminateToken(const Aws::String& value) { m_terminateTokenHasBeenSet = true; m_terminateToken = value; }

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the ProvisionedProduct
     * object is terminated, further requests to terminate the same ProvisionedProduct
     * object always return <b>ResourceNotFound</b> regardless of the value of
     * <code>TerminateToken</code>.</p>
     */
    inline void SetTerminateToken(Aws::String&& value) { m_terminateTokenHasBeenSet = true; m_terminateToken = value; }

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the ProvisionedProduct
     * object is terminated, further requests to terminate the same ProvisionedProduct
     * object always return <b>ResourceNotFound</b> regardless of the value of
     * <code>TerminateToken</code>.</p>
     */
    inline void SetTerminateToken(const char* value) { m_terminateTokenHasBeenSet = true; m_terminateToken.assign(value); }

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the ProvisionedProduct
     * object is terminated, further requests to terminate the same ProvisionedProduct
     * object always return <b>ResourceNotFound</b> regardless of the value of
     * <code>TerminateToken</code>.</p>
     */
    inline TerminateProvisionedProductRequest& WithTerminateToken(const Aws::String& value) { SetTerminateToken(value); return *this;}

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the ProvisionedProduct
     * object is terminated, further requests to terminate the same ProvisionedProduct
     * object always return <b>ResourceNotFound</b> regardless of the value of
     * <code>TerminateToken</code>.</p>
     */
    inline TerminateProvisionedProductRequest& WithTerminateToken(Aws::String&& value) { SetTerminateToken(value); return *this;}

    /**
     * <p>An idempotency token that uniquely identifies the termination request. This
     * token is only valid during the termination process. After the ProvisionedProduct
     * object is terminated, further requests to terminate the same ProvisionedProduct
     * object always return <b>ResourceNotFound</b> regardless of the value of
     * <code>TerminateToken</code>.</p>
     */
    inline TerminateProvisionedProductRequest& WithTerminateToken(const char* value) { SetTerminateToken(value); return *this;}

    /**
     * <p>If set to true, AWS Service Catalog stops managing the specified
     * ProvisionedProduct object even if it cannot delete the underlying resources.</p>
     */
    inline bool GetIgnoreErrors() const{ return m_ignoreErrors; }

    /**
     * <p>If set to true, AWS Service Catalog stops managing the specified
     * ProvisionedProduct object even if it cannot delete the underlying resources.</p>
     */
    inline void SetIgnoreErrors(bool value) { m_ignoreErrorsHasBeenSet = true; m_ignoreErrors = value; }

    /**
     * <p>If set to true, AWS Service Catalog stops managing the specified
     * ProvisionedProduct object even if it cannot delete the underlying resources.</p>
     */
    inline TerminateProvisionedProductRequest& WithIgnoreErrors(bool value) { SetIgnoreErrors(value); return *this;}

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
    inline TerminateProvisionedProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline TerminateProvisionedProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline TerminateProvisionedProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

  private:
    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet;
    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet;
    Aws::String m_terminateToken;
    bool m_terminateTokenHasBeenSet;
    bool m_ignoreErrors;
    bool m_ignoreErrorsHasBeenSet;
    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
