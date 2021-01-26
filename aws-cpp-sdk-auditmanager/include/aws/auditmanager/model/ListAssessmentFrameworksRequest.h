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
  class AWS_AUDITMANAGER_API ListAssessmentFrameworksRequest : public AuditManagerRequest
  {
  public:
    ListAssessmentFrameworksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssessmentFrameworks"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The type of framework, such as standard or custom. </p>
     */
    inline const FrameworkType& GetFrameworkType() const{ return m_frameworkType; }

    /**
     * <p> The type of framework, such as standard or custom. </p>
     */
    inline bool FrameworkTypeHasBeenSet() const { return m_frameworkTypeHasBeenSet; }

    /**
     * <p> The type of framework, such as standard or custom. </p>
     */
    inline void SetFrameworkType(const FrameworkType& value) { m_frameworkTypeHasBeenSet = true; m_frameworkType = value; }

    /**
     * <p> The type of framework, such as standard or custom. </p>
     */
    inline void SetFrameworkType(FrameworkType&& value) { m_frameworkTypeHasBeenSet = true; m_frameworkType = std::move(value); }

    /**
     * <p> The type of framework, such as standard or custom. </p>
     */
    inline ListAssessmentFrameworksRequest& WithFrameworkType(const FrameworkType& value) { SetFrameworkType(value); return *this;}

    /**
     * <p> The type of framework, such as standard or custom. </p>
     */
    inline ListAssessmentFrameworksRequest& WithFrameworkType(FrameworkType&& value) { SetFrameworkType(std::move(value)); return *this;}


    /**
     * <p> The pagination token used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token used to fetch the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The pagination token used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The pagination token used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The pagination token used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The pagination token used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Represents the maximum number of results per page, or per API request call.
     * </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Represents the maximum number of results per page, or per API request call.
     * </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Represents the maximum number of results per page, or per API request call.
     * </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Represents the maximum number of results per page, or per API request call.
     * </p>
     */
    inline ListAssessmentFrameworksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    FrameworkType m_frameworkType;
    bool m_frameworkTypeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
