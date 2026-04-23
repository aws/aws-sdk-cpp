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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Additional information provided by the administrator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UsageInstruction">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API UsageInstruction
  {
  public:
    UsageInstruction();
    UsageInstruction(Aws::Utils::Json::JsonView jsonValue);
    UsageInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The usage instruction type for the value.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The usage instruction type for the value.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The usage instruction type for the value.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The usage instruction type for the value.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The usage instruction type for the value.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The usage instruction type for the value.</p>
     */
    inline UsageInstruction& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The usage instruction type for the value.</p>
     */
    inline UsageInstruction& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The usage instruction type for the value.</p>
     */
    inline UsageInstruction& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The usage instruction value for this type.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The usage instruction value for this type.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The usage instruction value for this type.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The usage instruction value for this type.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The usage instruction value for this type.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The usage instruction value for this type.</p>
     */
    inline UsageInstruction& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The usage instruction value for this type.</p>
     */
    inline UsageInstruction& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The usage instruction value for this type.</p>
     */
    inline UsageInstruction& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
