/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/VariableValue.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>This structure contains the name and variation value of one variation of a
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/VariationConfig">AWS
   * API Reference</a></p>
   */
  class VariationConfig
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API VariationConfig();
    AWS_CLOUDWATCHEVIDENTLY_API VariationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API VariationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the variation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the variation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the variation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the variation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the variation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the variation.</p>
     */
    inline VariationConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the variation.</p>
     */
    inline VariationConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the variation.</p>
     */
    inline VariationConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value assigned to this variation.</p>
     */
    inline const VariableValue& GetValue() const{ return m_value; }

    /**
     * <p>The value assigned to this variation.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value assigned to this variation.</p>
     */
    inline void SetValue(const VariableValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value assigned to this variation.</p>
     */
    inline void SetValue(VariableValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value assigned to this variation.</p>
     */
    inline VariationConfig& WithValue(const VariableValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value assigned to this variation.</p>
     */
    inline VariationConfig& WithValue(VariableValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VariableValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
