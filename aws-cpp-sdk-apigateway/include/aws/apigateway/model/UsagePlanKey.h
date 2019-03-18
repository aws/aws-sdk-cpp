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
   * <p>Represents a usage plan key to identify a plan customer.</p> <div
   * class="remarks"> <p>To associate an API stage with a selected API key in a usage
   * plan, you must create a UsagePlanKey resource to represent the selected
   * <a>ApiKey</a>.</p> </div>" <div class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-api-usage-plans.html">Create
   * and Use Usage Plans</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UsagePlanKey">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API UsagePlanKey
  {
  public:
    UsagePlanKey();
    UsagePlanKey(Aws::Utils::Json::JsonView jsonValue);
    UsagePlanKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline UsagePlanKey& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline UsagePlanKey& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The Id of a usage plan key.</p>
     */
    inline UsagePlanKey& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline UsagePlanKey& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline UsagePlanKey& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of a usage plan key. Currently, the valid key type is
     * <code>API_KEY</code>.</p>
     */
    inline UsagePlanKey& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The value of a usage plan key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline UsagePlanKey& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline UsagePlanKey& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of a usage plan key.</p>
     */
    inline UsagePlanKey& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The name of a usage plan key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline UsagePlanKey& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline UsagePlanKey& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a usage plan key.</p>
     */
    inline UsagePlanKey& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
