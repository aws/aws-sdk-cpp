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
    AWS_MAINFRAMEMODERNIZATION_API StartBatchJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBatchJob"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the application associated with this batch job.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    StartBatchJobRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Secrets Manager containing user's credentials for
     * authentication and authorization for Start Batch Job execution operation.</p>
     */
    inline const Aws::String& GetAuthSecretsManagerArn() const { return m_authSecretsManagerArn; }
    inline bool AuthSecretsManagerArnHasBeenSet() const { return m_authSecretsManagerArnHasBeenSet; }
    template<typename AuthSecretsManagerArnT = Aws::String>
    void SetAuthSecretsManagerArn(AuthSecretsManagerArnT&& value) { m_authSecretsManagerArnHasBeenSet = true; m_authSecretsManagerArn = std::forward<AuthSecretsManagerArnT>(value); }
    template<typename AuthSecretsManagerArnT = Aws::String>
    StartBatchJobRequest& WithAuthSecretsManagerArn(AuthSecretsManagerArnT&& value) { SetAuthSecretsManagerArn(std::forward<AuthSecretsManagerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the batch job.</p>
     */
    inline const BatchJobIdentifier& GetBatchJobIdentifier() const { return m_batchJobIdentifier; }
    inline bool BatchJobIdentifierHasBeenSet() const { return m_batchJobIdentifierHasBeenSet; }
    template<typename BatchJobIdentifierT = BatchJobIdentifier>
    void SetBatchJobIdentifier(BatchJobIdentifierT&& value) { m_batchJobIdentifierHasBeenSet = true; m_batchJobIdentifier = std::forward<BatchJobIdentifierT>(value); }
    template<typename BatchJobIdentifierT = BatchJobIdentifier>
    StartBatchJobRequest& WithBatchJobIdentifier(BatchJobIdentifierT&& value) { SetBatchJobIdentifier(std::forward<BatchJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of batch job parameters. For details about limits for keys and
     * values, see <a
     * href="https://www.ibm.com/docs/en/workload-automation/9.3.0?topic=zos-coding-variables-in-jcl">Coding
     * variables in JCL</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetJobParams() const { return m_jobParams; }
    inline bool JobParamsHasBeenSet() const { return m_jobParamsHasBeenSet; }
    template<typename JobParamsT = Aws::Map<Aws::String, Aws::String>>
    void SetJobParams(JobParamsT&& value) { m_jobParamsHasBeenSet = true; m_jobParams = std::forward<JobParamsT>(value); }
    template<typename JobParamsT = Aws::Map<Aws::String, Aws::String>>
    StartBatchJobRequest& WithJobParams(JobParamsT&& value) { SetJobParams(std::forward<JobParamsT>(value)); return *this;}
    template<typename JobParamsKeyT = Aws::String, typename JobParamsValueT = Aws::String>
    StartBatchJobRequest& AddJobParams(JobParamsKeyT&& key, JobParamsValueT&& value) {
      m_jobParamsHasBeenSet = true; m_jobParams.emplace(std::forward<JobParamsKeyT>(key), std::forward<JobParamsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_authSecretsManagerArn;
    bool m_authSecretsManagerArnHasBeenSet = false;

    BatchJobIdentifier m_batchJobIdentifier;
    bool m_batchJobIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_jobParams;
    bool m_jobParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
