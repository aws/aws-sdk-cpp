﻿/**
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
  class AWS_MEDIASTORE_API PutContainerPolicyRequest : public MediaStoreRequest
  {
  public:
    PutContainerPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutContainerPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the container.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the container.</p>
     */
    inline PutContainerPolicyRequest& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the container.</p>
     */
    inline PutContainerPolicyRequest& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the container.</p>
     */
    inline PutContainerPolicyRequest& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The contents of the policy, which includes the following: </p> <ul> <li>
     * <p>One <code>Version</code> tag</p> </li> <li> <p>One <code>Statement</code> tag
     * that contains the standard tags for the policy.</p> </li> </ul>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The contents of the policy, which includes the following: </p> <ul> <li>
     * <p>One <code>Version</code> tag</p> </li> <li> <p>One <code>Statement</code> tag
     * that contains the standard tags for the policy.</p> </li> </ul>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The contents of the policy, which includes the following: </p> <ul> <li>
     * <p>One <code>Version</code> tag</p> </li> <li> <p>One <code>Statement</code> tag
     * that contains the standard tags for the policy.</p> </li> </ul>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The contents of the policy, which includes the following: </p> <ul> <li>
     * <p>One <code>Version</code> tag</p> </li> <li> <p>One <code>Statement</code> tag
     * that contains the standard tags for the policy.</p> </li> </ul>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The contents of the policy, which includes the following: </p> <ul> <li>
     * <p>One <code>Version</code> tag</p> </li> <li> <p>One <code>Statement</code> tag
     * that contains the standard tags for the policy.</p> </li> </ul>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The contents of the policy, which includes the following: </p> <ul> <li>
     * <p>One <code>Version</code> tag</p> </li> <li> <p>One <code>Statement</code> tag
     * that contains the standard tags for the policy.</p> </li> </ul>
     */
    inline PutContainerPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The contents of the policy, which includes the following: </p> <ul> <li>
     * <p>One <code>Version</code> tag</p> </li> <li> <p>One <code>Statement</code> tag
     * that contains the standard tags for the policy.</p> </li> </ul>
     */
    inline PutContainerPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The contents of the policy, which includes the following: </p> <ul> <li>
     * <p>One <code>Version</code> tag</p> </li> <li> <p>One <code>Statement</code> tag
     * that contains the standard tags for the policy.</p> </li> </ul>
     */
    inline PutContainerPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
