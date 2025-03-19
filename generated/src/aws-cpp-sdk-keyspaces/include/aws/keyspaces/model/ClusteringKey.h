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
    AWS_KEYSPACES_API ClusteringKey() = default;
    AWS_KEYSPACES_API ClusteringKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ClusteringKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name(s) of the clustering column(s).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ClusteringKey& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the ascendant (<code>ASC</code>) or descendant (<code>DESC</code>) order
     * modifier.</p>
     */
    inline SortOrder GetOrderBy() const { return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    inline void SetOrderBy(SortOrder value) { m_orderByHasBeenSet = true; m_orderBy = value; }
    inline ClusteringKey& WithOrderBy(SortOrder value) { SetOrderBy(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SortOrder m_orderBy{SortOrder::NOT_SET};
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
