/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>An error that is returned when a limit of a specific type has been
   * exceeded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/TooManyRequestsException">AWS
   * API Reference</a></p>
   */
  class TooManyRequestsException
  {
  public:
    AWS_AMPLIFYBACKEND_API TooManyRequestsException() = default;
    AWS_AMPLIFYBACKEND_API TooManyRequestsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API TooManyRequestsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of limit that was exceeded.</p>
     */
    inline const Aws::String& GetLimitType() const { return m_limitType; }
    inline bool LimitTypeHasBeenSet() const { return m_limitTypeHasBeenSet; }
    template<typename LimitTypeT = Aws::String>
    void SetLimitType(LimitTypeT&& value) { m_limitTypeHasBeenSet = true; m_limitType = std::forward<LimitTypeT>(value); }
    template<typename LimitTypeT = Aws::String>
    TooManyRequestsException& WithLimitType(LimitTypeT&& value) { SetLimitType(std::forward<LimitTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message to inform that the request has failed.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    TooManyRequestsException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_limitType;
    bool m_limitTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
