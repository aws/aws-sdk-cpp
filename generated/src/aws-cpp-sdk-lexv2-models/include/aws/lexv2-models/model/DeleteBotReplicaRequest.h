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
  class DeleteBotReplicaRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DeleteBotReplicaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBotReplica"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the replicated bot to be deleted from the secondary
     * region</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique ID of the replicated bot to be deleted from the secondary
     * region</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique ID of the replicated bot to be deleted from the secondary
     * region</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique ID of the replicated bot to be deleted from the secondary
     * region</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique ID of the replicated bot to be deleted from the secondary
     * region</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique ID of the replicated bot to be deleted from the secondary
     * region</p>
     */
    inline DeleteBotReplicaRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique ID of the replicated bot to be deleted from the secondary
     * region</p>
     */
    inline DeleteBotReplicaRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the replicated bot to be deleted from the secondary
     * region</p>
     */
    inline DeleteBotReplicaRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The secondary region of the replicated bot that will be deleted.</p>
     */
    inline const Aws::String& GetReplicaRegion() const{ return m_replicaRegion; }

    /**
     * <p>The secondary region of the replicated bot that will be deleted.</p>
     */
    inline bool ReplicaRegionHasBeenSet() const { return m_replicaRegionHasBeenSet; }

    /**
     * <p>The secondary region of the replicated bot that will be deleted.</p>
     */
    inline void SetReplicaRegion(const Aws::String& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = value; }

    /**
     * <p>The secondary region of the replicated bot that will be deleted.</p>
     */
    inline void SetReplicaRegion(Aws::String&& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = std::move(value); }

    /**
     * <p>The secondary region of the replicated bot that will be deleted.</p>
     */
    inline void SetReplicaRegion(const char* value) { m_replicaRegionHasBeenSet = true; m_replicaRegion.assign(value); }

    /**
     * <p>The secondary region of the replicated bot that will be deleted.</p>
     */
    inline DeleteBotReplicaRequest& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}

    /**
     * <p>The secondary region of the replicated bot that will be deleted.</p>
     */
    inline DeleteBotReplicaRequest& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}

    /**
     * <p>The secondary region of the replicated bot that will be deleted.</p>
     */
    inline DeleteBotReplicaRequest& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_replicaRegion;
    bool m_replicaRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
