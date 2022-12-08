/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/CertificateBasedAuthProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/DeletableCertificateBasedAuthProperty.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ModifyCertificateBasedAuthPropertiesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ModifyCertificateBasedAuthPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCertificateBasedAuthProperties"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline ModifyCertificateBasedAuthPropertiesRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline ModifyCertificateBasedAuthPropertiesRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline ModifyCertificateBasedAuthPropertiesRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The properties of the certificate-based authentication.</p>
     */
    inline const CertificateBasedAuthProperties& GetCertificateBasedAuthProperties() const{ return m_certificateBasedAuthProperties; }

    /**
     * <p>The properties of the certificate-based authentication.</p>
     */
    inline bool CertificateBasedAuthPropertiesHasBeenSet() const { return m_certificateBasedAuthPropertiesHasBeenSet; }

    /**
     * <p>The properties of the certificate-based authentication.</p>
     */
    inline void SetCertificateBasedAuthProperties(const CertificateBasedAuthProperties& value) { m_certificateBasedAuthPropertiesHasBeenSet = true; m_certificateBasedAuthProperties = value; }

    /**
     * <p>The properties of the certificate-based authentication.</p>
     */
    inline void SetCertificateBasedAuthProperties(CertificateBasedAuthProperties&& value) { m_certificateBasedAuthPropertiesHasBeenSet = true; m_certificateBasedAuthProperties = std::move(value); }

    /**
     * <p>The properties of the certificate-based authentication.</p>
     */
    inline ModifyCertificateBasedAuthPropertiesRequest& WithCertificateBasedAuthProperties(const CertificateBasedAuthProperties& value) { SetCertificateBasedAuthProperties(value); return *this;}

    /**
     * <p>The properties of the certificate-based authentication.</p>
     */
    inline ModifyCertificateBasedAuthPropertiesRequest& WithCertificateBasedAuthProperties(CertificateBasedAuthProperties&& value) { SetCertificateBasedAuthProperties(std::move(value)); return *this;}


    /**
     * <p>The properties of the certificate-based authentication you want to
     * delete.</p>
     */
    inline const Aws::Vector<DeletableCertificateBasedAuthProperty>& GetPropertiesToDelete() const{ return m_propertiesToDelete; }

    /**
     * <p>The properties of the certificate-based authentication you want to
     * delete.</p>
     */
    inline bool PropertiesToDeleteHasBeenSet() const { return m_propertiesToDeleteHasBeenSet; }

    /**
     * <p>The properties of the certificate-based authentication you want to
     * delete.</p>
     */
    inline void SetPropertiesToDelete(const Aws::Vector<DeletableCertificateBasedAuthProperty>& value) { m_propertiesToDeleteHasBeenSet = true; m_propertiesToDelete = value; }

    /**
     * <p>The properties of the certificate-based authentication you want to
     * delete.</p>
     */
    inline void SetPropertiesToDelete(Aws::Vector<DeletableCertificateBasedAuthProperty>&& value) { m_propertiesToDeleteHasBeenSet = true; m_propertiesToDelete = std::move(value); }

    /**
     * <p>The properties of the certificate-based authentication you want to
     * delete.</p>
     */
    inline ModifyCertificateBasedAuthPropertiesRequest& WithPropertiesToDelete(const Aws::Vector<DeletableCertificateBasedAuthProperty>& value) { SetPropertiesToDelete(value); return *this;}

    /**
     * <p>The properties of the certificate-based authentication you want to
     * delete.</p>
     */
    inline ModifyCertificateBasedAuthPropertiesRequest& WithPropertiesToDelete(Aws::Vector<DeletableCertificateBasedAuthProperty>&& value) { SetPropertiesToDelete(std::move(value)); return *this;}

    /**
     * <p>The properties of the certificate-based authentication you want to
     * delete.</p>
     */
    inline ModifyCertificateBasedAuthPropertiesRequest& AddPropertiesToDelete(const DeletableCertificateBasedAuthProperty& value) { m_propertiesToDeleteHasBeenSet = true; m_propertiesToDelete.push_back(value); return *this; }

    /**
     * <p>The properties of the certificate-based authentication you want to
     * delete.</p>
     */
    inline ModifyCertificateBasedAuthPropertiesRequest& AddPropertiesToDelete(DeletableCertificateBasedAuthProperty&& value) { m_propertiesToDeleteHasBeenSet = true; m_propertiesToDelete.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    CertificateBasedAuthProperties m_certificateBasedAuthProperties;
    bool m_certificateBasedAuthPropertiesHasBeenSet = false;

    Aws::Vector<DeletableCertificateBasedAuthProperty> m_propertiesToDelete;
    bool m_propertiesToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
