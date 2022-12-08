/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterHistory.h>
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
namespace SSM
{
namespace Model
{
  class GetParameterHistoryResult
  {
  public:
    AWS_SSM_API GetParameterHistoryResult();
    AWS_SSM_API GetParameterHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetParameterHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of parameters returned by the request.</p>
     */
    inline const Aws::Vector<ParameterHistory>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of parameters returned by the request.</p>
     */
    inline void SetParameters(const Aws::Vector<ParameterHistory>& value) { m_parameters = value; }

    /**
     * <p>A list of parameters returned by the request.</p>
     */
    inline void SetParameters(Aws::Vector<ParameterHistory>&& value) { m_parameters = std::move(value); }

    /**
     * <p>A list of parameters returned by the request.</p>
     */
    inline GetParameterHistoryResult& WithParameters(const Aws::Vector<ParameterHistory>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of parameters returned by the request.</p>
     */
    inline GetParameterHistoryResult& WithParameters(Aws::Vector<ParameterHistory>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of parameters returned by the request.</p>
     */
    inline GetParameterHistoryResult& AddParameters(const ParameterHistory& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of parameters returned by the request.</p>
     */
    inline GetParameterHistoryResult& AddParameters(ParameterHistory&& value) { m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline GetParameterHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline GetParameterHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline GetParameterHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ParameterHistory> m_parameters;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
