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
    AWS_GREENGRASS_API ConnectorDefinitionVersion() = default;
    AWS_GREENGRASS_API ConnectorDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API ConnectorDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A list of references to connectors in this version, with their corresponding
     * configuration settings.
     */
    inline const Aws::Vector<Connector>& GetConnectors() const { return m_connectors; }
    inline bool ConnectorsHasBeenSet() const { return m_connectorsHasBeenSet; }
    template<typename ConnectorsT = Aws::Vector<Connector>>
    void SetConnectors(ConnectorsT&& value) { m_connectorsHasBeenSet = true; m_connectors = std::forward<ConnectorsT>(value); }
    template<typename ConnectorsT = Aws::Vector<Connector>>
    ConnectorDefinitionVersion& WithConnectors(ConnectorsT&& value) { SetConnectors(std::forward<ConnectorsT>(value)); return *this;}
    template<typename ConnectorsT = Connector>
    ConnectorDefinitionVersion& AddConnectors(ConnectorsT&& value) { m_connectorsHasBeenSet = true; m_connectors.emplace_back(std::forward<ConnectorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Connector> m_connectors;
    bool m_connectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
