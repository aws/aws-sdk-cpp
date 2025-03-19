/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ConflictingAliasesList.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  class ListConflictingAliases2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListConflictingAliases2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListConflictingAliases2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListConflictingAliases2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of conflicting aliases.</p>
     */
    inline const ConflictingAliasesList& GetConflictingAliasesList() const { return m_conflictingAliasesList; }
    template<typename ConflictingAliasesListT = ConflictingAliasesList>
    void SetConflictingAliasesList(ConflictingAliasesListT&& value) { m_conflictingAliasesListHasBeenSet = true; m_conflictingAliasesList = std::forward<ConflictingAliasesListT>(value); }
    template<typename ConflictingAliasesListT = ConflictingAliasesList>
    ListConflictingAliases2020_05_31Result& WithConflictingAliasesList(ConflictingAliasesListT&& value) { SetConflictingAliasesList(std::forward<ConflictingAliasesListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConflictingAliases2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConflictingAliasesList m_conflictingAliasesList;
    bool m_conflictingAliasesListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
