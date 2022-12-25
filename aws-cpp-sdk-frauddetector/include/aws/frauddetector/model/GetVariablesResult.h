/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/Variable.h>
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
  class GetVariablesResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetVariablesResult();
    AWS_FRAUDDETECTOR_API GetVariablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetVariablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of the variables returned. </p>
     */
    inline const Aws::Vector<Variable>& GetVariables() const{ return m_variables; }

    /**
     * <p>The names of the variables returned. </p>
     */
    inline void SetVariables(const Aws::Vector<Variable>& value) { m_variables = value; }

    /**
     * <p>The names of the variables returned. </p>
     */
    inline void SetVariables(Aws::Vector<Variable>&& value) { m_variables = std::move(value); }

    /**
     * <p>The names of the variables returned. </p>
     */
    inline GetVariablesResult& WithVariables(const Aws::Vector<Variable>& value) { SetVariables(value); return *this;}

    /**
     * <p>The names of the variables returned. </p>
     */
    inline GetVariablesResult& WithVariables(Aws::Vector<Variable>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * <p>The names of the variables returned. </p>
     */
    inline GetVariablesResult& AddVariables(const Variable& value) { m_variables.push_back(value); return *this; }

    /**
     * <p>The names of the variables returned. </p>
     */
    inline GetVariablesResult& AddVariables(Variable&& value) { m_variables.push_back(std::move(value)); return *this; }


    /**
     * <p>The next page token to be used in subsequent requests. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page token to be used in subsequent requests. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next page token to be used in subsequent requests. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next page token to be used in subsequent requests. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next page token to be used in subsequent requests. </p>
     */
    inline GetVariablesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page token to be used in subsequent requests. </p>
     */
    inline GetVariablesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page token to be used in subsequent requests. </p>
     */
    inline GetVariablesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Variable> m_variables;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
