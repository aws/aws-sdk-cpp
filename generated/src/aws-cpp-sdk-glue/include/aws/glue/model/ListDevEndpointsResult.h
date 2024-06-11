﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{
  class ListDevEndpointsResult
  {
  public:
    AWS_GLUE_API ListDevEndpointsResult();
    AWS_GLUE_API ListDevEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListDevEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of all the <code>DevEndpoint</code>s in the account, or the
     * <code>DevEndpoint</code>s with the specified tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDevEndpointNames() const{ return m_devEndpointNames; }
    inline void SetDevEndpointNames(const Aws::Vector<Aws::String>& value) { m_devEndpointNames = value; }
    inline void SetDevEndpointNames(Aws::Vector<Aws::String>&& value) { m_devEndpointNames = std::move(value); }
    inline ListDevEndpointsResult& WithDevEndpointNames(const Aws::Vector<Aws::String>& value) { SetDevEndpointNames(value); return *this;}
    inline ListDevEndpointsResult& WithDevEndpointNames(Aws::Vector<Aws::String>&& value) { SetDevEndpointNames(std::move(value)); return *this;}
    inline ListDevEndpointsResult& AddDevEndpointNames(const Aws::String& value) { m_devEndpointNames.push_back(value); return *this; }
    inline ListDevEndpointsResult& AddDevEndpointNames(Aws::String&& value) { m_devEndpointNames.push_back(std::move(value)); return *this; }
    inline ListDevEndpointsResult& AddDevEndpointNames(const char* value) { m_devEndpointNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDevEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDevEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDevEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDevEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDevEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDevEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_devEndpointNames;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
