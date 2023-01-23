/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/SortOrder.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The optional clustering column portion of your primary key determines how the
   * data is clustered and sorted within each partition.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ClusteringKey">AWS
   * API Reference</a></p>
   */
  class ClusteringKey
  {
  public:
    AWS_KEYSPACES_API ClusteringKey();
    AWS_KEYSPACES_API ClusteringKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ClusteringKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name(s) of the clustering column(s).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name(s) of the clustering column(s).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name(s) of the clustering column(s).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name(s) of the clustering column(s).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name(s) of the clustering column(s).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name(s) of the clustering column(s).</p>
     */
    inline ClusteringKey& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name(s) of the clustering column(s).</p>
     */
    inline ClusteringKey& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name(s) of the clustering column(s).</p>
     */
    inline ClusteringKey& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Sets the ascendant (<code>ASC</code>) or descendant (<code>DESC</code>) order
     * modifier.</p>
     */
    inline const SortOrder& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>Sets the ascendant (<code>ASC</code>) or descendant (<code>DESC</code>) order
     * modifier.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>Sets the ascendant (<code>ASC</code>) or descendant (<code>DESC</code>) order
     * modifier.</p>
     */
    inline void SetOrderBy(const SortOrder& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>Sets the ascendant (<code>ASC</code>) or descendant (<code>DESC</code>) order
     * modifier.</p>
     */
    inline void SetOrderBy(SortOrder&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>Sets the ascendant (<code>ASC</code>) or descendant (<code>DESC</code>) order
     * modifier.</p>
     */
    inline ClusteringKey& WithOrderBy(const SortOrder& value) { SetOrderBy(value); return *this;}

    /**
     * <p>Sets the ascendant (<code>ASC</code>) or descendant (<code>DESC</code>) order
     * modifier.</p>
     */
    inline ClusteringKey& WithOrderBy(SortOrder&& value) { SetOrderBy(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SortOrder m_orderBy;
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
