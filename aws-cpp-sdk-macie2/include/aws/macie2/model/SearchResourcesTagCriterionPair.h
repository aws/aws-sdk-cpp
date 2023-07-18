﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a tag key, a tag value, or a tag key and value (as a pair) to use
   * in a tag-based filter condition for a query. Tag keys and values are case
   * sensitive. Also, Amazon Macie doesn't support use of partial values or wildcard
   * characters in tag-based filter conditions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SearchResourcesTagCriterionPair">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API SearchResourcesTagCriterionPair
  {
  public:
    SearchResourcesTagCriterionPair();
    SearchResourcesTagCriterionPair(Aws::Utils::Json::JsonView jsonValue);
    SearchResourcesTagCriterionPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline SearchResourcesTagCriterionPair& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline SearchResourcesTagCriterionPair& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The value for the tag key to use in the condition.</p>
     */
    inline SearchResourcesTagCriterionPair& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The tag value to use in the condition.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The tag value to use in the condition.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The tag value to use in the condition.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The tag value to use in the condition.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The tag value to use in the condition.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The tag value to use in the condition.</p>
     */
    inline SearchResourcesTagCriterionPair& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The tag value to use in the condition.</p>
     */
    inline SearchResourcesTagCriterionPair& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The tag value to use in the condition.</p>
     */
    inline SearchResourcesTagCriterionPair& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
