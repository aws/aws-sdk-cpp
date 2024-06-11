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
    AWS_AMPLIFYBACKEND_API TooManyRequestsException();
    AWS_AMPLIFYBACKEND_API TooManyRequestsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API TooManyRequestsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of limit that was exceeded.</p>
     */
    inline const Aws::String& GetLimitType() const{ return m_limitType; }
    inline bool LimitTypeHasBeenSet() const { return m_limitTypeHasBeenSet; }
    inline void SetLimitType(const Aws::String& value) { m_limitTypeHasBeenSet = true; m_limitType = value; }
    inline void SetLimitType(Aws::String&& value) { m_limitTypeHasBeenSet = true; m_limitType = std::move(value); }
    inline void SetLimitType(const char* value) { m_limitTypeHasBeenSet = true; m_limitType.assign(value); }
    inline TooManyRequestsException& WithLimitType(const Aws::String& value) { SetLimitType(value); return *this;}
    inline TooManyRequestsException& WithLimitType(Aws::String&& value) { SetLimitType(std::move(value)); return *this;}
    inline TooManyRequestsException& WithLimitType(const char* value) { SetLimitType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message to inform that the request has failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline TooManyRequestsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline TooManyRequestsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline TooManyRequestsException& WithMessage(const char* value) { SetMessage(value); return *this;}
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
