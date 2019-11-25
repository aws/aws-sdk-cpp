/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object containing additional attributes related to a suppressed
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressedDestinationAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API SuppressedDestinationAttributes
  {
  public:
    SuppressedDestinationAttributes();
    SuppressedDestinationAttributes(Aws::Utils::Json::JsonView jsonValue);
    SuppressedDestinationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier of the message that caused the suppression of the email
     * destination.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>A unique identifier of the message that caused the suppression of the email
     * destination.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>A unique identifier of the message that caused the suppression of the email
     * destination.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>A unique identifier of the message that caused the suppression of the email
     * destination.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>A unique identifier of the message that caused the suppression of the email
     * destination.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>A unique identifier of the message that caused the suppression of the email
     * destination.</p>
     */
    inline SuppressedDestinationAttributes& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>A unique identifier of the message that caused the suppression of the email
     * destination.</p>
     */
    inline SuppressedDestinationAttributes& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the message that caused the suppression of the email
     * destination.</p>
     */
    inline SuppressedDestinationAttributes& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>A unique identifier of the suppression cause.</p>
     */
    inline const Aws::String& GetFeedbackId() const{ return m_feedbackId; }

    /**
     * <p>A unique identifier of the suppression cause.</p>
     */
    inline bool FeedbackIdHasBeenSet() const { return m_feedbackIdHasBeenSet; }

    /**
     * <p>A unique identifier of the suppression cause.</p>
     */
    inline void SetFeedbackId(const Aws::String& value) { m_feedbackIdHasBeenSet = true; m_feedbackId = value; }

    /**
     * <p>A unique identifier of the suppression cause.</p>
     */
    inline void SetFeedbackId(Aws::String&& value) { m_feedbackIdHasBeenSet = true; m_feedbackId = std::move(value); }

    /**
     * <p>A unique identifier of the suppression cause.</p>
     */
    inline void SetFeedbackId(const char* value) { m_feedbackIdHasBeenSet = true; m_feedbackId.assign(value); }

    /**
     * <p>A unique identifier of the suppression cause.</p>
     */
    inline SuppressedDestinationAttributes& WithFeedbackId(const Aws::String& value) { SetFeedbackId(value); return *this;}

    /**
     * <p>A unique identifier of the suppression cause.</p>
     */
    inline SuppressedDestinationAttributes& WithFeedbackId(Aws::String&& value) { SetFeedbackId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the suppression cause.</p>
     */
    inline SuppressedDestinationAttributes& WithFeedbackId(const char* value) { SetFeedbackId(value); return *this;}

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;

    Aws::String m_feedbackId;
    bool m_feedbackIdHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
