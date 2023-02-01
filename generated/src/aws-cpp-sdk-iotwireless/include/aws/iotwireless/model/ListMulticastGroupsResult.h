/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/MulticastGroup.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListMulticastGroupsResult
  {
  public:
    AWS_IOTWIRELESS_API ListMulticastGroupsResult();
    AWS_IOTWIRELESS_API ListMulticastGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListMulticastGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListMulticastGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListMulticastGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListMulticastGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::Vector<MulticastGroup>& GetMulticastGroupList() const{ return m_multicastGroupList; }

    
    inline void SetMulticastGroupList(const Aws::Vector<MulticastGroup>& value) { m_multicastGroupList = value; }

    
    inline void SetMulticastGroupList(Aws::Vector<MulticastGroup>&& value) { m_multicastGroupList = std::move(value); }

    
    inline ListMulticastGroupsResult& WithMulticastGroupList(const Aws::Vector<MulticastGroup>& value) { SetMulticastGroupList(value); return *this;}

    
    inline ListMulticastGroupsResult& WithMulticastGroupList(Aws::Vector<MulticastGroup>&& value) { SetMulticastGroupList(std::move(value)); return *this;}

    
    inline ListMulticastGroupsResult& AddMulticastGroupList(const MulticastGroup& value) { m_multicastGroupList.push_back(value); return *this; }

    
    inline ListMulticastGroupsResult& AddMulticastGroupList(MulticastGroup&& value) { m_multicastGroupList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<MulticastGroup> m_multicastGroupList;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
