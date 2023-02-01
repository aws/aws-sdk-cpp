/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TransformParameters.h>
#include <aws/glue/model/WorkerType.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateMLTransformRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateMLTransformRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMLTransform"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier that was generated when the transform was created.</p>
     */
    inline const Aws::String& GetTransformId() const{ return m_transformId; }

    /**
     * <p>A unique identifier that was generated when the transform was created.</p>
     */
    inline bool TransformIdHasBeenSet() const { return m_transformIdHasBeenSet; }

    /**
     * <p>A unique identifier that was generated when the transform was created.</p>
     */
    inline void SetTransformId(const Aws::String& value) { m_transformIdHasBeenSet = true; m_transformId = value; }

    /**
     * <p>A unique identifier that was generated when the transform was created.</p>
     */
    inline void SetTransformId(Aws::String&& value) { m_transformIdHasBeenSet = true; m_transformId = std::move(value); }

    /**
     * <p>A unique identifier that was generated when the transform was created.</p>
     */
    inline void SetTransformId(const char* value) { m_transformIdHasBeenSet = true; m_transformId.assign(value); }

    /**
     * <p>A unique identifier that was generated when the transform was created.</p>
     */
    inline UpdateMLTransformRequest& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}

    /**
     * <p>A unique identifier that was generated when the transform was created.</p>
     */
    inline UpdateMLTransformRequest& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that was generated when the transform was created.</p>
     */
    inline UpdateMLTransformRequest& WithTransformId(const char* value) { SetTransformId(value); return *this;}


    /**
     * <p>The unique name that you gave the transform when you created it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name that you gave the transform when you created it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name that you gave the transform when you created it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name that you gave the transform when you created it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name that you gave the transform when you created it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name that you gave the transform when you created it.</p>
     */
    inline UpdateMLTransformRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name that you gave the transform when you created it.</p>
     */
    inline UpdateMLTransformRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name that you gave the transform when you created it.</p>
     */
    inline UpdateMLTransformRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the transform. The default is an empty string.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the transform. The default is an empty string.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the transform. The default is an empty string.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the transform. The default is an empty string.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the transform. The default is an empty string.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the transform. The default is an empty string.</p>
     */
    inline UpdateMLTransformRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the transform. The default is an empty string.</p>
     */
    inline UpdateMLTransformRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the transform. The default is an empty string.</p>
     */
    inline UpdateMLTransformRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The configuration parameters that are specific to the transform type
     * (algorithm) used. Conditionally dependent on the transform type.</p>
     */
    inline const TransformParameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>The configuration parameters that are specific to the transform type
     * (algorithm) used. Conditionally dependent on the transform type.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The configuration parameters that are specific to the transform type
     * (algorithm) used. Conditionally dependent on the transform type.</p>
     */
    inline void SetParameters(const TransformParameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The configuration parameters that are specific to the transform type
     * (algorithm) used. Conditionally dependent on the transform type.</p>
     */
    inline void SetParameters(TransformParameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The configuration parameters that are specific to the transform type
     * (algorithm) used. Conditionally dependent on the transform type.</p>
     */
    inline UpdateMLTransformRequest& WithParameters(const TransformParameters& value) { SetParameters(value); return *this;}

    /**
     * <p>The configuration parameters that are specific to the transform type
     * (algorithm) used. Conditionally dependent on the transform type.</p>
     */
    inline UpdateMLTransformRequest& WithParameters(TransformParameters&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline UpdateMLTransformRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline UpdateMLTransformRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions.</p>
     */
    inline UpdateMLTransformRequest& WithRole(const char* value) { SetRole(value); return *this;}


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
    inline bool GlueVersionHasBeenSet() const { return m_glueVersionHasBeenSet; }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline void SetGlueVersion(const Aws::String& value) { m_glueVersionHasBeenSet = true; m_glueVersion = value; }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline void SetGlueVersion(Aws::String&& value) { m_glueVersionHasBeenSet = true; m_glueVersion = std::move(value); }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline void SetGlueVersion(const char* value) { m_glueVersionHasBeenSet = true; m_glueVersion.assign(value); }

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline UpdateMLTransformRequest& WithGlueVersion(const Aws::String& value) { SetGlueVersion(value); return *this;}

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline UpdateMLTransformRequest& WithGlueVersion(Aws::String&& value) { SetGlueVersion(std::move(value)); return *this;}

    /**
     * <p>This value determines which version of Glue this machine learning transform
     * is compatible with. Glue 1.0 is recommended for most customers. If the value is
     * not set, the Glue compatibility defaults to Glue 0.9. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/release-notes.html#release-notes-versions">Glue
     * Versions</a> in the developer guide.</p>
     */
    inline UpdateMLTransformRequest& WithGlueVersion(const char* value) { SetGlueVersion(value); return *this;}


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
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

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
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

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
    inline UpdateMLTransformRequest& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}


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
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }

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
    inline void SetWorkerType(const WorkerType& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }

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
    inline void SetWorkerType(WorkerType&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }

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
    inline UpdateMLTransformRequest& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}

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
    inline UpdateMLTransformRequest& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}


    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when this task runs.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when this task runs.</p>
     */
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when this task runs.</p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when this task runs.</p>
     */
    inline UpdateMLTransformRequest& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


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
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The timeout for a task run for this transform in minutes. This is the maximum
     * time that a task run for this transform can consume resources before it is
     * terminated and enters <code>TIMEOUT</code> status. The default is 2,880 minutes
     * (48 hours).</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The timeout for a task run for this transform in minutes. This is the maximum
     * time that a task run for this transform can consume resources before it is
     * terminated and enters <code>TIMEOUT</code> status. The default is 2,880 minutes
     * (48 hours).</p>
     */
    inline UpdateMLTransformRequest& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The maximum number of times to retry a task for this transform after a task
     * run fails.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }

    /**
     * <p>The maximum number of times to retry a task for this transform after a task
     * run fails.</p>
     */
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }

    /**
     * <p>The maximum number of times to retry a task for this transform after a task
     * run fails.</p>
     */
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }

    /**
     * <p>The maximum number of times to retry a task for this transform after a task
     * run fails.</p>
     */
    inline UpdateMLTransformRequest& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}

  private:

    Aws::String m_transformId;
    bool m_transformIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TransformParameters m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_glueVersion;
    bool m_glueVersionHasBeenSet = false;

    double m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    WorkerType m_workerType;
    bool m_workerTypeHasBeenSet = false;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    int m_maxRetries;
    bool m_maxRetriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
