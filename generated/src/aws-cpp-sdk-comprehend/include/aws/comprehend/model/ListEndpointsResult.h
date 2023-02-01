/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EndpointProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class ListEndpointsResult
  {
  public:
    AWS_COMPREHEND_API ListEndpointsResult();
    AWS_COMPREHEND_API ListEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Displays a list of endpoint properties being retrieved by the service in
     * response to the request.</p>
     */
    inline const Aws::Vector<EndpointProperties>& GetEndpointPropertiesList() const{ return m_endpointPropertiesList; }

    /**
     * <p>Displays a list of endpoint properties being retrieved by the service in
     * response to the request.</p>
     */
    inline void SetEndpointPropertiesList(const Aws::Vector<EndpointProperties>& value) { m_endpointPropertiesList = value; }

    /**
     * <p>Displays a list of endpoint properties being retrieved by the service in
     * response to the request.</p>
     */
    inline void SetEndpointPropertiesList(Aws::Vector<EndpointProperties>&& value) { m_endpointPropertiesList = std::move(value); }

    /**
     * <p>Displays a list of endpoint properties being retrieved by the service in
     * response to the request.</p>
     */
    inline ListEndpointsResult& WithEndpointPropertiesList(const Aws::Vector<EndpointProperties>& value) { SetEndpointPropertiesList(value); return *this;}

    /**
     * <p>Displays a list of endpoint properties being retrieved by the service in
     * response to the request.</p>
     */
    inline ListEndpointsResult& WithEndpointPropertiesList(Aws::Vector<EndpointProperties>&& value) { SetEndpointPropertiesList(std::move(value)); return *this;}

    /**
     * <p>Displays a list of endpoint properties being retrieved by the service in
     * response to the request.</p>
     */
    inline ListEndpointsResult& AddEndpointPropertiesList(const EndpointProperties& value) { m_endpointPropertiesList.push_back(value); return *this; }

    /**
     * <p>Displays a list of endpoint properties being retrieved by the service in
     * response to the request.</p>
     */
    inline ListEndpointsResult& AddEndpointPropertiesList(EndpointProperties&& value) { m_endpointPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EndpointProperties> m_endpointPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
