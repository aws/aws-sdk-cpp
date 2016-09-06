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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/OperationStatus.h>
#include <aws/route53domains/model/OperationType.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>OperationSummary includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API OperationSummary
  {
  public:
    OperationSummary();
    OperationSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    OperationSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Identifier returned to track the requested action.</p> <p>Type: String</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>Identifier returned to track the requested action.</p> <p>Type: String</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>Identifier returned to track the requested action.</p> <p>Type: String</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>Identifier returned to track the requested action.</p> <p>Type: String</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>Identifier returned to track the requested action.</p> <p>Type: String</p>
     */
    inline OperationSummary& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>Identifier returned to track the requested action.</p> <p>Type: String</p>
     */
    inline OperationSummary& WithOperationId(Aws::String&& value) { SetOperationId(value); return *this;}

    /**
     * <p>Identifier returned to track the requested action.</p> <p>Type: String</p>
     */
    inline OperationSummary& WithOperationId(const char* value) { SetOperationId(value); return *this;}

    /**
     * <p>The current status of the requested operation in the system.</p> <p>Type:
     * String</p>
     */
    inline const OperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the requested operation in the system.</p> <p>Type:
     * String</p>
     */
    inline void SetStatus(const OperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the requested operation in the system.</p> <p>Type:
     * String</p>
     */
    inline void SetStatus(OperationStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the requested operation in the system.</p> <p>Type:
     * String</p>
     */
    inline OperationSummary& WithStatus(const OperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the requested operation in the system.</p> <p>Type:
     * String</p>
     */
    inline OperationSummary& WithStatus(OperationStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>Type of the action requested.</p> <p>Type: String</p> <p>Valid values:
     * <code>REGISTER_DOMAIN</code> | <code>DELETE_DOMAIN</code> |
     * <code>TRANSFER_IN_DOMAIN</code> | <code>UPDATE_DOMAIN_CONTACT</code> |
     * <code>UPDATE_NAMESERVER</code> | <code>CHANGE_PRIVACY_PROTECTION</code> |
     * <code>DOMAIN_LOCK</code></p>
     */
    inline const OperationType& GetType() const{ return m_type; }

    /**
     * <p>Type of the action requested.</p> <p>Type: String</p> <p>Valid values:
     * <code>REGISTER_DOMAIN</code> | <code>DELETE_DOMAIN</code> |
     * <code>TRANSFER_IN_DOMAIN</code> | <code>UPDATE_DOMAIN_CONTACT</code> |
     * <code>UPDATE_NAMESERVER</code> | <code>CHANGE_PRIVACY_PROTECTION</code> |
     * <code>DOMAIN_LOCK</code></p>
     */
    inline void SetType(const OperationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of the action requested.</p> <p>Type: String</p> <p>Valid values:
     * <code>REGISTER_DOMAIN</code> | <code>DELETE_DOMAIN</code> |
     * <code>TRANSFER_IN_DOMAIN</code> | <code>UPDATE_DOMAIN_CONTACT</code> |
     * <code>UPDATE_NAMESERVER</code> | <code>CHANGE_PRIVACY_PROTECTION</code> |
     * <code>DOMAIN_LOCK</code></p>
     */
    inline void SetType(OperationType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of the action requested.</p> <p>Type: String</p> <p>Valid values:
     * <code>REGISTER_DOMAIN</code> | <code>DELETE_DOMAIN</code> |
     * <code>TRANSFER_IN_DOMAIN</code> | <code>UPDATE_DOMAIN_CONTACT</code> |
     * <code>UPDATE_NAMESERVER</code> | <code>CHANGE_PRIVACY_PROTECTION</code> |
     * <code>DOMAIN_LOCK</code></p>
     */
    inline OperationSummary& WithType(const OperationType& value) { SetType(value); return *this;}

    /**
     * <p>Type of the action requested.</p> <p>Type: String</p> <p>Valid values:
     * <code>REGISTER_DOMAIN</code> | <code>DELETE_DOMAIN</code> |
     * <code>TRANSFER_IN_DOMAIN</code> | <code>UPDATE_DOMAIN_CONTACT</code> |
     * <code>UPDATE_NAMESERVER</code> | <code>CHANGE_PRIVACY_PROTECTION</code> |
     * <code>DOMAIN_LOCK</code></p>
     */
    inline OperationSummary& WithType(OperationType&& value) { SetType(value); return *this;}

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedDate() const{ return m_submittedDate; }

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline void SetSubmittedDate(const Aws::Utils::DateTime& value) { m_submittedDateHasBeenSet = true; m_submittedDate = value; }

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline void SetSubmittedDate(Aws::Utils::DateTime&& value) { m_submittedDateHasBeenSet = true; m_submittedDate = value; }

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline OperationSummary& WithSubmittedDate(const Aws::Utils::DateTime& value) { SetSubmittedDate(value); return *this;}

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline OperationSummary& WithSubmittedDate(Aws::Utils::DateTime&& value) { SetSubmittedDate(value); return *this;}

  private:
    Aws::String m_operationId;
    bool m_operationIdHasBeenSet;
    OperationStatus m_status;
    bool m_statusHasBeenSet;
    OperationType m_type;
    bool m_typeHasBeenSet;
    Aws::Utils::DateTime m_submittedDate;
    bool m_submittedDateHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
