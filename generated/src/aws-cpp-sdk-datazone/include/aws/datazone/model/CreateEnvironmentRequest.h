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
  class CreateEnvironmentRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The description of the Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the Amazon DataZone environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the Amazon DataZone environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the Amazon DataZone environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the Amazon DataZone environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment is
     * created.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment is
     * created.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment is
     * created.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment is
     * created.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment is
     * created.</p>
     */
    inline CreateEnvironmentRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment is
     * created.</p>
     */
    inline CreateEnvironmentRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment is
     * created.</p>
     */
    inline CreateEnvironmentRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the environment profile that is used to create this Amazon
     * DataZone environment.</p>
     */
    inline const Aws::String& GetEnvironmentProfileIdentifier() const{ return m_environmentProfileIdentifier; }

    /**
     * <p>The identifier of the environment profile that is used to create this Amazon
     * DataZone environment.</p>
     */
    inline bool EnvironmentProfileIdentifierHasBeenSet() const { return m_environmentProfileIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the environment profile that is used to create this Amazon
     * DataZone environment.</p>
     */
    inline void SetEnvironmentProfileIdentifier(const Aws::String& value) { m_environmentProfileIdentifierHasBeenSet = true; m_environmentProfileIdentifier = value; }

    /**
     * <p>The identifier of the environment profile that is used to create this Amazon
     * DataZone environment.</p>
     */
    inline void SetEnvironmentProfileIdentifier(Aws::String&& value) { m_environmentProfileIdentifierHasBeenSet = true; m_environmentProfileIdentifier = std::move(value); }

    /**
     * <p>The identifier of the environment profile that is used to create this Amazon
     * DataZone environment.</p>
     */
    inline void SetEnvironmentProfileIdentifier(const char* value) { m_environmentProfileIdentifierHasBeenSet = true; m_environmentProfileIdentifier.assign(value); }

    /**
     * <p>The identifier of the environment profile that is used to create this Amazon
     * DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentProfileIdentifier(const Aws::String& value) { SetEnvironmentProfileIdentifier(value); return *this;}

    /**
     * <p>The identifier of the environment profile that is used to create this Amazon
     * DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentProfileIdentifier(Aws::String&& value) { SetEnvironmentProfileIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the environment profile that is used to create this Amazon
     * DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithEnvironmentProfileIdentifier(const char* value) { SetEnvironmentProfileIdentifier(value); return *this;}


    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }

    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }

    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }

    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }

    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}

    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}

    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& AddGlossaryTerms(const Aws::String& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }

    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& AddGlossaryTerms(Aws::String&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }

    /**
     * <p>The glossary terms that can be used in this Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& AddGlossaryTerms(const char* value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }


    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const{ return m_projectIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline void SetProjectIdentifier(const Aws::String& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline void SetProjectIdentifier(Aws::String&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline void SetProjectIdentifier(const char* value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline CreateEnvironmentRequest& WithProjectIdentifier(const Aws::String& value) { SetProjectIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline CreateEnvironmentRequest& WithProjectIdentifier(Aws::String&& value) { SetProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone project in which this environment is
     * created.</p>
     */
    inline CreateEnvironmentRequest& WithProjectIdentifier(const char* value) { SetProjectIdentifier(value); return *this;}


    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline const Aws::Vector<EnvironmentParameter>& GetUserParameters() const{ return m_userParameters; }

    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline bool UserParametersHasBeenSet() const { return m_userParametersHasBeenSet; }

    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline void SetUserParameters(const Aws::Vector<EnvironmentParameter>& value) { m_userParametersHasBeenSet = true; m_userParameters = value; }

    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline void SetUserParameters(Aws::Vector<EnvironmentParameter>&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::move(value); }

    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithUserParameters(const Aws::Vector<EnvironmentParameter>& value) { SetUserParameters(value); return *this;}

    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& WithUserParameters(Aws::Vector<EnvironmentParameter>&& value) { SetUserParameters(std::move(value)); return *this;}

    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& AddUserParameters(const EnvironmentParameter& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(value); return *this; }

    /**
     * <p>The user parameters of this Amazon DataZone environment.</p>
     */
    inline CreateEnvironmentRequest& AddUserParameters(EnvironmentParameter&& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_environmentProfileIdentifier;
    bool m_environmentProfileIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

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
