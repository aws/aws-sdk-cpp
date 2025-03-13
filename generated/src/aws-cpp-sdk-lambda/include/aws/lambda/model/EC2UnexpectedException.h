/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Lambda received an unexpected Amazon EC2 client exception while setting up
   * for the Lambda function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EC2UnexpectedException">AWS
   * API Reference</a></p>
   */
  class EC2UnexpectedException
  {
  public:
    AWS_LAMBDA_API EC2UnexpectedException() = default;
    AWS_LAMBDA_API EC2UnexpectedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API EC2UnexpectedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    EC2UnexpectedException& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    EC2UnexpectedException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetEC2ErrorCode() const { return m_eC2ErrorCode; }
    inline bool EC2ErrorCodeHasBeenSet() const { return m_eC2ErrorCodeHasBeenSet; }
    template<typename EC2ErrorCodeT = Aws::String>
    void SetEC2ErrorCode(EC2ErrorCodeT&& value) { m_eC2ErrorCodeHasBeenSet = true; m_eC2ErrorCode = std::forward<EC2ErrorCodeT>(value); }
    template<typename EC2ErrorCodeT = Aws::String>
    EC2UnexpectedException& WithEC2ErrorCode(EC2ErrorCodeT&& value) { SetEC2ErrorCode(std::forward<EC2ErrorCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_eC2ErrorCode;
    bool m_eC2ErrorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
