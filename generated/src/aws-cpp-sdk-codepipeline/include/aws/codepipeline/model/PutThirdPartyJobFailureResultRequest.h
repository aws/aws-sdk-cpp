/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/FailureDetails.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>PutThirdPartyJobFailureResult</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PutThirdPartyJobFailureResultInput">AWS
   * API Reference</a></p>
   */
  class PutThirdPartyJobFailureResultRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API PutThirdPartyJobFailureResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutThirdPartyJobFailureResult"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * <code>PollForThirdPartyJobs</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * <code>PollForThirdPartyJobs</code>.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * <code>PollForThirdPartyJobs</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * <code>PollForThirdPartyJobs</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * <code>PollForThirdPartyJobs</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * <code>PollForThirdPartyJobs</code>.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * <code>PollForThirdPartyJobs</code>.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job that failed. This is the same ID returned from
     * <code>PollForThirdPartyJobs</code>.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Represents information about failure details.</p>
     */
    inline const FailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>Represents information about failure details.</p>
     */
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    /**
     * <p>Represents information about failure details.</p>
     */
    inline void SetFailureDetails(const FailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>Represents information about failure details.</p>
     */
    inline void SetFailureDetails(FailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    /**
     * <p>Represents information about failure details.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithFailureDetails(const FailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>Represents information about failure details.</p>
     */
    inline PutThirdPartyJobFailureResultRequest& WithFailureDetails(FailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    FailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
