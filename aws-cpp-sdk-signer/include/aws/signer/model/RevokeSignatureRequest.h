/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace signer
{
namespace Model
{

  /**
   */
  class RevokeSignatureRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API RevokeSignatureRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeSignature"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;


    /**
     * <p>ID of the signing job to be revoked.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>ID of the signing job to be revoked.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>ID of the signing job to be revoked.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>ID of the signing job to be revoked.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>ID of the signing job to be revoked.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>ID of the signing job to be revoked.</p>
     */
    inline RevokeSignatureRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>ID of the signing job to be revoked.</p>
     */
    inline RevokeSignatureRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>ID of the signing job to be revoked.</p>
     */
    inline RevokeSignatureRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>AWS account ID of the job owner.</p>
     */
    inline const Aws::String& GetJobOwner() const{ return m_jobOwner; }

    /**
     * <p>AWS account ID of the job owner.</p>
     */
    inline bool JobOwnerHasBeenSet() const { return m_jobOwnerHasBeenSet; }

    /**
     * <p>AWS account ID of the job owner.</p>
     */
    inline void SetJobOwner(const Aws::String& value) { m_jobOwnerHasBeenSet = true; m_jobOwner = value; }

    /**
     * <p>AWS account ID of the job owner.</p>
     */
    inline void SetJobOwner(Aws::String&& value) { m_jobOwnerHasBeenSet = true; m_jobOwner = std::move(value); }

    /**
     * <p>AWS account ID of the job owner.</p>
     */
    inline void SetJobOwner(const char* value) { m_jobOwnerHasBeenSet = true; m_jobOwner.assign(value); }

    /**
     * <p>AWS account ID of the job owner.</p>
     */
    inline RevokeSignatureRequest& WithJobOwner(const Aws::String& value) { SetJobOwner(value); return *this;}

    /**
     * <p>AWS account ID of the job owner.</p>
     */
    inline RevokeSignatureRequest& WithJobOwner(Aws::String&& value) { SetJobOwner(std::move(value)); return *this;}

    /**
     * <p>AWS account ID of the job owner.</p>
     */
    inline RevokeSignatureRequest& WithJobOwner(const char* value) { SetJobOwner(value); return *this;}


    /**
     * <p>The reason for revoking the signing job.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for revoking the signing job.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for revoking the signing job.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for revoking the signing job.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for revoking the signing job.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for revoking the signing job.</p>
     */
    inline RevokeSignatureRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for revoking the signing job.</p>
     */
    inline RevokeSignatureRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for revoking the signing job.</p>
     */
    inline RevokeSignatureRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobOwner;
    bool m_jobOwnerHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
