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
    AWS_IOTEVENTS_API EmailContent() = default;
    AWS_IOTEVENTS_API EmailContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API EmailContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subject of the email.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    EmailContent& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline const Aws::String& GetAdditionalMessage() const { return m_additionalMessage; }
    inline bool AdditionalMessageHasBeenSet() const { return m_additionalMessageHasBeenSet; }
    template<typename AdditionalMessageT = Aws::String>
    void SetAdditionalMessage(AdditionalMessageT&& value) { m_additionalMessageHasBeenSet = true; m_additionalMessage = std::forward<AdditionalMessageT>(value); }
    template<typename AdditionalMessageT = Aws::String>
    EmailContent& WithAdditionalMessage(AdditionalMessageT&& value) { SetAdditionalMessage(std::forward<AdditionalMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_additionalMessage;
    bool m_additionalMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
