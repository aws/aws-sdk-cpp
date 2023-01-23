/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/FederationMode.h>
#include <aws/finspace/model/FederationParameters.h>
#include <utility>

namespace Aws
{
namespace finspace
{
namespace Model
{

  /**
   */
  class UpdateEnvironmentRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API UpdateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline UpdateEnvironmentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the environment.</p>
     */
    inline UpdateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateEnvironmentRequest& WithFederationMode(const FederationMode& value) { SetFederationMode(value); return *this;}

    /**
     * <p>Authentication mode for the environment.</p> <ul> <li> <p>
     * <code>FEDERATED</code> - Users access FinSpace through Single Sign On (SSO) via
     * your Identity provider.</p> </li> <li> <p> <code>LOCAL</code> - Users access
     * FinSpace via email and password managed within the FinSpace environment.</p>
     * </li> </ul>
     */
    inline UpdateEnvironmentRequest& WithFederationMode(FederationMode&& value) { SetFederationMode(std::move(value)); return *this;}


    
    inline const FederationParameters& GetFederationParameters() const{ return m_federationParameters; }

    
    inline bool FederationParametersHasBeenSet() const { return m_federationParametersHasBeenSet; }

    
    inline void SetFederationParameters(const FederationParameters& value) { m_federationParametersHasBeenSet = true; m_federationParameters = value; }

    
    inline void SetFederationParameters(FederationParameters&& value) { m_federationParametersHasBeenSet = true; m_federationParameters = std::move(value); }

    
    inline UpdateEnvironmentRequest& WithFederationParameters(const FederationParameters& value) { SetFederationParameters(value); return *this;}

    
    inline UpdateEnvironmentRequest& WithFederationParameters(FederationParameters&& value) { SetFederationParameters(std::move(value)); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FederationMode m_federationMode;
    bool m_federationModeHasBeenSet = false;

    FederationParameters m_federationParameters;
    bool m_federationParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
