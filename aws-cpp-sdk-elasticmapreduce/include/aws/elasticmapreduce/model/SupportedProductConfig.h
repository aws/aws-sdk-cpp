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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>The list of supported product configurations which allow user-supplied
   * arguments. EMR accepts these arguments and forwards them to the corresponding
   * installation script as bootstrap action arguments.</p>
   */
  class AWS_EMR_API SupportedProductConfig
  {
  public:
    SupportedProductConfig();
    SupportedProductConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    SupportedProductConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the product configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the product configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the product configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the product configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the product configuration.</p>
     */
    inline SupportedProductConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the product configuration.</p>
     */
    inline SupportedProductConfig& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the product configuration.</p>
     */
    inline SupportedProductConfig& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The list of user-supplied arguments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const{ return m_args; }

    /**
     * <p>The list of user-supplied arguments.</p>
     */
    inline void SetArgs(const Aws::Vector<Aws::String>& value) { m_argsHasBeenSet = true; m_args = value; }

    /**
     * <p>The list of user-supplied arguments.</p>
     */
    inline void SetArgs(Aws::Vector<Aws::String>&& value) { m_argsHasBeenSet = true; m_args = value; }

    /**
     * <p>The list of user-supplied arguments.</p>
     */
    inline SupportedProductConfig& WithArgs(const Aws::Vector<Aws::String>& value) { SetArgs(value); return *this;}

    /**
     * <p>The list of user-supplied arguments.</p>
     */
    inline SupportedProductConfig& WithArgs(Aws::Vector<Aws::String>&& value) { SetArgs(value); return *this;}

    /**
     * <p>The list of user-supplied arguments.</p>
     */
    inline SupportedProductConfig& AddArgs(const Aws::String& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    /**
     * <p>The list of user-supplied arguments.</p>
     */
    inline SupportedProductConfig& AddArgs(Aws::String&& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    /**
     * <p>The list of user-supplied arguments.</p>
     */
    inline SupportedProductConfig& AddArgs(const char* value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
