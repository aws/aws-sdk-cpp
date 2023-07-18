﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API GetResourcePolicyRequest : public GlueRequest
  {
  public:
    GetResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourcePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the Glue resource for which to retrieve the resource policy. If
     * not supplied, the Data Catalog resource policy is returned. Use
     * <code>GetResourcePolicies</code> to view all existing resource policies. For
     * more information see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/glue-specifying-resource-arns.html">Specifying
     * Glue Resource ARNs</a>. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the Glue resource for which to retrieve the resource policy. If
     * not supplied, the Data Catalog resource policy is returned. Use
     * <code>GetResourcePolicies</code> to view all existing resource policies. For
     * more information see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/glue-specifying-resource-arns.html">Specifying
     * Glue Resource ARNs</a>. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the Glue resource for which to retrieve the resource policy. If
     * not supplied, the Data Catalog resource policy is returned. Use
     * <code>GetResourcePolicies</code> to view all existing resource policies. For
     * more information see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/glue-specifying-resource-arns.html">Specifying
     * Glue Resource ARNs</a>. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the Glue resource for which to retrieve the resource policy. If
     * not supplied, the Data Catalog resource policy is returned. Use
     * <code>GetResourcePolicies</code> to view all existing resource policies. For
     * more information see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/glue-specifying-resource-arns.html">Specifying
     * Glue Resource ARNs</a>. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the Glue resource for which to retrieve the resource policy. If
     * not supplied, the Data Catalog resource policy is returned. Use
     * <code>GetResourcePolicies</code> to view all existing resource policies. For
     * more information see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/glue-specifying-resource-arns.html">Specifying
     * Glue Resource ARNs</a>. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the Glue resource for which to retrieve the resource policy. If
     * not supplied, the Data Catalog resource policy is returned. Use
     * <code>GetResourcePolicies</code> to view all existing resource policies. For
     * more information see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/glue-specifying-resource-arns.html">Specifying
     * Glue Resource ARNs</a>. </p>
     */
    inline GetResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the Glue resource for which to retrieve the resource policy. If
     * not supplied, the Data Catalog resource policy is returned. Use
     * <code>GetResourcePolicies</code> to view all existing resource policies. For
     * more information see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/glue-specifying-resource-arns.html">Specifying
     * Glue Resource ARNs</a>. </p>
     */
    inline GetResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Glue resource for which to retrieve the resource policy. If
     * not supplied, the Data Catalog resource policy is returned. Use
     * <code>GetResourcePolicies</code> to view all existing resource policies. For
     * more information see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/glue-specifying-resource-arns.html">Specifying
     * Glue Resource ARNs</a>. </p>
     */
    inline GetResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
