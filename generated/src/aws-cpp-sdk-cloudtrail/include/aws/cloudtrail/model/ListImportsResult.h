/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/ImportsListItem.h>
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
namespace CloudTrail
{
namespace Model
{
  class ListImportsResult
  {
  public:
    AWS_CLOUDTRAIL_API ListImportsResult() = default;
    AWS_CLOUDTRAIL_API ListImportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListImportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of returned imports. </p>
     */
    inline const Aws::Vector<ImportsListItem>& GetImports() const { return m_imports; }
    template<typename ImportsT = Aws::Vector<ImportsListItem>>
    void SetImports(ImportsT&& value) { m_importsHasBeenSet = true; m_imports = std::forward<ImportsT>(value); }
    template<typename ImportsT = Aws::Vector<ImportsListItem>>
    ListImportsResult& WithImports(ImportsT&& value) { SetImports(std::forward<ImportsT>(value)); return *this;}
    template<typename ImportsT = ImportsListItem>
    ListImportsResult& AddImports(ImportsT&& value) { m_importsHasBeenSet = true; m_imports.emplace_back(std::forward<ImportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token you can use to get the next page of import results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImportsListItem> m_imports;
    bool m_importsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
