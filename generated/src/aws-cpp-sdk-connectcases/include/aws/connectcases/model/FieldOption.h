/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Object for field Options information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldOption">AWS
   * API Reference</a></p>
   */
  class FieldOption
  {
  public:
    AWS_CONNECTCASES_API FieldOption();
    AWS_CONNECTCASES_API FieldOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API FieldOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether the <code>FieldOption</code> is active (displayed) or
     * inactive.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Describes whether the <code>FieldOption</code> is active (displayed) or
     * inactive.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Describes whether the <code>FieldOption</code> is active (displayed) or
     * inactive.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Describes whether the <code>FieldOption</code> is active (displayed) or
     * inactive.</p>
     */
    inline FieldOption& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p> <code>FieldOptionName</code> has max length 100 and disallows trailing
     * spaces.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> <code>FieldOptionName</code> has max length 100 and disallows trailing
     * spaces.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> <code>FieldOptionName</code> has max length 100 and disallows trailing
     * spaces.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> <code>FieldOptionName</code> has max length 100 and disallows trailing
     * spaces.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> <code>FieldOptionName</code> has max length 100 and disallows trailing
     * spaces.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> <code>FieldOptionName</code> has max length 100 and disallows trailing
     * spaces.</p>
     */
    inline FieldOption& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> <code>FieldOptionName</code> has max length 100 and disallows trailing
     * spaces.</p>
     */
    inline FieldOption& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> <code>FieldOptionName</code> has max length 100 and disallows trailing
     * spaces.</p>
     */
    inline FieldOption& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> <code>FieldOptionValue</code> has max length 100 and must be alphanumeric
     * with hyphens and underscores.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> <code>FieldOptionValue</code> has max length 100 and must be alphanumeric
     * with hyphens and underscores.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> <code>FieldOptionValue</code> has max length 100 and must be alphanumeric
     * with hyphens and underscores.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> <code>FieldOptionValue</code> has max length 100 and must be alphanumeric
     * with hyphens and underscores.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> <code>FieldOptionValue</code> has max length 100 and must be alphanumeric
     * with hyphens and underscores.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> <code>FieldOptionValue</code> has max length 100 and must be alphanumeric
     * with hyphens and underscores.</p>
     */
    inline FieldOption& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> <code>FieldOptionValue</code> has max length 100 and must be alphanumeric
     * with hyphens and underscores.</p>
     */
    inline FieldOption& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> <code>FieldOptionValue</code> has max length 100 and must be alphanumeric
     * with hyphens and underscores.</p>
     */
    inline FieldOption& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    bool m_active;
    bool m_activeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
