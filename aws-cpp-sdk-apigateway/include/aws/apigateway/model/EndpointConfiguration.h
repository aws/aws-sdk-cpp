/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/EndpointType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The endpoint configuration to indicate the types of endpoints an API
   * (<a>RestApi</a>) or its custom domain name (<a>DomainName</a>) has.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/EndpointConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API EndpointConfiguration
  {
  public:
    EndpointConfiguration();
    EndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    EndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of endpoint types of an API (<a>RestApi</a>) or its custom domain name
     * (<a>DomainName</a>). For an edge-optimized API and its custom domain name, the
     * endpoint type is <code>"EDGE"</code>. For a regional API and its custom domain
     * name, the endpoint type is <code>REGIONAL</code>. For a private API, the
     * endpoint type is <code>PRIVATE</code>.</p>
     */
    inline const Aws::Vector<EndpointType>& GetTypes() const{ return m_types; }

    /**
     * <p>A list of endpoint types of an API (<a>RestApi</a>) or its custom domain name
     * (<a>DomainName</a>). For an edge-optimized API and its custom domain name, the
     * endpoint type is <code>"EDGE"</code>. For a regional API and its custom domain
     * name, the endpoint type is <code>REGIONAL</code>. For a private API, the
     * endpoint type is <code>PRIVATE</code>.</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>A list of endpoint types of an API (<a>RestApi</a>) or its custom domain name
     * (<a>DomainName</a>). For an edge-optimized API and its custom domain name, the
     * endpoint type is <code>"EDGE"</code>. For a regional API and its custom domain
     * name, the endpoint type is <code>REGIONAL</code>. For a private API, the
     * endpoint type is <code>PRIVATE</code>.</p>
     */
    inline void SetTypes(const Aws::Vector<EndpointType>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>A list of endpoint types of an API (<a>RestApi</a>) or its custom domain name
     * (<a>DomainName</a>). For an edge-optimized API and its custom domain name, the
     * endpoint type is <code>"EDGE"</code>. For a regional API and its custom domain
     * name, the endpoint type is <code>REGIONAL</code>. For a private API, the
     * endpoint type is <code>PRIVATE</code>.</p>
     */
    inline void SetTypes(Aws::Vector<EndpointType>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>A list of endpoint types of an API (<a>RestApi</a>) or its custom domain name
     * (<a>DomainName</a>). For an edge-optimized API and its custom domain name, the
     * endpoint type is <code>"EDGE"</code>. For a regional API and its custom domain
     * name, the endpoint type is <code>REGIONAL</code>. For a private API, the
     * endpoint type is <code>PRIVATE</code>.</p>
     */
    inline EndpointConfiguration& WithTypes(const Aws::Vector<EndpointType>& value) { SetTypes(value); return *this;}

    /**
     * <p>A list of endpoint types of an API (<a>RestApi</a>) or its custom domain name
     * (<a>DomainName</a>). For an edge-optimized API and its custom domain name, the
     * endpoint type is <code>"EDGE"</code>. For a regional API and its custom domain
     * name, the endpoint type is <code>REGIONAL</code>. For a private API, the
     * endpoint type is <code>PRIVATE</code>.</p>
     */
    inline EndpointConfiguration& WithTypes(Aws::Vector<EndpointType>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>A list of endpoint types of an API (<a>RestApi</a>) or its custom domain name
     * (<a>DomainName</a>). For an edge-optimized API and its custom domain name, the
     * endpoint type is <code>"EDGE"</code>. For a regional API and its custom domain
     * name, the endpoint type is <code>REGIONAL</code>. For a private API, the
     * endpoint type is <code>PRIVATE</code>.</p>
     */
    inline EndpointConfiguration& AddTypes(const EndpointType& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>A list of endpoint types of an API (<a>RestApi</a>) or its custom domain name
     * (<a>DomainName</a>). For an edge-optimized API and its custom domain name, the
     * endpoint type is <code>"EDGE"</code>. For a regional API and its custom domain
     * name, the endpoint type is <code>REGIONAL</code>. For a private API, the
     * endpoint type is <code>PRIVATE</code>.</p>
     */
    inline EndpointConfiguration& AddTypes(EndpointType&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EndpointType> m_types;
    bool m_typesHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
