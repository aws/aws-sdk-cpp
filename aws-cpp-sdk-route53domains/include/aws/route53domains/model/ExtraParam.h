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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/ExtraParamName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>ExtraParam includes the following elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ExtraParam">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API ExtraParam
  {
  public:
    ExtraParam();
    ExtraParam(const Aws::Utils::Json::JsonValue& jsonValue);
    ExtraParam& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Name of the additional parameter required by the top-level domain.</p>
     */
    inline const ExtraParamName& GetName() const{ return m_name; }

    /**
     * <p>Name of the additional parameter required by the top-level domain.</p>
     */
    inline void SetName(const ExtraParamName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the additional parameter required by the top-level domain.</p>
     */
    inline void SetName(ExtraParamName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the additional parameter required by the top-level domain.</p>
     */
    inline ExtraParam& WithName(const ExtraParamName& value) { SetName(value); return *this;}

    /**
     * <p>Name of the additional parameter required by the top-level domain.</p>
     */
    inline ExtraParam& WithName(ExtraParamName&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p>
     */
    inline ExtraParam& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p>
     */
    inline ExtraParam& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Values corresponding to the additional parameter names required by some
     * top-level domains.</p>
     */
    inline ExtraParam& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    ExtraParamName m_name;
    bool m_nameHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
