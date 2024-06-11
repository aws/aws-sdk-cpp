﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/CustomRoutingAccelerator.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class ListCustomRoutingAcceleratorsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCustomRoutingAcceleratorsResult();
    AWS_GLOBALACCELERATOR_API ListCustomRoutingAcceleratorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCustomRoutingAcceleratorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of custom routing accelerators for a customer account.</p>
     */
    inline const Aws::Vector<CustomRoutingAccelerator>& GetAccelerators() const{ return m_accelerators; }
    inline void SetAccelerators(const Aws::Vector<CustomRoutingAccelerator>& value) { m_accelerators = value; }
    inline void SetAccelerators(Aws::Vector<CustomRoutingAccelerator>&& value) { m_accelerators = std::move(value); }
    inline ListCustomRoutingAcceleratorsResult& WithAccelerators(const Aws::Vector<CustomRoutingAccelerator>& value) { SetAccelerators(value); return *this;}
    inline ListCustomRoutingAcceleratorsResult& WithAccelerators(Aws::Vector<CustomRoutingAccelerator>&& value) { SetAccelerators(std::move(value)); return *this;}
    inline ListCustomRoutingAcceleratorsResult& AddAccelerators(const CustomRoutingAccelerator& value) { m_accelerators.push_back(value); return *this; }
    inline ListCustomRoutingAcceleratorsResult& AddAccelerators(CustomRoutingAccelerator&& value) { m_accelerators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCustomRoutingAcceleratorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCustomRoutingAcceleratorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCustomRoutingAcceleratorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCustomRoutingAcceleratorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCustomRoutingAcceleratorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCustomRoutingAcceleratorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CustomRoutingAccelerator> m_accelerators;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
