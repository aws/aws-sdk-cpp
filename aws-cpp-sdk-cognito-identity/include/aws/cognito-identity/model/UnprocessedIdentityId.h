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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-identity/model/ErrorCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>An array of UnprocessedIdentityId objects, each of which contains an
   * ErrorCode and IdentityId.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/UnprocessedIdentityId">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API UnprocessedIdentityId
  {
  public:
    UnprocessedIdentityId();
    UnprocessedIdentityId(const Aws::Utils::Json::JsonValue& jsonValue);
    UnprocessedIdentityId& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline UnprocessedIdentityId& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline UnprocessedIdentityId& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline UnprocessedIdentityId& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}

    /**
     * <p>The error code indicating the type of error that occurred.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code indicating the type of error that occurred.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code indicating the type of error that occurred.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code indicating the type of error that occurred.</p>
     */
    inline UnprocessedIdentityId& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code indicating the type of error that occurred.</p>
     */
    inline UnprocessedIdentityId& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}

  private:
    Aws::String m_identityId;
    bool m_identityIdHasBeenSet;
    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
