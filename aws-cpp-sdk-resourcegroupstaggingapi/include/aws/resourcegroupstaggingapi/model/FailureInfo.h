/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about the errors that are returned for each failed resource. This
   * information can include <code>InternalServiceException</code> and
   * <code>InvalidParameterException</code> errors. It can also include any valid
   * error code returned by the Amazon Web Services service that hosts the resource
   * that the ARN key represents.</p> <p>The following are common error codes that
   * you might receive from other Amazon Web Services services:</p> <ul> <li> <p>
   * <b>InternalServiceException</b> – This can mean that the Resource Groups Tagging
   * API didn't receive a response from another Amazon Web Services service. It can
   * also mean that the resource type in the request is not supported by the Resource
   * Groups Tagging API. In these cases, it's safe to retry the request and then call
   * <a
   * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
   * to verify the changes.</p> </li> <li> <p> <b>AccessDeniedException</b> – This
   * can mean that you need permission to call the tagging operations in the Amazon
   * Web Services service that contains the resource. For example, to use the
   * Resource Groups Tagging API to tag a Amazon CloudWatch alarm resource, you need
   * permission to call both <a
   * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_TagResources.html">
   * <code>TagResources</code> </a> <i>and</i> <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">
   * <code>TagResource</code> </a> in the CloudWatch API. </p> </li> </ul> <p>For
   * more information on errors that are generated from other Amazon Web Services
   * services, see the documentation for that service. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/FailureInfo">AWS
   * API Reference</a></p>
   */
  class FailureInfo
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API FailureInfo();
    AWS_RESOURCEGROUPSTAGGINGAPI_API FailureInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API FailureInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * and any valid error code returned by the Amazon Web Services service that hosts
     * the resource that you want to tag.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The code of the common error. Valid values include
     * <code>InternalServiceException</code>, <code>InvalidParameterException</code>,
     * and any valid error code returned by the Amazon Web Services service that hosts
     * the resource that you want to tag.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The code of the common error. Valid values include
     * <code>InternalServiceException</code>, <code>InvalidParameterException</code>,
     * and any valid error code returned by the Amazon Web Services service that hosts
     * the resource that you want to tag.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The code of the common error. Valid values include
     * <code>InternalServiceException</code>, <code>InvalidParameterException</code>,
     * and any valid error code returned by the Amazon Web Services service that hosts
     * the resource that you want to tag.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The code of the common error. Valid values include
     * <code>InternalServiceException</code>, <code>InvalidParameterException</code>,
     * and any valid error code returned by the Amazon Web Services service that hosts
     * the resource that you want to tag.</p>
     */
    inline FailureInfo& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The code of the common error. Valid values include
     * <code>InternalServiceException</code>, <code>InvalidParameterException</code>,
     * and any valid error code returned by the Amazon Web Services service that hosts
     * the resource that you want to tag.</p>
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
    bool m_statusCodeHasBeenSet = false;

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
