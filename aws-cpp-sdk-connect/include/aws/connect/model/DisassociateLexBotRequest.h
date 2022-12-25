/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DisassociateLexBotRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DisassociateLexBotRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DisassociateLexBotRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The name of the Amazon Lex bot. Maximum character limit of 50.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the Amazon Lex bot. Maximum character limit of 50.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Lex bot. Maximum character limit of 50.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the Amazon Lex bot. Maximum character limit of 50.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the Amazon Lex bot. Maximum character limit of 50.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the Amazon Lex bot. Maximum character limit of 50.</p>
     */
    inline DisassociateLexBotRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the Amazon Lex bot. Maximum character limit of 50.</p>
     */
    inline DisassociateLexBotRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Lex bot. Maximum character limit of 50.</p>
     */
    inline DisassociateLexBotRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The Amazon Web Services Region in which the Amazon Lex bot has been
     * created.</p>
     */
    inline const Aws::String& GetLexRegion() const{ return m_lexRegion; }

    /**
     * <p>The Amazon Web Services Region in which the Amazon Lex bot has been
     * created.</p>
     */
    inline bool LexRegionHasBeenSet() const { return m_lexRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region in which the Amazon Lex bot has been
     * created.</p>
     */
    inline void SetLexRegion(const Aws::String& value) { m_lexRegionHasBeenSet = true; m_lexRegion = value; }

    /**
     * <p>The Amazon Web Services Region in which the Amazon Lex bot has been
     * created.</p>
     */
    inline void SetLexRegion(Aws::String&& value) { m_lexRegionHasBeenSet = true; m_lexRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region in which the Amazon Lex bot has been
     * created.</p>
     */
    inline void SetLexRegion(const char* value) { m_lexRegionHasBeenSet = true; m_lexRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region in which the Amazon Lex bot has been
     * created.</p>
     */
    inline DisassociateLexBotRequest& WithLexRegion(const Aws::String& value) { SetLexRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the Amazon Lex bot has been
     * created.</p>
     */
    inline DisassociateLexBotRequest& WithLexRegion(Aws::String&& value) { SetLexRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the Amazon Lex bot has been
     * created.</p>
     */
    inline DisassociateLexBotRequest& WithLexRegion(const char* value) { SetLexRegion(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_lexRegion;
    bool m_lexRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
