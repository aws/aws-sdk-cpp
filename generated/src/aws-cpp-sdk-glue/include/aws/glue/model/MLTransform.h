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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure for a machine learning transform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/MLTransform">AWS
   * API Reference</a></p>
   */
  class MLTransform
  {
  public:
    AWS_GLUE_API MLTransform() = default;
    AWS_GLUE_API MLTransform(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API MLTransform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique transform ID that is generated for the machine learning transform.
     * The ID is guaranteed to be unique and does not change.</p>
     */
    inline const Aws::String& GetTransformId() const { return m_transformId; }
    inline bool TransformIdHasBeenSet() const { return m_transformIdHasBeenSet; }
    template<typename TransformIdT = Aws::String>
    void SetTransformId(TransformIdT&& value) { m_transformIdHasBeenSet = true; m_transformId = std::forward<TransformIdT>(value); }
    template<typename TransformIdT = Aws::String>
    MLTransform& WithTransformId(TransformIdT&& value) { SetTransformId(std::forward<TransformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined name for the machine learning transform. Names are not
     * guaranteed unique and can be changed at any time.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MLTransform& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined, long-form description text for the machine learning
     * transform. Descriptions are not guaranteed to be unique and can be changed at
     * any time.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    MLTransform& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the machine learning transform.</p>
     */
    inline TransformStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TransformStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline MLTransform& WithStatus(TransformStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. The time and date that this machine learning transform was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    void SetCreatedOn(CreatedOnT&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::forward<CreatedOnT>(value); }
    template<typename CreatedOnT = Aws::Utils::DateTime>
    MLTransform& WithCreatedOn(CreatedOnT&& value) { SetCreatedOn(std::forward<CreatedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. The last point in time when this machine learning transform was
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const { return m_lastModifiedOn; }
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    void SetLastModifiedOn(LastModifiedOnT&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::forward<LastModifiedOnT>(value); }
    template<typename LastModifiedOnT = Aws::Utils::DateTime>
    MLTransform& WithLastModifiedOn(LastModifiedOnT&& value) { SetLastModifiedOn(std::forward<LastModifiedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Glue table definitions used by the transform.</p>
     */
    inline const Aws::Vector<GlueTable>& GetInputRecordTables() const { return m_inputRecordTables; }
    inline bool InputRecordTablesHasBeenSet() const { return m_inputRecordTablesHasBeenSet; }
    template<typename InputRecordTablesT = Aws::Vector<GlueTable>>
    void SetInputRecordTables(InputRecordTablesT&& value) { m_inputRecordTablesHasBeenSet = true; m_inputRecordTables = std::forward<InputRecordTablesT>(value); }
    template<typename InputRecordTablesT = Aws::Vector<GlueTable>>
    MLTransform& WithInputRecordTables(InputRecordTablesT&& value) { SetInputRecordTables(std::forward<InputRecordTablesT>(value)); return *this;}
    template<typename InputRecordTablesT = GlueTable>
    MLTransform& AddInputRecordTables(InputRecordTablesT&& value) { m_inputRecordTablesHasBeenSet = true; m_inputRecordTables.emplace_back(std::forward<InputRecordTablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>TransformParameters</code> object. You can use parameters to tune
     * (customize) the behavior of the machine learning transform by specifying what
     * data it learns from and your preference on various tradeoffs (such as precious
     * vs. recall, or accuracy vs. cost).</p>
     */
    inline const TransformParameters& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = TransformParameters>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = TransformParameters>
    MLTransform& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>EvaluationMetrics</code> object. Evaluation metrics provide an
     * estimate of the quality of your machine learning transform.</p>
     */
    inline const EvaluationMetrics& GetEvaluationMetrics() const { return m_evaluationMetrics; }
    inline bool EvaluationMetricsHasBeenSet() const { return m_evaluationMetricsHasBeenSet; }
    template<typename EvaluationMetricsT = EvaluationMetrics>
    void SetEvaluationMetrics(EvaluationMetricsT&& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = std::forward<EvaluationMetricsT>(value); }
    template<typename EvaluationMetricsT = EvaluationMetrics>
    MLTransform& WithEvaluationMetrics(EvaluationMetricsT&& value) { SetEvaluationMetrics(std::forward<EvaluationMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A count identifier for the labeling files generated by Glue for this
     * transform. As you create a better transform, you can iteratively download,
     * label, and upload the labeling file.</p>
     */
    inline int GetLabelCount() const { return m_labelCount; }
    inline bool LabelCountHasBeenSet() const { return m_labelCountHasBeenSet; }
    inline void SetLabelCount(int value) { m_labelCountHasBeenSet = true; m_labelCount = value; }
    inline MLTransform& WithLabelCount(int value) { SetLabelCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs representing the columns and data types that this
     * transform can run against. Has an upper bound of 100 columns.</p>
     */
    inline const Aws::Vector<SchemaColumn>& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::Vector<SchemaColumn>>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Vector<SchemaColumn>>
    MLTransform& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    template<typename SchemaT = SchemaColumn>
    MLTransform& AddSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema.emplace_back(std::forward<SchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions. The required permissions include both Glue service role permissions
     * to Glue resources, and Amazon S3 permissions required by the transform. </p>
     * <ul> <li> <p>This role needs Glue service role permissions to allow access to
     * resources in Glue. See <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/attach-policy-iam-user.html">Attach
     * a Policy to IAM Users That Access Glue</a>.</p> </li> <li> <p>This role needs
     * permission to your Amazon Simple Storage Service (Amazon S3) sources, targets,
     * temporary directory, scripts, and any libraries used by the task run for this
     * transform.</p> </li> </ul>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    MLTransform& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
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
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }
    template<typename GlueVersionT = Aws::String>
    void SetGlueVersion(GlueVersionT&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::forward<GlueVersionT>(value); }
    template<typename GlueVersionT = Aws::String>
    MLTransform& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Glue data processing units (DPUs) that are allocated to task
     * runs for this transform. You can allocate from 2 to 100 DPUs; the default is 10.
     * A DPU is a relative measure of processing power that consists of 4 vCPUs of
     * compute capacity and 16 GB of memory. For more information, see the <a
     * href="http://aws.amazon.com/glue/pricing/">Glue pricing page</a>. </p> <p>
     * <code>MaxCapacity</code> is a mutually exclusive option with
     * <code>NumberOfWorkers</code> and <code>WorkerType</code>.</p> <ul> <li> <p>If
     * either <code>NumberOfWorkers</code> or <code>WorkerType</code> is set, then
     * <code>MaxCapacity</code> cannot be set.</p> </li> <li> <p>If
     * <code>MaxCapacity</code> is set then neither <code>NumberOfWorkers</code> or
     * <code>WorkerType</code> can be set.</p> </li> <li> <p>If <code>WorkerType</code>
     * is set, then <code>NumberOfWorkers</code> is required (and vice versa).</p>
     * </li> <li> <p> <code>MaxCapacity</code> and <code>NumberOfWorkers</code> must
     * both be at least 1.</p> </li> </ul> <p>When the <code>WorkerType</code> field is
     * set to a value other than <code>Standard</code>, the <code>MaxCapacity</code>
     * field is set automatically and becomes read-only.</p>
     */
    inline double GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline MLTransform& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of predefined worker that is allocated when a task of this transform
     * runs. Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul> <p>
     * <code>MaxCapacity</code> is a mutually exclusive option with
     * <code>NumberOfWorkers</code> and <code>WorkerType</code>.</p> <ul> <li> <p>If
     * either <code>NumberOfWorkers</code> or <code>WorkerType</code> is set, then
     * <code>MaxCapacity</code> cannot be set.</p> </li> <li> <p>If
     * <code>MaxCapacity</code> is set then neither <code>NumberOfWorkers</code> or
     * <code>WorkerType</code> can be set.</p> </li> <li> <p>If <code>WorkerType</code>
     * is set, then <code>NumberOfWorkers</code> is required (and vice versa).</p>
     * </li> <li> <p> <code>MaxCapacity</code> and <code>NumberOfWorkers</code> must
     * both be at least 1.</p> </li> </ul>
     */
    inline WorkerType GetWorkerType() const { return m_workerType; }
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }
    inline void SetWorkerType(WorkerType value) { m_workerTypeHasBeenSet = true; m_workerType = value; }
    inline MLTransform& WithWorkerType(WorkerType value) { SetWorkerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a task of the transform runs.</p> <p>If <code>WorkerType</code> is set,
     * then <code>NumberOfWorkers</code> is required (and vice versa).</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline MLTransform& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout in minutes of the machine learning transform.</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline MLTransform& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of times to retry after an <code>MLTaskRun</code> of the
     * machine learning transform fails.</p>
     */
    inline int GetMaxRetries() const { return m_maxRetries; }
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }
    inline MLTransform& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption-at-rest settings of the transform that apply to accessing user
     * data. Machine learning transforms can access user data encrypted in Amazon S3
     * using KMS.</p>
     */
    inline const TransformEncryption& GetTransformEncryption() const { return m_transformEncryption; }
    inline bool TransformEncryptionHasBeenSet() const { return m_transformEncryptionHasBeenSet; }
    template<typename TransformEncryptionT = TransformEncryption>
    void SetTransformEncryption(TransformEncryptionT&& value) { m_transformEncryptionHasBeenSet = true; m_transformEncryption = std::forward<TransformEncryptionT>(value); }
    template<typename TransformEncryptionT = TransformEncryption>
    MLTransform& WithTransformEncryption(TransformEncryptionT&& value) { SetTransformEncryption(std::forward<TransformEncryptionT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
