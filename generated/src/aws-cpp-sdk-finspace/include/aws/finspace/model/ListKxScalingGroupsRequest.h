/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace finspace
{
namespace Model
{

  /**
   */
  class ListKxScalingGroupsRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API ListKxScalingGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListKxScalingGroups"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;

    AWS_FINSPACE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A unique identifier for the kdb environment, for which you want to retrieve a
     * list of scaling groups.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment, for which you want to retrieve a
     * list of scaling groups.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb environment, for which you want to retrieve a
     * list of scaling groups.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment, for which you want to retrieve a
     * list of scaling groups.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment, for which you want to retrieve a
     * list of scaling groups.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment, for which you want to retrieve a
     * list of scaling groups.</p>
     */
    inline ListKxScalingGroupsRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, for which you want to retrieve a
     * list of scaling groups.</p>
     */
    inline ListKxScalingGroupsRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, for which you want to retrieve a
     * list of scaling groups.</p>
     */
    inline ListKxScalingGroupsRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline ListKxScalingGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline ListKxScalingGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline ListKxScalingGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline ListKxScalingGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
