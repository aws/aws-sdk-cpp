/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p>A second request to use or change an object was not allowed. This can result
   * from retrying a request using a parameter that was not present in the original
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/IdempotentParameterMismatchException">AWS
   * API Reference</a></p>
   */
  class IdempotentParameterMismatchException
  {
  public:
    AWS_MACHINELEARNING_API IdempotentParameterMismatchException() = default;
    AWS_MACHINELEARNING_API IdempotentParameterMismatchException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API IdempotentParameterMismatchException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    IdempotentParameterMismatchException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }
    inline IdempotentParameterMismatchException& WithCode(int value) { SetCode(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_code{0};
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
