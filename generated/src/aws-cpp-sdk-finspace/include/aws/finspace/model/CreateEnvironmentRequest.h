/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/finspace/model/FederationMode.h>
#include <aws/finspace/model/FederationParameters.h>
#include <aws/finspace/model/SuperuserParameters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace finspace
{
namespace Model
{

  /**
   */
  class CreateEnvironmentRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API CreateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the FinSpace environment to be created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the FinSpace environment to be created.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the FinSpace environment to be created.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the FinSpace environment to be created.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the FinSpace environment to be created.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the FinSpace environment to be created.</p>
     */
    inline CreateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the FinSpace environment to be created.</p>
     */
    inline CreateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the FinSpace environment to be created.</p>
     */
    inline CreateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the FinSpace environment to be created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the FinSpace environment to be created.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the FinSpace environment to be created.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the FinSpace environment to be created.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the FinSpace environment to be created.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the FinSpace environment to be created.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the FinSpace environment to be created.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the FinSpace environment to be created.</p>
     */
    inline CreateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The KMS key id to encrypt your data in the FinSpace environment.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key id to encrypt your data in the FinSpace environment.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key id to encrypt your data in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key id to encrypt your data in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key id to encrypt your data in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key id to encrypt your data in the FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key id to encrypt your data in the FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key id to encrypt your data in the FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Add tags to your FinSpace environment.</p>
     */
    inline CreateEnvironmentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Authentication mode for the environment.</p> <ul> <li> <p>
     * <code>FEDERATED</code> - Users access FinSpace through Single Sign On (SSO) via
     * your Identity provider.</p> </li> <li> <p> <code>LOCAL</code> - Users access
     * FinSpace via email and password managed within the FinSpace environment.</p>
     * </li> </ul>
     */
    inline const FederationMode& GetFederationMode() const{ return m_federationMode; }

    /**
     * <p>Authentication mode for the environment.</p> <ul> <li> <p>
     * <code>FEDERATED</code> - Users access FinSpace through Single Sign On (SSO) via
     * your Identity provider.</p> </li> <li> <p> <code>LOCAL</code> - Users access
     * FinSpace via email and password managed within the FinSpace environment.</p>
     * </li> </ul>
     */
    inline bool FederationModeHasBeenSet() const { return m_federationModeHasBeenSet; }

    /**
     * <p>Authentication mode for the environment.</p> <ul> <li> <p>
     * <code>FEDERATED</code> - Users access FinSpace through Single Sign On (SSO) via
     * your Identity provider.</p> </li> <li> <p> <code>LOCAL</code> - Users access
     * FinSpace via email and password managed within the FinSpace environment.</p>
     * </li> </ul>
     */
    inline void SetFederationMode(const FederationMode& value) { m_federationModeHasBeenSet = true; m_federationMode = value; }

    /**
     * <p>Authentication mode for the environment.</p> <ul> <li> <p>
     * <code>FEDERATED</code> - Users access FinSpace through Single Sign On (SSO) via
     * your Identity provider.</p> </li> <li> <p> <code>LOCAL</code> - Users access
     * FinSpace via email and password managed within the FinSpace environment.</p>
     * </li> </ul>
     */
    inline void SetFederationMode(FederationMode&& value) { m_federationModeHasBeenSet = true; m_federationMode = std::move(value); }

    /**
     * <p>Authentication mode for the environment.</p> <ul> <li> <p>
     * <code>FEDERATED</code> - Users access FinSpace through Single Sign On (SSO) via
     * your Identity provider.</p> </li> <li> <p> <code>LOCAL</code> - Users access
     * FinSpace via email and password managed within the FinSpace environment.</p>
     * </li> </ul>
     */
    inline CreateEnvironmentRequest& WithFederationMode(const FederationMode& value) { SetFederationMode(value); return *this;}

    /**
     * <p>Authentication mode for the environment.</p> <ul> <li> <p>
     * <code>FEDERATED</code> - Users access FinSpace through Single Sign On (SSO) via
     * your Identity provider.</p> </li> <li> <p> <code>LOCAL</code> - Users access
     * FinSpace via email and password managed within the FinSpace environment.</p>
     * </li> </ul>
     */
    inline CreateEnvironmentRequest& WithFederationMode(FederationMode&& value) { SetFederationMode(std::move(value)); return *this;}


    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline const FederationParameters& GetFederationParameters() const{ return m_federationParameters; }

    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline bool FederationParametersHasBeenSet() const { return m_federationParametersHasBeenSet; }

    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline void SetFederationParameters(const FederationParameters& value) { m_federationParametersHasBeenSet = true; m_federationParameters = value; }

    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline void SetFederationParameters(FederationParameters&& value) { m_federationParametersHasBeenSet = true; m_federationParameters = std::move(value); }

    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline CreateEnvironmentRequest& WithFederationParameters(const FederationParameters& value) { SetFederationParameters(value); return *this;}

    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline CreateEnvironmentRequest& WithFederationParameters(FederationParameters&& value) { SetFederationParameters(std::move(value)); return *this;}


    /**
     * <p>Configuration information for the superuser.</p>
     */
    inline const SuperuserParameters& GetSuperuserParameters() const{ return m_superuserParameters; }

    /**
     * <p>Configuration information for the superuser.</p>
     */
    inline bool SuperuserParametersHasBeenSet() const { return m_superuserParametersHasBeenSet; }

    /**
     * <p>Configuration information for the superuser.</p>
     */
    inline void SetSuperuserParameters(const SuperuserParameters& value) { m_superuserParametersHasBeenSet = true; m_superuserParameters = value; }

    /**
     * <p>Configuration information for the superuser.</p>
     */
    inline void SetSuperuserParameters(SuperuserParameters&& value) { m_superuserParametersHasBeenSet = true; m_superuserParameters = std::move(value); }

    /**
     * <p>Configuration information for the superuser.</p>
     */
    inline CreateEnvironmentRequest& WithSuperuserParameters(const SuperuserParameters& value) { SetSuperuserParameters(value); return *this;}

    /**
     * <p>Configuration information for the superuser.</p>
     */
    inline CreateEnvironmentRequest& WithSuperuserParameters(SuperuserParameters&& value) { SetSuperuserParameters(std::move(value)); return *this;}


    /**
     * <p>The list of Amazon Resource Names (ARN) of the data bundles to install.
     * Currently supported data bundle ARNs:</p> <ul> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/capital-markets-sample</code> -
     * Contains sample Capital Markets datasets, categories and controlled
     * vocabularies.</p> </li> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/taq</code> (default) - Contains
     * trades and quotes data in addition to sample Capital Markets data.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDataBundles() const{ return m_dataBundles; }

    /**
     * <p>The list of Amazon Resource Names (ARN) of the data bundles to install.
     * Currently supported data bundle ARNs:</p> <ul> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/capital-markets-sample</code> -
     * Contains sample Capital Markets datasets, categories and controlled
     * vocabularies.</p> </li> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/taq</code> (default) - Contains
     * trades and quotes data in addition to sample Capital Markets data.</p> </li>
     * </ul>
     */
    inline bool DataBundlesHasBeenSet() const { return m_dataBundlesHasBeenSet; }

    /**
     * <p>The list of Amazon Resource Names (ARN) of the data bundles to install.
     * Currently supported data bundle ARNs:</p> <ul> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/capital-markets-sample</code> -
     * Contains sample Capital Markets datasets, categories and controlled
     * vocabularies.</p> </li> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/taq</code> (default) - Contains
     * trades and quotes data in addition to sample Capital Markets data.</p> </li>
     * </ul>
     */
    inline void SetDataBundles(const Aws::Vector<Aws::String>& value) { m_dataBundlesHasBeenSet = true; m_dataBundles = value; }

    /**
     * <p>The list of Amazon Resource Names (ARN) of the data bundles to install.
     * Currently supported data bundle ARNs:</p> <ul> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/capital-markets-sample</code> -
     * Contains sample Capital Markets datasets, categories and controlled
     * vocabularies.</p> </li> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/taq</code> (default) - Contains
     * trades and quotes data in addition to sample Capital Markets data.</p> </li>
     * </ul>
     */
    inline void SetDataBundles(Aws::Vector<Aws::String>&& value) { m_dataBundlesHasBeenSet = true; m_dataBundles = std::move(value); }

    /**
     * <p>The list of Amazon Resource Names (ARN) of the data bundles to install.
     * Currently supported data bundle ARNs:</p> <ul> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/capital-markets-sample</code> -
     * Contains sample Capital Markets datasets, categories and controlled
     * vocabularies.</p> </li> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/taq</code> (default) - Contains
     * trades and quotes data in addition to sample Capital Markets data.</p> </li>
     * </ul>
     */
    inline CreateEnvironmentRequest& WithDataBundles(const Aws::Vector<Aws::String>& value) { SetDataBundles(value); return *this;}

    /**
     * <p>The list of Amazon Resource Names (ARN) of the data bundles to install.
     * Currently supported data bundle ARNs:</p> <ul> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/capital-markets-sample</code> -
     * Contains sample Capital Markets datasets, categories and controlled
     * vocabularies.</p> </li> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/taq</code> (default) - Contains
     * trades and quotes data in addition to sample Capital Markets data.</p> </li>
     * </ul>
     */
    inline CreateEnvironmentRequest& WithDataBundles(Aws::Vector<Aws::String>&& value) { SetDataBundles(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Resource Names (ARN) of the data bundles to install.
     * Currently supported data bundle ARNs:</p> <ul> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/capital-markets-sample</code> -
     * Contains sample Capital Markets datasets, categories and controlled
     * vocabularies.</p> </li> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/taq</code> (default) - Contains
     * trades and quotes data in addition to sample Capital Markets data.</p> </li>
     * </ul>
     */
    inline CreateEnvironmentRequest& AddDataBundles(const Aws::String& value) { m_dataBundlesHasBeenSet = true; m_dataBundles.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Resource Names (ARN) of the data bundles to install.
     * Currently supported data bundle ARNs:</p> <ul> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/capital-markets-sample</code> -
     * Contains sample Capital Markets datasets, categories and controlled
     * vocabularies.</p> </li> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/taq</code> (default) - Contains
     * trades and quotes data in addition to sample Capital Markets data.</p> </li>
     * </ul>
     */
    inline CreateEnvironmentRequest& AddDataBundles(Aws::String&& value) { m_dataBundlesHasBeenSet = true; m_dataBundles.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon Resource Names (ARN) of the data bundles to install.
     * Currently supported data bundle ARNs:</p> <ul> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/capital-markets-sample</code> -
     * Contains sample Capital Markets datasets, categories and controlled
     * vocabularies.</p> </li> <li> <p>
     * <code>arn:aws:finspace:${Region}::data-bundle/taq</code> (default) - Contains
     * trades and quotes data in addition to sample Capital Markets data.</p> </li>
     * </ul>
     */
    inline CreateEnvironmentRequest& AddDataBundles(const char* value) { m_dataBundlesHasBeenSet = true; m_dataBundles.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    FederationMode m_federationMode;
    bool m_federationModeHasBeenSet = false;

    FederationParameters m_federationParameters;
    bool m_federationParametersHasBeenSet = false;

    SuperuserParameters m_superuserParameters;
    bool m_superuserParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataBundles;
    bool m_dataBundlesHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
