/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TransformStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/TransformParameters.h>
#include <aws/glue/model/EvaluationMetrics.h>
#include <aws/glue/model/WorkerType.h>
#include <aws/glue/model/TransformEncryption.h>
#include <aws/glue/model/GlueTable.h>
#include <aws/glue/model/SchemaColumn.h>
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
namespace Glue
{
namespace Model
{
  class GetMLTransformResult
  {
  public:
    AWS_GLUE_API GetMLTransformResult();
    AWS_GLUE_API GetMLTransformResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetMLTransformResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the transform, generated at the time that the
     * transform was created.</p>
     */
    inline const Aws::String& GetTransformId() const{ return m_transformId; }

    /**
     * <p>The unique identifier of the transform, generated at the time that the
     * transform was created.</p>
     */
    inline void SetTransformId(const Aws::String& value) { m_transformId = value; }

    /**
     * <p>The unique identifier of the transform, generated at the time that the
     * transform was created.</p>
     */
    inline void SetTransformId(Aws::String&& value) { m_transformId = std::move(value); }

    /**
     * <p>The unique identifier of the transform, generated at the time that the
     * transform was created.</p>
     */
    inline void SetTransformId(const char* value) { m_transformId.assign(value); }

    /**
     * <p>The unique identifier of the transform, generated at the time that the
     * transform was created.</p>
     */
    inline GetMLTransformResult& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}

    /**
     * <p>The unique identifier of the transform, generated at the time that the
     * transform was created.</p>
     */
    inline GetMLTransformResult& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the transform, generated at the time that the
     * transform was created.</p>
     */
    inline GetMLTransformResult& WithTransformId(const char* value) { SetTransformId(value); return *this;}


    /**
     * <p>The unique name given to the transform when it was created.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name given to the transform when it was created.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The unique name given to the transform when it was created.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The unique name given to the transform when it was created.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The unique name given to the transform when it was created.</p>
     */
    inline GetMLTransformResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name given to the transform when it was created.</p>
     */
    inline GetMLTransformResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name given to the transform when it was created.</p>
     */
    inline GetMLTransformResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the transform.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the transform.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the transform.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the transform.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the transform.</p>
     */
    inline GetMLTransformResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the transform.</p>
     */
    inline GetMLTransformResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the transform.</p>
     */
    inline GetMLTransformResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The last known status of the transform (to indicate whether it can be used or
     * not). One of "NOT_READY", "READY", or "DELETING".</p>
     */
    inline const TransformStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The last known status of the transform (to indicate whether it can be used or
     * not). One of "NOT_READY", "READY", or "DELETING".</p>
     */
    inline void SetStatus(const TransformStatusType& value) { m_status = value; }

    /**
     * <p>The last known status of the transform (to indicate whether it can be used or
     * not). One of "NOT_READY", "READY", or "DELETING".</p>
     */
    inline void SetStatus(TransformStatusType&& value) { m_status = std::move(value); }

    /**
     * <p>The last known status of the transform (to indicate whether it can be used or
     * not). One of "NOT_READY", "READY", or "DELETING".</p>
     */
    inline GetMLTransformResult& WithStatus(const TransformStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The last known status of the transform (to indicate whether it can be used or
     * not). One of "NOT_READY", "READY", or "DELETING".</p>
     */
    inline GetMLTransformResult& WithStatus(TransformStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time when the transform was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }

    /**
     * <p>The date and time when the transform was created.</p>
     */
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOn = value; }

    /**
     * <p>The date and time when the transform was created.</p>
     */
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOn = std::move(value); }

