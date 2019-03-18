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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/OperationType.h>
#include <aws/servicediscovery/model/OperationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicediscovery/model/OperationTargetType.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about a specified
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/Operation">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API Operation
  {
  public:
    Operation();
    Operation(Aws::Utils::Json::JsonView jsonValue);
    Operation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the operation that you want to get information about.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the operation that you want to get information about.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the operation that you want to get information about.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the operation that you want to get information about.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the operation that you want to get information about.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the operation that you want to get information about.</p>
     */
    inline Operation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the operation that you want to get information about.</p>
     */
    inline Operation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the operation that you want to get information about.</p>
     */
    inline Operation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the operation that is associated with the specified ID.</p>
     */
    inline const OperationType& GetType() const{ return m_type; }

    /**
     * <p>The name of the operation that is associated with the specified ID.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The name of the operation that is associated with the specified ID.</p>
     */
    inline void SetType(const OperationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The name of the operation that is associated with the specified ID.</p>
     */
    inline void SetType(OperationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The name of the operation that is associated with the specified ID.</p>
     */
    inline Operation& WithType(const OperationType& value) { SetType(value); return *this;}

    /**
     * <p>The name of the operation that is associated with the specified ID.</p>
     */
    inline Operation& WithType(OperationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline const OperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline void SetStatus(const OperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline void SetStatus(OperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline Operation& WithStatus(const OperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the operation. Values include the following:</p> <ul> <li> <p>
     * <b>SUBMITTED</b>: This is the initial state immediately after you submit a
     * request.</p> </li> <li> <p> <b>PENDING</b>: AWS Cloud Map is performing the
     * operation.</p> </li> <li> <p> <b>SUCCESS</b>: The operation succeeded.</p> </li>
     * <li> <p> <b>FAIL</b>: The operation failed. For the failure reason, see
     * <code>ErrorMessage</code>.</p> </li> </ul>
     */
    inline Operation& WithStatus(OperationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If the value of <code>Status</code> is <code>FAIL</code>, the reason that the
     * operation failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>If the value of <code>Status</code> is <code>FAIL</code>, the reason that the
     * operation failed.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>If the value of <code>Status</code> is <code>FAIL</code>, the reason that the
     * operation failed.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>If the value of <code>Status</code> is <code>FAIL</code>, the reason that the
     * operation failed.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>If the value of <code>Status</code> is <code>FAIL</code>, the reason that the
     * operation failed.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>If the value of <code>Status</code> is <code>FAIL</code>, the reason that the
     * operation failed.</p>
     */
    inline Operation& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>If the value of <code>Status</code> is <code>FAIL</code>, the reason that the
     * operation failed.</p>
     */
    inline Operation& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>If the value of <code>Status</code> is <code>FAIL</code>, the reason that the
     * operation failed.</p>
     */
    inline Operation& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The code associated with <code>ErrorMessage</code>. Values for
     * <code>ErrorCode</code> include the following:</p> <ul> <li> <p>
     * <code>ACCESS_DENIED</code> </p> </li> <li> <p>
     * <code>CANNOT_CREATE_HOSTED_ZONE</code> </p> </li> <li> <p>
     * <code>EXPIRED_TOKEN</code> </p> </li> <li> <p>
     * <code>HOSTED_ZONE_NOT_FOUND</code> </p> </li> <li> <p>
     * <code>INTERNAL_FAILURE</code> </p> </li> <li> <p>
     * <code>INVALID_CHANGE_BATCH</code> </p> </li> <li> <p>
     * <code>THROTTLED_REQUEST</code> </p> </li> </ul>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The code associated with <code>ErrorMessage</code>. Values for
     * <code>ErrorCode</code> include the following:</p> <ul> <li> <p>
     * <code>ACCESS_DENIED</code> </p> </li> <li> <p>
     * <code>CANNOT_CREATE_HOSTED_ZONE</code> </p> </li> <li> <p>
     * <code>EXPIRED_TOKEN</code> </p> </li> <li> <p>
     * <code>HOSTED_ZONE_NOT_FOUND</code> </p> </li> <li> <p>
     * <code>INTERNAL_FAILURE</code> </p> </li> <li> <p>
     * <code>INVALID_CHANGE_BATCH</code> </p> </li> <li> <p>
     * <code>THROTTLED_REQUEST</code> </p> </li> </ul>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The code associated with <code>ErrorMessage</code>. Values for
     * <code>ErrorCode</code> include the following:</p> <ul> <li> <p>
     * <code>ACCESS_DENIED</code> </p> </li> <li> <p>
     * <code>CANNOT_CREATE_HOSTED_ZONE</code> </p> </li> <li> <p>
     * <code>EXPIRED_TOKEN</code> </p> </li> <li> <p>
     * <code>HOSTED_ZONE_NOT_FOUND</code> </p> </li> <li> <p>
     * <code>INTERNAL_FAILURE</code> </p> </li> <li> <p>
     * <code>INVALID_CHANGE_BATCH</code> </p> </li> <li> <p>
     * <code>THROTTLED_REQUEST</code> </p> </li> </ul>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The code associated with <code>ErrorMessage</code>. Values for
     * <code>ErrorCode</code> include the following:</p> <ul> <li> <p>
     * <code>ACCESS_DENIED</code> </p> </li> <li> <p>
     * <code>CANNOT_CREATE_HOSTED_ZONE</code> </p> </li> <li> <p>
     * <code>EXPIRED_TOKEN</code> </p> </li> <li> <p>
     * <code>HOSTED_ZONE_NOT_FOUND</code> </p> </li> <li> <p>
     * <code>INTERNAL_FAILURE</code> </p> </li> <li> <p>
     * <code>INVALID_CHANGE_BATCH</code> </p> </li> <li> <p>
     * <code>THROTTLED_REQUEST</code> </p> </li> </ul>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The code associated with <code>ErrorMessage</code>. Values for
     * <code>ErrorCode</code> include the following:</p> <ul> <li> <p>
     * <code>ACCESS_DENIED</code> </p> </li> <li> <p>
     * <code>CANNOT_CREATE_HOSTED_ZONE</code> </p> </li> <li> <p>
     * <code>EXPIRED_TOKEN</code> </p> </li> <li> <p>
     * <code>HOSTED_ZONE_NOT_FOUND</code> </p> </li> <li> <p>
     * <code>INTERNAL_FAILURE</code> </p> </li> <li> <p>
     * <code>INVALID_CHANGE_BATCH</code> </p> </li> <li> <p>
     * <code>THROTTLED_REQUEST</code> </p> </li> </ul>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The code associated with <code>ErrorMessage</code>. Values for
     * <code>ErrorCode</code> include the following:</p> <ul> <li> <p>
     * <code>ACCESS_DENIED</code> </p> </li> <li> <p>
     * <code>CANNOT_CREATE_HOSTED_ZONE</code> </p> </li> <li> <p>
     * <code>EXPIRED_TOKEN</code> </p> </li> <li> <p>
     * <code>HOSTED_ZONE_NOT_FOUND</code> </p> </li> <li> <p>
     * <code>INTERNAL_FAILURE</code> </p> </li> <li> <p>
     * <code>INVALID_CHANGE_BATCH</code> </p> </li> <li> <p>
     * <code>THROTTLED_REQUEST</code> </p> </li> </ul>
     */
    inline Operation& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The code associated with <code>ErrorMessage</code>. Values for
     * <code>ErrorCode</code> include the following:</p> <ul> <li> <p>
     * <code>ACCESS_DENIED</code> </p> </li> <li> <p>
     * <code>CANNOT_CREATE_HOSTED_ZONE</code> </p> </li> <li> <p>
     * <code>EXPIRED_TOKEN</code> </p> </li> <li> <p>
     * <code>HOSTED_ZONE_NOT_FOUND</code> </p> </li> <li> <p>
     * <code>INTERNAL_FAILURE</code> </p> </li> <li> <p>
     * <code>INVALID_CHANGE_BATCH</code> </p> </li> <li> <p>
     * <code>THROTTLED_REQUEST</code> </p> </li> </ul>
     */
    inline Operation& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The code associated with <code>ErrorMessage</code>. Values for
     * <code>ErrorCode</code> include the following:</p> <ul> <li> <p>
     * <code>ACCESS_DENIED</code> </p> </li> <li> <p>
     * <code>CANNOT_CREATE_HOSTED_ZONE</code> </p> </li> <li> <p>
     * <code>EXPIRED_TOKEN</code> </p> </li> <li> <p>
     * <code>HOSTED_ZONE_NOT_FOUND</code> </p> </li> <li> <p>
     * <code>INTERNAL_FAILURE</code> </p> </li> <li> <p>
     * <code>INVALID_CHANGE_BATCH</code> </p> </li> <li> <p>
     * <code>THROTTLED_REQUEST</code> </p> </li> </ul>
     */
    inline Operation& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The date and time that the request was submitted, in Unix date/time format
     * and Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time that the request was submitted, in Unix date/time format
     * and Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time that the request was submitted, in Unix date/time format
     * and Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time that the request was submitted, in Unix date/time format
     * and Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time that the request was submitted, in Unix date/time format
     * and Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline Operation& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time that the request was submitted, in Unix date/time format
     * and Coordinated Universal Time (UTC). The value of <code>CreateDate</code> is
     * accurate to milliseconds. For example, the value <code>1516925490.087</code>
     * represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline Operation& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that the value of <code>Status</code> changed to the
     * current value, in Unix date/time format and Coordinated Universal Time (UTC).
     * The value of <code>UpdateDate</code> is accurate to milliseconds. For example,
     * the value <code>1516925490.087</code> represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }

    /**
     * <p>The date and time that the value of <code>Status</code> changed to the
     * current value, in Unix date/time format and Coordinated Universal Time (UTC).
     * The value of <code>UpdateDate</code> is accurate to milliseconds. For example,
     * the value <code>1516925490.087</code> represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }

    /**
     * <p>The date and time that the value of <code>Status</code> changed to the
     * current value, in Unix date/time format and Coordinated Universal Time (UTC).
     * The value of <code>UpdateDate</code> is accurate to milliseconds. For example,
     * the value <code>1516925490.087</code> represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDateHasBeenSet = true; m_updateDate = value; }

    /**
     * <p>The date and time that the value of <code>Status</code> changed to the
     * current value, in Unix date/time format and Coordinated Universal Time (UTC).
     * The value of <code>UpdateDate</code> is accurate to milliseconds. For example,
     * the value <code>1516925490.087</code> represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::move(value); }

    /**
     * <p>The date and time that the value of <code>Status</code> changed to the
     * current value, in Unix date/time format and Coordinated Universal Time (UTC).
     * The value of <code>UpdateDate</code> is accurate to milliseconds. For example,
     * the value <code>1516925490.087</code> represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline Operation& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}

    /**
     * <p>The date and time that the value of <code>Status</code> changed to the
     * current value, in Unix date/time format and Coordinated Universal Time (UTC).
     * The value of <code>UpdateDate</code> is accurate to milliseconds. For example,
     * the value <code>1516925490.087</code> represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline Operation& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}


    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline const Aws::Map<OperationTargetType, Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline void SetTargets(const Aws::Map<OperationTargetType, Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline void SetTargets(Aws::Map<OperationTargetType, Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline Operation& WithTargets(const Aws::Map<OperationTargetType, Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline Operation& WithTargets(Aws::Map<OperationTargetType, Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline Operation& AddTargets(const OperationTargetType& key, const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }

    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline Operation& AddTargets(OperationTargetType&& key, const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }

    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline Operation& AddTargets(const OperationTargetType& key, Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline Operation& AddTargets(OperationTargetType&& key, Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline Operation& AddTargets(OperationTargetType&& key, const char* value) { m_targetsHasBeenSet = true; m_targets.emplace(std::move(key), value); return *this; }

    /**
     * <p>The name of the target entity that is associated with the operation:</p> <ul>
     * <li> <p> <b>NAMESPACE</b>: The namespace ID is returned in the
     * <code>ResourceId</code> property.</p> </li> <li> <p> <b>SERVICE</b>: The service
     * ID is returned in the <code>ResourceId</code> property.</p> </li> <li> <p>
     * <b>INSTANCE</b>: The instance ID is returned in the <code>ResourceId</code>
     * property.</p> </li> </ul>
     */
    inline Operation& AddTargets(const OperationTargetType& key, const char* value) { m_targetsHasBeenSet = true; m_targets.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    OperationType m_type;
    bool m_typeHasBeenSet;

    OperationStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    Aws::Utils::DateTime m_updateDate;
    bool m_updateDateHasBeenSet;

    Aws::Map<OperationTargetType, Aws::String> m_targets;
    bool m_targetsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
