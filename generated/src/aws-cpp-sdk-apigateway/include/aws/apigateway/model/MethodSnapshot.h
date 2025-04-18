﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents a summary of a Method resource, given a particular date and
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/MethodSnapshot">AWS
   * API Reference</a></p>
   */
  class MethodSnapshot
  {
  public:
    AWS_APIGATEWAY_API MethodSnapshot() = default;
    AWS_APIGATEWAY_API MethodSnapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API MethodSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline const Aws::String& GetAuthorizationType() const { return m_authorizationType; }
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }
    template<typename AuthorizationTypeT = Aws::String>
    void SetAuthorizationType(AuthorizationTypeT&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::forward<AuthorizationTypeT>(value); }
    template<typename AuthorizationTypeT = Aws::String>
    MethodSnapshot& WithAuthorizationType(AuthorizationTypeT&& value) { SetAuthorizationType(std::forward<AuthorizationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the method requires a valid ApiKey.</p>
     */
    inline bool GetApiKeyRequired() const { return m_apiKeyRequired; }
    inline bool ApiKeyRequiredHasBeenSet() const { return m_apiKeyRequiredHasBeenSet; }
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequiredHasBeenSet = true; m_apiKeyRequired = value; }
    inline MethodSnapshot& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}
    ///@}
  private:

    Aws::String m_authorizationType;
    bool m_authorizationTypeHasBeenSet = false;

    bool m_apiKeyRequired{false};
    bool m_apiKeyRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
