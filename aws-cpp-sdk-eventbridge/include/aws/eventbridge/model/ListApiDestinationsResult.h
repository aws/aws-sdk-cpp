/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/ApiDestination.h>
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
namespace EventBridge
{
namespace Model
{
  class AWS_EVENTBRIDGE_API ListApiDestinationsResult
  {
  public:
    ListApiDestinationsResult();
    ListApiDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApiDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>ApiDestination</code> objects that include information
     * about an API destination.</p>
     */
    inline const Aws::Vector<ApiDestination>& GetApiDestinations() const{ return m_apiDestinations; }

    /**
     * <p>An array of <code>ApiDestination</code> objects that include information
     * about an API destination.</p>
     */
    inline void SetApiDestinations(const Aws::Vector<ApiDestination>& value) { m_apiDestinations = value; }

    /**
     * <p>An array of <code>ApiDestination</code> objects that include information
     * about an API destination.</p>
     */
    inline void SetApiDestinations(Aws::Vector<ApiDestination>&& value) { m_apiDestinations = std::move(value); }

    /**
     * <p>An array of <code>ApiDestination</code> objects that include information
     * about an API destination.</p>
     */
    inline ListApiDestinationsResult& WithApiDestinations(const Aws::Vector<ApiDestination>& value) { SetApiDestinations(value); return *this;}

    /**
     * <p>An array of <code>ApiDestination</code> objects that include information
     * about an API destination.</p>
     */
    inline ListApiDestinationsResult& WithApiDestinations(Aws::Vector<ApiDestination>&& value) { SetApiDestinations(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ApiDestination</code> objects that include information
     * about an API destination.</p>
     */
    inline ListApiDestinationsResult& AddApiDestinations(const ApiDestination& value) { m_apiDestinations.push_back(value); return *this; }

    /**
     * <p>An array of <code>ApiDestination</code> objects that include information
     * about an API destination.</p>
     */
    inline ListApiDestinationsResult& AddApiDestinations(ApiDestination&& value) { m_apiDestinations.push_back(std::move(value)); return *this; }


    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline ListApiDestinationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline ListApiDestinationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline ListApiDestinationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApiDestination> m_apiDestinations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
