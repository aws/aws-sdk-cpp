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
    AWS_GLUE_API GetMLTransformResult() = default;
    AWS_GLUE_API GetMLTransformResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetMLTransformResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the transform, generated at the time that the
     * transform was created.</p>
     */
    inline const Aws::String& GetTransformId() const { return m_transformId; }
    template<typename TransformIdT = Aws::String>
    void SetTransformId(TransformIdT&& value) { m_transformIdHasBeenSet = true; m_transformId = std::forward<TransformIdT>(value); }
    template<typename TransformIdT = Aws::String>
    GetMLTransformResult& WithTransformId(TransformIdT&& value) { SetTransformId(std::forward<TransformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name given to the transform when it was created.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetMLTransformResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the transform.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetMLTransformResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last known status of the transform (to indicate whether it can be used or
     * not). One of "NOT_READY", "READY", or "DELETING".</p>
     */
    inline TransformStatusType GetStatus() const { return m_status; }
    inline void SetStatus(TransformStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetMLTransformResult& WithStatus(TransformStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the transform was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    void SetCreatedOn(CreatedOnT&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::forward<CreatedOnT>(value); }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    GetMLTransformResult& WithCreatedOn(CreatedOnT&& value) { SetCreatedOn(std::forward<CreatedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the transform was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    void SetLastModifiedOn(LastModifiedOnT&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::forward<LastModifiedOnT>(value); }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    GetMLTransformResult& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Glue table definitions used by the transform.</p>
     */
    inline const Aws::Vector<GlueTable>& GetInputRecordTables() const { return m_inputRecordTables; }
    template<typename InputRecordTablesT = Aws::Vector<GlueTable>>
    void SetInputRecordTables(InputRecordTablesT&& value) { m_inputRecordTablesHasBeenSet = true; m_inputRecordTables = std::forward<InputRecordTablesT>(value); }
    template<typename InputRecordTablesT = Aws::Vector<GlueTable>>
    GetMLTransformResult& WithInputRecordTables(InputRecordTablesT&& value) { SetInputRecordTables(std::forward<InputRecordTablesT>(value)); return *this;}
    template<typename InputRecordTablesT = GlueTable>
    GetMLTransformResult& AddInputRecordTables(InputRecordTablesT&& value) { m_inputRecordTablesHasBeenSet = true; m_inputRecordTables.emplace_back(std::forward<InputRecordTablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration parameters that are specific to the algorithm used.</p>
     */
    inline const TransformParameters& GetParameters() const { return m_parameters; }
    template<typename ParametersT = TransformParameters>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = TransformParameters>
    GetMLTransformResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest evaluation metrics.</p>
     */
    inline const EvaluationMetrics& GetEvaluationMetrics() const { return m_evaluationMetrics; }
    template<typename EvaluationMetricsT = EvaluationMetrics>
    void SetEvaluationMetrics(EvaluationMetricsT&& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = std::forward<EvaluationMetricsT>(value); }
    template<typename EvaluationMetricsT = EvaluationMetrics>
    GetMLTransformResult& WithEvaluationMetrics(EvaluationMetricsT&& value) { SetEvaluationMetrics(std::forward<EvaluationMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of labels available for this transform.</p>
     */
    inline int GetLabelCount() const { return m_labelCount; }
    inline void SetLabelCount(int value) { m_labelCountHasBeenSet = true; m_labelCount = value; }
    inline GetMLTransformResult& WithLabelCount(int value) { SetLabelCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Map&lt;Column, Type&gt;</code> object that represents the schema
     * that this transform accepts. Has an upper bound of 100 columns.</p>
     */
    inline const Aws::Vector<SchemaColumn>& GetSchema() const { return m_schema; }
    template<typename SchemaT = Aws::Vector<SchemaColumn>>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Vector<SchemaColumn>>
    GetMLTransformResult& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    template<typename SchemaT = SchemaColumn>
    GetMLTransformResult& AddSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema.emplace_back(std::forward<SchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    GetMLTransformResult& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline const Aws::String& GetGlueVersion() const { return m_glueVersion; }
    template<typename GlueVersionT = Aws::String>
    void SetGlueVersion(GlueVersionT&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::forward<GlueVersionT>(value); }
    template<typename GlueVersionT = Aws::String>
    GetMLTransformResult& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline double GetMaxCapacity() const { return m_maxCapacity; }
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline GetMLTransformResult& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
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
    inline WorkerType GetWorkerType() const { return m_workerType; }
    inline void SetWorkerType(WorkerType value) { m_workerTypeHasBeenSet = true; m_workerType = value; }
    inline GetMLTransformResult& WithWorkerType(WorkerType value) { SetWorkerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when this task runs.</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline GetMLTransformResult& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout for a task run for this transform in minutes. This is the maximum
     * time that a task run for this transform can consume resources before it is
     * terminated and enters <code>TIMEOUT</code> status. The default is 2,880 minutes
     * (48 hours).</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline GetMLTransformResult& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of times to retry a task for this transform after a task
     * run fails.</p>
     */
    inline int GetMaxRetries() const { return m_maxRetries; }
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }
    inline GetMLTransformResult& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption-at-rest settings of the transform that apply to accessing user
     * data. Machine learning transforms can access user data encrypted in Amazon S3
     * using KMS.</p>
     */
    inline const TransformEncryption& GetTransformEncryption() const { return m_transformEncryption; }
    template<typename TransformEncryptionT = TransformEncryption>
    void SetTransformEncryption(TransformEncryptionT&& value) { m_transformEncryptionHasBeenSet = true; m_transformEncryption = std::forward<TransformEncryptionT>(value); }
    template<typename TransformEncryptionT = TransformEncryption>
    GetMLTransformResult& WithTransformEncryption(TransformEncryptionT&& value) { SetTransformEncryption(std::forward<TransformEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMLTransformResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transformId;
    bool m_transformIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TransformStatusType m_status{TransformStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdOn{};
    bool m_createdOnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedOn{};
    bool m_lastModifiedOnHasBeenSet = false;

    Aws::Vector<GlueTable> m_inputRecordTables;
    bool m_inputRecordTablesHasBeenSet = false;

    TransformParameters m_parameters;
    bool m_parametersHasBeenSet = false;

    EvaluationMetrics m_evaluationMetrics;
    bool m_evaluationMetricsHasBeenSet = false;

    int m_labelCount{0};
    bool m_labelCountHasBeenSet = false;

    Aws::Vector<SchemaColumn> m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    double m_maxCapacity{0.0};
    bool m_maxCapacityHasBeenSet = false;

    WorkerType m_workerType{WorkerType::NOT_SET};
    bool m_workerTypeHasBeenSet = false;

    int m_numberOfWorkers{0};
    bool m_numberOfWorkersHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    int m_maxRetries{0};
    bool m_maxRetriesHasBeenSet = false;

    TransformEncryption m_transformEncryption;
    bool m_transformEncryptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
