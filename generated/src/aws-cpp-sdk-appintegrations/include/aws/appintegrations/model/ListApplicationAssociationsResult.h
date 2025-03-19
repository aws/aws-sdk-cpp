/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/ApplicationAssociationSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppIntegrationsService
{
namespace Model
{
  class ListApplicationAssociationsResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListApplicationAssociationsResult() = default;
    AWS_APPINTEGRATIONSSERVICE_API ListApplicationAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API ListApplicationAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of Application Associations for the Application.</p>
     */
    inline const Aws::Vector<ApplicationAssociationSummary>& GetApplicationAssociations() const { return m_applicationAssociations; }
    template<typename ApplicationAssociationsT = Aws::Vector<ApplicationAssociationSummary>>
    void SetApplicationAssociations(ApplicationAssociationsT&& value) { m_applicationAssociationsHasBeenSet = true; m_applicationAssociations = std::forward<ApplicationAssociationsT>(value); }
    template<typename ApplicationAssociationsT = Aws::Vector<ApplicationAssociationSummary>>
    ListApplicationAssociationsResult& WithApplicationAssociations(ApplicationAssociationsT&& value) { SetApplicationAssociations(std::forward<ApplicationAssociationsT>(value)); return *this;}
    template<typename ApplicationAssociationsT = ApplicationAssociationSummary>
    ListApplicationAssociationsResult& AddApplicationAssociations(ApplicationAssociationsT&& value) { m_applicationAssociationsHasBeenSet = true; m_applicationAssociations.emplace_back(std::forward<ApplicationAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationAssociationSummary> m_applicationAssociations;
    bool m_applicationAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
