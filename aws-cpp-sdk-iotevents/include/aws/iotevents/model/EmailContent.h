/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains the subject and message of an email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/EmailContent">AWS
   * API Reference</a></p>
   */
  class EmailContent
  {
  public:
    AWS_IOTEVENTS_API EmailContent();
    AWS_IOTEVENTS_API EmailContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API EmailContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subject of the email.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject of the email.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject of the email.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject of the email.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject of the email.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject of the email.</p>
     */
    inline EmailContent& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject of the email.</p>
     */
    inline EmailContent& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject of the email.</p>
     */
    inline EmailContent& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline const Aws::String& GetAdditionalMessage() const{ return m_additionalMessage; }

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline bool AdditionalMessageHasBeenSet() const { return m_additionalMessageHasBeenSet; }

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline void SetAdditionalMessage(const Aws::String& value) { m_additionalMessageHasBeenSet = true; m_additionalMessage = value; }

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline void SetAdditionalMessage(Aws::String&& value) { m_additionalMessageHasBeenSet = true; m_additionalMessage = std::move(value); }

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline void SetAdditionalMessage(const char* value) { m_additionalMessageHasBeenSet = true; m_additionalMessage.assign(value); }

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline EmailContent& WithAdditionalMessage(const Aws::String& value) { SetAdditionalMessage(value); return *this;}

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline EmailContent& WithAdditionalMessage(Aws::String&& value) { SetAdditionalMessage(std::move(value)); return *this;}

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline EmailContent& WithAdditionalMessage(const char* value) { SetAdditionalMessage(value); return *this;}

  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_additionalMessage;
    bool m_additionalMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
