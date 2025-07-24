/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/MatchOffset.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>A structure indicating matched terms for an attribute.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/TextMatchItem">AWS
   * API Reference</a></p>
   */
  class TextMatchItem
  {
  public:
    AWS_DATAZONE_API TextMatchItem() = default;
    AWS_DATAZONE_API TextMatchItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API TextMatchItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the attribute.</p>
     */
    inline const Aws::String& GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    template<typename AttributeT = Aws::String>
    void SetAttribute(AttributeT&& value) { m_attributeHasBeenSet = true; m_attribute = std::forward<AttributeT>(value); }
    template<typename AttributeT = Aws::String>
    TextMatchItem& WithAttribute(AttributeT&& value) { SetAttribute(std::forward<AttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of offsets indicating matching terms in the TextMatchItem text.</p>
     */
    inline const Aws::Vector<MatchOffset>& GetMatchOffsets() const { return m_matchOffsets; }
    inline bool MatchOffsetsHasBeenSet() const { return m_matchOffsetsHasBeenSet; }
    template<typename MatchOffsetsT = Aws::Vector<MatchOffset>>
    void SetMatchOffsets(MatchOffsetsT&& value) { m_matchOffsetsHasBeenSet = true; m_matchOffsets = std::forward<MatchOffsetsT>(value); }
    template<typename MatchOffsetsT = Aws::Vector<MatchOffset>>
    TextMatchItem& WithMatchOffsets(MatchOffsetsT&& value) { SetMatchOffsets(std::forward<MatchOffsetsT>(value)); return *this;}
    template<typename MatchOffsetsT = MatchOffset>
    TextMatchItem& AddMatchOffsets(MatchOffsetsT&& value) { m_matchOffsetsHasBeenSet = true; m_matchOffsets.emplace_back(std::forward<MatchOffsetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Snippet of attribute text containing highlighted content.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    TextMatchItem& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::Vector<MatchOffset> m_matchOffsets;
    bool m_matchOffsetsHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
