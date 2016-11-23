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

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API AssociateProductWithPortfolioRequest : public ServiceCatalogRequest
  {
  public:
    AssociateProductWithPortfolioRequest();
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
    inline AssociateProductWithPortfolioRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline AssociateProductWithPortfolioRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline AssociateProductWithPortfolioRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

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
    inline AssociateProductWithPortfolioRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline AssociateProductWithPortfolioRequest& WithProductId(Aws::String&& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline AssociateProductWithPortfolioRequest& WithProductId(const char* value) { SetProductId(value); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const char* value) { m_portfolioIdHasBeenSet = true; m_portfolioId.assign(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline AssociateProductWithPortfolioRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline AssociateProductWithPortfolioRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline AssociateProductWithPortfolioRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The identifier of the source portfolio to use with this association.</p>
     */
    inline const Aws::String& GetSourcePortfolioId() const{ return m_sourcePortfolioId; }

    /**
     * <p>The identifier of the source portfolio to use with this association.</p>
     */
    inline void SetSourcePortfolioId(const Aws::String& value) { m_sourcePortfolioIdHasBeenSet = true; m_sourcePortfolioId = value; }

    /**
     * <p>The identifier of the source portfolio to use with this association.</p>
     */
    inline void SetSourcePortfolioId(Aws::String&& value) { m_sourcePortfolioIdHasBeenSet = true; m_sourcePortfolioId = value; }

    /**
     * <p>The identifier of the source portfolio to use with this association.</p>
     */
    inline void SetSourcePortfolioId(const char* value) { m_sourcePortfolioIdHasBeenSet = true; m_sourcePortfolioId.assign(value); }

    /**
     * <p>The identifier of the source portfolio to use with this association.</p>
     */
    inline AssociateProductWithPortfolioRequest& WithSourcePortfolioId(const Aws::String& value) { SetSourcePortfolioId(value); return *this;}

    /**
     * <p>The identifier of the source portfolio to use with this association.</p>
     */
    inline AssociateProductWithPortfolioRequest& WithSourcePortfolioId(Aws::String&& value) { SetSourcePortfolioId(value); return *this;}

    /**
     * <p>The identifier of the source portfolio to use with this association.</p>
     */
    inline AssociateProductWithPortfolioRequest& WithSourcePortfolioId(const char* value) { SetSourcePortfolioId(value); return *this;}

  private:
    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;
    Aws::String m_productId;
    bool m_productIdHasBeenSet;
    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet;
    Aws::String m_sourcePortfolioId;
    bool m_sourcePortfolioIdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
