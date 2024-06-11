﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotVersionReplicaSortBy.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListBotVersionReplicasRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListBotVersionReplicasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBotVersionReplicas"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The request for the unique ID in the list of replicated bots.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline ListBotVersionReplicasRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline ListBotVersionReplicasRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline ListBotVersionReplicasRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request for the region used in the list of replicated bots.</p>
     */
    inline const Aws::String& GetReplicaRegion() const{ return m_replicaRegion; }
    inline bool ReplicaRegionHasBeenSet() const { return m_replicaRegionHasBeenSet; }
    inline void SetReplicaRegion(const Aws::String& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = value; }
    inline void SetReplicaRegion(Aws::String&& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = std::move(value); }
    inline void SetReplicaRegion(const char* value) { m_replicaRegionHasBeenSet = true; m_replicaRegion.assign(value); }
    inline ListBotVersionReplicasRequest& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}
    inline ListBotVersionReplicasRequest& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}
    inline ListBotVersionReplicasRequest& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum results given in the list of replicated bots.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBotVersionReplicasRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next token given in the list of replicated bots.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListBotVersionReplicasRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBotVersionReplicasRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBotVersionReplicasRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested sort category for the list of replicated bots.</p>
     */
    inline const BotVersionReplicaSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const BotVersionReplicaSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(BotVersionReplicaSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListBotVersionReplicasRequest& WithSortBy(const BotVersionReplicaSortBy& value) { SetSortBy(value); return *this;}
    inline ListBotVersionReplicasRequest& WithSortBy(BotVersionReplicaSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_replicaRegion;
    bool m_replicaRegionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    BotVersionReplicaSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
