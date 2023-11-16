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
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class ListLifecycleExecutionResourcesRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ListLifecycleExecutionResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLifecycleExecutionResources"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


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
    inline ListLifecycleExecutionResourcesRequest& WithLifecycleExecutionId(const Aws::String& value) { SetLifecycleExecutionId(value); return *this;}

    /**
     * <p>Use the unique identifier for a runtime instance of the lifecycle policy to
     * get runtime details.</p>
     */
    inline ListLifecycleExecutionResourcesRequest& WithLifecycleExecutionId(Aws::String&& value) { SetLifecycleExecutionId(std::move(value)); return *this;}

    /**
     * <p>Use the unique identifier for a runtime instance of the lifecycle policy to
     * get runtime details.</p>
     */
    inline ListLifecycleExecutionResourcesRequest& WithLifecycleExecutionId(const char* value) { SetLifecycleExecutionId(value); return *this;}


    /**
     * <p>You can leave this empty to get a list of Image Builder resources that were
     * identified for lifecycle actions.</p> <p>To get a list of associated resources
     * that are impacted for an individual resource (the parent), specify its Amazon
     * Resource Name (ARN). Associated resources are produced from your image and
     * distributed when you run a build, such as AMIs or container images stored in ECR
     * repositories.</p>
     */
    inline const Aws::String& GetParentResourceId() const{ return m_parentResourceId; }

    /**
     * <p>You can leave this empty to get a list of Image Builder resources that were
     * identified for lifecycle actions.</p> <p>To get a list of associated resources
     * that are impacted for an individual resource (the parent), specify its Amazon
     * Resource Name (ARN). Associated resources are produced from your image and
     * distributed when you run a build, such as AMIs or container images stored in ECR
     * repositories.</p>
     */
    inline bool ParentResourceIdHasBeenSet() const { return m_parentResourceIdHasBeenSet; }

    /**
     * <p>You can leave this empty to get a list of Image Builder resources that were
     * identified for lifecycle actions.</p> <p>To get a list of associated resources
     * that are impacted for an individual resource (the parent), specify its Amazon
     * Resource Name (ARN). Associated resources are produced from your image and
     * distributed when you run a build, such as AMIs or container images stored in ECR
     * repositories.</p>
     */
    inline void SetParentResourceId(const Aws::String& value) { m_parentResourceIdHasBeenSet = true; m_parentResourceId = value; }

    /**
     * <p>You can leave this empty to get a list of Image Builder resources that were
     * identified for lifecycle actions.</p> <p>To get a list of associated resources
     * that are impacted for an individual resource (the parent), specify its Amazon
     * Resource Name (ARN). Associated resources are produced from your image and
     * distributed when you run a build, such as AMIs or container images stored in ECR
     * repositories.</p>
     */
    inline void SetParentResourceId(Aws::String&& value) { m_parentResourceIdHasBeenSet = true; m_parentResourceId = std::move(value); }

    /**
     * <p>You can leave this empty to get a list of Image Builder resources that were
     * identified for lifecycle actions.</p> <p>To get a list of associated resources
     * that are impacted for an individual resource (the parent), specify its Amazon
     * Resource Name (ARN). Associated resources are produced from your image and
     * distributed when you run a build, such as AMIs or container images stored in ECR
     * repositories.</p>
     */
    inline void SetParentResourceId(const char* value) { m_parentResourceIdHasBeenSet = true; m_parentResourceId.assign(value); }

    /**
     * <p>You can leave this empty to get a list of Image Builder resources that were
     * identified for lifecycle actions.</p> <p>To get a list of associated resources
     * that are impacted for an individual resource (the parent), specify its Amazon
     * Resource Name (ARN). Associated resources are produced from your image and
     * distributed when you run a build, such as AMIs or container images stored in ECR
     * repositories.</p>
     */
    inline ListLifecycleExecutionResourcesRequest& WithParentResourceId(const Aws::String& value) { SetParentResourceId(value); return *this;}

    /**
     * <p>You can leave this empty to get a list of Image Builder resources that were
     * identified for lifecycle actions.</p> <p>To get a list of associated resources
     * that are impacted for an individual resource (the parent), specify its Amazon
     * Resource Name (ARN). Associated resources are produced from your image and
     * distributed when you run a build, such as AMIs or container images stored in ECR
     * repositories.</p>
     */
    inline ListLifecycleExecutionResourcesRequest& WithParentResourceId(Aws::String&& value) { SetParentResourceId(std::move(value)); return *this;}

    /**
     * <p>You can leave this empty to get a list of Image Builder resources that were
     * identified for lifecycle actions.</p> <p>To get a list of associated resources
     * that are impacted for an individual resource (the parent), specify its Amazon
     * Resource Name (ARN). Associated resources are produced from your image and
     * distributed when you run a build, such as AMIs or container images stored in ECR
     * repositories.</p>
     */
    inline ListLifecycleExecutionResourcesRequest& WithParentResourceId(const char* value) { SetParentResourceId(value); return *this;}


    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline ListLifecycleExecutionResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListLifecycleExecutionResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListLifecycleExecutionResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListLifecycleExecutionResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_lifecycleExecutionId;
    bool m_lifecycleExecutionIdHasBeenSet = false;

    Aws::String m_parentResourceId;
    bool m_parentResourceIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
