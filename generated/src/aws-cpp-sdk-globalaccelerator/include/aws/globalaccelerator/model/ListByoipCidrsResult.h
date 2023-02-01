/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/ByoipCidr.h>
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
  class ListByoipCidrsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListByoipCidrsResult();
    AWS_GLOBALACCELERATOR_API ListByoipCidrsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListByoipCidrsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about your address ranges.</p>
     */
    inline const Aws::Vector<ByoipCidr>& GetByoipCidrs() const{ return m_byoipCidrs; }

    /**
     * <p>Information about your address ranges.</p>
     */
    inline void SetByoipCidrs(const Aws::Vector<ByoipCidr>& value) { m_byoipCidrs = value; }

    /**
     * <p>Information about your address ranges.</p>
     */
    inline void SetByoipCidrs(Aws::Vector<ByoipCidr>&& value) { m_byoipCidrs = std::move(value); }

    /**
     * <p>Information about your address ranges.</p>
     */
    inline ListByoipCidrsResult& WithByoipCidrs(const Aws::Vector<ByoipCidr>& value) { SetByoipCidrs(value); return *this;}

    /**
     * <p>Information about your address ranges.</p>
     */
    inline ListByoipCidrsResult& WithByoipCidrs(Aws::Vector<ByoipCidr>&& value) { SetByoipCidrs(std::move(value)); return *this;}

    /**
     * <p>Information about your address ranges.</p>
     */
    inline ListByoipCidrsResult& AddByoipCidrs(const ByoipCidr& value) { m_byoipCidrs.push_back(value); return *this; }

    /**
     * <p>Information about your address ranges.</p>
     */
    inline ListByoipCidrsResult& AddByoipCidrs(ByoipCidr&& value) { m_byoipCidrs.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListByoipCidrsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListByoipCidrsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListByoipCidrsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ByoipCidr> m_byoipCidrs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
