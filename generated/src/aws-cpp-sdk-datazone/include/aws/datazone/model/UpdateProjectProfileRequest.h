/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/Status.h>
#include <aws/datazone/model/EnvironmentConfiguration.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateProjectProfileRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateProjectProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProjectProfile"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The description of a project profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateProjectProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateProjectProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateProjectProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where a project profile is to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline UpdateProjectProfileRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline UpdateProjectProfileRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline UpdateProjectProfileRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit where a project profile is to be updated.</p>
     */
    inline const Aws::String& GetDomainUnitIdentifier() const{ return m_domainUnitIdentifier; }
    inline bool DomainUnitIdentifierHasBeenSet() const { return m_domainUnitIdentifierHasBeenSet; }
    inline void SetDomainUnitIdentifier(const Aws::String& value) { m_domainUnitIdentifierHasBeenSet = true; m_domainUnitIdentifier = value; }
    inline void SetDomainUnitIdentifier(Aws::String&& value) { m_domainUnitIdentifierHasBeenSet = true; m_domainUnitIdentifier = std::move(value); }
    inline void SetDomainUnitIdentifier(const char* value) { m_domainUnitIdentifierHasBeenSet = true; m_domainUnitIdentifier.assign(value); }
    inline UpdateProjectProfileRequest& WithDomainUnitIdentifier(const Aws::String& value) { SetDomainUnitIdentifier(value); return *this;}
    inline UpdateProjectProfileRequest& WithDomainUnitIdentifier(Aws::String&& value) { SetDomainUnitIdentifier(std::move(value)); return *this;}
    inline UpdateProjectProfileRequest& WithDomainUnitIdentifier(const char* value) { SetDomainUnitIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment configurations of a project profile.</p>
     */
    inline const Aws::Vector<EnvironmentConfiguration>& GetEnvironmentConfigurations() const{ return m_environmentConfigurations; }
    inline bool EnvironmentConfigurationsHasBeenSet() const { return m_environmentConfigurationsHasBeenSet; }
    inline void SetEnvironmentConfigurations(const Aws::Vector<EnvironmentConfiguration>& value) { m_environmentConfigurationsHasBeenSet = true; m_environmentConfigurations = value; }
    inline void SetEnvironmentConfigurations(Aws::Vector<EnvironmentConfiguration>&& value) { m_environmentConfigurationsHasBeenSet = true; m_environmentConfigurations = std::move(value); }
    inline UpdateProjectProfileRequest& WithEnvironmentConfigurations(const Aws::Vector<EnvironmentConfiguration>& value) { SetEnvironmentConfigurations(value); return *this;}
    inline UpdateProjectProfileRequest& WithEnvironmentConfigurations(Aws::Vector<EnvironmentConfiguration>&& value) { SetEnvironmentConfigurations(std::move(value)); return *this;}
    inline UpdateProjectProfileRequest& AddEnvironmentConfigurations(const EnvironmentConfiguration& value) { m_environmentConfigurationsHasBeenSet = true; m_environmentConfigurations.push_back(value); return *this; }
    inline UpdateProjectProfileRequest& AddEnvironmentConfigurations(EnvironmentConfiguration&& value) { m_environmentConfigurationsHasBeenSet = true; m_environmentConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of a project profile that is to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateProjectProfileRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateProjectProfileRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateProjectProfileRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a project profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateProjectProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateProjectProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateProjectProfileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a project profile.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateProjectProfileRequest& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline UpdateProjectProfileRequest& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_domainUnitIdentifier;
    bool m_domainUnitIdentifierHasBeenSet = false;

    Aws::Vector<EnvironmentConfiguration> m_environmentConfigurations;
    bool m_environmentConfigurationsHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
