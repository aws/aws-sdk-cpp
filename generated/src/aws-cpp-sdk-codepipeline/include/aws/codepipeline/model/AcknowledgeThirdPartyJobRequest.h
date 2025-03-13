/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AcknowledgeThirdPartyJobRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API AcknowledgeThirdPartyJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcknowledgeThirdPartyJob"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique system-generated ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    AcknowledgeThirdPartyJobRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A system-generated random number that CodePipeline uses to ensure that the
     * job is being worked on by only one job worker. Get this number from the response
     * to a <a>GetThirdPartyJobDetails</a> request.</p>
     */
    inline const Aws::String& GetNonce() const { return m_nonce; }
    inline bool NonceHasBeenSet() const { return m_nonceHasBeenSet; }
    template<typename NonceT = Aws::String>
    void SetNonce(NonceT&& value) { m_nonceHasBeenSet = true; m_nonce = std::forward<NonceT>(value); }
    template<typename NonceT = Aws::String>
    AcknowledgeThirdPartyJobRequest& WithNonce(NonceT&& value) { SetNonce(std::forward<NonceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The clientToken portion of the clientId and clientToken pair used to verify
     * that the calling entity is allowed access to the job and its details.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AcknowledgeThirdPartyJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_nonce;
    bool m_nonceHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
