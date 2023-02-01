/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TopicRuleListItem.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the ListTopicRules operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTopicRulesResponse">AWS
   * API Reference</a></p>
   */
  class ListTopicRulesResult
  {
  public:
    AWS_IOT_API ListTopicRulesResult();
    AWS_IOT_API ListTopicRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListTopicRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The rules.</p>
     */
    inline const Aws::Vector<TopicRuleListItem>& GetRules() const{ return m_rules; }

    /**
     * <p>The rules.</p>
     */
    inline void SetRules(const Aws::Vector<TopicRuleListItem>& value) { m_rules = value; }

    /**
     * <p>The rules.</p>
     */
    inline void SetRules(Aws::Vector<TopicRuleListItem>&& value) { m_rules = std::move(value); }

    /**
     * <p>The rules.</p>
     */
    inline ListTopicRulesResult& WithRules(const Aws::Vector<TopicRuleListItem>& value) { SetRules(value); return *this;}

    /**
     * <p>The rules.</p>
     */
    inline ListTopicRulesResult& WithRules(Aws::Vector<TopicRuleListItem>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The rules.</p>
     */
    inline ListTopicRulesResult& AddRules(const TopicRuleListItem& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>The rules.</p>
     */
    inline ListTopicRulesResult& AddRules(TopicRuleListItem&& value) { m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListTopicRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListTopicRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListTopicRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TopicRuleListItem> m_rules;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
