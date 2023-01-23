/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appflow/model/ConnectorProvisioningType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Information about the registered connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorDetail">AWS
   * API Reference</a></p>
   */
  class ConnectorDetail
  {
  public:
    AWS_APPFLOW_API ConnectorDetail();
    AWS_APPFLOW_API ConnectorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description about the registered connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const{ return m_connectorDescription; }

    /**
     * <p>A description about the registered connector.</p>
     */
    inline bool ConnectorDescriptionHasBeenSet() const { return m_connectorDescriptionHasBeenSet; }

    /**
     * <p>A description about the registered connector.</p>
     */
    inline void SetConnectorDescription(const Aws::String& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = value; }

    /**
     * <p>A description about the registered connector.</p>
     */
    inline void SetConnectorDescription(Aws::String&& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = std::move(value); }

    /**
     * <p>A description about the registered connector.</p>
     */
    inline void SetConnectorDescription(const char* value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription.assign(value); }

    /**
     * <p>A description about the registered connector.</p>
     */
    inline ConnectorDetail& WithConnectorDescription(const Aws::String& value) { SetConnectorDescription(value); return *this;}

    /**
     * <p>A description about the registered connector.</p>
     */
    inline ConnectorDetail& WithConnectorDescription(Aws::String&& value) { SetConnectorDescription(std::move(value)); return *this;}

    /**
     * <p>A description about the registered connector.</p>
     */
    inline ConnectorDetail& WithConnectorDescription(const char* value) { SetConnectorDescription(value); return *this;}


    /**
     * <p>The name of the connector.</p>
     */
    inline const Aws::String& GetConnectorName() const{ return m_connectorName; }

    /**
     * <p>The name of the connector.</p>
     */
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }

    /**
     * <p>The name of the connector.</p>
     */
    inline void SetConnectorName(const Aws::String& value) { m_connectorNameHasBeenSet = true; m_connectorName = value; }

    /**
     * <p>The name of the connector.</p>
     */
    inline void SetConnectorName(Aws::String&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::move(value); }

    /**
     * <p>The name of the connector.</p>
     */
    inline void SetConnectorName(const char* value) { m_connectorNameHasBeenSet = true; m_connectorName.assign(value); }

    /**
     * <p>The name of the connector.</p>
     */
    inline ConnectorDetail& WithConnectorName(const Aws::String& value) { SetConnectorName(value); return *this;}

    /**
     * <p>The name of the connector.</p>
     */
    inline ConnectorDetail& WithConnectorName(Aws::String&& value) { SetConnectorName(std::move(value)); return *this;}

    /**
     * <p>The name of the connector.</p>
     */
    inline ConnectorDetail& WithConnectorName(const char* value) { SetConnectorName(value); return *this;}


    /**
     * <p>The owner of the connector.</p>
     */
    inline const Aws::String& GetConnectorOwner() const{ return m_connectorOwner; }

    /**
     * <p>The owner of the connector.</p>
     */
    inline bool ConnectorOwnerHasBeenSet() const { return m_connectorOwnerHasBeenSet; }

    /**
     * <p>The owner of the connector.</p>
     */
    inline void SetConnectorOwner(const Aws::String& value) { m_connectorOwnerHasBeenSet = true; m_connectorOwner = value; }

    /**
     * <p>The owner of the connector.</p>
     */
    inline void SetConnectorOwner(Aws::String&& value) { m_connectorOwnerHasBeenSet = true; m_connectorOwner = std::move(value); }

    /**
     * <p>The owner of the connector.</p>
     */
    inline void SetConnectorOwner(const char* value) { m_connectorOwnerHasBeenSet = true; m_connectorOwner.assign(value); }

    /**
     * <p>The owner of the connector.</p>
     */
    inline ConnectorDetail& WithConnectorOwner(const Aws::String& value) { SetConnectorOwner(value); return *this;}

    /**
     * <p>The owner of the connector.</p>
     */
    inline ConnectorDetail& WithConnectorOwner(Aws::String&& value) { SetConnectorOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the connector.</p>
     */
    inline ConnectorDetail& WithConnectorOwner(const char* value) { SetConnectorOwner(value); return *this;}


    /**
     * <p>The connector version.</p>
     */
    inline const Aws::String& GetConnectorVersion() const{ return m_connectorVersion; }

    /**
     * <p>The connector version.</p>
     */
    inline bool ConnectorVersionHasBeenSet() const { return m_connectorVersionHasBeenSet; }

    /**
     * <p>The connector version.</p>
     */
    inline void SetConnectorVersion(const Aws::String& value) { m_connectorVersionHasBeenSet = true; m_connectorVersion = value; }

    /**
     * <p>The connector version.</p>
     */
    inline void SetConnectorVersion(Aws::String&& value) { m_connectorVersionHasBeenSet = true; m_connectorVersion = std::move(value); }

    /**
     * <p>The connector version.</p>
     */
    inline void SetConnectorVersion(const char* value) { m_connectorVersionHasBeenSet = true; m_connectorVersion.assign(value); }

    /**
     * <p>The connector version.</p>
     */
    inline ConnectorDetail& WithConnectorVersion(const Aws::String& value) { SetConnectorVersion(value); return *this;}

    /**
     * <p>The connector version.</p>
     */
    inline ConnectorDetail& WithConnectorVersion(Aws::String&& value) { SetConnectorVersion(std::move(value)); return *this;}

    /**
     * <p>The connector version.</p>
     */
    inline ConnectorDetail& WithConnectorVersion(const char* value) { SetConnectorVersion(value); return *this;}


    /**
     * <p>The application type of the connector.</p>
     */
    inline const Aws::String& GetApplicationType() const{ return m_applicationType; }

    /**
     * <p>The application type of the connector.</p>
     */
    inline bool ApplicationTypeHasBeenSet() const { return m_applicationTypeHasBeenSet; }

    /**
     * <p>The application type of the connector.</p>
     */
    inline void SetApplicationType(const Aws::String& value) { m_applicationTypeHasBeenSet = true; m_applicationType = value; }

    /**
     * <p>The application type of the connector.</p>
     */
    inline void SetApplicationType(Aws::String&& value) { m_applicationTypeHasBeenSet = true; m_applicationType = std::move(value); }

    /**
     * <p>The application type of the connector.</p>
     */
    inline void SetApplicationType(const char* value) { m_applicationTypeHasBeenSet = true; m_applicationType.assign(value); }

    /**
     * <p>The application type of the connector.</p>
     */
    inline ConnectorDetail& WithApplicationType(const Aws::String& value) { SetApplicationType(value); return *this;}

    /**
     * <p>The application type of the connector.</p>
     */
    inline ConnectorDetail& WithApplicationType(Aws::String&& value) { SetApplicationType(std::move(value)); return *this;}

    /**
     * <p>The application type of the connector.</p>
     */
    inline ConnectorDetail& WithApplicationType(const char* value) { SetApplicationType(value); return *this;}


    /**
     * <p>The connector type.</p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }

    /**
     * <p>The connector type.</p>
     */
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }

    /**
     * <p>The connector type.</p>
     */
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }

    /**
     * <p>The connector type.</p>
     */
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }

    /**
     * <p>The connector type.</p>
     */
    inline ConnectorDetail& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}

    /**
     * <p>The connector type.</p>
     */
    inline ConnectorDetail& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}


    /**
     * <p>A label used for the connector.</p>
     */
    inline const Aws::String& GetConnectorLabel() const{ return m_connectorLabel; }

    /**
     * <p>A label used for the connector.</p>
     */
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }

    /**
     * <p>A label used for the connector.</p>
     */
    inline void SetConnectorLabel(const Aws::String& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = value; }

    /**
     * <p>A label used for the connector.</p>
     */
    inline void SetConnectorLabel(Aws::String&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::move(value); }

    /**
     * <p>A label used for the connector.</p>
     */
    inline void SetConnectorLabel(const char* value) { m_connectorLabelHasBeenSet = true; m_connectorLabel.assign(value); }

    /**
     * <p>A label used for the connector.</p>
     */
    inline ConnectorDetail& WithConnectorLabel(const Aws::String& value) { SetConnectorLabel(value); return *this;}

    /**
     * <p>A label used for the connector.</p>
     */
    inline ConnectorDetail& WithConnectorLabel(Aws::String&& value) { SetConnectorLabel(std::move(value)); return *this;}

    /**
     * <p>A label used for the connector.</p>
     */
    inline ConnectorDetail& WithConnectorLabel(const char* value) { SetConnectorLabel(value); return *this;}


    /**
     * <p>The time at which the connector was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredAt() const{ return m_registeredAt; }

    /**
     * <p>The time at which the connector was registered.</p>
     */
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }

    /**
     * <p>The time at which the connector was registered.</p>
     */
    inline void SetRegisteredAt(const Aws::Utils::DateTime& value) { m_registeredAtHasBeenSet = true; m_registeredAt = value; }

    /**
     * <p>The time at which the connector was registered.</p>
     */
    inline void SetRegisteredAt(Aws::Utils::DateTime&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::move(value); }

    /**
     * <p>The time at which the connector was registered.</p>
     */
    inline ConnectorDetail& WithRegisteredAt(const Aws::Utils::DateTime& value) { SetRegisteredAt(value); return *this;}

    /**
     * <p>The time at which the connector was registered.</p>
     */
    inline ConnectorDetail& WithRegisteredAt(Aws::Utils::DateTime&& value) { SetRegisteredAt(std::move(value)); return *this;}


    /**
     * <p>The user who registered the connector.</p>
     */
    inline const Aws::String& GetRegisteredBy() const{ return m_registeredBy; }

    /**
     * <p>The user who registered the connector.</p>
     */
    inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }

    /**
     * <p>The user who registered the connector.</p>
     */
    inline void SetRegisteredBy(const Aws::String& value) { m_registeredByHasBeenSet = true; m_registeredBy = value; }

    /**
     * <p>The user who registered the connector.</p>
     */
    inline void SetRegisteredBy(Aws::String&& value) { m_registeredByHasBeenSet = true; m_registeredBy = std::move(value); }

    /**
     * <p>The user who registered the connector.</p>
     */
    inline void SetRegisteredBy(const char* value) { m_registeredByHasBeenSet = true; m_registeredBy.assign(value); }

    /**
     * <p>The user who registered the connector.</p>
     */
    inline ConnectorDetail& WithRegisteredBy(const Aws::String& value) { SetRegisteredBy(value); return *this;}

    /**
     * <p>The user who registered the connector.</p>
     */
    inline ConnectorDetail& WithRegisteredBy(Aws::String&& value) { SetRegisteredBy(std::move(value)); return *this;}

    /**
     * <p>The user who registered the connector.</p>
     */
    inline ConnectorDetail& WithRegisteredBy(const char* value) { SetRegisteredBy(value); return *this;}


    /**
     * <p>The provisioning type that the connector uses.</p>
     */
    inline const ConnectorProvisioningType& GetConnectorProvisioningType() const{ return m_connectorProvisioningType; }

    /**
     * <p>The provisioning type that the connector uses.</p>
     */
    inline bool ConnectorProvisioningTypeHasBeenSet() const { return m_connectorProvisioningTypeHasBeenSet; }

    /**
     * <p>The provisioning type that the connector uses.</p>
     */
    inline void SetConnectorProvisioningType(const ConnectorProvisioningType& value) { m_connectorProvisioningTypeHasBeenSet = true; m_connectorProvisioningType = value; }

    /**
     * <p>The provisioning type that the connector uses.</p>
     */
    inline void SetConnectorProvisioningType(ConnectorProvisioningType&& value) { m_connectorProvisioningTypeHasBeenSet = true; m_connectorProvisioningType = std::move(value); }

    /**
     * <p>The provisioning type that the connector uses.</p>
     */
    inline ConnectorDetail& WithConnectorProvisioningType(const ConnectorProvisioningType& value) { SetConnectorProvisioningType(value); return *this;}

    /**
     * <p>The provisioning type that the connector uses.</p>
     */
    inline ConnectorDetail& WithConnectorProvisioningType(ConnectorProvisioningType&& value) { SetConnectorProvisioningType(std::move(value)); return *this;}


    /**
     * <p>The connection mode that the connector supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorModes() const{ return m_connectorModes; }

    /**
     * <p>The connection mode that the connector supports.</p>
     */
    inline bool ConnectorModesHasBeenSet() const { return m_connectorModesHasBeenSet; }

    /**
     * <p>The connection mode that the connector supports.</p>
     */
    inline void SetConnectorModes(const Aws::Vector<Aws::String>& value) { m_connectorModesHasBeenSet = true; m_connectorModes = value; }

    /**
     * <p>The connection mode that the connector supports.</p>
     */
    inline void SetConnectorModes(Aws::Vector<Aws::String>&& value) { m_connectorModesHasBeenSet = true; m_connectorModes = std::move(value); }

    /**
     * <p>The connection mode that the connector supports.</p>
     */
    inline ConnectorDetail& WithConnectorModes(const Aws::Vector<Aws::String>& value) { SetConnectorModes(value); return *this;}

    /**
     * <p>The connection mode that the connector supports.</p>
     */
    inline ConnectorDetail& WithConnectorModes(Aws::Vector<Aws::String>&& value) { SetConnectorModes(std::move(value)); return *this;}

    /**
     * <p>The connection mode that the connector supports.</p>
     */
    inline ConnectorDetail& AddConnectorModes(const Aws::String& value) { m_connectorModesHasBeenSet = true; m_connectorModes.push_back(value); return *this; }

    /**
     * <p>The connection mode that the connector supports.</p>
     */
    inline ConnectorDetail& AddConnectorModes(Aws::String&& value) { m_connectorModesHasBeenSet = true; m_connectorModes.push_back(std::move(value)); return *this; }

    /**
     * <p>The connection mode that the connector supports.</p>
     */
    inline ConnectorDetail& AddConnectorModes(const char* value) { m_connectorModesHasBeenSet = true; m_connectorModes.push_back(value); return *this; }

  private:

    Aws::String m_connectorDescription;
    bool m_connectorDescriptionHasBeenSet = false;

    Aws::String m_connectorName;
    bool m_connectorNameHasBeenSet = false;

    Aws::String m_connectorOwner;
    bool m_connectorOwnerHasBeenSet = false;

    Aws::String m_connectorVersion;
    bool m_connectorVersionHasBeenSet = false;

    Aws::String m_applicationType;
    bool m_applicationTypeHasBeenSet = false;

    ConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    Aws::Utils::DateTime m_registeredAt;
    bool m_registeredAtHasBeenSet = false;

    Aws::String m_registeredBy;
    bool m_registeredByHasBeenSet = false;

    ConnectorProvisioningType m_connectorProvisioningType;
    bool m_connectorProvisioningTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectorModes;
    bool m_connectorModesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
