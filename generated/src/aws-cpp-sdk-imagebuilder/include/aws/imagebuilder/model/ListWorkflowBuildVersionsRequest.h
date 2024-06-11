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
  class ListWorkflowBuildVersionsRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ListWorkflowBuildVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkflowBuildVersions"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource for which to get a
     * list of build versions.</p>
     */
    inline const Aws::String& GetWorkflowVersionArn() const{ return m_workflowVersionArn; }
    inline bool WorkflowVersionArnHasBeenSet() const { return m_workflowVersionArnHasBeenSet; }
    inline void SetWorkflowVersionArn(const Aws::String& value) { m_workflowVersionArnHasBeenSet = true; m_workflowVersionArn = value; }
    inline void SetWorkflowVersionArn(Aws::String&& value) { m_workflowVersionArnHasBeenSet = true; m_workflowVersionArn = std::move(value); }
    inline void SetWorkflowVersionArn(const char* value) { m_workflowVersionArnHasBeenSet = true; m_workflowVersionArn.assign(value); }
    inline ListWorkflowBuildVersionsRequest& WithWorkflowVersionArn(const Aws::String& value) { SetWorkflowVersionArn(value); return *this;}
    inline ListWorkflowBuildVersionsRequest& WithWorkflowVersionArn(Aws::String&& value) { SetWorkflowVersionArn(std::move(value)); return *this;}
    inline ListWorkflowBuildVersionsRequest& WithWorkflowVersionArn(const char* value) { SetWorkflowVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWorkflowBuildVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListWorkflowBuildVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkflowBuildVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkflowBuildVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowVersionArn;
    bool m_workflowVersionArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
