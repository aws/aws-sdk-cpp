/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/Rule.h>
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
namespace FraudDetector
{
namespace Model
{
  class CreateRuleResult
  {
  public:
    AWS_FRAUDDETECTOR_API CreateRuleResult();
    AWS_FRAUDDETECTOR_API CreateRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API CreateRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The created rule.</p>
     */
    inline const Rule& GetRule() const{ return m_rule; }

    /**
     * <p>The created rule.</p>
     */
    inline void SetRule(const Rule& value) { m_rule = value; }

    /**
     * <p>The created rule.</p>
     */
    inline void SetRule(Rule&& value) { m_rule = std::move(value); }

    /**
     * <p>The created rule.</p>
     */
    inline CreateRuleResult& WithRule(const Rule& value) { SetRule(value); return *this;}

    /**
     * <p>The created rule.</p>
     */
    inline CreateRuleResult& WithRule(Rule&& value) { SetRule(std::move(value)); return *this;}

  private:

    Rule m_rule;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
