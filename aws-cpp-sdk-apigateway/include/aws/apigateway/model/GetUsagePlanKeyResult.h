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
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents a usage plan key to identify a plan customer.</p> <div
   * class="remarks"> <p>To associate an API stage with a selected API key in a usage
   * plan, you must create a UsagePlanKey resource to represent the selected
   * <a>ApiKey</a>.</p> </div>" <div class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-api-usage-plans.html">Create
   * and Use Usage Plans</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UsagePlanKey">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetUsagePlanKeyResult
  {
  public:
    GetUsagePlanKeyResult();
    GetUsagePlanKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUsagePlanKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline GetUsagePlanKeyResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline GetUsagePlanKeyResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline GetUsagePlanKeyResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_type = value; }

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline void SetType(const char* value) { m_type.assign(value); }

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline GetUsagePlanKeyResult& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline GetUsagePlanKeyResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline GetUsagePlanKeyResult& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The value of a usage plan key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_value = value; }

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline void SetValue(const char* value) { m_value.assign(value); }

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline GetUsagePlanKeyResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline GetUsagePlanKeyResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline GetUsagePlanKeyResult& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The name of a usage plan key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline GetUsagePlanKeyResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline GetUsagePlanKeyResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline GetUsagePlanKeyResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_type;

    Aws::String m_value;

    Aws::String m_name;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
