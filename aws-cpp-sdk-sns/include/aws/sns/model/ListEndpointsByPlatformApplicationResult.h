/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/Endpoint.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /*
    <p>Response for ListEndpointsByPlatformApplication action.</p>
  */
  class AWS_SNS_API ListEndpointsByPlatformApplicationResult
  {
  public:
    ListEndpointsByPlatformApplicationResult();
    ListEndpointsByPlatformApplicationResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListEndpointsByPlatformApplicationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>Endpoints returned for ListEndpointsByPlatformApplication action.</p>
    */
    inline const Aws::Vector<Endpoint>& GetEndpoints() const{ return m_endpoints; }
    /*
     <p>Endpoints returned for ListEndpointsByPlatformApplication action.</p>
    */
    inline void SetEndpoints(const Aws::Vector<Endpoint>& value) { m_endpoints = value; }

    /*
     <p>Endpoints returned for ListEndpointsByPlatformApplication action.</p>
    */
    inline ListEndpointsByPlatformApplicationResult&  WithEndpoints(const Aws::Vector<Endpoint>& value) { SetEndpoints(value); return *this;}

    /*
     <p>Endpoints returned for ListEndpointsByPlatformApplication action.</p>
    */
    inline ListEndpointsByPlatformApplicationResult& AddEndpoints(const Endpoint& value) { m_endpoints.push_back(value); return *this; }

    /*
     <p>NextToken string is returned when calling ListEndpointsByPlatformApplication action if additional records are available after the first page results.</p>
    */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    /*
     <p>NextToken string is returned when calling ListEndpointsByPlatformApplication action if additional records are available after the first page results.</p>
    */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /*
     <p>NextToken string is returned when calling ListEndpointsByPlatformApplication action if additional records are available after the first page results.</p>
    */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /*
     <p>NextToken string is returned when calling ListEndpointsByPlatformApplication action if additional records are available after the first page results.</p>
    */
    inline ListEndpointsByPlatformApplicationResult&  WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /*
     <p>NextToken string is returned when calling ListEndpointsByPlatformApplication action if additional records are available after the first page results.</p>
    */
    inline ListEndpointsByPlatformApplicationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline ListEndpointsByPlatformApplicationResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Endpoint> m_endpoints;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws