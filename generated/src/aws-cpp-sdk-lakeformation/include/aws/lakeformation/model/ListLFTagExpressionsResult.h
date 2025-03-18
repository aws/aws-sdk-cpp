/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/LFTagExpression.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListLFTagExpressionsResult
  {
  public:
    AWS_LAKEFORMATION_API ListLFTagExpressionsResult() = default;
    AWS_LAKEFORMATION_API ListLFTagExpressionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListLFTagExpressionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Logical expressions composed of one more LF-Tag key-value pairs.</p>
     */
    inline const Aws::Vector<LFTagExpression>& GetLFTagExpressions() const { return m_lFTagExpressions; }
    template<typename LFTagExpressionsT = Aws::Vector<LFTagExpression>>
    void SetLFTagExpressions(LFTagExpressionsT&& value) { m_lFTagExpressionsHasBeenSet = true; m_lFTagExpressions = std::forward<LFTagExpressionsT>(value); }
    template<typename LFTagExpressionsT = Aws::Vector<LFTagExpression>>
    ListLFTagExpressionsResult& WithLFTagExpressions(LFTagExpressionsT&& value) { SetLFTagExpressions(std::forward<LFTagExpressionsT>(value)); return *this;}
    template<typename LFTagExpressionsT = LFTagExpression>
    ListLFTagExpressionsResult& AddLFTagExpressions(LFTagExpressionsT&& value) { m_lFTagExpressionsHasBeenSet = true; m_lFTagExpressions.emplace_back(std::forward<LFTagExpressionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLFTagExpressionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLFTagExpressionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LFTagExpression> m_lFTagExpressions;
    bool m_lFTagExpressionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
