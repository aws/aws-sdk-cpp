/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/model/ErrorCode.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   * <p>Details of the common errors that all actions return.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/FailureInfo">AWS
   * API Reference</a></p>
   */
  class AWS_RESOURCEGROUPSTAGGINGAPI_API FailureInfo
  {
  public:
    FailureInfo();
    FailureInfo(Aws::Utils::Json::JsonView jsonValue);
    FailureInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The HTTP status code of the common error.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP status code of the common error.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The HTTP status code of the common error.</p>
     */
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The HTTP status code of the common error.</p>
     */
    inline FailureInfo& WithStatusCode(int value) { SetStatusCode(value); return *this;}


    /**
     * <p>The code of the common error. Valid values include
     * <code>InternalServiceException</code>, <code>InvalidParameterException</code>,
     * and any valid error code returned by the AWS service that hosts the resource
     * that you want to tag.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The code of the common error. Valid values include
     * <code>InternalServiceException</code>, <code>InvalidParameterException</code>,
     * and any valid error code returned by the AWS service that hosts the resource
     * that you want to tag.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The code of the common error. Valid values include
     * <code>InternalServiceException</code>, <code>InvalidParameterException</code>,
     * and any valid error code returned by the AWS service that hosts the resource
     * that you want to tag.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The code of the common error. Valid values include
     * <code>InternalServiceException</code>, <code>InvalidParameterException</code>,
     * and any valid error code returned by the AWS service that hosts the resource
     * that you want to tag.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The code of the common error. Valid values include
     * <code>InternalServiceException</code>, <code>InvalidParameterException</code>,
     * and any valid error code returned by the AWS service that hosts the resource
     * that you want to tag.</p>
     */
    inline FailureInfo& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The code of the common error. Valid values include
     * <code>InternalServiceException</code>, <code>InvalidParameterException</code>,
     * and any valid error code returned by the AWS service that hosts the resource
     * that you want to tag.</p>
     */
    inline FailureInfo& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The message of the common error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The message of the common error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The message of the common error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The message of the common error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The message of the common error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The message of the common error.</p>
     */
    inline FailureInfo& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The message of the common error.</p>
     */
    inline FailureInfo& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The message of the common error.</p>
     */
    inline FailureInfo& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    int m_statusCode;
    bool m_statusCodeHasBeenSet;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
