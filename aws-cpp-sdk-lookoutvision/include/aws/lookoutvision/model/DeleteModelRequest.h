/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

  /**
   */
  class DeleteModelRequest : public LookoutforVisionRequest
  {
  public:
    AWS_LOOKOUTFORVISION_API DeleteModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteModel"; }

    AWS_LOOKOUTFORVISION_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTFORVISION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the project that contains the model that you want to delete.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project that contains the model that you want to delete.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project that contains the model that you want to delete.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project that contains the model that you want to delete.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project that contains the model that you want to delete.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project that contains the model that you want to delete.</p>
     */
    inline DeleteModelRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project that contains the model that you want to delete.</p>
     */
    inline DeleteModelRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project that contains the model that you want to delete.</p>
     */
    inline DeleteModelRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The version of the model that you want to delete.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model that you want to delete.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The version of the model that you want to delete.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The version of the model that you want to delete.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model that you want to delete.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p>The version of the model that you want to delete.</p>
     */
    inline DeleteModelRequest& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model that you want to delete.</p>
     */
    inline DeleteModelRequest& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model that you want to delete.</p>
     */
    inline DeleteModelRequest& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteModel</code> completes only once. You choose the value to pass. For
     * example, an issue might prevent you from getting a response from
     * <code>DeleteModel</code>. In this case, safely retry your call to
     * <code>DeleteModel</code> by using the same <code>ClientToken</code> parameter
     * value.</p> <p>If you don't supply a value for ClientToken, the AWS SDK you are
     * using inserts a value for you. This prevents retries after a network error from
     * making multiple model deletion requests. You'll need to provide your own value
     * for other use cases. </p> <p>An error occurs if the other input parameters are
     * not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteModel</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteModel</code> completes only once. You choose the value to pass. For
     * example, an issue might prevent you from getting a response from
     * <code>DeleteModel</code>. In this case, safely retry your call to
     * <code>DeleteModel</code> by using the same <code>ClientToken</code> parameter
     * value.</p> <p>If you don't supply a value for ClientToken, the AWS SDK you are
     * using inserts a value for you. This prevents retries after a network error from
     * making multiple model deletion requests. You'll need to provide your own value
     * for other use cases. </p> <p>An error occurs if the other input parameters are
     * not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteModel</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteModel</code> completes only once. You choose the value to pass. For
     * example, an issue might prevent you from getting a response from
     * <code>DeleteModel</code>. In this case, safely retry your call to
     * <code>DeleteModel</code> by using the same <code>ClientToken</code> parameter
     * value.</p> <p>If you don't supply a value for ClientToken, the AWS SDK you are
     * using inserts a value for you. This prevents retries after a network error from
     * making multiple model deletion requests. You'll need to provide your own value
     * for other use cases. </p> <p>An error occurs if the other input parameters are
     * not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteModel</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteModel</code> completes only once. You choose the value to pass. For
     * example, an issue might prevent you from getting a response from
     * <code>DeleteModel</code>. In this case, safely retry your call to
     * <code>DeleteModel</code> by using the same <code>ClientToken</code> parameter
     * value.</p> <p>If you don't supply a value for ClientToken, the AWS SDK you are
     * using inserts a value for you. This prevents retries after a network error from
     * making multiple model deletion requests. You'll need to provide your own value
     * for other use cases. </p> <p>An error occurs if the other input parameters are
     * not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteModel</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteModel</code> completes only once. You choose the value to pass. For
     * example, an issue might prevent you from getting a response from
     * <code>DeleteModel</code>. In this case, safely retry your call to
     * <code>DeleteModel</code> by using the same <code>ClientToken</code> parameter
     * value.</p> <p>If you don't supply a value for ClientToken, the AWS SDK you are
     * using inserts a value for you. This prevents retries after a network error from
     * making multiple model deletion requests. You'll need to provide your own value
     * for other use cases. </p> <p>An error occurs if the other input parameters are
     * not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteModel</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteModel</code> completes only once. You choose the value to pass. For
     * example, an issue might prevent you from getting a response from
     * <code>DeleteModel</code>. In this case, safely retry your call to
     * <code>DeleteModel</code> by using the same <code>ClientToken</code> parameter
     * value.</p> <p>If you don't supply a value for ClientToken, the AWS SDK you are
     * using inserts a value for you. This prevents retries after a network error from
     * making multiple model deletion requests. You'll need to provide your own value
     * for other use cases. </p> <p>An error occurs if the other input parameters are
     * not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteModel</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline DeleteModelRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteModel</code> completes only once. You choose the value to pass. For
     * example, an issue might prevent you from getting a response from
     * <code>DeleteModel</code>. In this case, safely retry your call to
     * <code>DeleteModel</code> by using the same <code>ClientToken</code> parameter
     * value.</p> <p>If you don't supply a value for ClientToken, the AWS SDK you are
     * using inserts a value for you. This prevents retries after a network error from
     * making multiple model deletion requests. You'll need to provide your own value
     * for other use cases. </p> <p>An error occurs if the other input parameters are
     * not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteModel</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline DeleteModelRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>ClientToken is an idempotency token that ensures a call to
     * <code>DeleteModel</code> completes only once. You choose the value to pass. For
     * example, an issue might prevent you from getting a response from
     * <code>DeleteModel</code>. In this case, safely retry your call to
     * <code>DeleteModel</code> by using the same <code>ClientToken</code> parameter
     * value.</p> <p>If you don't supply a value for ClientToken, the AWS SDK you are
     * using inserts a value for you. This prevents retries after a network error from
     * making multiple model deletion requests. You'll need to provide your own value
     * for other use cases. </p> <p>An error occurs if the other input parameters are
     * not the same as in the first request. Using a different value for
     * <code>ClientToken</code> is considered a new call to <code>DeleteModel</code>.
     * An idempotency token is active for 8 hours.</p>
     */
    inline DeleteModelRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
