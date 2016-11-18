/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents a summary of a <a>Method</a> resource, given a particular date and
   * time.</p>
   */
  class AWS_APIGATEWAY_API MethodSnapshot
  {
  public:
    MethodSnapshot();
    MethodSnapshot(const Aws::Utils::Json::JsonValue& jsonValue);
    MethodSnapshot& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline const Aws::String& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline void SetAuthorizationType(const Aws::String& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline void SetAuthorizationType(Aws::String&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline void SetAuthorizationType(const char* value) { m_authorizationTypeHasBeenSet = true; m_authorizationType.assign(value); }

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline MethodSnapshot& WithAuthorizationType(const Aws::String& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline MethodSnapshot& WithAuthorizationType(Aws::String&& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline MethodSnapshot& WithAuthorizationType(const char* value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>Specifies whether the method requires a valid <a>ApiKey</a>.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }

    /**
     * <p>Specifies whether the method requires a valid <a>ApiKey</a>.</p>
     */
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequiredHasBeenSet = true; m_apiKeyRequired = value; }

    /**
     * <p>Specifies whether the method requires a valid <a>ApiKey</a>.</p>
     */
    inline MethodSnapshot& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}

  private:
    Aws::String m_authorizationType;
    bool m_authorizationTypeHasBeenSet;
    bool m_apiKeyRequired;
    bool m_apiKeyRequiredHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
