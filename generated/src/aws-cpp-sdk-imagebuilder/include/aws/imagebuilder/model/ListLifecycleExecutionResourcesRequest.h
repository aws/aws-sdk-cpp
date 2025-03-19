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
    AWS_IMAGEBUILDER_API ListLifecycleExecutionResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLifecycleExecutionResources"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Use the unique identifier for a runtime instance of the lifecycle policy to
     * get runtime details.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const { return m_lifecycleExecutionId; }
    inline bool LifecycleExecutionIdHasBeenSet() const { return m_lifecycleExecutionIdHasBeenSet; }
    template<typename LifecycleExecutionIdT = Aws::String>
    void SetLifecycleExecutionId(LifecycleExecutionIdT&& value) { m_lifecycleExecutionIdHasBeenSet = true; m_lifecycleExecutionId = std::forward<LifecycleExecutionIdT>(value); }
    template<typename LifecycleExecutionIdT = Aws::String>
    ListLifecycleExecutionResourcesRequest& WithLifecycleExecutionId(LifecycleExecutionIdT&& value) { SetLifecycleExecutionId(std::forward<LifecycleExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can leave this empty to get a list of Image Builder resources that were
     * identified for lifecycle actions.</p> <p>To get a list of associated resources
     * that are impacted for an individual resource (the parent), specify its Amazon
     * Resource Name (ARN). Associated resources are produced from your image and
     * distributed when you run a build, such as AMIs or container images stored in ECR
     * repositories.</p>
     */
    inline const Aws::String& GetParentResourceId() const { return m_parentResourceId; }
    inline bool ParentResourceIdHasBeenSet() const { return m_parentResourceIdHasBeenSet; }
    template<typename ParentResourceIdT = Aws::String>
    void SetParentResourceId(ParentResourceIdT&& value) { m_parentResourceIdHasBeenSet = true; m_parentResourceId = std::forward<ParentResourceIdT>(value); }
    template<typename ParentResourceIdT = Aws::String>
    ListLifecycleExecutionResourcesRequest& WithParentResourceId(ParentResourceIdT&& value) { SetParentResourceId(std::forward<ParentResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLifecycleExecutionResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLifecycleExecutionResourcesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleExecutionId;
    bool m_lifecycleExecutionIdHasBeenSet = false;

    Aws::String m_parentResourceId;
    bool m_parentResourceIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
