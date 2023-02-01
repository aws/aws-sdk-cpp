/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/AppIntegrationsServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

  /**
   */
  class UpdateDataIntegrationRequest : public AppIntegrationsServiceRequest
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API UpdateDataIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataIntegration"; }

    AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline UpdateDataIntegrationRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline UpdateDataIntegrationRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline UpdateDataIntegrationRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline UpdateDataIntegrationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline UpdateDataIntegrationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the DataIntegration.</p>
     */
    inline UpdateDataIntegrationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline UpdateDataIntegrationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline UpdateDataIntegrationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the DataIntegration.</p>
     */
    inline UpdateDataIntegrationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
