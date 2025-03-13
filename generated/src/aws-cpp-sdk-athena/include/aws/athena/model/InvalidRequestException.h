/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Indicates that something is wrong with the input to the request. For example,
   * a required parameter may be missing or out of range.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/InvalidRequestException">AWS
   * API Reference</a></p>
   */
  class InvalidRequestException
  {
  public:
    AWS_ATHENA_API InvalidRequestException() = default;
    AWS_ATHENA_API InvalidRequestException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API InvalidRequestException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetAthenaErrorCode() const { return m_athenaErrorCode; }
    inline bool AthenaErrorCodeHasBeenSet() const { return m_athenaErrorCodeHasBeenSet; }
    template<typename AthenaErrorCodeT = Aws::String>
    void SetAthenaErrorCode(AthenaErrorCodeT&& value) { m_athenaErrorCodeHasBeenSet = true; m_athenaErrorCode = std::forward<AthenaErrorCodeT>(value); }
    template<typename AthenaErrorCodeT = Aws::String>
    InvalidRequestException& WithAthenaErrorCode(AthenaErrorCodeT&& value) { SetAthenaErrorCode(std::forward<AthenaErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidRequestException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_athenaErrorCode;
    bool m_athenaErrorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
