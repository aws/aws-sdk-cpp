/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/LFTagPair.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure containing the name of a column resource and the LF-tags attached
   * to it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ColumnLFTag">AWS
   * API Reference</a></p>
   */
  class ColumnLFTag
  {
  public:
    AWS_LAKEFORMATION_API ColumnLFTag() = default;
    AWS_LAKEFORMATION_API ColumnLFTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API ColumnLFTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a column resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ColumnLFTag& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LF-tags attached to a column resource.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTags() const { return m_lFTags; }
    inline bool LFTagsHasBeenSet() const { return m_lFTagsHasBeenSet; }
    template<typename LFTagsT = Aws::Vector<LFTagPair>>
    void SetLFTags(LFTagsT&& value) { m_lFTagsHasBeenSet = true; m_lFTags = std::forward<LFTagsT>(value); }
    template<typename LFTagsT = Aws::Vector<LFTagPair>>
    ColumnLFTag& WithLFTags(LFTagsT&& value) { SetLFTags(std::forward<LFTagsT>(value)); return *this;}
    template<typename LFTagsT = LFTagPair>
    ColumnLFTag& AddLFTags(LFTagsT&& value) { m_lFTagsHasBeenSet = true; m_lFTags.emplace_back(std::forward<LFTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<LFTagPair> m_lFTags;
    bool m_lFTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
