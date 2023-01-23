/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/MulticastGroupByFuotaTask.h>
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
  class ListMulticastGroupsByFuotaTaskResult
  {
  public:
    AWS_IOTWIRELESS_API ListMulticastGroupsByFuotaTaskResult();
    AWS_IOTWIRELESS_API ListMulticastGroupsByFuotaTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListMulticastGroupsByFuotaTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListMulticastGroupsByFuotaTaskResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListMulticastGroupsByFuotaTaskResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListMulticastGroupsByFuotaTaskResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::Vector<MulticastGroupByFuotaTask>& GetMulticastGroupList() const{ return m_multicastGroupList; }

    
    inline void SetMulticastGroupList(const Aws::Vector<MulticastGroupByFuotaTask>& value) { m_multicastGroupList = value; }

    
    inline void SetMulticastGroupList(Aws::Vector<MulticastGroupByFuotaTask>&& value) { m_multicastGroupList = std::move(value); }

    
    inline ListMulticastGroupsByFuotaTaskResult& WithMulticastGroupList(const Aws::Vector<MulticastGroupByFuotaTask>& value) { SetMulticastGroupList(value); return *this;}

    
    inline ListMulticastGroupsByFuotaTaskResult& WithMulticastGroupList(Aws::Vector<MulticastGroupByFuotaTask>&& value) { SetMulticastGroupList(std::move(value)); return *this;}

    
    inline ListMulticastGroupsByFuotaTaskResult& AddMulticastGroupList(const MulticastGroupByFuotaTask& value) { m_multicastGroupList.push_back(value); return *this; }

    
    inline ListMulticastGroupsByFuotaTaskResult& AddMulticastGroupList(MulticastGroupByFuotaTask&& value) { m_multicastGroupList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<MulticastGroupByFuotaTask> m_multicastGroupList;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
