/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/BatchJobIdentifier.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class StartBatchJobRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API StartBatchJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBatchJob"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the application associated with this batch job.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier of the application associated with this batch job.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the application associated with this batch job.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier of the application associated with this batch job.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier of the application associated with this batch job.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier of the application associated with this batch job.</p>
     */
    inline StartBatchJobRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application associated with this batch job.</p>
     */
    inline StartBatchJobRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application associated with this batch job.</p>
     */
    inline StartBatchJobRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The unique identifier of the batch job.</p>
     */
    inline const BatchJobIdentifier& GetBatchJobIdentifier() const{ return m_batchJobIdentifier; }

    /**
     * <p>The unique identifier of the batch job.</p>
     */
    inline bool BatchJobIdentifierHasBeenSet() const { return m_batchJobIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the batch job.</p>
     */
    inline void SetBatchJobIdentifier(const BatchJobIdentifier& value) { m_batchJobIdentifierHasBeenSet = true; m_batchJobIdentifier = value; }

    /**
     * <p>The unique identifier of the batch job.</p>
     */
    inline void SetBatchJobIdentifier(BatchJobIdentifier&& value) { m_batchJobIdentifierHasBeenSet = true; m_batchJobIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the batch job.</p>
     */
    inline StartBatchJobRequest& WithBatchJobIdentifier(const BatchJobIdentifier& value) { SetBatchJobIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the batch job.</p>
     */
    inline StartBatchJobRequest& WithBatchJobIdentifier(BatchJobIdentifier&& value) { SetBatchJobIdentifier(std::move(value)); return *this;}


    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetJobParams() const{ return m_jobParams; }

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline bool JobParamsHasBeenSet() const { return m_jobParamsHasBeenSet; }

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline void SetJobParams(const Aws::Map<Aws::String, Aws::String>& value) { m_jobParamsHasBeenSet = true; m_jobParams = value; }

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline void SetJobParams(Aws::Map<Aws::String, Aws::String>&& value) { m_jobParamsHasBeenSet = true; m_jobParams = std::move(value); }

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline StartBatchJobRequest& WithJobParams(const Aws::Map<Aws::String, Aws::String>& value) { SetJobParams(value); return *this;}

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline StartBatchJobRequest& WithJobParams(Aws::Map<Aws::String, Aws::String>&& value) { SetJobParams(std::move(value)); return *this;}

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline StartBatchJobRequest& AddJobParams(const Aws::String& key, const Aws::String& value) { m_jobParamsHasBeenSet = true; m_jobParams.emplace(key, value); return *this; }

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline StartBatchJobRequest& AddJobParams(Aws::String&& key, const Aws::String& value) { m_jobParamsHasBeenSet = true; m_jobParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline StartBatchJobRequest& AddJobParams(const Aws::String& key, Aws::String&& value) { m_jobParamsHasBeenSet = true; m_jobParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline StartBatchJobRequest& AddJobParams(Aws::String&& key, Aws::String&& value) { m_jobParamsHasBeenSet = true; m_jobParams.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline StartBatchJobRequest& AddJobParams(const char* key, Aws::String&& value) { m_jobParamsHasBeenSet = true; m_jobParams.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline StartBatchJobRequest& AddJobParams(Aws::String&& key, const char* value) { m_jobParamsHasBeenSet = true; m_jobParams.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline StartBatchJobRequest& AddJobParams(const char* key, const char* value) { m_jobParamsHasBeenSet = true; m_jobParams.emplace(key, value); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    BatchJobIdentifier m_batchJobIdentifier;
    bool m_batchJobIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_jobParams;
    bool m_jobParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
