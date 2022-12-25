/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/auditmanager/model/FrameworkType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AuditManager
{
namespace Model
{

  /**
   */
  class ListAssessmentFrameworksRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API ListAssessmentFrameworksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssessmentFrameworks"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;

    AWS_AUDITMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The type of framework, such as a standard framework or a custom framework.
     * </p>
     */
    inline const FrameworkType& GetFrameworkType() const{ return m_frameworkType; }

    /**
     * <p> The type of framework, such as a standard framework or a custom framework.
     * </p>
     */
    inline bool FrameworkTypeHasBeenSet() const { return m_frameworkTypeHasBeenSet; }

    /**
     * <p> The type of framework, such as a standard framework or a custom framework.
     * </p>
     */
    inline void SetFrameworkType(const FrameworkType& value) { m_frameworkTypeHasBeenSet = true; m_frameworkType = value; }

    /**
     * <p> The type of framework, such as a standard framework or a custom framework.
     * </p>
     */
    inline void SetFrameworkType(FrameworkType&& value) { m_frameworkTypeHasBeenSet = true; m_frameworkType = std::move(value); }

    /**
     * <p> The type of framework, such as a standard framework or a custom framework.
     * </p>
     */
    inline ListAssessmentFrameworksRequest& WithFrameworkType(const FrameworkType& value) { SetFrameworkType(value); return *this;}

    /**
     * <p> The type of framework, such as a standard framework or a custom framework.
     * </p>
     */
    inline ListAssessmentFrameworksRequest& WithFrameworkType(FrameworkType&& value) { SetFrameworkType(std::move(value)); return *this;}


    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline ListAssessmentFrameworksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    FrameworkType m_frameworkType;
    bool m_frameworkTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
