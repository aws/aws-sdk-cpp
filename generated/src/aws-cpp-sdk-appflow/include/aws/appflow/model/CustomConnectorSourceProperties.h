/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>The properties that are applied when the custom connector is being used as a
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/CustomConnectorSourceProperties">AWS
   * API Reference</a></p>
   */
  class CustomConnectorSourceProperties
  {
  public:
    AWS_APPFLOW_API CustomConnectorSourceProperties();
    AWS_APPFLOW_API CustomConnectorSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API CustomConnectorSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The entity specified in the custom connector as a source in the flow.</p>
     */
    inline const Aws::String& GetEntityName() const{ return m_entityName; }

    /**
     * <p>The entity specified in the custom connector as a source in the flow.</p>
     */
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }

    /**
     * <p>The entity specified in the custom connector as a source in the flow.</p>
     */
    inline void SetEntityName(const Aws::String& value) { m_entityNameHasBeenSet = true; m_entityName = value; }

    /**
     * <p>The entity specified in the custom connector as a source in the flow.</p>
     */
    inline void SetEntityName(Aws::String&& value) { m_entityNameHasBeenSet = true; m_entityName = std::move(value); }

    /**
     * <p>The entity specified in the custom connector as a source in the flow.</p>
     */
    inline void SetEntityName(const char* value) { m_entityNameHasBeenSet = true; m_entityName.assign(value); }

    /**
     * <p>The entity specified in the custom connector as a source in the flow.</p>
     */
    inline CustomConnectorSourceProperties& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}

    /**
     * <p>The entity specified in the custom connector as a source in the flow.</p>
     */
    inline CustomConnectorSourceProperties& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}

    /**
     * <p>The entity specified in the custom connector as a source in the flow.</p>
     */
    inline CustomConnectorSourceProperties& WithEntityName(const char* value) { SetEntityName(value); return *this;}


    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomProperties() const{ return m_customProperties; }

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline bool CustomPropertiesHasBeenSet() const { return m_customPropertiesHasBeenSet; }

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline void SetCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customPropertiesHasBeenSet = true; m_customProperties = value; }

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline void SetCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customPropertiesHasBeenSet = true; m_customProperties = std::move(value); }

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline CustomConnectorSourceProperties& WithCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomProperties(value); return *this;}

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline CustomConnectorSourceProperties& WithCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomProperties(std::move(value)); return *this;}

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline CustomConnectorSourceProperties& AddCustomProperties(const Aws::String& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline CustomConnectorSourceProperties& AddCustomProperties(Aws::String&& key, const Aws::String& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline CustomConnectorSourceProperties& AddCustomProperties(const Aws::String& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline CustomConnectorSourceProperties& AddCustomProperties(Aws::String&& key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline CustomConnectorSourceProperties& AddCustomProperties(const char* key, Aws::String&& value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline CustomConnectorSourceProperties& AddCustomProperties(Aws::String&& key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>Custom properties that are required to use the custom connector as a
     * source.</p>
     */
    inline CustomConnectorSourceProperties& AddCustomProperties(const char* key, const char* value) { m_customPropertiesHasBeenSet = true; m_customProperties.emplace(key, value); return *this; }

  private:

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customProperties;
    bool m_customPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
