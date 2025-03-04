/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class UpdateOtaTaskRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API UpdateOtaTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOtaTask"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The over-the-air (OTA) task id.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateOtaTaskRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateOtaTaskRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateOtaTaskRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the over-the-air (OTA) task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateOtaTaskRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateOtaTaskRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateOtaTaskRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the over-the-air (OTA) task configuration.</p>
     */
    inline const Aws::String& GetTaskConfigurationId() const{ return m_taskConfigurationId; }
    inline bool TaskConfigurationIdHasBeenSet() const { return m_taskConfigurationIdHasBeenSet; }
    inline void SetTaskConfigurationId(const Aws::String& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = value; }
    inline void SetTaskConfigurationId(Aws::String&& value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId = std::move(value); }
    inline void SetTaskConfigurationId(const char* value) { m_taskConfigurationIdHasBeenSet = true; m_taskConfigurationId.assign(value); }
    inline UpdateOtaTaskRequest& WithTaskConfigurationId(const Aws::String& value) { SetTaskConfigurationId(value); return *this;}
    inline UpdateOtaTaskRequest& WithTaskConfigurationId(Aws::String&& value) { SetTaskConfigurationId(std::move(value)); return *this;}
    inline UpdateOtaTaskRequest& WithTaskConfigurationId(const char* value) { SetTaskConfigurationId(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_taskConfigurationId;
    bool m_taskConfigurationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
