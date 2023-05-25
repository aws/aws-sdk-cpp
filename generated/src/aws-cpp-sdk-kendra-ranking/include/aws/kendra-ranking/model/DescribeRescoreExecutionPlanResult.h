/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra-ranking/model/CapacityUnitsConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra-ranking/model/RescoreExecutionPlanStatus.h>
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
namespace KendraRanking
{
namespace Model
{
  class DescribeRescoreExecutionPlanResult
  {
  public:
    AWS_KENDRARANKING_API DescribeRescoreExecutionPlanResult();
    AWS_KENDRARANKING_API DescribeRescoreExecutionPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRARANKING_API DescribeRescoreExecutionPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the rescore execution plan.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rescore execution plan.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rescore execution plan.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rescore execution plan.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name for the rescore execution plan.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the rescore execution plan.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name for the rescore execution plan.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name for the rescore execution plan.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name for the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description for the rescore execution plan.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the rescore execution plan.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the rescore execution plan.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the rescore execution plan.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the rescore execution plan.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The capacity units set for the rescore execution plan. A capacity of zero
     * indicates that the rescore execution plan is using the default capacity. For
     * more information on the default capacity and additional capacity units, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline const CapacityUnitsConfiguration& GetCapacityUnits() const{ return m_capacityUnits; }

    /**
     * <p>The capacity units set for the rescore execution plan. A capacity of zero
     * indicates that the rescore execution plan is using the default capacity. For
     * more information on the default capacity and additional capacity units, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline void SetCapacityUnits(const CapacityUnitsConfiguration& value) { m_capacityUnits = value; }

    /**
     * <p>The capacity units set for the rescore execution plan. A capacity of zero
     * indicates that the rescore execution plan is using the default capacity. For
     * more information on the default capacity and additional capacity units, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline void SetCapacityUnits(CapacityUnitsConfiguration&& value) { m_capacityUnits = std::move(value); }

    /**
     * <p>The capacity units set for the rescore execution plan. A capacity of zero
     * indicates that the rescore execution plan is using the default capacity. For
     * more information on the default capacity and additional capacity units, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithCapacityUnits(const CapacityUnitsConfiguration& value) { SetCapacityUnits(value); return *this;}

    /**
     * <p>The capacity units set for the rescore execution plan. A capacity of zero
     * indicates that the rescore execution plan is using the default capacity. For
     * more information on the default capacity and additional capacity units, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/adjusting-capacity.html">Adjusting
     * capacity</a>.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithCapacityUnits(CapacityUnitsConfiguration&& value) { SetCapacityUnits(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp of when the rescore execution plan was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp of when the rescore execution plan was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The Unix timestamp of when the rescore execution plan was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp of when the rescore execution plan was created.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp of when the rescore execution plan was created.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp of when the rescore execution plan was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp of when the rescore execution plan was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The Unix timestamp of when the rescore execution plan was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp of when the rescore execution plan was last updated.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp of when the rescore execution plan was last updated.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The current status of the rescore execution plan. When the value is
     * <code>ACTIVE</code>, the rescore execution plan is ready for use. If the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline const RescoreExecutionPlanStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the rescore execution plan. When the value is
     * <code>ACTIVE</code>, the rescore execution plan is ready for use. If the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline void SetStatus(const RescoreExecutionPlanStatus& value) { m_status = value; }

    /**
     * <p>The current status of the rescore execution plan. When the value is
     * <code>ACTIVE</code>, the rescore execution plan is ready for use. If the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline void SetStatus(RescoreExecutionPlanStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the rescore execution plan. When the value is
     * <code>ACTIVE</code>, the rescore execution plan is ready for use. If the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithStatus(const RescoreExecutionPlanStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the rescore execution plan. When the value is
     * <code>ACTIVE</code>, the rescore execution plan is ready for use. If the
     * <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithStatus(RescoreExecutionPlanStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>When the <code>Status</code> field value is <code>FAILED</code>, the
     * <code>ErrorMessage</code> field contains a message that explains why.</p>
     */
    inline DescribeRescoreExecutionPlanResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRescoreExecutionPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRescoreExecutionPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRescoreExecutionPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    CapacityUnitsConfiguration m_capacityUnits;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    RescoreExecutionPlanStatus m_status;

    Aws::String m_errorMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
