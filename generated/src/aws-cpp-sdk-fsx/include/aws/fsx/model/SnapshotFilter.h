/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapshotFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>A filter used to restrict the results of <code>DescribeSnapshots</code>
   * calls. You can use multiple filters to return results that meet all applied
   * filter requirements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapshotFilter">AWS
   * API Reference</a></p>
   */
  class SnapshotFilter
  {
  public:
    AWS_FSX_API SnapshotFilter();
    AWS_FSX_API SnapshotFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SnapshotFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter to use. You can filter by the
     * <code>file-system-id</code> or by <code>volume-id</code>.</p>
     */
    inline const SnapshotFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter to use. You can filter by the
     * <code>file-system-id</code> or by <code>volume-id</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter to use. You can filter by the
     * <code>file-system-id</code> or by <code>volume-id</code>.</p>
     */
    inline void SetName(const SnapshotFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter to use. You can filter by the
     * <code>file-system-id</code> or by <code>volume-id</code>.</p>
     */
    inline void SetName(SnapshotFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter to use. You can filter by the
     * <code>file-system-id</code> or by <code>volume-id</code>.</p>
     */
    inline SnapshotFilter& WithName(const SnapshotFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter to use. You can filter by the
     * <code>file-system-id</code> or by <code>volume-id</code>.</p>
     */
    inline SnapshotFilter& WithName(SnapshotFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The <code>file-system-id</code> or <code>volume-id</code> that you are
     * filtering for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The <code>file-system-id</code> or <code>volume-id</code> that you are
     * filtering for.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The <code>file-system-id</code> or <code>volume-id</code> that you are
     * filtering for.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The <code>file-system-id</code> or <code>volume-id</code> that you are
     * filtering for.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The <code>file-system-id</code> or <code>volume-id</code> that you are
     * filtering for.</p>
     */
    inline SnapshotFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The <code>file-system-id</code> or <code>volume-id</code> that you are
     * filtering for.</p>
     */
    inline SnapshotFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The <code>file-system-id</code> or <code>volume-id</code> that you are
     * filtering for.</p>
     */
    inline SnapshotFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The <code>file-system-id</code> or <code>volume-id</code> that you are
     * filtering for.</p>
     */
    inline SnapshotFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The <code>file-system-id</code> or <code>volume-id</code> that you are
     * filtering for.</p>
     */
    inline SnapshotFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    SnapshotFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
