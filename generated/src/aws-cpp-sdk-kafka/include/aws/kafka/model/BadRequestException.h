/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Returns information about an error.</p>
         <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BadRequestException">AWS
   * API Reference</a></p>
   */
  class BadRequestException
  {
  public:
    AWS_KAFKA_API BadRequestException() = default;
    AWS_KAFKA_API BadRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API BadRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The parameter that caused the error.</p>
         
     */
    inline const Aws::String& GetInvalidParameter() const { return m_invalidParameter; }
    inline bool InvalidParameterHasBeenSet() const { return m_invalidParameterHasBeenSet; }
    template<typename InvalidParameterT = Aws::String>
    void SetInvalidParameter(InvalidParameterT&& value) { m_invalidParameterHasBeenSet = true; m_invalidParameter = std::forward<InvalidParameterT>(value); }
    template<typename InvalidParameterT = Aws::String>
    BadRequestException& WithInvalidParameter(InvalidParameterT&& value) { SetInvalidParameter(std::forward<InvalidParameterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The description of the error.</p>
         
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BadRequestException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invalidParameter;
    bool m_invalidParameterHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
