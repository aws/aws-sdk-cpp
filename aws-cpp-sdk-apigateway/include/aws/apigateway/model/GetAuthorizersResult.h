/*
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
#include <aws/apigateway/model/Authorizer.h>

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
   * <p>Represents a collection of <a>Authorizer</a> resources.</p> <div
   * class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/use-custom-authorizer.html">Enable
   * custom authorization</a> </div>
   */
  class AWS_APIGATEWAY_API GetAuthorizersResult
  {
  public:
    GetAuthorizersResult();
    GetAuthorizersResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAuthorizersResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = value; }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetAuthorizersResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetAuthorizersResult& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    
    inline GetAuthorizersResult& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>Gets the current list of <a>Authorizer</a> resources in the collection.</p>
     */
    inline const Aws::Vector<Authorizer>& GetItems() const{ return m_items; }

    /**
     * <p>Gets the current list of <a>Authorizer</a> resources in the collection.</p>
     */
    inline void SetItems(const Aws::Vector<Authorizer>& value) { m_items = value; }

    /**
     * <p>Gets the current list of <a>Authorizer</a> resources in the collection.</p>
     */
    inline void SetItems(Aws::Vector<Authorizer>&& value) { m_items = value; }

    /**
     * <p>Gets the current list of <a>Authorizer</a> resources in the collection.</p>
     */
    inline GetAuthorizersResult& WithItems(const Aws::Vector<Authorizer>& value) { SetItems(value); return *this;}

    /**
     * <p>Gets the current list of <a>Authorizer</a> resources in the collection.</p>
     */
    inline GetAuthorizersResult& WithItems(Aws::Vector<Authorizer>&& value) { SetItems(value); return *this;}

    /**
     * <p>Gets the current list of <a>Authorizer</a> resources in the collection.</p>
     */
    inline GetAuthorizersResult& AddItems(const Authorizer& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Gets the current list of <a>Authorizer</a> resources in the collection.</p>
     */
    inline GetAuthorizersResult& AddItems(Authorizer&& value) { m_items.push_back(value); return *this; }

  private:
    Aws::String m_position;
    Aws::Vector<Authorizer> m_items;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
