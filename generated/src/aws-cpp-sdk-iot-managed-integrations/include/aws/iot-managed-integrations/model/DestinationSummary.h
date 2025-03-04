/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/DeliveryDestinationType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure describing a destination for IoT managed integrations to deliver
   * notifications for a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DestinationSummary">AWS
   * API Reference</a></p>
   */
  class DestinationSummary
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API DestinationSummary();
    AWS_IOTMANAGEDINTEGRATIONS_API DestinationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API DestinationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the customer-managed destination.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DestinationSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DestinationSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DestinationSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer-managed destination.</p>
     */
    inline const Aws::String& GetDeliveryDestinationArn() const{ return m_deliveryDestinationArn; }
    inline bool DeliveryDestinationArnHasBeenSet() const { return m_deliveryDestinationArnHasBeenSet; }
    inline void SetDeliveryDestinationArn(const Aws::String& value) { m_deliveryDestinationArnHasBeenSet = true; m_deliveryDestinationArn = value; }
    inline void SetDeliveryDestinationArn(Aws::String&& value) { m_deliveryDestinationArnHasBeenSet = true; m_deliveryDestinationArn = std::move(value); }
    inline void SetDeliveryDestinationArn(const char* value) { m_deliveryDestinationArnHasBeenSet = true; m_deliveryDestinationArn.assign(value); }
    inline DestinationSummary& WithDeliveryDestinationArn(const Aws::String& value) { SetDeliveryDestinationArn(value); return *this;}
    inline DestinationSummary& WithDeliveryDestinationArn(Aws::String&& value) { SetDeliveryDestinationArn(std::move(value)); return *this;}
    inline DestinationSummary& WithDeliveryDestinationArn(const char* value) { SetDeliveryDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination type for the customer-managed destination.</p>
     */
    inline const DeliveryDestinationType& GetDeliveryDestinationType() const{ return m_deliveryDestinationType; }
    inline bool DeliveryDestinationTypeHasBeenSet() const { return m_deliveryDestinationTypeHasBeenSet; }
    inline void SetDeliveryDestinationType(const DeliveryDestinationType& value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = value; }
    inline void SetDeliveryDestinationType(DeliveryDestinationType&& value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = std::move(value); }
    inline DestinationSummary& WithDeliveryDestinationType(const DeliveryDestinationType& value) { SetDeliveryDestinationType(value); return *this;}
    inline DestinationSummary& WithDeliveryDestinationType(DeliveryDestinationType&& value) { SetDeliveryDestinationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the customer-managed destination.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DestinationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DestinationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DestinationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the delivery destination.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline DestinationSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DestinationSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DestinationSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_deliveryDestinationArn;
    bool m_deliveryDestinationArnHasBeenSet = false;

    DeliveryDestinationType m_deliveryDestinationType;
    bool m_deliveryDestinationTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
