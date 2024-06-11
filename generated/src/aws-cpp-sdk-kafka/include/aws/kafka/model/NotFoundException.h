﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/NotFoundException">AWS
   * API Reference</a></p>
   */
  class NotFoundException
  {
  public:
    AWS_KAFKA_API NotFoundException();
    AWS_KAFKA_API NotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API NotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The parameter that caused the error.</p>
         
     */
    inline const Aws::String& GetInvalidParameter() const{ return m_invalidParameter; }
    inline bool InvalidParameterHasBeenSet() const { return m_invalidParameterHasBeenSet; }
    inline void SetInvalidParameter(const Aws::String& value) { m_invalidParameterHasBeenSet = true; m_invalidParameter = value; }
    inline void SetInvalidParameter(Aws::String&& value) { m_invalidParameterHasBeenSet = true; m_invalidParameter = std::move(value); }
    inline void SetInvalidParameter(const char* value) { m_invalidParameterHasBeenSet = true; m_invalidParameter.assign(value); }
    inline NotFoundException& WithInvalidParameter(const Aws::String& value) { SetInvalidParameter(value); return *this;}
    inline NotFoundException& WithInvalidParameter(Aws::String&& value) { SetInvalidParameter(std::move(value)); return *this;}
    inline NotFoundException& WithInvalidParameter(const char* value) { SetInvalidParameter(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The description of the error.</p>
         
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline NotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline NotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline NotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}
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
