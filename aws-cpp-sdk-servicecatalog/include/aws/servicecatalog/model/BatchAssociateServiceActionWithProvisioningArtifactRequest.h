/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ServiceActionAssociation.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class BatchAssociateServiceActionWithProvisioningArtifactRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API BatchAssociateServiceActionWithProvisioningArtifactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateServiceActionWithProvisioningArtifact"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>One or more associations, each consisting of the Action ID, the Product ID,
     * and the Provisioning Artifact ID.</p>
     */
    inline const Aws::Vector<ServiceActionAssociation>& GetServiceActionAssociations() const{ return m_serviceActionAssociations; }

    /**
     * <p>One or more associations, each consisting of the Action ID, the Product ID,
     * and the Provisioning Artifact ID.</p>
     */
    inline bool ServiceActionAssociationsHasBeenSet() const { return m_serviceActionAssociationsHasBeenSet; }

    /**
     * <p>One or more associations, each consisting of the Action ID, the Product ID,
     * and the Provisioning Artifact ID.</p>
     */
    inline void SetServiceActionAssociations(const Aws::Vector<ServiceActionAssociation>& value) { m_serviceActionAssociationsHasBeenSet = true; m_serviceActionAssociations = value; }

    /**
     * <p>One or more associations, each consisting of the Action ID, the Product ID,
     * and the Provisioning Artifact ID.</p>
     */
    inline void SetServiceActionAssociations(Aws::Vector<ServiceActionAssociation>&& value) { m_serviceActionAssociationsHasBeenSet = true; m_serviceActionAssociations = std::move(value); }

    /**
     * <p>One or more associations, each consisting of the Action ID, the Product ID,
     * and the Provisioning Artifact ID.</p>
     */
    inline BatchAssociateServiceActionWithProvisioningArtifactRequest& WithServiceActionAssociations(const Aws::Vector<ServiceActionAssociation>& value) { SetServiceActionAssociations(value); return *this;}

    /**
     * <p>One or more associations, each consisting of the Action ID, the Product ID,
     * and the Provisioning Artifact ID.</p>
     */
    inline BatchAssociateServiceActionWithProvisioningArtifactRequest& WithServiceActionAssociations(Aws::Vector<ServiceActionAssociation>&& value) { SetServiceActionAssociations(std::move(value)); return *this;}

    /**
     * <p>One or more associations, each consisting of the Action ID, the Product ID,
     * and the Provisioning Artifact ID.</p>
     */
    inline BatchAssociateServiceActionWithProvisioningArtifactRequest& AddServiceActionAssociations(const ServiceActionAssociation& value) { m_serviceActionAssociationsHasBeenSet = true; m_serviceActionAssociations.push_back(value); return *this; }

    /**
     * <p>One or more associations, each consisting of the Action ID, the Product ID,
     * and the Provisioning Artifact ID.</p>
     */
    inline BatchAssociateServiceActionWithProvisioningArtifactRequest& AddServiceActionAssociations(ServiceActionAssociation&& value) { m_serviceActionAssociationsHasBeenSet = true; m_serviceActionAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline BatchAssociateServiceActionWithProvisioningArtifactRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline BatchAssociateServiceActionWithProvisioningArtifactRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline BatchAssociateServiceActionWithProvisioningArtifactRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}

  private:

    Aws::Vector<ServiceActionAssociation> m_serviceActionAssociations;
    bool m_serviceActionAssociationsHasBeenSet = false;

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
