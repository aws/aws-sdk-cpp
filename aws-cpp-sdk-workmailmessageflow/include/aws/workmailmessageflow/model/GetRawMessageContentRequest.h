/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkMailMessageFlow
{
namespace Model
{

  /**
   */
  class GetRawMessageContentRequest : public WorkMailMessageFlowRequest
  {
  public:
    AWS_WORKMAILMESSAGEFLOW_API GetRawMessageContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRawMessageContent"; }

    AWS_WORKMAILMESSAGEFLOW_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the email message to retrieve.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The identifier of the email message to retrieve.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The identifier of the email message to retrieve.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The identifier of the email message to retrieve.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The identifier of the email message to retrieve.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The identifier of the email message to retrieve.</p>
     */
    inline GetRawMessageContentRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The identifier of the email message to retrieve.</p>
     */
    inline GetRawMessageContentRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the email message to retrieve.</p>
     */
    inline GetRawMessageContentRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMailMessageFlow
} // namespace Aws
