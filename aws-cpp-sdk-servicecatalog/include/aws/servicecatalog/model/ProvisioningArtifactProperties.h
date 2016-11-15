/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/ProvisioningArtifactType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Provisioning artifact properties.</p>
   */
  class AWS_SERVICECATALOG_API ProvisioningArtifactProperties
  {
  public:
    ProvisioningArtifactProperties();
    ProvisioningArtifactProperties(const Aws::Utils::Json::JsonValue& jsonValue);
    ProvisioningArtifactProperties& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name assigned to the provisioning artifact properties.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name assigned to the provisioning artifact properties.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name assigned to the provisioning artifact properties.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name assigned to the provisioning artifact properties.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name assigned to the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name assigned to the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name assigned to the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The text description of the provisioning artifact properties.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The text description of the provisioning artifact properties.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the provisioning artifact properties.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the provisioning artifact properties.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The text description of the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInfo() const{ return m_info; }

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline void SetInfo(const Aws::Map<Aws::String, Aws::String>& value) { m_infoHasBeenSet = true; m_info = value; }

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline void SetInfo(Aws::Map<Aws::String, Aws::String>&& value) { m_infoHasBeenSet = true; m_info = value; }

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& WithInfo(const Aws::Map<Aws::String, Aws::String>& value) { SetInfo(value); return *this;}

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& WithInfo(Aws::Map<Aws::String, Aws::String>&& value) { SetInfo(value); return *this;}

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& AddInfo(const Aws::String& key, const Aws::String& value) { m_infoHasBeenSet = true; m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& AddInfo(Aws::String&& key, const Aws::String& value) { m_infoHasBeenSet = true; m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& AddInfo(const Aws::String& key, Aws::String&& value) { m_infoHasBeenSet = true; m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& AddInfo(Aws::String&& key, Aws::String&& value) { m_infoHasBeenSet = true; m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& AddInfo(const char* key, Aws::String&& value) { m_infoHasBeenSet = true; m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& AddInfo(Aws::String&& key, const char* value) { m_infoHasBeenSet = true; m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& AddInfo(const char* key, const char* value) { m_infoHasBeenSet = true; m_info[key] = value; return *this; }

    /**
     * <p>The type of the provisioning artifact properties.</p>
     */
    inline const ProvisioningArtifactType& GetType() const{ return m_type; }

    /**
     * <p>The type of the provisioning artifact properties.</p>
     */
    inline void SetType(const ProvisioningArtifactType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the provisioning artifact properties.</p>
     */
    inline void SetType(ProvisioningArtifactType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& WithType(const ProvisioningArtifactType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the provisioning artifact properties.</p>
     */
    inline ProvisioningArtifactProperties& WithType(ProvisioningArtifactType&& value) { SetType(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_info;
    bool m_infoHasBeenSet;
    ProvisioningArtifactType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
