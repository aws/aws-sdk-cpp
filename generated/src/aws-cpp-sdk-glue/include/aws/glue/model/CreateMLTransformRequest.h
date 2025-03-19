/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/TransformParameters.h>
#include <aws/glue/model/WorkerType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/TransformEncryption.h>
#include <aws/glue/model/GlueTable.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateMLTransformRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateMLTransformRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMLTransform"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique name that you give the transform when you create it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateMLTransformRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the machine learning transform that is being defined. The
     * default is an empty string.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateMLTransformRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    CreateMLTransformRequest& WithInputRecordTables(InputRecordTablesT&& value) { SetInputRecordTables(std::forward<InputRecordTablesT>(value)); return *this;}
    template<typename InputRecordTablesT = GlueTable>
    CreateMLTransformRequest& AddInputRecordTables(InputRecordTablesT&& value) { m_inputRecordTablesHasBeenSet = true; m_inputRecordTables.emplace_back(std::forward<InputRecordTablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The algorithmic parameters that are specific to the transform type used.
     * Conditionally dependent on the transform type.</p>
     */
    inline const TransformParameters& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = TransformParameters>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = TransformParameters>
    CreateMLTransformRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
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
    CreateMLTransformRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
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
    CreateMLTransformRequest& WithGlueVersion(GlueVersionT&& value) { SetGlueVersion(std::forward<GlueVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Glue data processing units (DPUs) that are allocated to task
     * runs for this transform. You can allocate from 2 to 100 DPUs; the default is 10.
     * A DPU is a relative measure of processing power that consists of 4 vCPUs of
     * compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">Glue pricing page</a>. </p> <p>
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
     * field is set automatically and becomes read-only.</p> <p>When the
     * <code>WorkerType</code> field is set to a value other than
     * <code>Standard</code>, the <code>MaxCapacity</code> field is set automatically
     * and becomes read-only.</p>
     */
    inline double GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline CreateMLTransformRequest& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}
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
    inline CreateMLTransformRequest& WithWorkerType(WorkerType value) { SetWorkerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when this task runs.</p> <p>If <code>WorkerType</code> is set, then
     * <code>NumberOfWorkers</code> is required (and vice versa).</p>
     */
    inline int GetNumberOfWorkers() const { return m_numberOfWorkers; }
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }
    inline CreateMLTransformRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout of the task run for this transform in minutes. This is the
     * maximum time that a task run for this transform can consume resources before it
     * is terminated and enters <code>TIMEOUT</code> status. The default is 2,880
     * minutes (48 hours).</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline CreateMLTransformRequest& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of times to retry a task for this transform after a task
     * run fails.</p>
     */
    inline int GetMaxRetries() const { return m_maxRetries; }
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }
    inline CreateMLTransformRequest& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to use with this machine learning transform. You may use tags to
     * limit access to the machine learning transform. For more information about tags
     * in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateMLTransformRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateMLTransformRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    CreateMLTransformRequest& WithTransformEncryption(TransformEncryptionT&& value) { SetTransformEncryption(std::forward<TransformEncryptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<GlueTable> m_inputRecordTables;
    bool m_inputRecordTablesHasBeenSet = false;

    TransformParameters m_parameters;
    bool m_parametersHasBeenSet = false;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TransformEncryption m_transformEncryption;
    bool m_transformEncryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
