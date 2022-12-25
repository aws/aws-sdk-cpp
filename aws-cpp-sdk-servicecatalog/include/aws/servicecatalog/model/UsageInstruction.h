/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UsageInstruction
  {
  public:
    AWS_SERVICECATALOG_API UsageInstruction();
    AWS_SERVICECATALOG_API UsageInstruction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API UsageInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
