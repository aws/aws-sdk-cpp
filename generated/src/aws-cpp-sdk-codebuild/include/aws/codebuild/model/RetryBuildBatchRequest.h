/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/RetryBuildBatchType.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class RetryBuildBatchRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API RetryBuildBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetryBuildBatch"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the identifier of the batch build to restart.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Specifies the identifier of the batch build to restart.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Specifies the identifier of the batch build to restart.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Specifies the identifier of the batch build to restart.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Specifies the identifier of the batch build to restart.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Specifies the identifier of the batch build to restart.</p>
     */
    inline RetryBuildBatchRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Specifies the identifier of the batch build to restart.</p>
     */
    inline RetryBuildBatchRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Specifies the identifier of the batch build to restart.</p>
     */
    inline RetryBuildBatchRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the <code>RetryBuildBatch</code> request. The token is included in the
     * <code>RetryBuildBatch</code> request and is valid for five minutes. If you
     * repeat the <code>RetryBuildBatch</code> request with the same token, but change
     * a parameter, CodeBuild returns a parameter mismatch error.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the <code>RetryBuildBatch</code> request. The token is included in the
     * <code>RetryBuildBatch</code> request and is valid for five minutes. If you
     * repeat the <code>RetryBuildBatch</code> request with the same token, but change
     * a parameter, CodeBuild returns a parameter mismatch error.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the <code>RetryBuildBatch</code> request. The token is included in the
     * <code>RetryBuildBatch</code> request and is valid for five minutes. If you
     * repeat the <code>RetryBuildBatch</code> request with the same token, but change
     * a parameter, CodeBuild returns a parameter mismatch error.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the <code>RetryBuildBatch</code> request. The token is included in the
     * <code>RetryBuildBatch</code> request and is valid for five minutes. If you
     * repeat the <code>RetryBuildBatch</code> request with the same token, but change
     * a parameter, CodeBuild returns a parameter mismatch error.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the <code>RetryBuildBatch</code> request. The token is included in the
     * <code>RetryBuildBatch</code> request and is valid for five minutes. If you
     * repeat the <code>RetryBuildBatch</code> request with the same token, but change
     * a parameter, CodeBuild returns a parameter mismatch error.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the <code>RetryBuildBatch</code> request. The token is included in the
     * <code>RetryBuildBatch</code> request and is valid for five minutes. If you
     * repeat the <code>RetryBuildBatch</code> request with the same token, but change
     * a parameter, CodeBuild returns a parameter mismatch error.</p>
     */
    inline RetryBuildBatchRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the <code>RetryBuildBatch</code> request. The token is included in the
     * <code>RetryBuildBatch</code> request and is valid for five minutes. If you
     * repeat the <code>RetryBuildBatch</code> request with the same token, but change
     * a parameter, CodeBuild returns a parameter mismatch error.</p>
     */
    inline RetryBuildBatchRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case sensitive identifier you provide to ensure the idempotency of
     * the <code>RetryBuildBatch</code> request. The token is included in the
     * <code>RetryBuildBatch</code> request and is valid for five minutes. If you
     * repeat the <code>RetryBuildBatch</code> request with the same token, but change
     * a parameter, CodeBuild returns a parameter mismatch error.</p>
     */
    inline RetryBuildBatchRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>Specifies the type of retry to perform.</p>
     */
    inline const RetryBuildBatchType& GetRetryType() const{ return m_retryType; }

    /**
     * <p>Specifies the type of retry to perform.</p>
     */
    inline bool RetryTypeHasBeenSet() const { return m_retryTypeHasBeenSet; }

    /**
     * <p>Specifies the type of retry to perform.</p>
     */
    inline void SetRetryType(const RetryBuildBatchType& value) { m_retryTypeHasBeenSet = true; m_retryType = value; }

    /**
     * <p>Specifies the type of retry to perform.</p>
     */
    inline void SetRetryType(RetryBuildBatchType&& value) { m_retryTypeHasBeenSet = true; m_retryType = std::move(value); }

    /**
     * <p>Specifies the type of retry to perform.</p>
     */
    inline RetryBuildBatchRequest& WithRetryType(const RetryBuildBatchType& value) { SetRetryType(value); return *this;}

    /**
     * <p>Specifies the type of retry to perform.</p>
     */
    inline RetryBuildBatchRequest& WithRetryType(RetryBuildBatchType&& value) { SetRetryType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    RetryBuildBatchType m_retryType;
    bool m_retryTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
