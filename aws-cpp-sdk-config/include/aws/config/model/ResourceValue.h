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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ResourceValueType.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The dynamic value of the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ResourceValue">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ResourceValue
  {
  public:
    ResourceValue();
    ResourceValue(Aws::Utils::Json::JsonView jsonValue);
    ResourceValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value is a resource ID.</p>
     */
    inline const ResourceValueType& GetValue() const{ return m_value; }

    /**
     * <p>The value is a resource ID.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value is a resource ID.</p>
     */
    inline void SetValue(const ResourceValueType& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value is a resource ID.</p>
     */
    inline void SetValue(ResourceValueType&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value is a resource ID.</p>
     */
    inline ResourceValue& WithValue(const ResourceValueType& value) { SetValue(value); return *this;}

    /**
     * <p>The value is a resource ID.</p>
     */
    inline ResourceValue& WithValue(ResourceValueType&& value) { SetValue(std::move(value)); return *this;}

  private:

    ResourceValueType m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
