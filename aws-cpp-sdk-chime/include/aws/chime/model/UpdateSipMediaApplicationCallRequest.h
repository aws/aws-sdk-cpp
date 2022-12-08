/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class UpdateSipMediaApplicationCallRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API UpdateSipMediaApplicationCallRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSipMediaApplicationCall"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the SIP media application handling the call.</p>
     */
    inline const Aws::String& GetSipMediaApplicationId() const{ return m_sipMediaApplicationId; }

    /**
     * <p>The ID of the SIP media application handling the call.</p>
     */
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }

    /**
     * <p>The ID of the SIP media application handling the call.</p>
     */
    inline void SetSipMediaApplicationId(const Aws::String& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = value; }

    /**
     * <p>The ID of the SIP media application handling the call.</p>
     */
    inline void SetSipMediaApplicationId(Aws::String&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::move(value); }

    /**
     * <p>The ID of the SIP media application handling the call.</p>
     */
    inline void SetSipMediaApplicationId(const char* value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId.assign(value); }

    /**
     * <p>The ID of the SIP media application handling the call.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& WithSipMediaApplicationId(const Aws::String& value) { SetSipMediaApplicationId(value); return *this;}

    /**
     * <p>The ID of the SIP media application handling the call.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& WithSipMediaApplicationId(Aws::String&& value) { SetSipMediaApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SIP media application handling the call.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& WithSipMediaApplicationId(const char* value) { SetSipMediaApplicationId(value); return *this;}


    /**
     * <p>The ID of the call transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The ID of the call transaction.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The ID of the call transaction.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The ID of the call transaction.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The ID of the call transaction.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The ID of the call transaction.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The ID of the call transaction.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the call transaction.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetArguments() const{ return m_arguments; }

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline bool ArgumentsHasBeenSet() const { return m_argumentsHasBeenSet; }

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline void SetArguments(const Aws::Map<Aws::String, Aws::String>& value) { m_argumentsHasBeenSet = true; m_arguments = value; }

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline void SetArguments(Aws::Map<Aws::String, Aws::String>&& value) { m_argumentsHasBeenSet = true; m_arguments = std::move(value); }

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& WithArguments(const Aws::Map<Aws::String, Aws::String>& value) { SetArguments(value); return *this;}

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& WithArguments(Aws::Map<Aws::String, Aws::String>&& value) { SetArguments(std::move(value)); return *this;}

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& AddArguments(const Aws::String& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& AddArguments(Aws::String&& key, const Aws::String& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& AddArguments(const Aws::String& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& AddArguments(Aws::String&& key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& AddArguments(const char* key, Aws::String&& value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& AddArguments(Aws::String&& key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(std::move(key), value); return *this; }

    /**
     * <p>Arguments made available to the Lambda function as part of the
     * <code>CALL_UPDATE_REQUESTED</code> event. Can contain 0-20 key-value pairs.</p>
     */
    inline UpdateSipMediaApplicationCallRequest& AddArguments(const char* key, const char* value) { m_argumentsHasBeenSet = true; m_arguments.emplace(key, value); return *this; }

  private:

    Aws::String m_sipMediaApplicationId;
    bool m_sipMediaApplicationIdHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_arguments;
    bool m_argumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
