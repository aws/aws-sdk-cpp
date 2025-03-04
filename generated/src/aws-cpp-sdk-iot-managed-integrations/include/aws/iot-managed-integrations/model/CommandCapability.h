/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/CapabilityAction.h>
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
   * <p>The command capabilities added for the managed thing</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CommandCapability">AWS
   * API Reference</a></p>
   */
  class CommandCapability
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CommandCapability();
    AWS_IOTMANAGEDINTEGRATIONS_API CommandCapability(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API CommandCapability& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describe the capability with an id.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CommandCapability& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CommandCapability& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CommandCapability& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe the capability with an name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CommandCapability& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CommandCapability& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CommandCapability& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe the capability with a version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline CommandCapability& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CommandCapability& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CommandCapability& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe the command capability with the actions it supports.</p>
     */
    inline const Aws::Vector<CapabilityAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<CapabilityAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<CapabilityAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline CommandCapability& WithActions(const Aws::Vector<CapabilityAction>& value) { SetActions(value); return *this;}
    inline CommandCapability& WithActions(Aws::Vector<CapabilityAction>&& value) { SetActions(std::move(value)); return *this;}
    inline CommandCapability& AddActions(const CapabilityAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline CommandCapability& AddActions(CapabilityAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<CapabilityAction> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
