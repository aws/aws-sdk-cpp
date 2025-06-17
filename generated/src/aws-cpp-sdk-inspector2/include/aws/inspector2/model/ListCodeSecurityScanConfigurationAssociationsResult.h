/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CodeSecurityScanConfigurationAssociationSummary.h>
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
namespace Inspector2
{
namespace Model
{
  class ListCodeSecurityScanConfigurationAssociationsResult
  {
  public:
    AWS_INSPECTOR2_API ListCodeSecurityScanConfigurationAssociationsResult() = default;
    AWS_INSPECTOR2_API ListCodeSecurityScanConfigurationAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCodeSecurityScanConfigurationAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of associations between code repositories and scan configurations.</p>
     */
    inline const Aws::Vector<CodeSecurityScanConfigurationAssociationSummary>& GetAssociations() const { return m_associations; }
    template<typename AssociationsT = Aws::Vector<CodeSecurityScanConfigurationAssociationSummary>>
    void SetAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations = std::forward<AssociationsT>(value); }
    template<typename AssociationsT = Aws::Vector<CodeSecurityScanConfigurationAssociationSummary>>
    ListCodeSecurityScanConfigurationAssociationsResult& WithAssociations(AssociationsT&& value) { SetAssociations(std::forward<AssociationsT>(value)); return *this;}
    template<typename AssociationsT = CodeSecurityScanConfigurationAssociationSummary>
    ListCodeSecurityScanConfigurationAssociationsResult& AddAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations.emplace_back(std::forward<AssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCodeSecurityScanConfigurationAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCodeSecurityScanConfigurationAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CodeSecurityScanConfigurationAssociationSummary> m_associations;
    bool m_associationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
