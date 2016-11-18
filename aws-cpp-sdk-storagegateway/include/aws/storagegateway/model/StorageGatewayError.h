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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/ErrorCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Provides additional information about an error that was returned by the
   * service as an or. See the <code>errorCode</code> and <code>errorDetails</code>
   * members for more information about the error.</p>
   */
  class AWS_STORAGEGATEWAY_API StorageGatewayError
  {
  public:
    StorageGatewayError();
    StorageGatewayError(const Aws::Utils::Json::JsonValue& jsonValue);
    StorageGatewayError& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Additional information about the error.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Additional information about the error.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Additional information about the error.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Additional information about the error.</p>
     */
    inline StorageGatewayError& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Additional information about the error.</p>
     */
    inline StorageGatewayError& WithErrorCode(ErrorCode&& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetErrorDetails() const{ return m_errorDetails; }

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline void SetErrorDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline void SetErrorDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline StorageGatewayError& WithErrorDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetErrorDetails(value); return *this;}

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline StorageGatewayError& WithErrorDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetErrorDetails(value); return *this;}

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline StorageGatewayError& AddErrorDetails(const Aws::String& key, const Aws::String& value) { m_errorDetailsHasBeenSet = true; m_errorDetails[key] = value; return *this; }

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline StorageGatewayError& AddErrorDetails(Aws::String&& key, const Aws::String& value) { m_errorDetailsHasBeenSet = true; m_errorDetails[key] = value; return *this; }

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline StorageGatewayError& AddErrorDetails(const Aws::String& key, Aws::String&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails[key] = value; return *this; }

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline StorageGatewayError& AddErrorDetails(Aws::String&& key, Aws::String&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails[key] = value; return *this; }

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline StorageGatewayError& AddErrorDetails(const char* key, Aws::String&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails[key] = value; return *this; }

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline StorageGatewayError& AddErrorDetails(Aws::String&& key, const char* value) { m_errorDetailsHasBeenSet = true; m_errorDetails[key] = value; return *this; }

    /**
     * <p>Human-readable text that provides detail about the error that occurred.</p>
     */
    inline StorageGatewayError& AddErrorDetails(const char* key, const char* value) { m_errorDetailsHasBeenSet = true; m_errorDetails[key] = value; return *this; }

  private:
    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_errorDetails;
    bool m_errorDetailsHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
