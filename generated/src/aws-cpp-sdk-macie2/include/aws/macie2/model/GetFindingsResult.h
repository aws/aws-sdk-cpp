/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/Finding.h>
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
namespace Macie2
{
namespace Model
{
  class GetFindingsResult
  {
  public:
    AWS_MACIE2_API GetFindingsResult() = default;
    AWS_MACIE2_API GetFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each finding that matches the criteria specified
     * in the request.</p>
     */
    inline const Aws::Vector<Finding>& GetFindings() const { return m_findings; }
    template<typename FindingsT = Aws::Vector<Finding>>
    void SetFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings = std::forward<FindingsT>(value); }
    template<typename FindingsT = Aws::Vector<Finding>>
    GetFindingsResult& WithFindings(FindingsT&& value) { SetFindings(std::forward<FindingsT>(value)); return *this;}
    template<typename FindingsT = Finding>
    GetFindingsResult& AddFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings.emplace_back(std::forward<FindingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFindingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Finding> m_findings;
    bool m_findingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
