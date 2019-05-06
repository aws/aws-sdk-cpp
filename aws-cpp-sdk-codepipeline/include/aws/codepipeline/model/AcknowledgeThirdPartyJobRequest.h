/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of an AcknowledgeThirdPartyJob action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/AcknowledgeThirdPartyJobInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API AcknowledgeThirdPartyJobRequest : public CodePipelineRequest
  {
  public:
    AcknowledgeThirdPartyJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcknowledgeThirdPartyJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline AcknowledgeThirdPartyJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline AcknowledgeThirdPartyJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline AcknowledgeThirdPartyJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Get this number from the
     * response to a <a>GetThirdPartyJobDetails</a> request.</p>
     */
    inline const Aws::String& GetNonce() const{ return m_nonce; }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Get this number from the
     * response to a <a>GetThirdPartyJobDetails</a> request.</p>
     */
    inline bool NonceHasBeenSet() const { return m_nonceHasBeenSet; }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Get this number from the
     * response to a <a>GetThirdPartyJobDetails</a> request.</p>
     */
    inline void SetNonce(const Aws::String& value) { m_nonceHasBeenSet = true; m_nonce = value; }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Get this number from the
     * response to a <a>GetThirdPartyJobDetails</a> request.</p>
     */
    inline void SetNonce(Aws::String&& value) { m_nonceHasBeenSet = true; m_nonce = std::move(value); }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Get this number from the
     * response to a <a>GetThirdPartyJobDetails</a> request.</p>
     */
    inline void SetNonce(const char* value) { m_nonceHasBeenSet = true; m_nonce.assign(value); }

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Get this number from the
     * response to a <a>GetThirdPartyJobDetails</a> request.</p>
     */
    inline AcknowledgeThirdPartyJobRequest& WithNonce(const Aws::String& value) { SetNonce(value); return *this;}

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Get this number from the
     * response to a <a>GetThirdPartyJobDetails</a> request.</p>
     */
    inline AcknowledgeThirdPartyJobRequest& WithNonce(Aws::String&& value) { SetNonce(std::move(value)); return *this;}

    /**
     * <p>A system-generated random number that AWS CodePipeline uses to ensure that
     * the job is being worked on by only one job worker. Get this number from the
     * response to a <a>GetThirdPartyJobDetails</a> request.</p>
     */
    inline AcknowledgeThirdPartyJobRequest& WithNonce(const char* value) { SetNonce(value); return *this;}


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
    inline AcknowledgeThirdPartyJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline AcknowledgeThirdPartyJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline AcknowledgeThirdPartyJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_nonce;
    bool m_nonceHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
