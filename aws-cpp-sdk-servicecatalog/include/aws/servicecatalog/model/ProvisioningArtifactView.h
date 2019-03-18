/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/servicecatalog/model/ProvisioningArtifact.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>An object that contains summary information about a product view and a
   * provisioning artifact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactView">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ProvisioningArtifactView
  {
  public:
    ProvisioningArtifactView();
    ProvisioningArtifactView(Aws::Utils::Json::JsonView jsonValue);
    ProvisioningArtifactView& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Summary information about a product view.</p>
     */
    inline const ProductViewSummary& GetProductViewSummary() const{ return m_productViewSummary; }

    /**
     * <p>Summary information about a product view.</p>
     */
    inline bool ProductViewSummaryHasBeenSet() const { return m_productViewSummaryHasBeenSet; }

    /**
     * <p>Summary information about a product view.</p>
     */
    inline void SetProductViewSummary(const ProductViewSummary& value) { m_productViewSummaryHasBeenSet = true; m_productViewSummary = value; }

    /**
     * <p>Summary information about a product view.</p>
     */
    inline void SetProductViewSummary(ProductViewSummary&& value) { m_productViewSummaryHasBeenSet = true; m_productViewSummary = std::move(value); }

    /**
     * <p>Summary information about a product view.</p>
     */
    inline ProvisioningArtifactView& WithProductViewSummary(const ProductViewSummary& value) { SetProductViewSummary(value); return *this;}

    /**
     * <p>Summary information about a product view.</p>
     */
    inline ProvisioningArtifactView& WithProductViewSummary(ProductViewSummary&& value) { SetProductViewSummary(std::move(value)); return *this;}


    /**
     * <p>Information about a provisioning artifact. A provisioning artifact is also
     * known as a product version.</p>
     */
    inline const ProvisioningArtifact& GetProvisioningArtifact() const{ return m_provisioningArtifact; }

    /**
     * <p>Information about a provisioning artifact. A provisioning artifact is also
     * known as a product version.</p>
     */
    inline bool ProvisioningArtifactHasBeenSet() const { return m_provisioningArtifactHasBeenSet; }

    /**
     * <p>Information about a provisioning artifact. A provisioning artifact is also
     * known as a product version.</p>
     */
    inline void SetProvisioningArtifact(const ProvisioningArtifact& value) { m_provisioningArtifactHasBeenSet = true; m_provisioningArtifact = value; }

    /**
     * <p>Information about a provisioning artifact. A provisioning artifact is also
     * known as a product version.</p>
     */
    inline void SetProvisioningArtifact(ProvisioningArtifact&& value) { m_provisioningArtifactHasBeenSet = true; m_provisioningArtifact = std::move(value); }

    /**
     * <p>Information about a provisioning artifact. A provisioning artifact is also
     * known as a product version.</p>
     */
    inline ProvisioningArtifactView& WithProvisioningArtifact(const ProvisioningArtifact& value) { SetProvisioningArtifact(value); return *this;}

    /**
     * <p>Information about a provisioning artifact. A provisioning artifact is also
     * known as a product version.</p>
     */
    inline ProvisioningArtifactView& WithProvisioningArtifact(ProvisioningArtifact&& value) { SetProvisioningArtifact(std::move(value)); return *this;}

  private:

    ProductViewSummary m_productViewSummary;
    bool m_productViewSummaryHasBeenSet;

    ProvisioningArtifact m_provisioningArtifact;
    bool m_provisioningArtifactHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
