/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The search criteria based on user-defned contact attribute key and values to
   * search on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchableContactAttributesCriteria">AWS
   * API Reference</a></p>
   */
  class SearchableContactAttributesCriteria
  {
  public:
    AWS_CONNECT_API SearchableContactAttributesCriteria();
    AWS_CONNECT_API SearchableContactAttributesCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchableContactAttributesCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key containing a searchable user-defined contact attribute.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key containing a searchable user-defined contact attribute.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key containing a searchable user-defined contact attribute.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key containing a searchable user-defined contact attribute.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key containing a searchable user-defined contact attribute.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key containing a searchable user-defined contact attribute.</p>
     */
    inline SearchableContactAttributesCriteria& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key containing a searchable user-defined contact attribute.</p>
     */
    inline SearchableContactAttributesCriteria& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key containing a searchable user-defined contact attribute.</p>
     */
    inline SearchableContactAttributesCriteria& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The list of values to search for within a user-defined contact attribute.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The list of values to search for within a user-defined contact attribute.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The list of values to search for within a user-defined contact attribute.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The list of values to search for within a user-defined contact attribute.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The list of values to search for within a user-defined contact attribute.</p>
     */
    inline SearchableContactAttributesCriteria& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The list of values to search for within a user-defined contact attribute.</p>
     */
    inline SearchableContactAttributesCriteria& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The list of values to search for within a user-defined contact attribute.</p>
     */
    inline SearchableContactAttributesCriteria& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The list of values to search for within a user-defined contact attribute.</p>
     */
    inline SearchableContactAttributesCriteria& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of values to search for within a user-defined contact attribute.</p>
     */
    inline SearchableContactAttributesCriteria& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
