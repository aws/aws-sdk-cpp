/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TagSearchCondition.h>
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
   * <p>The search criteria to be used to search tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ResourceTagsSearchCriteria">AWS
   * API Reference</a></p>
   */
  class ResourceTagsSearchCriteria
  {
  public:
    AWS_CONNECT_API ResourceTagsSearchCriteria() = default;
    AWS_CONNECT_API ResourceTagsSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ResourceTagsSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The search criteria to be used to return tags.</p>
     */
    inline const TagSearchCondition& GetTagSearchCondition() const { return m_tagSearchCondition; }
    inline bool TagSearchConditionHasBeenSet() const { return m_tagSearchConditionHasBeenSet; }
    template<typename TagSearchConditionT = TagSearchCondition>
    void SetTagSearchCondition(TagSearchConditionT&& value) { m_tagSearchConditionHasBeenSet = true; m_tagSearchCondition = std::forward<TagSearchConditionT>(value); }
    template<typename TagSearchConditionT = TagSearchCondition>
    ResourceTagsSearchCriteria& WithTagSearchCondition(TagSearchConditionT&& value) { SetTagSearchCondition(std::forward<TagSearchConditionT>(value)); return *this;}
    ///@}
  private:

    TagSearchCondition m_tagSearchCondition;
    bool m_tagSearchConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
