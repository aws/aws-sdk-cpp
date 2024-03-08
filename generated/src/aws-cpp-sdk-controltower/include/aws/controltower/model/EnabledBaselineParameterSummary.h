/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>Summary of an applied parameter to an <code>EnabledBaseline</code> resource.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledBaselineParameterSummary">AWS
   * API Reference</a></p>
   */
  class EnabledBaselineParameterSummary
  {
  public:
    AWS_CONTROLTOWER_API EnabledBaselineParameterSummary();
    AWS_CONTROLTOWER_API EnabledBaselineParameterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledBaselineParameterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string denoting the parameter key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A string denoting the parameter key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A string denoting the parameter key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A string denoting the parameter key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A string denoting the parameter key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A string denoting the parameter key.</p>
     */
    inline EnabledBaselineParameterSummary& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A string denoting the parameter key.</p>
     */
    inline EnabledBaselineParameterSummary& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A string denoting the parameter key.</p>
     */
    inline EnabledBaselineParameterSummary& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>A low-level document object of any type (for example, a Java Object).</p>
     */
    inline Aws::Utils::DocumentView GetValue() const{ return m_value; }

    /**
     * <p>A low-level document object of any type (for example, a Java Object).</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A low-level document object of any type (for example, a Java Object).</p>
     */
    inline void SetValue(const Aws::Utils::Document& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A low-level document object of any type (for example, a Java Object).</p>
     */
    inline void SetValue(Aws::Utils::Document&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A low-level document object of any type (for example, a Java Object).</p>
     */
    inline EnabledBaselineParameterSummary& WithValue(const Aws::Utils::Document& value) { SetValue(value); return *this;}

    /**
     * <p>A low-level document object of any type (for example, a Java Object).</p>
     */
    inline EnabledBaselineParameterSummary& WithValue(Aws::Utils::Document&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
