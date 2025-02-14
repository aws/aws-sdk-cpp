/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class DisassociateLexBotRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DisassociateLexBotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateLexBot"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DisassociateLexBotRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DisassociateLexBotRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DisassociateLexBotRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Lex bot. Maximum character limit of 50.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }
    inline DisassociateLexBotRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}
    inline DisassociateLexBotRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}
    inline DisassociateLexBotRequest& WithBotName(const char* value) { SetBotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the Amazon Lex bot has been
     * created.</p>
     */
    inline const Aws::String& GetLexRegion() const{ return m_lexRegion; }
    inline bool LexRegionHasBeenSet() const { return m_lexRegionHasBeenSet; }
    inline void SetLexRegion(const Aws::String& value) { m_lexRegionHasBeenSet = true; m_lexRegion = value; }
    inline void SetLexRegion(Aws::String&& value) { m_lexRegionHasBeenSet = true; m_lexRegion = std::move(value); }
    inline void SetLexRegion(const char* value) { m_lexRegionHasBeenSet = true; m_lexRegion.assign(value); }
    inline DisassociateLexBotRequest& WithLexRegion(const Aws::String& value) { SetLexRegion(value); return *this;}
    inline DisassociateLexBotRequest& WithLexRegion(Aws::String&& value) { SetLexRegion(std::move(value)); return *this;}
    inline DisassociateLexBotRequest& WithLexRegion(const char* value) { SetLexRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline DisassociateLexBotRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DisassociateLexBotRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DisassociateLexBotRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_lexRegion;
    bool m_lexRegionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
