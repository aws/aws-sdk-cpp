﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/Suite.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a list suites request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSuitesResult">AWS
   * API Reference</a></p>
   */
  class ListSuitesResult
  {
  public:
    AWS_DEVICEFARM_API ListSuitesResult();
    AWS_DEVICEFARM_API ListSuitesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListSuitesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the suites.</p>
     */
    inline const Aws::Vector<Suite>& GetSuites() const{ return m_suites; }
    inline void SetSuites(const Aws::Vector<Suite>& value) { m_suites = value; }
    inline void SetSuites(Aws::Vector<Suite>&& value) { m_suites = std::move(value); }
    inline ListSuitesResult& WithSuites(const Aws::Vector<Suite>& value) { SetSuites(value); return *this;}
    inline ListSuitesResult& WithSuites(Aws::Vector<Suite>&& value) { SetSuites(std::move(value)); return *this;}
    inline ListSuitesResult& AddSuites(const Suite& value) { m_suites.push_back(value); return *this; }
    inline ListSuitesResult& AddSuites(Suite&& value) { m_suites.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSuitesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSuitesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSuitesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSuitesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSuitesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSuitesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Suite> m_suites;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
