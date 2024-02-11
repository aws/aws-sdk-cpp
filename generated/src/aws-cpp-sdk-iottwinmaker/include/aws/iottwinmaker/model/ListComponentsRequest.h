/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class ListComponentsRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API ListComponentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListComponents"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The workspace ID.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The workspace ID.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The workspace ID.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The workspace ID.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The workspace ID.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The workspace ID.</p>
     */
    inline ListComponentsRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The workspace ID.</p>
     */
    inline ListComponentsRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The workspace ID.</p>
     */
    inline ListComponentsRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The ID for the entity whose metadata (component/properties) is returned by
     * the operation.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID for the entity whose metadata (component/properties) is returned by
     * the operation.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The ID for the entity whose metadata (component/properties) is returned by
     * the operation.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The ID for the entity whose metadata (component/properties) is returned by
     * the operation.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The ID for the entity whose metadata (component/properties) is returned by
     * the operation.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The ID for the entity whose metadata (component/properties) is returned by
     * the operation.</p>
     */
    inline ListComponentsRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID for the entity whose metadata (component/properties) is returned by
     * the operation.</p>
     */
    inline ListComponentsRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID for the entity whose metadata (component/properties) is returned by
     * the operation.</p>
     */
    inline ListComponentsRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline const Aws::String& GetComponentPath() const{ return m_componentPath; }

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline bool ComponentPathHasBeenSet() const { return m_componentPathHasBeenSet; }

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline void SetComponentPath(const Aws::String& value) { m_componentPathHasBeenSet = true; m_componentPath = value; }

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline void SetComponentPath(Aws::String&& value) { m_componentPathHasBeenSet = true; m_componentPath = std::move(value); }

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline void SetComponentPath(const char* value) { m_componentPathHasBeenSet = true; m_componentPath.assign(value); }

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline ListComponentsRequest& WithComponentPath(const Aws::String& value) { SetComponentPath(value); return *this;}

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline ListComponentsRequest& WithComponentPath(Aws::String&& value) { SetComponentPath(std::move(value)); return *this;}

    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline ListComponentsRequest& WithComponentPath(const char* value) { SetComponentPath(value); return *this;}


    /**
     * <p>The maximum number of results returned at one time. The default is 25.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results returned at one time. The default is 25.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results returned at one time. The default is 25.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results returned at one time. The default is 25.</p>
     */
    inline ListComponentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListComponentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListComponentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ListComponentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_componentPath;
    bool m_componentPathHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
