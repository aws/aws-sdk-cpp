/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_GREENGRASS_API GetConnectorDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    GetConnectorDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnectorDefinitionVersion"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * The ID of the connector definition.
     */
    inline const Aws::String& GetConnectorDefinitionId() const{ return m_connectorDefinitionId; }

    /**
     * The ID of the connector definition.
     */
    inline bool ConnectorDefinitionIdHasBeenSet() const { return m_connectorDefinitionIdHasBeenSet; }

    /**
     * The ID of the connector definition.
     */
    inline void SetConnectorDefinitionId(const Aws::String& value) { m_connectorDefinitionIdHasBeenSet = true; m_connectorDefinitionId = value; }

    /**
     * The ID of the connector definition.
     */
    inline void SetConnectorDefinitionId(Aws::String&& value) { m_connectorDefinitionIdHasBeenSet = true; m_connectorDefinitionId = std::move(value); }

    /**
     * The ID of the connector definition.
     */
    inline void SetConnectorDefinitionId(const char* value) { m_connectorDefinitionIdHasBeenSet = true; m_connectorDefinitionId.assign(value); }

    /**
     * The ID of the connector definition.
     */
    inline GetConnectorDefinitionVersionRequest& WithConnectorDefinitionId(const Aws::String& value) { SetConnectorDefinitionId(value); return *this;}

    /**
     * The ID of the connector definition.
     */
    inline GetConnectorDefinitionVersionRequest& WithConnectorDefinitionId(Aws::String&& value) { SetConnectorDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the connector definition.
     */
    inline GetConnectorDefinitionVersionRequest& WithConnectorDefinitionId(const char* value) { SetConnectorDefinitionId(value); return *this;}


    /**
     * The ID of the connector definition version.
     */
    inline const Aws::String& GetConnectorDefinitionVersionId() const{ return m_connectorDefinitionVersionId; }

    /**
     * The ID of the connector definition version.
     */
    inline bool ConnectorDefinitionVersionIdHasBeenSet() const { return m_connectorDefinitionVersionIdHasBeenSet; }

    /**
     * The ID of the connector definition version.
     */
    inline void SetConnectorDefinitionVersionId(const Aws::String& value) { m_connectorDefinitionVersionIdHasBeenSet = true; m_connectorDefinitionVersionId = value; }

    /**
     * The ID of the connector definition version.
     */
    inline void SetConnectorDefinitionVersionId(Aws::String&& value) { m_connectorDefinitionVersionIdHasBeenSet = true; m_connectorDefinitionVersionId = std::move(value); }

    /**
     * The ID of the connector definition version.
     */
    inline void SetConnectorDefinitionVersionId(const char* value) { m_connectorDefinitionVersionIdHasBeenSet = true; m_connectorDefinitionVersionId.assign(value); }

    /**
     * The ID of the connector definition version.
     */
    inline GetConnectorDefinitionVersionRequest& WithConnectorDefinitionVersionId(const Aws::String& value) { SetConnectorDefinitionVersionId(value); return *this;}

    /**
     * The ID of the connector definition version.
     */
    inline GetConnectorDefinitionVersionRequest& WithConnectorDefinitionVersionId(Aws::String&& value) { SetConnectorDefinitionVersionId(std::move(value)); return *this;}

    /**
     * The ID of the connector definition version.
     */
    inline GetConnectorDefinitionVersionRequest& WithConnectorDefinitionVersionId(const char* value) { SetConnectorDefinitionVersionId(value); return *this;}


    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetConnectorDefinitionVersionRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetConnectorDefinitionVersionRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetConnectorDefinitionVersionRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_connectorDefinitionId;
    bool m_connectorDefinitionIdHasBeenSet;

    Aws::String m_connectorDefinitionVersionId;
    bool m_connectorDefinitionVersionIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
