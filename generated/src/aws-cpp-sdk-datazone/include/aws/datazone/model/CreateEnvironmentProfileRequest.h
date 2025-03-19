/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/EnvironmentParameter.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateEnvironmentProfileRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateEnvironmentProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironmentProfile"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account in which the Amazon DataZone environment is
     * created.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CreateEnvironmentProfileRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region in which this environment profile is
     * created.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const { return m_awsAccountRegion; }
    inline bool AwsAccountRegionHasBeenSet() const { return m_awsAccountRegionHasBeenSet; }
    template<typename AwsAccountRegionT = Aws::String>
    void SetAwsAccountRegion(AwsAccountRegionT&& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = std::forward<AwsAccountRegionT>(value); }
    template<typename AwsAccountRegionT = Aws::String>
    CreateEnvironmentProfileRequest& WithAwsAccountRegion(AwsAccountRegionT&& value) { SetAwsAccountRegion(std::forward<AwsAccountRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of this Amazon DataZone environment profile.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateEnvironmentProfileRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this environment profile is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    CreateEnvironmentProfileRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the blueprint with which this environment profile is created.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintIdentifier() const { return m_environmentBlueprintIdentifier; }
    inline bool EnvironmentBlueprintIdentifierHasBeenSet() const { return m_environmentBlueprintIdentifierHasBeenSet; }
    template<typename EnvironmentBlueprintIdentifierT = Aws::String>
    void SetEnvironmentBlueprintIdentifier(EnvironmentBlueprintIdentifierT&& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = std::forward<EnvironmentBlueprintIdentifierT>(value); }
    template<typename EnvironmentBlueprintIdentifierT = Aws::String>
    CreateEnvironmentProfileRequest& WithEnvironmentBlueprintIdentifier(EnvironmentBlueprintIdentifierT&& value) { SetEnvironmentBlueprintIdentifier(std::forward<EnvironmentBlueprintIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this Amazon DataZone environment profile.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateEnvironmentProfileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project in which to create the environment profile.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
    template<typename ProjectIdentifierT = Aws::String>
    void SetProjectIdentifier(ProjectIdentifierT&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::forward<ProjectIdentifierT>(value); }
    template<typename ProjectIdentifierT = Aws::String>
    CreateEnvironmentProfileRequest& WithProjectIdentifier(ProjectIdentifierT&& value) { SetProjectIdentifier(std::forward<ProjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of this Amazon DataZone environment profile.</p>
     */
    inline const Aws::Vector<EnvironmentParameter>& GetUserParameters() const { return m_userParameters; }
    inline bool UserParametersHasBeenSet() const { return m_userParametersHasBeenSet; }
    template<typename UserParametersT = Aws::Vector<EnvironmentParameter>>
    void SetUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::forward<UserParametersT>(value); }
    template<typename UserParametersT = Aws::Vector<EnvironmentParameter>>
    CreateEnvironmentProfileRequest& WithUserParameters(UserParametersT&& value) { SetUserParameters(std::forward<UserParametersT>(value)); return *this;}
    template<typename UserParametersT = EnvironmentParameter>
    CreateEnvironmentProfileRequest& AddUserParameters(UserParametersT&& value) { m_userParametersHasBeenSet = true; m_userParameters.emplace_back(std::forward<UserParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsAccountRegion;
    bool m_awsAccountRegionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_environmentBlueprintIdentifier;
    bool m_environmentBlueprintIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectIdentifier;
    bool m_projectIdentifierHasBeenSet = false;

    Aws::Vector<EnvironmentParameter> m_userParameters;
    bool m_userParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
