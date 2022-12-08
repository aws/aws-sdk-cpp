/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a connector. Connectors run on the Greengrass core and contain
   * built-in integration with local infrastructure, device protocols, AWS, and other
   * cloud services.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Connector">AWS
   * API Reference</a></p>
   */
  class Connector
  {
  public:
    AWS_GREENGRASS_API Connector();
    AWS_GREENGRASS_API Connector(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the connector.
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }

    /**
     * The ARN of the connector.
     */
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }

    /**
     * The ARN of the connector.
     */
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArnHasBeenSet = true; m_connectorArn = value; }

    /**
     * The ARN of the connector.
     */
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::move(value); }

    /**
     * The ARN of the connector.
     */
    inline void SetConnectorArn(const char* value) { m_connectorArnHasBeenSet = true; m_connectorArn.assign(value); }

    /**
     * The ARN of the connector.
     */
    inline Connector& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}

    /**
     * The ARN of the connector.
     */
    inline Connector& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}

    /**
     * The ARN of the connector.
     */
    inline Connector& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}


    /**
     * A descriptive or arbitrary ID for the connector. This value must be unique
     * within the connector definition version. Max length is 128 characters with
     * pattern [a-zA-Z0-9:_-]+.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A descriptive or arbitrary ID for the connector. This value must be unique
     * within the connector definition version. Max length is 128 characters with
     * pattern [a-zA-Z0-9:_-]+.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * A descriptive or arbitrary ID for the connector. This value must be unique
     * within the connector definition version. Max length is 128 characters with
     * pattern [a-zA-Z0-9:_-]+.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A descriptive or arbitrary ID for the connector. This value must be unique
     * within the connector definition version. Max length is 128 characters with
     * pattern [a-zA-Z0-9:_-]+.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * A descriptive or arbitrary ID for the connector. This value must be unique
     * within the connector definition version. Max length is 128 characters with
     * pattern [a-zA-Z0-9:_-]+.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * A descriptive or arbitrary ID for the connector. This value must be unique
     * within the connector definition version. Max length is 128 characters with
     * pattern [a-zA-Z0-9:_-]+.
     */
    inline Connector& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A descriptive or arbitrary ID for the connector. This value must be unique
     * within the connector definition version. Max length is 128 characters with
     * pattern [a-zA-Z0-9:_-]+.
     */
    inline Connector& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A descriptive or arbitrary ID for the connector. This value must be unique
     * within the connector definition version. Max length is 128 characters with
     * pattern [a-zA-Z0-9:_-]+.
     */
    inline Connector& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The parameters or configuration that the connector uses.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * The parameters or configuration that the connector uses.
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * The parameters or configuration that the connector uses.
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * The parameters or configuration that the connector uses.
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * The parameters or configuration that the connector uses.
     */
    inline Connector& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * The parameters or configuration that the connector uses.
     */
    inline Connector& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * The parameters or configuration that the connector uses.
     */
    inline Connector& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * The parameters or configuration that the connector uses.
     */
    inline Connector& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * The parameters or configuration that the connector uses.
     */
    inline Connector& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * The parameters or configuration that the connector uses.
     */
    inline Connector& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The parameters or configuration that the connector uses.
     */
    inline Connector& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * The parameters or configuration that the connector uses.
     */
    inline Connector& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * The parameters or configuration that the connector uses.
     */
    inline Connector& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
