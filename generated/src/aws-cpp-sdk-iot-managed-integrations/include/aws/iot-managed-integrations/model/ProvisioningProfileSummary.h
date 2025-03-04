/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/ProvisioningType.h>
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
   * <p>Structure describing a provisioning profile. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ProvisioningProfileSummary">AWS
   * API Reference</a></p>
   */
  class ProvisioningProfileSummary
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ProvisioningProfileSummary();
    AWS_IOTMANAGEDINTEGRATIONS_API ProvisioningProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API ProvisioningProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProvisioningProfileSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProvisioningProfileSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProvisioningProfileSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ProvisioningProfileSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ProvisioningProfileSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ProvisioningProfileSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the provisioning template used in the
     * provisioning profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ProvisioningProfileSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ProvisioningProfileSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ProvisioningProfileSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provisioning workflow the device uses for onboarding to IoT
     * managed integrations.</p>
     */
    inline const ProvisioningType& GetProvisioningType() const{ return m_provisioningType; }
    inline bool ProvisioningTypeHasBeenSet() const { return m_provisioningTypeHasBeenSet; }
    inline void SetProvisioningType(const ProvisioningType& value) { m_provisioningTypeHasBeenSet = true; m_provisioningType = value; }
    inline void SetProvisioningType(ProvisioningType&& value) { m_provisioningTypeHasBeenSet = true; m_provisioningType = std::move(value); }
    inline ProvisioningProfileSummary& WithProvisioningType(const ProvisioningType& value) { SetProvisioningType(value); return *this;}
    inline ProvisioningProfileSummary& WithProvisioningType(ProvisioningType&& value) { SetProvisioningType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ProvisioningType m_provisioningType;
    bool m_provisioningTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
