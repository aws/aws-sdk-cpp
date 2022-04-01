﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   */
  class AWS_CODEDEPLOY_API ListTagsForResourceRequest : public CodeDeployRequest
  {
  public:
    ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ARN of a CodeDeploy resource. <code>ListTagsForResource</code> returns
     * all the tags associated with the resource that is identified by the
     * <code>ResourceArn</code>. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The ARN of a CodeDeploy resource. <code>ListTagsForResource</code> returns
     * all the tags associated with the resource that is identified by the
     * <code>ResourceArn</code>. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p> The ARN of a CodeDeploy resource. <code>ListTagsForResource</code> returns
     * all the tags associated with the resource that is identified by the
     * <code>ResourceArn</code>. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p> The ARN of a CodeDeploy resource. <code>ListTagsForResource</code> returns
     * all the tags associated with the resource that is identified by the
     * <code>ResourceArn</code>. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p> The ARN of a CodeDeploy resource. <code>ListTagsForResource</code> returns
     * all the tags associated with the resource that is identified by the
     * <code>ResourceArn</code>. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p> The ARN of a CodeDeploy resource. <code>ListTagsForResource</code> returns
     * all the tags associated with the resource that is identified by the
     * <code>ResourceArn</code>. </p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The ARN of a CodeDeploy resource. <code>ListTagsForResource</code> returns
     * all the tags associated with the resource that is identified by the
     * <code>ResourceArn</code>. </p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of a CodeDeploy resource. <code>ListTagsForResource</code> returns
     * all the tags associated with the resource that is identified by the
     * <code>ResourceArn</code>. </p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>An identifier returned from the previous <code>ListTagsForResource</code>
     * call. It can be used to return the next set of applications in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier returned from the previous <code>ListTagsForResource</code>
     * call. It can be used to return the next set of applications in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier returned from the previous <code>ListTagsForResource</code>
     * call. It can be used to return the next set of applications in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier returned from the previous <code>ListTagsForResource</code>
     * call. It can be used to return the next set of applications in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier returned from the previous <code>ListTagsForResource</code>
     * call. It can be used to return the next set of applications in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier returned from the previous <code>ListTagsForResource</code>
     * call. It can be used to return the next set of applications in the list.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier returned from the previous <code>ListTagsForResource</code>
     * call. It can be used to return the next set of applications in the list.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier returned from the previous <code>ListTagsForResource</code>
     * call. It can be used to return the next set of applications in the list.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
