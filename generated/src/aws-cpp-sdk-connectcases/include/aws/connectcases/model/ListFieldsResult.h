/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/FieldSummary.h>
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
namespace ConnectCases
{
namespace Model
{
  class ListFieldsResult
  {
  public:
    AWS_CONNECTCASES_API ListFieldsResult();
    AWS_CONNECTCASES_API ListFieldsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API ListFieldsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of detailed field information.</p>
     */
    inline const Aws::Vector<FieldSummary>& GetFields() const{ return m_fields; }

    /**
     * <p>List of detailed field information.</p>
     */
    inline void SetFields(const Aws::Vector<FieldSummary>& value) { m_fields = value; }

    /**
     * <p>List of detailed field information.</p>
     */
    inline void SetFields(Aws::Vector<FieldSummary>&& value) { m_fields = std::move(value); }

    /**
     * <p>List of detailed field information.</p>
     */
    inline ListFieldsResult& WithFields(const Aws::Vector<FieldSummary>& value) { SetFields(value); return *this;}

    /**
     * <p>List of detailed field information.</p>
     */
    inline ListFieldsResult& WithFields(Aws::Vector<FieldSummary>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>List of detailed field information.</p>
     */
    inline ListFieldsResult& AddFields(const FieldSummary& value) { m_fields.push_back(value); return *this; }

    /**
     * <p>List of detailed field information.</p>
     */
    inline ListFieldsResult& AddFields(FieldSummary&& value) { m_fields.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline ListFieldsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline ListFieldsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline ListFieldsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FieldSummary> m_fields;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
