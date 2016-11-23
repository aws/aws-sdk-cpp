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
  class AWS_SERVICECATALOG_API DescribeProvisioningParametersRequest : public ServiceCatalogRequest
  {
  public:
    DescribeProvisioningParametersRequest();
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
    inline DescribeProvisioningParametersRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline DescribeProvisioningParametersRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code to use for this operation. Supported language codes are as
     * follows:</p> <p>"en" (English)</p> <p>"jp" (Japanese)</p> <p>"zh" (Chinese)</p>
     * <p>If no code is specified, "en" is used as the default.</p>
     */
    inline DescribeProvisioningParametersRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

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
    inline DescribeProvisioningParametersRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProductId(Aws::String&& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProductId(const char* value) { SetProductId(value); return *this;}

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
    inline DescribeProvisioningParametersRequest& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline DescribeProvisioningParametersRequest& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}

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
    inline DescribeProvisioningParametersRequest& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}

    /**
     * <p>The identifier of the path for this product's provisioning. This value is
     * optional if the product has a default path, and is required if there is more
     * than one path for the specified product.</p>
     */
    inline DescribeProvisioningParametersRequest& WithPathId(Aws::String&& value) { SetPathId(value); return *this;}

    /**
     * <p>The identifier of the path for this product's provisioning. This value is
     * optional if the product has a default path, and is required if there is more
     * than one path for the specified product.</p>
     */
    inline DescribeProvisioningParametersRequest& WithPathId(const char* value) { SetPathId(value); return *this;}

  private:
    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;
    Aws::String m_productId;
    bool m_productIdHasBeenSet;
    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet;
    Aws::String m_pathId;
    bool m_pathIdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
