/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/MediaStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaStore
{
namespace Model
{

  /**
   */
  class PutLifecyclePolicyRequest : public MediaStoreRequest
  {
  public:
    AWS_MEDIASTORE_API PutLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLifecyclePolicy"; }

    AWS_MEDIASTORE_API Aws::String SerializePayload() const override;

    AWS_MEDIASTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the container that you want to assign the object lifecycle policy
     * to.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the container that you want to assign the object lifecycle policy
     * to.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the container that you want to assign the object lifecycle policy
     * to.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container that you want to assign the object lifecycle policy
     * to.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the container that you want to assign the object lifecycle policy
     * to.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the container that you want to assign the object lifecycle policy
     * to.</p>
     */
    inline PutLifecyclePolicyRequest& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the container that you want to assign the object lifecycle policy
     * to.</p>
     */
    inline PutLifecyclePolicyRequest& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the container that you want to assign the object lifecycle policy
     * to.</p>
     */
    inline PutLifecyclePolicyRequest& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The object lifecycle policy to apply to the container.</p>
     */
    inline const Aws::String& GetLifecyclePolicy() const{ return m_lifecyclePolicy; }

    /**
     * <p>The object lifecycle policy to apply to the container.</p>
     */
    inline bool LifecyclePolicyHasBeenSet() const { return m_lifecyclePolicyHasBeenSet; }

    /**
     * <p>The object lifecycle policy to apply to the container.</p>
     */
    inline void SetLifecyclePolicy(const Aws::String& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = value; }

    /**
     * <p>The object lifecycle policy to apply to the container.</p>
     */
    inline void SetLifecyclePolicy(Aws::String&& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = std::move(value); }

    /**
     * <p>The object lifecycle policy to apply to the container.</p>
     */
    inline void SetLifecyclePolicy(const char* value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy.assign(value); }

    /**
     * <p>The object lifecycle policy to apply to the container.</p>
     */
    inline PutLifecyclePolicyRequest& WithLifecyclePolicy(const Aws::String& value) { SetLifecyclePolicy(value); return *this;}

    /**
     * <p>The object lifecycle policy to apply to the container.</p>
     */
    inline PutLifecyclePolicyRequest& WithLifecyclePolicy(Aws::String&& value) { SetLifecyclePolicy(std::move(value)); return *this;}

    /**
     * <p>The object lifecycle policy to apply to the container.</p>
     */
    inline PutLifecyclePolicyRequest& WithLifecyclePolicy(const char* value) { SetLifecyclePolicy(value); return *this;}

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::String m_lifecyclePolicy;
    bool m_lifecyclePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
