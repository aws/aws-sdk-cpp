﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/FieldOption.h>
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
  class ListFieldOptionsResult
  {
  public:
    AWS_CONNECTCASES_API ListFieldOptionsResult();
    AWS_CONNECTCASES_API ListFieldOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API ListFieldOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFieldOptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFieldOptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFieldOptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>FieldOption</code> objects.</p>
     */
    inline const Aws::Vector<FieldOption>& GetOptions() const{ return m_options; }
    inline void SetOptions(const Aws::Vector<FieldOption>& value) { m_options = value; }
    inline void SetOptions(Aws::Vector<FieldOption>&& value) { m_options = std::move(value); }
    inline ListFieldOptionsResult& WithOptions(const Aws::Vector<FieldOption>& value) { SetOptions(value); return *this;}
    inline ListFieldOptionsResult& WithOptions(Aws::Vector<FieldOption>&& value) { SetOptions(std::move(value)); return *this;}
    inline ListFieldOptionsResult& AddOptions(const FieldOption& value) { m_options.push_back(value); return *this; }
    inline ListFieldOptionsResult& AddOptions(FieldOption&& value) { m_options.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFieldOptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFieldOptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFieldOptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<FieldOption> m_options;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
