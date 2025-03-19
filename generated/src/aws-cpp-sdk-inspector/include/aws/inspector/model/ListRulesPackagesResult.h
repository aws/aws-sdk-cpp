/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Inspector
{
namespace Model
{
  class ListRulesPackagesResult
  {
  public:
    AWS_INSPECTOR_API ListRulesPackagesResult() = default;
    AWS_INSPECTOR_API ListRulesPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API ListRulesPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of ARNs that specifies the rules packages returned by the
     * action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const { return m_rulesPackageArns; }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    void SetRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::forward<RulesPackageArnsT>(value); }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    ListRulesPackagesResult& WithRulesPackageArns(RulesPackageArnsT&& value) { SetRulesPackageArns(std::forward<RulesPackageArnsT>(value)); return *this;}
    template<typename RulesPackageArnsT = Aws::String>
    ListRulesPackagesResult& AddRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.emplace_back(std::forward<RulesPackageArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRulesPackagesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRulesPackagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
