/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/FISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace FIS
{
namespace Model
{

  /**
   */
  class ListExperimentResolvedTargetsRequest : public FISRequest
  {
  public:
    AWS_FIS_API ListExperimentResolvedTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExperimentResolvedTargets"; }

    AWS_FIS_API Aws::String SerializePayload() const override;

    AWS_FIS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the experiment.</p>
     */
    inline const Aws::String& GetExperimentId() const{ return m_experimentId; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline bool ExperimentIdHasBeenSet() const { return m_experimentIdHasBeenSet; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetExperimentId(const Aws::String& value) { m_experimentIdHasBeenSet = true; m_experimentId = value; }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetExperimentId(Aws::String&& value) { m_experimentIdHasBeenSet = true; m_experimentId = std::move(value); }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline void SetExperimentId(const char* value) { m_experimentIdHasBeenSet = true; m_experimentId.assign(value); }

    /**
     * <p>The ID of the experiment.</p>
     */
    inline ListExperimentResolvedTargetsRequest& WithExperimentId(const Aws::String& value) { SetExperimentId(value); return *this;}

    /**
     * <p>The ID of the experiment.</p>
     */
    inline ListExperimentResolvedTargetsRequest& WithExperimentId(Aws::String&& value) { SetExperimentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the experiment.</p>
     */
    inline ListExperimentResolvedTargetsRequest& WithExperimentId(const char* value) { SetExperimentId(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned nextToken value.</p>
     */
    inline ListExperimentResolvedTargetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListExperimentResolvedTargetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListExperimentResolvedTargetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListExperimentResolvedTargetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the target.</p>
     */
    inline const Aws::String& GetTargetName() const{ return m_targetName; }

    /**
     * <p>The name of the target.</p>
     */
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }

    /**
     * <p>The name of the target.</p>
     */
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }

    /**
     * <p>The name of the target.</p>
     */
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = std::move(value); }

    /**
     * <p>The name of the target.</p>
     */
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }

    /**
     * <p>The name of the target.</p>
     */
    inline ListExperimentResolvedTargetsRequest& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}

    /**
     * <p>The name of the target.</p>
     */
    inline ListExperimentResolvedTargetsRequest& WithTargetName(Aws::String&& value) { SetTargetName(std::move(value)); return *this;}

    /**
     * <p>The name of the target.</p>
     */
    inline ListExperimentResolvedTargetsRequest& WithTargetName(const char* value) { SetTargetName(value); return *this;}

  private:

    Aws::String m_experimentId;
    bool m_experimentIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
