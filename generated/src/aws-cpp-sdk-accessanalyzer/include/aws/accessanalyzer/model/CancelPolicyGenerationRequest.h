/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   */
  class CancelPolicyGenerationRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API CancelPolicyGenerationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelPolicyGeneration"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    /**
     * <p>The <code>JobId</code> that is returned by the
     * <code>StartPolicyGeneration</code> operation. The <code>JobId</code> can be used
     * with <code>GetGeneratedPolicy</code> to retrieve the generated policies or used
     * with <code>CancelPolicyGeneration</code> to cancel the policy generation
     * request.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The <code>JobId</code> that is returned by the
     * <code>StartPolicyGeneration</code> operation. The <code>JobId</code> can be used
     * with <code>GetGeneratedPolicy</code> to retrieve the generated policies or used
     * with <code>CancelPolicyGeneration</code> to cancel the policy generation
     * request.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The <code>JobId</code> that is returned by the
     * <code>StartPolicyGeneration</code> operation. The <code>JobId</code> can be used
     * with <code>GetGeneratedPolicy</code> to retrieve the generated policies or used
     * with <code>CancelPolicyGeneration</code> to cancel the policy generation
     * request.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The <code>JobId</code> that is returned by the
     * <code>StartPolicyGeneration</code> operation. The <code>JobId</code> can be used
     * with <code>GetGeneratedPolicy</code> to retrieve the generated policies or used
     * with <code>CancelPolicyGeneration</code> to cancel the policy generation
     * request.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The <code>JobId</code> that is returned by the
     * <code>StartPolicyGeneration</code> operation. The <code>JobId</code> can be used
     * with <code>GetGeneratedPolicy</code> to retrieve the generated policies or used
     * with <code>CancelPolicyGeneration</code> to cancel the policy generation
     * request.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The <code>JobId</code> that is returned by the
     * <code>StartPolicyGeneration</code> operation. The <code>JobId</code> can be used
     * with <code>GetGeneratedPolicy</code> to retrieve the generated policies or used
     * with <code>CancelPolicyGeneration</code> to cancel the policy generation
     * request.</p>
     */
    inline CancelPolicyGenerationRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The <code>JobId</code> that is returned by the
     * <code>StartPolicyGeneration</code> operation. The <code>JobId</code> can be used
     * with <code>GetGeneratedPolicy</code> to retrieve the generated policies or used
     * with <code>CancelPolicyGeneration</code> to cancel the policy generation
     * request.</p>
     */
    inline CancelPolicyGenerationRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The <code>JobId</code> that is returned by the
     * <code>StartPolicyGeneration</code> operation. The <code>JobId</code> can be used
     * with <code>GetGeneratedPolicy</code> to retrieve the generated policies or used
     * with <code>CancelPolicyGeneration</code> to cancel the policy generation
     * request.</p>
     */
    inline CancelPolicyGenerationRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
