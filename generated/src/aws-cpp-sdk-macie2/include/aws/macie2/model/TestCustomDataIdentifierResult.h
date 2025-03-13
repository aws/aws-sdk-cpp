/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class TestCustomDataIdentifierResult
  {
  public:
    AWS_MACIE2_API TestCustomDataIdentifierResult() = default;
    AWS_MACIE2_API TestCustomDataIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API TestCustomDataIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of occurrences of sample text that matched the criteria specified
     * by the custom data identifier.</p>
     */
    inline int GetMatchCount() const { return m_matchCount; }
    inline void SetMatchCount(int value) { m_matchCountHasBeenSet = true; m_matchCount = value; }
    inline TestCustomDataIdentifierResult& WithMatchCount(int value) { SetMatchCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestCustomDataIdentifierResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_matchCount{0};
    bool m_matchCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
