/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostAllocationTagStatus.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The cost allocation tag status. The status of a key can either be active or
   * inactive. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostAllocationTagStatusEntry">AWS
   * API Reference</a></p>
   */
  class CostAllocationTagStatusEntry
  {
  public:
    AWS_COSTEXPLORER_API CostAllocationTagStatusEntry() = default;
    AWS_COSTEXPLORER_API CostAllocationTagStatusEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostAllocationTagStatusEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key for the cost allocation tag. </p>
     */
    inline const Aws::String& GetTagKey() const { return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    template<typename TagKeyT = Aws::String>
    void SetTagKey(TagKeyT&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::forward<TagKeyT>(value); }
    template<typename TagKeyT = Aws::String>
    CostAllocationTagStatusEntry& WithTagKey(TagKeyT&& value) { SetTagKey(std::forward<TagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a cost allocation tag. </p>
     */
    inline CostAllocationTagStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CostAllocationTagStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CostAllocationTagStatusEntry& WithStatus(CostAllocationTagStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    CostAllocationTagStatus m_status{CostAllocationTagStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
