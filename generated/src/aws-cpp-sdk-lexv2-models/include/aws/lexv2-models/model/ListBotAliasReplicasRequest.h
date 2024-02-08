/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListBotAliasReplicasRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListBotAliasReplicasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBotAliasReplicas"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The request for the unique bot ID of the replicated bot created from the
     * source bot alias.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The request for the unique bot ID of the replicated bot created from the
     * source bot alias.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The request for the unique bot ID of the replicated bot created from the
     * source bot alias.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The request for the unique bot ID of the replicated bot created from the
     * source bot alias.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The request for the unique bot ID of the replicated bot created from the
     * source bot alias.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The request for the unique bot ID of the replicated bot created from the
     * source bot alias.</p>
     */
    inline ListBotAliasReplicasRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The request for the unique bot ID of the replicated bot created from the
     * source bot alias.</p>
     */
    inline ListBotAliasReplicasRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The request for the unique bot ID of the replicated bot created from the
     * source bot alias.</p>
     */
    inline ListBotAliasReplicasRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The request for the secondary region of the replicated bot created from the
     * source bot alias.</p>
     */
    inline const Aws::String& GetReplicaRegion() const{ return m_replicaRegion; }

    /**
     * <p>The request for the secondary region of the replicated bot created from the
     * source bot alias.</p>
     */
    inline bool ReplicaRegionHasBeenSet() const { return m_replicaRegionHasBeenSet; }

    /**
     * <p>The request for the secondary region of the replicated bot created from the
     * source bot alias.</p>
     */
    inline void SetReplicaRegion(const Aws::String& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = value; }

    /**
     * <p>The request for the secondary region of the replicated bot created from the
     * source bot alias.</p>
     */
    inline void SetReplicaRegion(Aws::String&& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = std::move(value); }

    /**
     * <p>The request for the secondary region of the replicated bot created from the
     * source bot alias.</p>
     */
    inline void SetReplicaRegion(const char* value) { m_replicaRegionHasBeenSet = true; m_replicaRegion.assign(value); }

    /**
     * <p>The request for the secondary region of the replicated bot created from the
     * source bot alias.</p>
     */
    inline ListBotAliasReplicasRequest& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}

    /**
     * <p>The request for the secondary region of the replicated bot created from the
     * source bot alias.</p>
     */
    inline ListBotAliasReplicasRequest& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}

    /**
     * <p>The request for the secondary region of the replicated bot created from the
     * source bot alias.</p>
     */
    inline ListBotAliasReplicasRequest& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}


    /**
     * <p>The request for maximum results to list the replicated bots created from the
     * source bot alias.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The request for maximum results to list the replicated bots created from the
     * source bot alias.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The request for maximum results to list the replicated bots created from the
     * source bot alias.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The request for maximum results to list the replicated bots created from the
     * source bot alias.</p>
     */
    inline ListBotAliasReplicasRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The request for the next token for the replicated bot created from the source
     * bot alias.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The request for the next token for the replicated bot created from the source
     * bot alias.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The request for the next token for the replicated bot created from the source
     * bot alias.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The request for the next token for the replicated bot created from the source
     * bot alias.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The request for the next token for the replicated bot created from the source
     * bot alias.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The request for the next token for the replicated bot created from the source
     * bot alias.</p>
     */
    inline ListBotAliasReplicasRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The request for the next token for the replicated bot created from the source
     * bot alias.</p>
     */
    inline ListBotAliasReplicasRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The request for the next token for the replicated bot created from the source
     * bot alias.</p>
     */
    inline ListBotAliasReplicasRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_replicaRegion;
    bool m_replicaRegionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
