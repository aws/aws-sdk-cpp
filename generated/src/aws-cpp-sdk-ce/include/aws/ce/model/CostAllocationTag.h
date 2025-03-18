/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostAllocationTagType.h>
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
   * <p>The cost allocation tag structure. This includes detailed metadata for the
   * <code>CostAllocationTag</code> object. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostAllocationTag">AWS
   * API Reference</a></p>
   */
  class CostAllocationTag
  {
  public:
    AWS_COSTEXPLORER_API CostAllocationTag() = default;
    AWS_COSTEXPLORER_API CostAllocationTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostAllocationTag& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    CostAllocationTag& WithTagKey(TagKeyT&& value) { SetTagKey(std::forward<TagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of cost allocation tag. You can use <code>AWSGenerated</code> or
     * <code>UserDefined</code> type tags. <code>AWSGenerated</code> type tags are tags
     * that Amazon Web Services defines and applies to support Amazon Web Services
     * resources for cost allocation purposes. <code>UserDefined</code> type tags are
     * tags that you define, create, and apply to resources. </p>
     */
    inline CostAllocationTagType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CostAllocationTagType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CostAllocationTag& WithType(CostAllocationTagType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a cost allocation tag. </p>
     */
    inline CostAllocationTagStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CostAllocationTagStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CostAllocationTag& WithStatus(CostAllocationTagStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date that the tag was either activated or deactivated.</p>
     */
    inline const Aws::String& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    template<typename LastUpdatedDateT = Aws::String>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::String>
    CostAllocationTag& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last month that the tag was used on an Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetLastUsedDate() const { return m_lastUsedDate; }
    inline bool LastUsedDateHasBeenSet() const { return m_lastUsedDateHasBeenSet; }
    template<typename LastUsedDateT = Aws::String>
    void SetLastUsedDate(LastUsedDateT&& value) { m_lastUsedDateHasBeenSet = true; m_lastUsedDate = std::forward<LastUsedDateT>(value); }
    template<typename LastUsedDateT = Aws::String>
    CostAllocationTag& WithLastUsedDate(LastUsedDateT&& value) { SetLastUsedDate(std::forward<LastUsedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    CostAllocationTagType m_type{CostAllocationTagType::NOT_SET};
    bool m_typeHasBeenSet = false;

    CostAllocationTagStatus m_status{CostAllocationTagStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::String m_lastUsedDate;
    bool m_lastUsedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
