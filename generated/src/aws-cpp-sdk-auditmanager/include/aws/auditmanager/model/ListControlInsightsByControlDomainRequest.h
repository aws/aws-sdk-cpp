/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
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
  class ListControlInsightsByControlDomainRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API ListControlInsightsByControlDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListControlInsightsByControlDomain"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;

    AWS_AUDITMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier for the control domain. </p> <p>Audit Manager supports
     * the control domains that are provided by Amazon Web Services Control Catalog.
     * For information about how to find a list of available control domains, see <a
     * href="https://docs.aws.amazon.com/controlcatalog/latest/APIReference/API_ListDomains.html">
     * <code>ListDomains</code> </a> in the Amazon Web Services Control Catalog API
     * Reference.</p>
     */
    inline const Aws::String& GetControlDomainId() const { return m_controlDomainId; }
    inline bool ControlDomainIdHasBeenSet() const { return m_controlDomainIdHasBeenSet; }
    template<typename ControlDomainIdT = Aws::String>
    void SetControlDomainId(ControlDomainIdT&& value) { m_controlDomainIdHasBeenSet = true; m_controlDomainId = std::forward<ControlDomainIdT>(value); }
    template<typename ControlDomainIdT = Aws::String>
    ListControlInsightsByControlDomainRequest& WithControlDomainId(ControlDomainIdT&& value) { SetControlDomainId(std::forward<ControlDomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListControlInsightsByControlDomainRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListControlInsightsByControlDomainRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_controlDomainId;
    bool m_controlDomainIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
