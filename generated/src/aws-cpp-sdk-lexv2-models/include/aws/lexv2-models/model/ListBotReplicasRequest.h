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
  class ListBotReplicasRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListBotReplicasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBotReplicas"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The request for the unique bot IDs in the list of replicated bots.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The request for the unique bot IDs in the list of replicated bots.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The request for the unique bot IDs in the list of replicated bots.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The request for the unique bot IDs in the list of replicated bots.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The request for the unique bot IDs in the list of replicated bots.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The request for the unique bot IDs in the list of replicated bots.</p>
     */
    inline ListBotReplicasRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The request for the unique bot IDs in the list of replicated bots.</p>
     */
    inline ListBotReplicasRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The request for the unique bot IDs in the list of replicated bots.</p>
     */
    inline ListBotReplicasRequest& WithBotId(const char* value) { SetBotId(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
