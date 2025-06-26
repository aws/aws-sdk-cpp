/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/CdcStatus.h>
#include <aws/keyspaces/model/ViewType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/CdcPropagateTags.h>
#include <aws/keyspaces/model/Tag.h>
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
   * <p>The settings for the CDC stream of a table. For more information about CDC
   * streams, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cdc.html">Working
   * with change data capture (CDC) streams in Amazon Keyspaces</a> in the <i>Amazon
   * Keyspaces Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/CdcSpecification">AWS
   * API Reference</a></p>
   */
  class CdcSpecification
  {
  public:
    AWS_KEYSPACES_API CdcSpecification() = default;
    AWS_KEYSPACES_API CdcSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API CdcSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the CDC stream. You can enable or disable a stream for a
     * table.</p>
     */
    inline CdcStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CdcStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CdcSpecification& WithStatus(CdcStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The view type specifies the changes Amazon Keyspaces records for each changed
     * row in the stream. After you create the stream, you can't make changes to this
     * selection. </p> <p>The options are:</p> <ul> <li> <p>
     * <code>NEW_AND_OLD_IMAGES</code> - both versions of the row, before and after the
     * change. This is the default.</p> </li> <li> <p> <code>NEW_IMAGE</code> - the
     * version of the row after the change.</p> </li> <li> <p> <code>OLD_IMAGE</code> -
     * the version of the row before the change.</p> </li> <li> <p>
     * <code>KEYS_ONLY</code> - the partition and clustering keys of the row that was
     * changed.</p> </li> </ul>
     */
    inline ViewType GetViewType() const { return m_viewType; }
    inline bool ViewTypeHasBeenSet() const { return m_viewTypeHasBeenSet; }
    inline void SetViewType(ViewType value) { m_viewTypeHasBeenSet = true; m_viewType = value; }
    inline CdcSpecification& WithViewType(ViewType value) { SetViewType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags (key-value pairs) that you want to apply to the stream.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CdcSpecification& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CdcSpecification& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies that the stream inherits the tags from the table.</p>
     */
    inline CdcPropagateTags GetPropagateTags() const { return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(CdcPropagateTags value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline CdcSpecification& WithPropagateTags(CdcPropagateTags value) { SetPropagateTags(value); return *this;}
    ///@}
  private:

    CdcStatus m_status{CdcStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ViewType m_viewType{ViewType::NOT_SET};
    bool m_viewTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    CdcPropagateTags m_propagateTags{CdcPropagateTags::NOT_SET};
    bool m_propagateTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
