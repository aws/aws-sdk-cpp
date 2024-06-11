/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Comparator.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines a property predicate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PropertyPredicate">AWS
   * API Reference</a></p>
   */
  class PropertyPredicate
  {
  public:
    AWS_GLUE_API PropertyPredicate();
    AWS_GLUE_API PropertyPredicate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API PropertyPredicate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the property.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline PropertyPredicate& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline PropertyPredicate& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline PropertyPredicate& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the property.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline PropertyPredicate& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline PropertyPredicate& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline PropertyPredicate& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparator used to compare this property to others.</p>
     */
    inline const Comparator& GetComparator() const{ return m_comparator; }
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
    inline void SetComparator(const Comparator& value) { m_comparatorHasBeenSet = true; m_comparator = value; }
    inline void SetComparator(Comparator&& value) { m_comparatorHasBeenSet = true; m_comparator = std::move(value); }
    inline PropertyPredicate& WithComparator(const Comparator& value) { SetComparator(value); return *this;}
    inline PropertyPredicate& WithComparator(Comparator&& value) { SetComparator(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Comparator m_comparator;
    bool m_comparatorHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
