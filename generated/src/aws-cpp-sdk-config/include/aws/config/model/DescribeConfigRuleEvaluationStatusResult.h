/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigRuleEvaluationStatus.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRuleEvaluationStatusResponse">AWS
   * API Reference</a></p>
   */
  class DescribeConfigRuleEvaluationStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusResult() = default;
    AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Status information about your Config managed rules.</p>
     */
    inline const Aws::Vector<ConfigRuleEvaluationStatus>& GetConfigRulesEvaluationStatus() const { return m_configRulesEvaluationStatus; }
    template<typename ConfigRulesEvaluationStatusT = Aws::Vector<ConfigRuleEvaluationStatus>>
    void SetConfigRulesEvaluationStatus(ConfigRulesEvaluationStatusT&& value) { m_configRulesEvaluationStatusHasBeenSet = true; m_configRulesEvaluationStatus = std::forward<ConfigRulesEvaluationStatusT>(value); }
    template<typename ConfigRulesEvaluationStatusT = Aws::Vector<ConfigRuleEvaluationStatus>>
    DescribeConfigRuleEvaluationStatusResult& WithConfigRulesEvaluationStatus(ConfigRulesEvaluationStatusT&& value) { SetConfigRulesEvaluationStatus(std::forward<ConfigRulesEvaluationStatusT>(value)); return *this;}
    template<typename ConfigRulesEvaluationStatusT = ConfigRuleEvaluationStatus>
    DescribeConfigRuleEvaluationStatusResult& AddConfigRulesEvaluationStatus(ConfigRulesEvaluationStatusT&& value) { m_configRulesEvaluationStatusHasBeenSet = true; m_configRulesEvaluationStatus.emplace_back(std::forward<ConfigRulesEvaluationStatusT>(value)); return *this; }
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
    DescribeConfigRuleEvaluationStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConfigRuleEvaluationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigRuleEvaluationStatus> m_configRulesEvaluationStatus;
    bool m_configRulesEvaluationStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
