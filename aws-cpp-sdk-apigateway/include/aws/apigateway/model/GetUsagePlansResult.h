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
#include <aws/apigateway/model/UsagePlan.h>

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
   * <p>Represents a collection of usage plans for an AWS account.</p> <div
   * class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-api-usage-plans.html">Create
   * and Use Usage Plans</a> </div>
   */
  class AWS_APIGATEWAY_API GetUsagePlansResult
  {
  public:
    GetUsagePlansResult();
    GetUsagePlansResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUsagePlansResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = value; }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetUsagePlansResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetUsagePlansResult& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    
    inline GetUsagePlansResult& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>Gets the current item when enumerating the collection of
     * <a>UsagePlan</a>.</p>
     */
    inline const Aws::Vector<UsagePlan>& GetItems() const{ return m_items; }

    /**
     * <p>Gets the current item when enumerating the collection of
     * <a>UsagePlan</a>.</p>
     */
    inline void SetItems(const Aws::Vector<UsagePlan>& value) { m_items = value; }

    /**
     * <p>Gets the current item when enumerating the collection of
     * <a>UsagePlan</a>.</p>
     */
    inline void SetItems(Aws::Vector<UsagePlan>&& value) { m_items = value; }

    /**
     * <p>Gets the current item when enumerating the collection of
     * <a>UsagePlan</a>.</p>
     */
    inline GetUsagePlansResult& WithItems(const Aws::Vector<UsagePlan>& value) { SetItems(value); return *this;}

    /**
     * <p>Gets the current item when enumerating the collection of
     * <a>UsagePlan</a>.</p>
     */
    inline GetUsagePlansResult& WithItems(Aws::Vector<UsagePlan>&& value) { SetItems(value); return *this;}

    /**
     * <p>Gets the current item when enumerating the collection of
     * <a>UsagePlan</a>.</p>
     */
    inline GetUsagePlansResult& AddItems(const UsagePlan& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Gets the current item when enumerating the collection of
     * <a>UsagePlan</a>.</p>
     */
    inline GetUsagePlansResult& AddItems(UsagePlan&& value) { m_items.push_back(value); return *this; }

  private:
    Aws::String m_position;
    Aws::Vector<UsagePlan> m_items;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
