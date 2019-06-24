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
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/ErrorCode.h>
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
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>Returns an error that explains why the action did not succeed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ErrorReason">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEQUOTAS_API ErrorReason
  {
  public:
    ErrorReason();
    ErrorReason(Aws::Utils::Json::JsonView jsonValue);
    ErrorReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Service Quotas returns the following error values. </p> <p>
     * <code>DEPENDENCY_ACCESS_DENIED_ERROR</code> is returned when the caller does not
     * have permission to call the service or service quota. To resolve the error, you
     * need permission to access the service or service quota.</p> <p>
     * <code>DEPENDENCY_THROTTLING_ERROR</code> is returned when the service being
     * called is throttling Service Quotas.</p> <p>
     * <code>DEPENDENCY_SERVICE_ERROR</code> is returned when the service being called
     * has availability issues.</p> <p> <code>SERVICE_QUOTA_NOT_AVAILABLE_ERROR</code>
     * is returned when there was an error in Service Quotas.</p>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Service Quotas returns the following error values. </p> <p>
     * <code>DEPENDENCY_ACCESS_DENIED_ERROR</code> is returned when the caller does not
     * have permission to call the service or service quota. To resolve the error, you
     * need permission to access the service or service quota.</p> <p>
     * <code>DEPENDENCY_THROTTLING_ERROR</code> is returned when the service being
     * called is throttling Service Quotas.</p> <p>
     * <code>DEPENDENCY_SERVICE_ERROR</code> is returned when the service being called
     * has availability issues.</p> <p> <code>SERVICE_QUOTA_NOT_AVAILABLE_ERROR</code>
     * is returned when there was an error in Service Quotas.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>Service Quotas returns the following error values. </p> <p>
     * <code>DEPENDENCY_ACCESS_DENIED_ERROR</code> is returned when the caller does not
     * have permission to call the service or service quota. To resolve the error, you
     * need permission to access the service or service quota.</p> <p>
     * <code>DEPENDENCY_THROTTLING_ERROR</code> is returned when the service being
     * called is throttling Service Quotas.</p> <p>
     * <code>DEPENDENCY_SERVICE_ERROR</code> is returned when the service being called
     * has availability issues.</p> <p> <code>SERVICE_QUOTA_NOT_AVAILABLE_ERROR</code>
     * is returned when there was an error in Service Quotas.</p>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Service Quotas returns the following error values. </p> <p>
     * <code>DEPENDENCY_ACCESS_DENIED_ERROR</code> is returned when the caller does not
     * have permission to call the service or service quota. To resolve the error, you
     * need permission to access the service or service quota.</p> <p>
     * <code>DEPENDENCY_THROTTLING_ERROR</code> is returned when the service being
     * called is throttling Service Quotas.</p> <p>
     * <code>DEPENDENCY_SERVICE_ERROR</code> is returned when the service being called
     * has availability issues.</p> <p> <code>SERVICE_QUOTA_NOT_AVAILABLE_ERROR</code>
     * is returned when there was an error in Service Quotas.</p>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>Service Quotas returns the following error values. </p> <p>
     * <code>DEPENDENCY_ACCESS_DENIED_ERROR</code> is returned when the caller does not
     * have permission to call the service or service quota. To resolve the error, you
     * need permission to access the service or service quota.</p> <p>
     * <code>DEPENDENCY_THROTTLING_ERROR</code> is returned when the service being
     * called is throttling Service Quotas.</p> <p>
     * <code>DEPENDENCY_SERVICE_ERROR</code> is returned when the service being called
     * has availability issues.</p> <p> <code>SERVICE_QUOTA_NOT_AVAILABLE_ERROR</code>
     * is returned when there was an error in Service Quotas.</p>
     */
    inline ErrorReason& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Service Quotas returns the following error values. </p> <p>
     * <code>DEPENDENCY_ACCESS_DENIED_ERROR</code> is returned when the caller does not
     * have permission to call the service or service quota. To resolve the error, you
     * need permission to access the service or service quota.</p> <p>
     * <code>DEPENDENCY_THROTTLING_ERROR</code> is returned when the service being
     * called is throttling Service Quotas.</p> <p>
     * <code>DEPENDENCY_SERVICE_ERROR</code> is returned when the service being called
     * has availability issues.</p> <p> <code>SERVICE_QUOTA_NOT_AVAILABLE_ERROR</code>
     * is returned when there was an error in Service Quotas.</p>
     */
    inline ErrorReason& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The error message that provides more detail.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message that provides more detail.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message that provides more detail.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message that provides more detail.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message that provides more detail.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message that provides more detail.</p>
     */
    inline ErrorReason& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message that provides more detail.</p>
     */
    inline ErrorReason& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message that provides more detail.</p>
     */
    inline ErrorReason& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
