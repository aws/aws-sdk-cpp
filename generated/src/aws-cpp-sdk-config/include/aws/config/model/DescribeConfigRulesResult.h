/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigRule.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRulesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeConfigRulesResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigRulesResult() = default;
    AWS_CONFIGSERVICE_API DescribeConfigRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConfigRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details about your Config rules.</p>
     */
    inline const Aws::Vector<ConfigRule>& GetConfigRules() const { return m_configRules; }
    template<typename ConfigRulesT = Aws::Vector<ConfigRule>>
    void SetConfigRules(ConfigRulesT&& value) { m_configRulesHasBeenSet = true; m_configRules = std::forward<ConfigRulesT>(value); }
    template<typename ConfigRulesT = Aws::Vector<ConfigRule>>
    DescribeConfigRulesResult& WithConfigRules(ConfigRulesT&& value) { SetConfigRules(std::forward<ConfigRulesT>(value)); return *this;}
    template<typename ConfigRulesT = ConfigRule>
    DescribeConfigRulesResult& AddConfigRules(ConfigRulesT&& value) { m_configRulesHasBeenSet = true; m_configRules.emplace_back(std::forward<ConfigRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeConfigRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConfigRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigRule> m_configRules;
    bool m_configRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
