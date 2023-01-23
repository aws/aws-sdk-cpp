/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/Outcome.h>
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
  class GetOutcomesResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetOutcomesResult();
    AWS_FRAUDDETECTOR_API GetOutcomesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetOutcomesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The outcomes. </p>
     */
    inline const Aws::Vector<Outcome>& GetOutcomes() const{ return m_outcomes; }

    /**
     * <p>The outcomes. </p>
     */
    inline void SetOutcomes(const Aws::Vector<Outcome>& value) { m_outcomes = value; }

    /**
     * <p>The outcomes. </p>
     */
    inline void SetOutcomes(Aws::Vector<Outcome>&& value) { m_outcomes = std::move(value); }

    /**
     * <p>The outcomes. </p>
     */
    inline GetOutcomesResult& WithOutcomes(const Aws::Vector<Outcome>& value) { SetOutcomes(value); return *this;}

    /**
     * <p>The outcomes. </p>
     */
    inline GetOutcomesResult& WithOutcomes(Aws::Vector<Outcome>&& value) { SetOutcomes(std::move(value)); return *this;}

    /**
     * <p>The outcomes. </p>
     */
    inline GetOutcomesResult& AddOutcomes(const Outcome& value) { m_outcomes.push_back(value); return *this; }

    /**
     * <p>The outcomes. </p>
     */
    inline GetOutcomesResult& AddOutcomes(Outcome&& value) { m_outcomes.push_back(std::move(value)); return *this; }


    /**
     * <p>The next page token for subsequent requests.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page token for subsequent requests.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next page token for subsequent requests.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next page token for subsequent requests.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next page token for subsequent requests.</p>
     */
    inline GetOutcomesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page token for subsequent requests.</p>
     */
    inline GetOutcomesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page token for subsequent requests.</p>
     */
    inline GetOutcomesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Outcome> m_outcomes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
