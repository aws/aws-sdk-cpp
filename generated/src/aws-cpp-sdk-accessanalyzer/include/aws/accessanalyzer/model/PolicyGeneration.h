/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains details about the policy generation status and
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/PolicyGeneration">AWS
   * API Reference</a></p>
   */
  class PolicyGeneration
  {
  public:
    AWS_ACCESSANALYZER_API PolicyGeneration();
    AWS_ACCESSANALYZER_API PolicyGeneration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API PolicyGeneration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline PolicyGeneration& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The <code>JobId</code> that is returned by the
     * <code>StartPolicyGeneration</code> operation. The <code>JobId</code> can be used
     * with <code>GetGeneratedPolicy</code> to retrieve the generated policies or used
     * with <code>CancelPolicyGeneration</code> to cancel the policy generation
     * request.</p>
     */
    inline PolicyGeneration& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The <code>JobId</code> that is returned by the
     * <code>StartPolicyGeneration</code> operation. The <code>JobId</code> can be used
     * with <code>GetGeneratedPolicy</code> to retrieve the generated policies or used
     * with <code>CancelPolicyGeneration</code> to cancel the policy generation
     * request.</p>
     */
    inline PolicyGeneration& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline PolicyGeneration& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline PolicyGeneration& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM entity (user or role) for which you are generating a
     * policy.</p>
     */
    inline PolicyGeneration& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}


    /**
     * <p>The status of the policy generation request.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the policy generation request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the policy generation request.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the policy generation request.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the policy generation request.</p>
     */
    inline PolicyGeneration& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the policy generation request.</p>
     */
    inline PolicyGeneration& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp of when the policy generation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>A timestamp of when the policy generation started.</p>
     */
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }

    /**
     * <p>A timestamp of when the policy generation started.</p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }

    /**
     * <p>A timestamp of when the policy generation started.</p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }

    /**
     * <p>A timestamp of when the policy generation started.</p>
     */
    inline PolicyGeneration& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>A timestamp of when the policy generation started.</p>
     */
    inline PolicyGeneration& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}


    /**
     * <p>A timestamp of when the policy generation was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }

    /**
     * <p>A timestamp of when the policy generation was completed.</p>
     */
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }

    /**
     * <p>A timestamp of when the policy generation was completed.</p>
     */
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }

    /**
     * <p>A timestamp of when the policy generation was completed.</p>
     */
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }

    /**
     * <p>A timestamp of when the policy generation was completed.</p>
     */
    inline PolicyGeneration& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}

    /**
     * <p>A timestamp of when the policy generation was completed.</p>
     */
    inline PolicyGeneration& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn;
    bool m_completedOnHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
