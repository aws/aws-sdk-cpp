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
  class DeleteDataIntegrationRequest : public AppIntegrationsServiceRequest
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API DeleteDataIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataIntegration"; }

    AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline const Aws::String& GetDataIntegrationIdentifier() const{ return m_dataIntegrationIdentifier; }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline bool DataIntegrationIdentifierHasBeenSet() const { return m_dataIntegrationIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline void SetDataIntegrationIdentifier(const Aws::String& value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier = value; }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline void SetDataIntegrationIdentifier(Aws::String&& value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline void SetDataIntegrationIdentifier(const char* value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline DeleteDataIntegrationRequest& WithDataIntegrationIdentifier(const Aws::String& value) { SetDataIntegrationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline DeleteDataIntegrationRequest& WithDataIntegrationIdentifier(Aws::String&& value) { SetDataIntegrationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline DeleteDataIntegrationRequest& WithDataIntegrationIdentifier(const char* value) { SetDataIntegrationIdentifier(value); return *this;}

  private:

    Aws::String m_dataIntegrationIdentifier;
    bool m_dataIntegrationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
