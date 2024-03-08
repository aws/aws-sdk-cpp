/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class ListAudienceGenerationJobsRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API ListAudienceGenerationJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAudienceGenerationJobs"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;

    AWS_CLEANROOMSML_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the collaboration that contains the audience generation
     * jobs that you are interested in.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }

    /**
     * <p>The identifier of the collaboration that contains the audience generation
     * jobs that you are interested in.</p>
     */
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }

    /**
     * <p>The identifier of the collaboration that contains the audience generation
     * jobs that you are interested in.</p>
     */
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }

    /**
     * <p>The identifier of the collaboration that contains the audience generation
     * jobs that you are interested in.</p>
     */
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }

    /**
     * <p>The identifier of the collaboration that contains the audience generation
     * jobs that you are interested in.</p>
     */
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }

    /**
     * <p>The identifier of the collaboration that contains the audience generation
     * jobs that you are interested in.</p>
     */
    inline ListAudienceGenerationJobsRequest& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}

    /**
     * <p>The identifier of the collaboration that contains the audience generation
     * jobs that you are interested in.</p>
     */
    inline ListAudienceGenerationJobsRequest& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the collaboration that contains the audience generation
     * jobs that you are interested in.</p>
     */
    inline ListAudienceGenerationJobsRequest& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for the audience generation jobs that you are interested in.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for the audience generation jobs that you are interested in.</p>
     */
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for the audience generation jobs that you are interested in.</p>
     */
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for the audience generation jobs that you are interested in.</p>
     */
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for the audience generation jobs that you are interested in.</p>
     */
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for the audience generation jobs that you are interested in.</p>
     */
    inline ListAudienceGenerationJobsRequest& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for the audience generation jobs that you are interested in.</p>
     */
    inline ListAudienceGenerationJobsRequest& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for the audience generation jobs that you are interested in.</p>
     */
    inline ListAudienceGenerationJobsRequest& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}


    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline ListAudienceGenerationJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAudienceGenerationJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAudienceGenerationJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAudienceGenerationJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