    /**
     * <p>The date and time when the transform was created.</p>
     */
    inline GetMLTransformResult& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}

    /**
     * <p>The date and time when the transform was created.</p>
     */
    inline GetMLTransformResult& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time when the transform was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }

    /**
     * <p>The date and time when the transform was last modified.</p>
     */
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOn = value; }

    /**
     * <p>The date and time when the transform was last modified.</p>
     */
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOn = std::move(value); }

    /**
     * <p>The date and time when the transform was last modified.</p>
     */
    inline GetMLTransformResult& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>The date and time when the transform was last modified.</p>
     */
    inline GetMLTransformResult& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>A list of Glue table definitions used by the transform.</p>
     */
    inline const Aws::Vector<GlueTable>& GetInputRecordTables() const{ return m_inputRecordTables; }

    /**
     * <p>A list of Glue table definitions used by the transform.</p>
     */
    inline void SetInputRecordTables(const Aws::Vector<GlueTable>& value) { m_inputRecordTables = value; }

    /**
     * <p>A list of Glue table definitions used by the transform.</p>
     */
    inline void SetInputRecordTables(Aws::Vector<GlueTable>&& value) { m_inputRecordTables = std::move(value); }

    /**
     * <p>A list of Glue table definitions used by the transform.</p>
     */
    inline GetMLTransformResult& WithInputRecordTables(const Aws::Vector<GlueTable>& value) { SetInputRecordTables(value); return *this;}

    /**
     * <p>A list of Glue table definitions used by the transform.</p>
     */
    inline GetMLTransformResult& WithInputRecordTables(Aws::Vector<GlueTable>&& value) { SetInputRecordTables(std::move(value)); return *this;}

    /**
     * <p>A list of Glue table definitions used by the transform.</p>
     */
    inline GetMLTransformResult& AddInputRecordTables(const GlueTable& value) { m_inputRecordTables.push_back(value); return *this; }

    /**
     * <p>A list of Glue table definitions used by the transform.</p>
     */
    inline GetMLTransformResult& AddInputRecordTables(GlueTable&& value) { m_inputRecordTables.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration parameters that are specific to the algorithm used.</p>
     */
    inline const TransformParameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>The configuration parameters that are specific to the algorithm used.</p>
     */
    inline void SetParameters(const TransformParameters& value) { m_parameters = value; }

    /**
     * <p>The configuration parameters that are specific to the algorithm used.</p>
     */
    inline void SetParameters(TransformParameters&& value) { m_parameters = std::move(value); }

    /**
     * <p>The configuration parameters that are specific to the algorithm used.</p>
     */
    inline GetMLTransformResult& WithParameters(const TransformParameters& value) { SetParameters(value); return *this;}

    /**
     * <p>The configuration parameters that are specific to the algorithm used.</p>
     */
    inline GetMLTransformResult& WithParameters(TransformParameters&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>The latest evaluation metrics.</p>
     */
    inline const EvaluationMetrics& GetEvaluationMetrics() const{ return m_evaluationMetrics; }

    /**
     * <p>The latest evaluation metrics.</p>
     */
    inline void SetEvaluationMetrics(const EvaluationMetrics& value) { m_evaluationMetrics = value; }

    /**
     * <p>The latest evaluation metrics.</p>
     */
    inline void SetEvaluationMetrics(EvaluationMetrics&& value) { m_evaluationMetrics = std::move(value); }

    /**
     * <p>The latest evaluation metrics.</p>
     */
    inline GetMLTransformResult& WithEvaluationMetrics(const EvaluationMetrics& value) { SetEvaluationMetrics(value); return *this;}

    /**
     * <p>The latest evaluation metrics.</p>
     */
    inline GetMLTransformResult& WithEvaluationMetrics(EvaluationMetrics&& value) { SetEvaluationMetrics(std::move(value)); return *this;}


    /**
     * <p>The number of labels available for this transform.</p>
     */
    inline int GetLabelCount() const{ return m_labelCount; }

    /**
     * <p>The number of labels available for this transform.</p>
     */
    inline void SetLabelCount(int value) { m_labelCount = value; }

    /**
     * <p>The number of labels available for this transform.</p>
     */
    inline GetMLTransformResult& WithLabelCount(int value) { SetLabelCount(value); return *this;}


    /**
     * <p>The <code>Map&lt;Column, Type&gt;</code> object that represents the schema
     * that this transform accepts. Has an upper bound of 100 columns.</p>
     */
    inline const Aws::Vector<SchemaColumn>& GetSchema() const{ return m_schema; }

    /**
     * <p>The <code>Map&lt;Column, Type&gt;</code> object that represents the schema
     * that this transform accepts. Has an upper bound of 100 columns.</p>
     */
    inline void SetSchema(const Aws::Vector<SchemaColumn>& value) { m_schema = value; }

    /**
     * <p>The <code>Map&lt;Column, Type&gt;</code> object that represents the schema
     * that this transform accepts. Has an upper bound of 100 columns.</p>
     */
    inline void SetSchema(Aws::Vector<SchemaColumn>&& value) { m_schema = std::move(value); }

    /**
     * <p>The <code>Map&lt;Column, Type&gt;</code> object that represents the schema
     * that this transform accepts. Has an upper bound of 100 columns.</p>
     */
    inline GetMLTransformResult& WithSchema(const Aws::Vector<SchemaColumn>& value) { SetSchema(value); return *this;}

    /**
     * <p>The <code>Map&lt;Column, Type&gt;</code> object that represents the schema
     * that this transform accepts. Has an upper bound of 100 columns.</p>
     */
    inline GetMLTransformResult& WithSchema(Aws::Vector<SchemaColumn>&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The <code>Map&lt;Column, Type&gt;</code> object that represents the schema
     * that this transform accepts. Has an upper bound of 100 columns.</p>
     */
    inline GetMLTransformResult& AddSchema(const SchemaColumn& value) { m_schema.push_back(value); return *this; }

    /**
     * <p>The <code>Map&lt;Column, Type&gt;</code> object that represents the schema
     * that this transform accepts. Has an upper bound of 100 columns.</p>
     */
    inline GetMLTransformResult& AddSchema(SchemaColumn&& value) { m_schema.push_back(std::move(value)); return *this; }


    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline void SetRole(const Aws::String& value) { m_role = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline void SetRole(Aws::String&& value) { m_role = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline void SetRole(const char* value) { m_role.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline GetMLTransformResult& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline GetMLTransformResult& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline GetMLTransformResult& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline const Aws::String& GetGlueVersion() const{ return m_glueVersion; }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersion = value; }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersion = std::move(value); }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline void SetGlueVersion(const char* value) { m_glueVersion.assign(value); }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline GetMLTransformResult& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline GetMLTransformResult& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline GetMLTransformResult& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}


    /**
     * <p>The number of Glue data processing units (DPUs) that are allocated to task
     * runs for this transform. You can allocate from 2 to 100 DPUs; the default is 10.
     * A DPU is a relative measure of processing power that consists of 4 vCPUs of
     * compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>. </p> <p>When
     * the <code>WorkerType</code> field is set to a value other than
     * <code>Standard</code>, the <code>MaxCapacity</code> field is set automatically
     * and becomes read-only.</p>
     */
    inline double GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The number of Glue data processing units (DPUs) that are allocated to task
     * runs for this transform. You can allocate from 2 to 100 DPUs; the default is 10.
     * A DPU is a relative measure of processing power that consists of 4 vCPUs of
     * compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>. </p> <p>When
     * the <code>WorkerType</code> field is set to a value other than
     * <code>Standard</code>, the <code>MaxCapacity</code> field is set automatically
     * and becomes read-only.</p>
     */
    inline void SetMaxCapacity(double value) { m_maxCapacity = value; }

    /**
     * <p>The number of Glue data processing units (DPUs) that are allocated to task
     * runs for this transform. You can allocate from 2 to 100 DPUs; the default is 10.
     * A DPU is a relative measure of processing power that consists of 4 vCPUs of
     * compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>. </p> <p>When
     * the <code>WorkerType</code> field is set to a value other than
     * <code>Standard</code>, the <code>MaxCapacity</code> field is set automatically
     * and becomes read-only.</p>
     */
    inline GetMLTransformResult& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The type of predefined worker that is allocated when this task runs. Accepts
     * a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul>
     */
    inline const WorkerType& GetWorkerType() const{ return m_workerType; }

    /**
     * <p>The type of predefined worker that is allocated when this task runs. Accepts
     * a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul>
     */
    inline void SetWorkerType(const WorkerType& value) { m_workerType = value; }

    /**
     * <p>The type of predefined worker that is allocated when this task runs. Accepts
     * a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul>
     */
    inline void SetWorkerType(WorkerType&& value) { m_workerType = std::move(value); }

    /**
     * <p>The type of predefined worker that is allocated when this task runs. Accepts
     * a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul>
     */
    inline GetMLTransformResult& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}

    /**
     * <p>The type of predefined worker that is allocated when this task runs. Accepts
     * a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul>
     */
    inline GetMLTransformResult& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}


    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when this task runs.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when this task runs.</p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkers = value; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when this task runs.</p>
     */
    inline GetMLTransformResult& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


    /**
     * <p>The timeout for a task run for this transform in minutes. This is the maximum
     * time that a task run for this transform can consume resources before it is
     * terminated and enters <code>TIMEOUT</code> status. The default is 2,880 minutes
     * (48 hours).</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The timeout for a task run for this transform in minutes. This is the maximum
     * time that a task run for this transform can consume resources before it is
     * terminated and enters <code>TIMEOUT</code> status. The default is 2,880 minutes
     * (48 hours).</p>
     */
    inline void SetTimeout(int value) { m_timeout = value; }

    /**
     * <p>The timeout for a task run for this transform in minutes. This is the maximum
     * time that a task run for this transform can consume resources before it is
     * terminated and enters <code>TIMEOUT</code> status. The default is 2,880 minutes
     * (48 hours).</p>
     */
    inline GetMLTransformResult& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The maximum number of times to retry a task for this transform after a task
     * run fails.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }

    /**
     * <p>The maximum number of times to retry a task for this transform after a task
     * run fails.</p>
     */
    inline void SetMaxRetries(int value) { m_maxRetries = value; }

    /**
     * <p>The maximum number of times to retry a task for this transform after a task
     * run fails.</p>
     */
    inline GetMLTransformResult& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}


    /**
     * <p>The encryption-at-rest settings of the transform that apply to accessing user
     * data. Machine learning transforms can access user data encrypted in Amazon S3
     * using KMS.</p>
     */
    inline const TransformEncryption& GetTransformEncryption() const{ return m_transformEncryption; }

    /**
     * <p>The encryption-at-rest settings of the transform that apply to accessing user
     * data. Machine learning transforms can access user data encrypted in Amazon S3
     * using KMS.</p>
     */
    inline void SetTransformEncryption(const TransformEncryption& value) { m_transformEncryption = value; }

    /**
     * <p>The encryption-at-rest settings of the transform that apply to accessing user
     * data. Machine learning transforms can access user data encrypted in Amazon S3
     * using KMS.</p>
     */
    inline void SetTransformEncryption(TransformEncryption&& value) { m_transformEncryption = std::move(value); }

    /**
     * <p>The encryption-at-rest settings of the transform that apply to accessing user
     * data. Machine learning transforms can access user data encrypted in Amazon S3
     * using KMS.</p>
     */
    inline GetMLTransformResult& WithTransformEncryption(const TransformEncryption& value) { SetTransformEncryption(value); return *this;}

    /**
     * <p>The encryption-at-rest settings of the transform that apply to accessing user
     * data. Machine learning transforms can access user data encrypted in Amazon S3
     * using KMS.</p>
     */
    inline GetMLTransformResult& WithTransformEncryption(TransformEncryption&& value) { SetTransformEncryption(std::move(value)); return *this;}

  private:

    Aws::String m_transformId;

    Aws::String m_name;

    Aws::String m_description;

    TransformStatusType m_status;

    Aws::Utils::DateTime m_createdOn;

    Aws::Utils::DateTime m_lastModifiedOn;

    Aws::Vector<GlueTable> m_inputRecordTables;

    TransformParameters m_parameters;

    EvaluationMetrics m_evaluationMetrics;

    int m_labelCount;

    Aws::Vector<SchemaColumn> m_schema;

    Aws::String m_role;

    Aws::String m_glueVersion;

    double m_maxCapacity;

    WorkerType m_workerType;

    int m_numberOfWorkers;

    int m_timeout;

    int m_maxRetries;

    TransformEncryption m_transformEncryption;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
