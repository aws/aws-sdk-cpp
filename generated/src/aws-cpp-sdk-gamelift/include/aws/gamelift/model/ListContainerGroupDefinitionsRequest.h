/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/gamelift/model/ContainerGroupType.h>
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
  class ListContainerGroupDefinitionsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API ListContainerGroupDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListContainerGroupDefinitions"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of container group to retrieve. Container group type determines how
     * Amazon GameLift deploys the container group on each fleet instance.</p>
     */
    inline const ContainerGroupType& GetContainerGroupType() const{ return m_containerGroupType; }
    inline bool ContainerGroupTypeHasBeenSet() const { return m_containerGroupTypeHasBeenSet; }
    inline void SetContainerGroupType(const ContainerGroupType& value) { m_containerGroupTypeHasBeenSet = true; m_containerGroupType = value; }
    inline void SetContainerGroupType(ContainerGroupType&& value) { m_containerGroupTypeHasBeenSet = true; m_containerGroupType = std::move(value); }
    inline ListContainerGroupDefinitionsRequest& WithContainerGroupType(const ContainerGroupType& value) { SetContainerGroupType(value); return *this;}
    inline ListContainerGroupDefinitionsRequest& WithContainerGroupType(ContainerGroupType&& value) { SetContainerGroupType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListContainerGroupDefinitionsRequest& WithLimit(int value) { SetLimit(value); return *this;}
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
    inline ListContainerGroupDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContainerGroupDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContainerGroupDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    ContainerGroupType m_containerGroupType;
    bool m_containerGroupTypeHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
