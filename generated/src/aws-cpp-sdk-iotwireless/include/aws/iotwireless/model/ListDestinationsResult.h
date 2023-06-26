/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/Destinations.h>
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
  class ListDestinationsResult
  {
  public:
    AWS_IOTWIRELESS_API ListDestinationsResult();
    AWS_IOTWIRELESS_API ListDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListDestinationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListDestinationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListDestinationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of destinations.</p>
     */
    inline const Aws::Vector<Destinations>& GetDestinationList() const{ return m_destinationList; }

    /**
     * <p>The list of destinations.</p>
     */
    inline void SetDestinationList(const Aws::Vector<Destinations>& value) { m_destinationList = value; }

    /**
     * <p>The list of destinations.</p>
     */
    inline void SetDestinationList(Aws::Vector<Destinations>&& value) { m_destinationList = std::move(value); }

    /**
     * <p>The list of destinations.</p>
     */
    inline ListDestinationsResult& WithDestinationList(const Aws::Vector<Destinations>& value) { SetDestinationList(value); return *this;}

    /**
     * <p>The list of destinations.</p>
     */
    inline ListDestinationsResult& WithDestinationList(Aws::Vector<Destinations>&& value) { SetDestinationList(std::move(value)); return *this;}

    /**
     * <p>The list of destinations.</p>
     */
    inline ListDestinationsResult& AddDestinationList(const Destinations& value) { m_destinationList.push_back(value); return *this; }

    /**
     * <p>The list of destinations.</p>
     */
    inline ListDestinationsResult& AddDestinationList(Destinations&& value) { m_destinationList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDestinationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDestinationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDestinationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<Destinations> m_destinationList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
