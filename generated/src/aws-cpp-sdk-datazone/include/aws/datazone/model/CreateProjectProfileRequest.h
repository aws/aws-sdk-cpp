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
  class CreateProjectProfileRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateProjectProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProjectProfile"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A description of a project profile.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateProjectProfileRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A domain ID of the project profile.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    CreateProjectProfileRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A domain unit ID of the project profile.</p>
     */
    inline const Aws::String& GetDomainUnitIdentifier() const { return m_domainUnitIdentifier; }
    inline bool DomainUnitIdentifierHasBeenSet() const { return m_domainUnitIdentifierHasBeenSet; }
    template<typename DomainUnitIdentifierT = Aws::String>
    void SetDomainUnitIdentifier(DomainUnitIdentifierT&& value) { m_domainUnitIdentifierHasBeenSet = true; m_domainUnitIdentifier = std::forward<DomainUnitIdentifierT>(value); }
    template<typename DomainUnitIdentifierT = Aws::String>
    CreateProjectProfileRequest& WithDomainUnitIdentifier(DomainUnitIdentifierT&& value) { SetDomainUnitIdentifier(std::forward<DomainUnitIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Environment configurations of the project profile.</p>
     */
    inline const Aws::Vector<EnvironmentConfiguration>& GetEnvironmentConfigurations() const { return m_environmentConfigurations; }
    inline bool EnvironmentConfigurationsHasBeenSet() const { return m_environmentConfigurationsHasBeenSet; }
    template<typename EnvironmentConfigurationsT = Aws::Vector<EnvironmentConfiguration>>
    void SetEnvironmentConfigurations(EnvironmentConfigurationsT&& value) { m_environmentConfigurationsHasBeenSet = true; m_environmentConfigurations = std::forward<EnvironmentConfigurationsT>(value); }
    template<typename EnvironmentConfigurationsT = Aws::Vector<EnvironmentConfiguration>>
    CreateProjectProfileRequest& WithEnvironmentConfigurations(EnvironmentConfigurationsT&& value) { SetEnvironmentConfigurations(std::forward<EnvironmentConfigurationsT>(value)); return *this;}
    template<typename EnvironmentConfigurationsT = EnvironmentConfiguration>
    CreateProjectProfileRequest& AddEnvironmentConfigurations(EnvironmentConfigurationsT&& value) { m_environmentConfigurationsHasBeenSet = true; m_environmentConfigurations.emplace_back(std::forward<EnvironmentConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Project profile name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateProjectProfileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Project profile status.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateProjectProfileRequest& WithStatus(Status value) { SetStatus(value); return *this;}
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

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
