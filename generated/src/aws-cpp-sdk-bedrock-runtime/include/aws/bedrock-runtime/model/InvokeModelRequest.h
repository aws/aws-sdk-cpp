/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/BedrockRuntimeRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

  /**
   */
  class InvokeModelRequest : public StreamingBedrockRuntimeRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API InvokeModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeModel"; }

    AWS_BEDROCKRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline const Aws::String& GetAccept() const{ return m_accept; }

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline InvokeModelRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline InvokeModelRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}

    /**
     * <p>The desired MIME type of the inference body in the response. The default
     * value is <code>application/json</code>.</p>
     */
    inline InvokeModelRequest& WithAccept(const char* value) { SetAccept(value); return *this;}


    /**
     * <p>Identifier of the model. </p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>Identifier of the model. </p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p>Identifier of the model. </p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p>Identifier of the model. </p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p>Identifier of the model. </p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p>Identifier of the model. </p>
     */
    inline InvokeModelRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>Identifier of the model. </p>
     */
    inline InvokeModelRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the model. </p>
     */
    inline InvokeModelRequest& WithModelId(const char* value) { SetModelId(value); return *this;}

  private:


    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
