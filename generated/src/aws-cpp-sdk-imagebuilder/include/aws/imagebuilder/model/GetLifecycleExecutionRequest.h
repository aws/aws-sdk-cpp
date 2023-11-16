/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class GetLifecycleExecutionRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetLifecycleExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLifecycleExecution"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Use the unique identifier for a runtime instance of the lifecycle policy to
     * get runtime details.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const{ return m_lifecycleExecutionId; }

    /**
     * <p>Use the unique identifier for a runtime instance of the lifecycle policy to
     * get runtime details.</p>
     */
    inline bool LifecycleExecutionIdHasBeenSet() const { return m_lifecycleExecutionIdHasBeenSet; }

    /**
     * <p>Use the unique identifier for a runtime instance of the lifecycle policy to
     * get runtime details.</p>
     */
    inline void SetLifecycleExecutionId(const Aws::String& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = value; }

    /**
     * <p>Use the unique identifier for a runtime instance of the lifecycle policy to
     * get runtime details.</p>
     */
    inline void SetLifecycleExecutionId(Aws::String&& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = std::move(value); }

    /**
     * <p>Use the unique identifier for a runtime instance of the lifecycle policy to
     * get runtime details.</p>
     */
    inline void SetLifecycleExecutionId(const char* value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId.assign(value); }

    /**
     * <p>Use the unique identifier for a runtime instance of the lifecycle policy to
     * get runtime details.</p>
     */
    inline GetLifecycleExecutionRequest& WithLifecycleExecutionId(const Aws::String& value) { SetLifecycleExecutionId(value); return *this;}

    /**
     * <p>Use the unique identifier for a runtime instance of the lifecycle policy to
     * get runtime details.</p>
     */
    inline GetLifecycleExecutionRequest& WithLifecycleExecutionId(Aws::String&& value) { SetLifecycleExecutionId(std::move(value)); return *this;}

    /**
     * <p>Use the unique identifier for a runtime instance of the lifecycle policy to
     * get runtime details.</p>
     */
    inline GetLifecycleExecutionRequest& WithLifecycleExecutionId(const char* value) { SetLifecycleExecutionId(value); return *this;}

  private:

    Aws::String m_lifecycleExecutionId;
    bool m_lifecycleExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
