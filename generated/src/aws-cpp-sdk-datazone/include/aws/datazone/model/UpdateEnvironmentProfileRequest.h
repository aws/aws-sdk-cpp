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
  class UpdateEnvironmentProfileRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateEnvironmentProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironmentProfile"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const{ return m_awsAccountRegion; }

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline bool AwsAccountRegionHasBeenSet() const { return m_awsAccountRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline void SetAwsAccountRegion(const Aws::String& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = value; }

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline void SetAwsAccountRegion(Aws::String&& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline void SetAwsAccountRegion(const char* value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithAwsAccountRegion(const Aws::String& value) { SetAwsAccountRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithAwsAccountRegion(Aws::String&& value) { SetAwsAccountRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithAwsAccountRegion(const char* value) { SetAwsAccountRegion(value); return *this;}


    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which an environment profile
     * is to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which an environment profile
     * is to be updated.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which an environment profile
     * is to be updated.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which an environment profile
     * is to be updated.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which an environment profile
     * is to be updated.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which an environment profile
     * is to be updated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which an environment profile
     * is to be updated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which an environment profile
     * is to be updated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the environment profile that is to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the environment profile that is to be updated.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the environment profile that is to be updated.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the environment profile that is to be updated.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the environment profile that is to be updated.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the environment profile that is to be updated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the environment profile that is to be updated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the environment profile that is to be updated.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline const Aws::Vector<EnvironmentParameter>& GetUserParameters() const{ return m_userParameters; }

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline bool UserParametersHasBeenSet() const { return m_userParametersHasBeenSet; }

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline void SetUserParameters(const Aws::Vector<EnvironmentParameter>& value) { m_userParametersHasBeenSet = true; m_userParameters = value; }

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline void SetUserParameters(Aws::Vector<EnvironmentParameter>&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::move(value); }

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithUserParameters(const Aws::Vector<EnvironmentParameter>& value) { SetUserParameters(value); return *this;}

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileRequest& WithUserParameters(Aws::Vector<EnvironmentParameter>&& value) { SetUserParameters(std::move(value)); return *this;}

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileRequest& AddUserParameters(const EnvironmentParameter& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(value); return *this; }

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileRequest& AddUserParameters(EnvironmentParameter&& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsAccountRegion;
    bool m_awsAccountRegionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<EnvironmentParameter> m_userParameters;
    bool m_userParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
