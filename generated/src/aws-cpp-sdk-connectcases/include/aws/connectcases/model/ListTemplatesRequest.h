/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/TemplateStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class ListTemplatesRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API ListTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTemplates"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;

    AWS_CONNECTCASES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline ListTemplatesRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline ListTemplatesRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline ListTemplatesRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of status values to filter on.</p>
     */
    inline const Aws::Vector<TemplateStatus>& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::Vector<TemplateStatus>& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::Vector<TemplateStatus>&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListTemplatesRequest& WithStatus(const Aws::Vector<TemplateStatus>& value) { SetStatus(value); return *this;}
    inline ListTemplatesRequest& WithStatus(Aws::Vector<TemplateStatus>&& value) { SetStatus(std::move(value)); return *this;}
    inline ListTemplatesRequest& AddStatus(const TemplateStatus& value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    inline ListTemplatesRequest& AddStatus(TemplateStatus&& value) { m_statusHasBeenSet = true; m_status.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TemplateStatus> m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
