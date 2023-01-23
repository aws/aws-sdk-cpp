/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Connector.h>
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
   * Information about the connector definition version, which is a container for
   * connectors.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ConnectorDefinitionVersion">AWS
   * API Reference</a></p>
   */
  class ConnectorDefinitionVersion
  {
  public:
    AWS_GREENGRASS_API ConnectorDefinitionVersion();
    AWS_GREENGRASS_API ConnectorDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API ConnectorDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline const Aws::Vector<Connector>& GetConnectors() const{ return m_connectors; }

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline bool ConnectorsHasBeenSet() const { return m_connectorsHasBeenSet; }

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline void SetConnectors(const Aws::Vector<Connector>& value) { m_connectorsHasBeenSet = true; m_connectors = value; }

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline void SetConnectors(Aws::Vector<Connector>&& value) { m_connectorsHasBeenSet = true; m_connectors = std::move(value); }

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline ConnectorDefinitionVersion& WithConnectors(const Aws::Vector<Connector>& value) { SetConnectors(value); return *this;}

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline ConnectorDefinitionVersion& WithConnectors(Aws::Vector<Connector>&& value) { SetConnectors(std::move(value)); return *this;}

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline ConnectorDefinitionVersion& AddConnectors(const Connector& value) { m_connectorsHasBeenSet = true; m_connectors.push_back(value); return *this; }

    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline ConnectorDefinitionVersion& AddConnectors(Connector&& value) { m_connectorsHasBeenSet = true; m_connectors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Connector> m_connectors;
    bool m_connectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
