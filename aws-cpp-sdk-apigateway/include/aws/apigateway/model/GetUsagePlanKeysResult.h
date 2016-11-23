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
#include <aws/apigateway/model/UsagePlanKey.h>

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
   * <p>Represents the collection of usage plan keys added to usage plans for the
   * associated API keys and, possibly, other types of keys.</p> <div
   * class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-api-usage-plans.html">Create
   * and Use Usage Plans</a> </div>
   */
  class AWS_APIGATEWAY_API GetUsagePlanKeysResult
  {
  public:
    GetUsagePlanKeysResult();
    GetUsagePlanKeysResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUsagePlanKeysResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = value; }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetUsagePlanKeysResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetUsagePlanKeysResult& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    
    inline GetUsagePlanKeysResult& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>Gets the current item of the usage plan keys collection.</p>
     */
    inline const Aws::Vector<UsagePlanKey>& GetItems() const{ return m_items; }

    /**
     * <p>Gets the current item of the usage plan keys collection.</p>
     */
    inline void SetItems(const Aws::Vector<UsagePlanKey>& value) { m_items = value; }

    /**
     * <p>Gets the current item of the usage plan keys collection.</p>
     */
    inline void SetItems(Aws::Vector<UsagePlanKey>&& value) { m_items = value; }

    /**
     * <p>Gets the current item of the usage plan keys collection.</p>
     */
    inline GetUsagePlanKeysResult& WithItems(const Aws::Vector<UsagePlanKey>& value) { SetItems(value); return *this;}

    /**
     * <p>Gets the current item of the usage plan keys collection.</p>
     */
    inline GetUsagePlanKeysResult& WithItems(Aws::Vector<UsagePlanKey>&& value) { SetItems(value); return *this;}

    /**
     * <p>Gets the current item of the usage plan keys collection.</p>
     */
    inline GetUsagePlanKeysResult& AddItems(const UsagePlanKey& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Gets the current item of the usage plan keys collection.</p>
     */
    inline GetUsagePlanKeysResult& AddItems(UsagePlanKey&& value) { m_items.push_back(value); return *this; }

  private:
    Aws::String m_position;
    Aws::Vector<UsagePlanKey> m_items;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
