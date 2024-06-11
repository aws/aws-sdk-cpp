/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
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
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>A limit has been exceeded. See the accompanying error message for
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/TooManyRequestsException">AWS
   * API Reference</a></p>
   */
  class TooManyRequestsException
  {
  public:
    AWS_APIGATEWAYV2_API TooManyRequestsException();
    AWS_APIGATEWAYV2_API TooManyRequestsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API TooManyRequestsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The limit type.</p>
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
     * <p>Describes the error encountered.</p>
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
} // namespace ApiGatewayV2
} // namespace Aws
