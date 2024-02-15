/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/EntityType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/detective/model/Status.h>
#include <aws/detective/model/Severity.h>
#include <aws/detective/model/State.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Detective
{
namespace Model
{
  class GetInvestigationResult
  {
  public:
    AWS_DETECTIVE_API GetInvestigationResult();
    AWS_DETECTIVE_API GetInvestigationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API GetInvestigationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline GetInvestigationResult& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline GetInvestigationResult& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline GetInvestigationResult& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline const Aws::String& GetInvestigationId() const{ return m_investigationId; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(const Aws::String& value) { m_investigationId = value; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(Aws::String&& value) { m_investigationId = std::move(value); }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(const char* value) { m_investigationId.assign(value); }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline GetInvestigationResult& WithInvestigationId(const Aws::String& value) { SetInvestigationId(value); return *this;}

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline GetInvestigationResult& WithInvestigationId(Aws::String&& value) { SetInvestigationId(std::move(value)); return *this;}

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline GetInvestigationResult& WithInvestigationId(const char* value) { SetInvestigationId(value); return *this;}


    /**
     * <p>The unique Amazon Resource Name (ARN). Detective supports IAM user ARNs and
     * IAM role ARNs.</p>
     */
    inline const Aws::String& GetEntityArn() const{ return m_entityArn; }

    /**
     * <p>The unique Amazon Resource Name (ARN). Detective supports IAM user ARNs and
     * IAM role ARNs.</p>
     */
    inline void SetEntityArn(const Aws::String& value) { m_entityArn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN). Detective supports IAM user ARNs and
     * IAM role ARNs.</p>
     */
    inline void SetEntityArn(Aws::String&& value) { m_entityArn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN). Detective supports IAM user ARNs and
     * IAM role ARNs.</p>
     */
    inline void SetEntityArn(const char* value) { m_entityArn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN). Detective supports IAM user ARNs and
     * IAM role ARNs.</p>
     */
    inline GetInvestigationResult& WithEntityArn(const Aws::String& value) { SetEntityArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN). Detective supports IAM user ARNs and
     * IAM role ARNs.</p>
     */
    inline GetInvestigationResult& WithEntityArn(Aws::String&& value) { SetEntityArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN). Detective supports IAM user ARNs and
     * IAM role ARNs.</p>
     */
    inline GetInvestigationResult& WithEntityArn(const char* value) { SetEntityArn(value); return *this;}


    /**
     * <p>Type of entity. For example, Amazon Web Services accounts, such as an IAM
     * user and/or IAM role.</p>
     */
    inline const EntityType& GetEntityType() const{ return m_entityType; }

    /**
     * <p>Type of entity. For example, Amazon Web Services accounts, such as an IAM
     * user and/or IAM role.</p>
     */
    inline void SetEntityType(const EntityType& value) { m_entityType = value; }

    /**
     * <p>Type of entity. For example, Amazon Web Services accounts, such as an IAM
     * user and/or IAM role.</p>
     */
    inline void SetEntityType(EntityType&& value) { m_entityType = std::move(value); }

    /**
     * <p>Type of entity. For example, Amazon Web Services accounts, such as an IAM
     * user and/or IAM role.</p>
     */
    inline GetInvestigationResult& WithEntityType(const EntityType& value) { SetEntityType(value); return *this;}

    /**
     * <p>Type of entity. For example, Amazon Web Services accounts, such as an IAM
     * user and/or IAM role.</p>
     */
    inline GetInvestigationResult& WithEntityType(EntityType&& value) { SetEntityType(std::move(value)); return *this;}


    /**
     * <p>The creation time of the investigation report in UTC time stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The creation time of the investigation report in UTC time stamp format.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The creation time of the investigation report in UTC time stamp format.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The creation time of the investigation report in UTC time stamp format.</p>
     */
    inline GetInvestigationResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The creation time of the investigation report in UTC time stamp format.</p>
     */
    inline GetInvestigationResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The start date and time used to set the scope time within which you want to
     * generate the investigation report. The value is an UTC ISO8601 formatted string.
     * For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetScopeStartTime() const{ return m_scopeStartTime; }

    /**
     * <p>The start date and time used to set the scope time within which you want to
     * generate the investigation report. The value is an UTC ISO8601 formatted string.
     * For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetScopeStartTime(const Aws::Utils::DateTime& value) { m_scopeStartTime = value; }

    /**
     * <p>The start date and time used to set the scope time within which you want to
     * generate the investigation report. The value is an UTC ISO8601 formatted string.
     * For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetScopeStartTime(Aws::Utils::DateTime&& value) { m_scopeStartTime = std::move(value); }

    /**
     * <p>The start date and time used to set the scope time within which you want to
     * generate the investigation report. The value is an UTC ISO8601 formatted string.
     * For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline GetInvestigationResult& WithScopeStartTime(const Aws::Utils::DateTime& value) { SetScopeStartTime(value); return *this;}

    /**
     * <p>The start date and time used to set the scope time within which you want to
     * generate the investigation report. The value is an UTC ISO8601 formatted string.
     * For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline GetInvestigationResult& WithScopeStartTime(Aws::Utils::DateTime&& value) { SetScopeStartTime(std::move(value)); return *this;}


    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetScopeEndTime() const{ return m_scopeEndTime; }

    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetScopeEndTime(const Aws::Utils::DateTime& value) { m_scopeEndTime = value; }

    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline void SetScopeEndTime(Aws::Utils::DateTime&& value) { m_scopeEndTime = std::move(value); }

    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline GetInvestigationResult& WithScopeEndTime(const Aws::Utils::DateTime& value) { SetScopeEndTime(value); return *this;}

    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline GetInvestigationResult& WithScopeEndTime(Aws::Utils::DateTime&& value) { SetScopeEndTime(std::move(value)); return *this;}


    /**
     * <p>The status based on the completion status of the investigation.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status based on the completion status of the investigation.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The status based on the completion status of the investigation.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The status based on the completion status of the investigation.</p>
     */
    inline GetInvestigationResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status based on the completion status of the investigation.</p>
     */
    inline GetInvestigationResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The severity assigned is based on the likelihood and impact of the indicators
     * of compromise discovered in the investigation.</p>
     */
    inline const Severity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity assigned is based on the likelihood and impact of the indicators
     * of compromise discovered in the investigation.</p>
     */
    inline void SetSeverity(const Severity& value) { m_severity = value; }

    /**
     * <p>The severity assigned is based on the likelihood and impact of the indicators
     * of compromise discovered in the investigation.</p>
     */
    inline void SetSeverity(Severity&& value) { m_severity = std::move(value); }

    /**
     * <p>The severity assigned is based on the likelihood and impact of the indicators
     * of compromise discovered in the investigation.</p>
     */
    inline GetInvestigationResult& WithSeverity(const Severity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity assigned is based on the likelihood and impact of the indicators
     * of compromise discovered in the investigation.</p>
     */
    inline GetInvestigationResult& WithSeverity(Severity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * that you have completed reviewing the investigation.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * that you have completed reviewing the investigation.</p>
     */
    inline void SetState(const State& value) { m_state = value; }

    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * that you have completed reviewing the investigation.</p>
     */
    inline void SetState(State&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * that you have completed reviewing the investigation.</p>
     */
    inline GetInvestigationResult& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * that you have completed reviewing the investigation.</p>
     */
    inline GetInvestigationResult& WithState(State&& value) { SetState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetInvestigationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetInvestigationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetInvestigationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_graphArn;

    Aws::String m_investigationId;

    Aws::String m_entityArn;

    EntityType m_entityType;

    Aws::Utils::DateTime m_createdTime;

    Aws::Utils::DateTime m_scopeStartTime;

    Aws::Utils::DateTime m_scopeEndTime;

    Status m_status;

    Severity m_severity;

    State m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
