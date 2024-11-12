/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class ListContainerFleetsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API ListContainerFleetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListContainerFleets"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The container group definition to filter the list on. Use this parameter to
     * retrieve only those fleets that use the specified container group definition.
     * You can specify the container group definition's name to get fleets with the
     * latest versions. Alternatively, provide an ARN value to get fleets with a
     * specific version number.</p>
     */
    inline const Aws::String& GetContainerGroupDefinitionName() const{ return m_containerGroupDefinitionName; }
    inline bool ContainerGroupDefinitionNameHasBeenSet() const { return m_containerGroupDefinitionNameHasBeenSet; }
    inline void SetContainerGroupDefinitionName(const Aws::String& value) { m_containerGroupDefinitionNameHasBeenSet = true; m_containerGroupDefinitionName = value; }
    inline void SetContainerGroupDefinitionName(Aws::String&& value) { m_containerGroupDefinitionNameHasBeenSet = true; m_containerGroupDefinitionName = std::move(value); }
    inline void SetContainerGroupDefinitionName(const char* value) { m_containerGroupDefinitionNameHasBeenSet = true; m_containerGroupDefinitionName.assign(value); }
    inline ListContainerFleetsRequest& WithContainerGroupDefinitionName(const Aws::String& value) { SetContainerGroupDefinitionName(value); return *this;}
    inline ListContainerFleetsRequest& WithContainerGroupDefinitionName(Aws::String&& value) { SetContainerGroupDefinitionName(std::move(value)); return *this;}
    inline ListContainerFleetsRequest& WithContainerGroupDefinitionName(const char* value) { SetContainerGroupDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListContainerFleetsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListContainerFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContainerFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContainerFleetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_containerGroupDefinitionName;
    bool m_containerGroupDefinitionNameHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
