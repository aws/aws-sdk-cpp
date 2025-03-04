/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
   * <p>State capabilities added for the managed thing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/StateCapability">AWS
   * API Reference</a></p>
   */
  class StateCapability
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API StateCapability();
    AWS_IOTMANAGEDINTEGRATIONS_API StateCapability(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API StateCapability& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the managed thing in the capability report.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline StateCapability& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline StateCapability& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline StateCapability& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name for the Amazon Web Services capability.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StateCapability& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StateCapability& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StateCapability& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version for the Amazon Web Services capability.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline StateCapability& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline StateCapability& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline StateCapability& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describe the command capability with the properties it supports.</p>
     */
    inline Aws::Utils::DocumentView GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Utils::Document& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Utils::Document&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline StateCapability& WithProperties(const Aws::Utils::Document& value) { SetProperties(value); return *this;}
    inline StateCapability& WithProperties(Aws::Utils::Document&& value) { SetProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::Document m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
