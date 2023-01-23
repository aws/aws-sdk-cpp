/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>Details about the state of a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/StateDescription">AWS
   * API Reference</a></p>
   */
  class StateDescription
  {
  public:
    AWS_KAFKACONNECT_API StateDescription();
    AWS_KAFKACONNECT_API StateDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API StateDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A code that describes the state of a resource.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>A code that describes the state of a resource.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>A code that describes the state of a resource.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>A code that describes the state of a resource.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>A code that describes the state of a resource.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>A code that describes the state of a resource.</p>
     */
    inline StateDescription& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>A code that describes the state of a resource.</p>
     */
    inline StateDescription& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>A code that describes the state of a resource.</p>
     */
    inline StateDescription& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A message that describes the state of a resource.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that describes the state of a resource.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message that describes the state of a resource.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that describes the state of a resource.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message that describes the state of a resource.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message that describes the state of a resource.</p>
     */
    inline StateDescription& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that describes the state of a resource.</p>
     */
    inline StateDescription& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that describes the state of a resource.</p>
     */
    inline StateDescription& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
