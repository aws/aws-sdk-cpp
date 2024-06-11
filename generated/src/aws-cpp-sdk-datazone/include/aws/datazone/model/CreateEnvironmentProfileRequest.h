﻿/**
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
    AWS_DATAZONE_API CreateEnvironmentProfileRequest();

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
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CreateEnvironmentProfileRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CreateEnvironmentProfileRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CreateEnvironmentProfileRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region in which this environment profile is
     * created.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const{ return m_awsAccountRegion; }
    inline bool AwsAccountRegionHasBeenSet() const { return m_awsAccountRegionHasBeenSet; }
    inline void SetAwsAccountRegion(const Aws::String& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = value; }
    inline void SetAwsAccountRegion(Aws::String&& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = std::move(value); }
    inline void SetAwsAccountRegion(const char* value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion.assign(value); }
    inline CreateEnvironmentProfileRequest& WithAwsAccountRegion(const Aws::String& value) { SetAwsAccountRegion(value); return *this;}
    inline CreateEnvironmentProfileRequest& WithAwsAccountRegion(Aws::String&& value) { SetAwsAccountRegion(std::move(value)); return *this;}
    inline CreateEnvironmentProfileRequest& WithAwsAccountRegion(const char* value) { SetAwsAccountRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of this Amazon DataZone environment profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateEnvironmentProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateEnvironmentProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateEnvironmentProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this environment profile is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline CreateEnvironmentProfileRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline CreateEnvironmentProfileRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline CreateEnvironmentProfileRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the blueprint with which this environment profile is created.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintIdentifier() const{ return m_environmentBlueprintIdentifier; }
    inline bool EnvironmentBlueprintIdentifierHasBeenSet() const { return m_environmentBlueprintIdentifierHasBeenSet; }
    inline void SetEnvironmentBlueprintIdentifier(const Aws::String& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = value; }
    inline void SetEnvironmentBlueprintIdentifier(Aws::String&& value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier = std::move(value); }
    inline void SetEnvironmentBlueprintIdentifier(const char* value) { m_environmentBlueprintIdentifierHasBeenSet = true; m_environmentBlueprintIdentifier.assign(value); }
    inline CreateEnvironmentProfileRequest& WithEnvironmentBlueprintIdentifier(const Aws::String& value) { SetEnvironmentBlueprintIdentifier(value); return *this;}
    inline CreateEnvironmentProfileRequest& WithEnvironmentBlueprintIdentifier(Aws::String&& value) { SetEnvironmentBlueprintIdentifier(std::move(value)); return *this;}
    inline CreateEnvironmentProfileRequest& WithEnvironmentBlueprintIdentifier(const char* value) { SetEnvironmentBlueprintIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this Amazon DataZone environment profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateEnvironmentProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateEnvironmentProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateEnvironmentProfileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the project in which to create the environment profile.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const{ return m_projectIdentifier; }
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
    inline void SetProjectIdentifier(const Aws::String& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = value; }
    inline void SetProjectIdentifier(Aws::String&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::move(value); }
    inline void SetProjectIdentifier(const char* value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier.assign(value); }
    inline CreateEnvironmentProfileRequest& WithProjectIdentifier(const Aws::String& value) { SetProjectIdentifier(value); return *this;}
    inline CreateEnvironmentProfileRequest& WithProjectIdentifier(Aws::String&& value) { SetProjectIdentifier(std::move(value)); return *this;}
    inline CreateEnvironmentProfileRequest& WithProjectIdentifier(const char* value) { SetProjectIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of this Amazon DataZone environment profile.</p>
     */
    inline const Aws::Vector<EnvironmentParameter>& GetUserParameters() const{ return m_userParameters; }
    inline bool UserParametersHasBeenSet() const { return m_userParametersHasBeenSet; }
    inline void SetUserParameters(const Aws::Vector<EnvironmentParameter>& value) { m_userParametersHasBeenSet = true; m_userParameters = value; }
    inline void SetUserParameters(Aws::Vector<EnvironmentParameter>&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::move(value); }
    inline CreateEnvironmentProfileRequest& WithUserParameters(const Aws::Vector<EnvironmentParameter>& value) { SetUserParameters(value); return *this;}
    inline CreateEnvironmentProfileRequest& WithUserParameters(Aws::Vector<EnvironmentParameter>&& value) { SetUserParameters(std::move(value)); return *this;}
    inline CreateEnvironmentProfileRequest& AddUserParameters(const EnvironmentParameter& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(value); return *this; }
    inline CreateEnvironmentProfileRequest& AddUserParameters(EnvironmentParameter&& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(std::move(value)); return *this; }
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
