/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API PreviewAgentsRequest : public InspectorRequest
  {
  public:
    PreviewAgentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PreviewAgents"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the assessment target whose agents you want to preview.</p>
     */
    inline const Aws::String& GetPreviewAgentsArn() const{ return m_previewAgentsArn; }

    /**
     * <p>The ARN of the assessment target whose agents you want to preview.</p>
     */
    inline bool PreviewAgentsArnHasBeenSet() const { return m_previewAgentsArnHasBeenSet; }

    /**
     * <p>The ARN of the assessment target whose agents you want to preview.</p>
     */
    inline void SetPreviewAgentsArn(const Aws::String& value) { m_previewAgentsArnHasBeenSet = true; m_previewAgentsArn = value; }

    /**
     * <p>The ARN of the assessment target whose agents you want to preview.</p>
     */
    inline void SetPreviewAgentsArn(Aws::String&& value) { m_previewAgentsArnHasBeenSet = true; m_previewAgentsArn = std::move(value); }

    /**
     * <p>The ARN of the assessment target whose agents you want to preview.</p>
     */
    inline void SetPreviewAgentsArn(const char* value) { m_previewAgentsArnHasBeenSet = true; m_previewAgentsArn.assign(value); }

    /**
     * <p>The ARN of the assessment target whose agents you want to preview.</p>
     */
    inline PreviewAgentsRequest& WithPreviewAgentsArn(const Aws::String& value) { SetPreviewAgentsArn(value); return *this;}

    /**
     * <p>The ARN of the assessment target whose agents you want to preview.</p>
     */
    inline PreviewAgentsRequest& WithPreviewAgentsArn(Aws::String&& value) { SetPreviewAgentsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment target whose agents you want to preview.</p>
     */
    inline PreviewAgentsRequest& WithPreviewAgentsArn(const char* value) { SetPreviewAgentsArn(value); return *this;}


    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>PreviewAgents</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>PreviewAgents</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>PreviewAgents</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>PreviewAgents</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>PreviewAgents</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>PreviewAgents</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline PreviewAgentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>PreviewAgents</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline PreviewAgentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>PreviewAgents</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline PreviewAgentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline PreviewAgentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_previewAgentsArn;
    bool m_previewAgentsArnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
