/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Greengrass
{
namespace Model
{

  /**
   */
  class GetConnectorDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetConnectorDefinitionVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnectorDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * The ID of the connector definition.
     */
    inline const Aws::String& GetConnectorDefinitionId() const { return m_connectorDefinitionId; }
    inline bool ConnectorDefinitionIdHasBeenSet() const { return m_connectorDefinitionIdHasBeenSet; }
    template<typename ConnectorDefinitionIdT = Aws::String>
    void SetConnectorDefinitionId(ConnectorDefinitionIdT&& value) { m_connectorDefinitionIdHasBeenSet = true; m_connectorDefinitionId = std::forward<ConnectorDefinitionIdT>(value); }
    template<typename ConnectorDefinitionIdT = Aws::String>
    GetConnectorDefinitionVersionRequest& WithConnectorDefinitionId(ConnectorDefinitionIdT&& value) { SetConnectorDefinitionId(std::forward<ConnectorDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the connector definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListConnectorDefinitionVersions'' requests. If the version is the last one
     * that was associated with a connector definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline const Aws::String& GetConnectorDefinitionVersionId() const { return m_connectorDefinitionVersionId; }
    inline bool ConnectorDefinitionVersionIdHasBeenSet() const { return m_connectorDefinitionVersionIdHasBeenSet; }
    template<typename ConnectorDefinitionVersionIdT = Aws::String>
    void SetConnectorDefinitionVersionId(ConnectorDefinitionVersionIdT&& value) { m_connectorDefinitionVersionIdHasBeenSet = true; m_connectorDefinitionVersionId = std::forward<ConnectorDefinitionVersionIdT>(value); }
    template<typename ConnectorDefinitionVersionIdT = Aws::String>
    GetConnectorDefinitionVersionRequest& WithConnectorDefinitionVersionId(ConnectorDefinitionVersionIdT&& value) { SetConnectorDefinitionVersionId(std::forward<ConnectorDefinitionVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetConnectorDefinitionVersionRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorDefinitionId;
    bool m_connectorDefinitionIdHasBeenSet = false;

    Aws::String m_connectorDefinitionVersionId;
    bool m_connectorDefinitionVersionIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
