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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/OperationStatus.h>
#include <aws/route53domains/model/OperationType.h>
#include <aws/core/utils/DateTime.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>OperationSummary includes the following elements.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/OperationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API OperationSummary
  {
  public:
    OperationSummary();
    OperationSummary(Aws::Utils::Json::JsonView jsonValue);
    OperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier returned to track the requested action.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>Identifier returned to track the requested action.</p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>Identifier returned to track the requested action.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>Identifier returned to track the requested action.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>Identifier returned to track the requested action.</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>Identifier returned to track the requested action.</p>
     */
    inline OperationSummary& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>Identifier returned to track the requested action.</p>
     */
    inline OperationSummary& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>Identifier returned to track the requested action.</p>
     */
    inline OperationSummary& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline const OperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline void SetStatus(const OperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline void SetStatus(OperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline OperationSummary& WithStatus(const OperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the requested operation in the system.</p>
     */
    inline OperationSummary& WithStatus(OperationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Type of the action requested.</p>
     */
    inline const OperationType& GetType() const{ return m_type; }

    /**
     * <p>Type of the action requested.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of the action requested.</p>
     */
    inline void SetType(const OperationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of the action requested.</p>
     */
    inline void SetType(OperationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of the action requested.</p>
     */
    inline OperationSummary& WithType(const OperationType& value) { SetType(value); return *this;}

    /**
     * <p>Type of the action requested.</p>
     */
    inline OperationSummary& WithType(OperationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The date when the request was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedDate() const{ return m_submittedDate; }

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline bool SubmittedDateHasBeenSet() const { return m_submittedDateHasBeenSet; }

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline void SetSubmittedDate(const Aws::Utils::DateTime& value) { m_submittedDateHasBeenSet = true; m_submittedDate = value; }

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline void SetSubmittedDate(Aws::Utils::DateTime&& value) { m_submittedDateHasBeenSet = true; m_submittedDate = std::move(value); }

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline OperationSummary& WithSubmittedDate(const Aws::Utils::DateTime& value) { SetSubmittedDate(value); return *this;}

    /**
     * <p>The date when the request was submitted.</p>
     */
    inline OperationSummary& WithSubmittedDate(Aws::Utils::DateTime&& value) { SetSubmittedDate(std::move(value)); return *this;}

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
