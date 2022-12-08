/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>The filter to use for searching devices.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchDevicesFilter">AWS
   * API Reference</a></p>
   */
  class SearchDevicesFilter
  {
  public:
    AWS_BRAKET_API SearchDevicesFilter();
    AWS_BRAKET_API SearchDevicesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API SearchDevicesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name to use to filter results.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to use to filter results.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name to use to filter results.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name to use to filter results.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name to use to filter results.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name to use to filter results.</p>
     */
    inline SearchDevicesFilter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to use to filter results.</p>
     */
    inline SearchDevicesFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to use to filter results.</p>
     */
    inline SearchDevicesFilter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The values to use to filter results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values to use to filter results.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values to use to filter results.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values to use to filter results.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values to use to filter results.</p>
     */
    inline SearchDevicesFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values to use to filter results.</p>
     */
    inline SearchDevicesFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values to use to filter results.</p>
     */
    inline SearchDevicesFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values to use to filter results.</p>
     */
    inline SearchDevicesFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values to use to filter results.</p>
     */
    inline SearchDevicesFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
