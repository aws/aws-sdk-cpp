/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about a request to create a message
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TemplateCreateMessageBody">AWS
   * API Reference</a></p>
   */
  class TemplateCreateMessageBody
  {
  public:
    AWS_PINPOINT_API TemplateCreateMessageBody();
    AWS_PINPOINT_API TemplateCreateMessageBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API TemplateCreateMessageBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the message template that was created.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template that was created.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template that was created.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template that was created.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template that was created.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the message template that was created.</p>
     */
    inline TemplateCreateMessageBody& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the message template that was created.</p>
     */
    inline TemplateCreateMessageBody& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the message template that was created.</p>
     */
    inline TemplateCreateMessageBody& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The message that's returned from the API for the request to create the
     * message template.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message that's returned from the API for the request to create the
     * message template.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message that's returned from the API for the request to create the
     * message template.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message that's returned from the API for the request to create the
     * message template.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message that's returned from the API for the request to create the
     * message template.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message that's returned from the API for the request to create the
     * message template.</p>
     */
    inline TemplateCreateMessageBody& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message that's returned from the API for the request to create the
     * message template.</p>
     */
    inline TemplateCreateMessageBody& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message that's returned from the API for the request to create the
     * message template.</p>
     */
    inline TemplateCreateMessageBody& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The unique identifier for the request to create the message template.</p>
     */
    inline const Aws::String& GetRequestID() const{ return m_requestID; }

    /**
     * <p>The unique identifier for the request to create the message template.</p>
     */
    inline bool RequestIDHasBeenSet() const { return m_requestIDHasBeenSet; }

    /**
     * <p>The unique identifier for the request to create the message template.</p>
     */
    inline void SetRequestID(const Aws::String& value) { m_requestIDHasBeenSet = true; m_requestID = value; }

    /**
     * <p>The unique identifier for the request to create the message template.</p>
     */
    inline void SetRequestID(Aws::String&& value) { m_requestIDHasBeenSet = true; m_requestID = std::move(value); }

    /**
     * <p>The unique identifier for the request to create the message template.</p>
     */
    inline void SetRequestID(const char* value) { m_requestIDHasBeenSet = true; m_requestID.assign(value); }

    /**
     * <p>The unique identifier for the request to create the message template.</p>
     */
    inline TemplateCreateMessageBody& WithRequestID(const Aws::String& value) { SetRequestID(value); return *this;}

    /**
     * <p>The unique identifier for the request to create the message template.</p>
     */
    inline TemplateCreateMessageBody& WithRequestID(Aws::String&& value) { SetRequestID(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the request to create the message template.</p>
     */
    inline TemplateCreateMessageBody& WithRequestID(const char* value) { SetRequestID(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestID;
    bool m_requestIDHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
