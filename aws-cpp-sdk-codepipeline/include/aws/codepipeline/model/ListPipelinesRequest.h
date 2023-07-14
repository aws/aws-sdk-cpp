﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ListPipelines</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListPipelinesInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ListPipelinesRequest : public CodePipelineRequest
  {
  public:
    ListPipelinesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPipelines"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An identifier that was returned from the previous list pipelines call. It can
     * be used to return the next set of pipelines in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous list pipelines call. It can
     * be used to return the next set of pipelines in the list.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An identifier that was returned from the previous list pipelines call. It can
     * be used to return the next set of pipelines in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous list pipelines call. It can
     * be used to return the next set of pipelines in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous list pipelines call. It can
     * be used to return the next set of pipelines in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous list pipelines call. It can
     * be used to return the next set of pipelines in the list.</p>
     */
    inline ListPipelinesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous list pipelines call. It can
     * be used to return the next set of pipelines in the list.</p>
     */
    inline ListPipelinesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous list pipelines call. It can
     * be used to return the next set of pipelines in the list.</p>
     */
    inline ListPipelinesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of pipelines to return in a single call. To retrieve the
     * remaining pipelines, make another call with the returned nextToken value. The
     * minimum value you can specify is 1. The maximum accepted value is 1000.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of pipelines to return in a single call. To retrieve the
     * remaining pipelines, make another call with the returned nextToken value. The
     * minimum value you can specify is 1. The maximum accepted value is 1000.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of pipelines to return in a single call. To retrieve the
     * remaining pipelines, make another call with the returned nextToken value. The
     * minimum value you can specify is 1. The maximum accepted value is 1000.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of pipelines to return in a single call. To retrieve the
     * remaining pipelines, make another call with the returned nextToken value. The
     * minimum value you can specify is 1. The maximum accepted value is 1000.</p>
     */
    inline ListPipelinesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
