﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/RestApi.h>

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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Contains references to your APIs and links that guide you in how to interact
   * with your collection. A collection offers a paginated view of your APIs.</p>
   * <div class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Create
   * an API</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/RestApis">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetRestApisResult
  {
  public:
    GetRestApisResult();
    GetRestApisResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRestApisResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = value; }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetRestApisResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetRestApisResult& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    
    inline GetRestApisResult& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>An array of links to the current page of <a>RestApi</a> resources.</p>
     */
    inline const Aws::Vector<RestApi>& GetItems() const{ return m_items; }

    /**
     * <p>An array of links to the current page of <a>RestApi</a> resources.</p>
     */
    inline void SetItems(const Aws::Vector<RestApi>& value) { m_items = value; }

    /**
     * <p>An array of links to the current page of <a>RestApi</a> resources.</p>
     */
    inline void SetItems(Aws::Vector<RestApi>&& value) { m_items = value; }

    /**
     * <p>An array of links to the current page of <a>RestApi</a> resources.</p>
     */
    inline GetRestApisResult& WithItems(const Aws::Vector<RestApi>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of links to the current page of <a>RestApi</a> resources.</p>
     */
    inline GetRestApisResult& WithItems(Aws::Vector<RestApi>&& value) { SetItems(value); return *this;}

    /**
     * <p>An array of links to the current page of <a>RestApi</a> resources.</p>
     */
    inline GetRestApisResult& AddItems(const RestApi& value) { m_items.push_back(value); return *this; }

    /**
     * <p>An array of links to the current page of <a>RestApi</a> resources.</p>
     */
    inline GetRestApisResult& AddItems(RestApi&& value) { m_items.push_back(value); return *this; }

  private:
    Aws::String m_position;
    Aws::Vector<RestApi> m_items;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
