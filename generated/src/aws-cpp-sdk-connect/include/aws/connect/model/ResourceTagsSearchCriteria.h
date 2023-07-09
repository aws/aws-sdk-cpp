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
    AWS_CONNECT_API ResourceTagsSearchCriteria();
    AWS_CONNECT_API ResourceTagsSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ResourceTagsSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The search criteria to be used to return tags.</p>
     */
    inline const TagSearchCondition& GetTagSearchCondition() const{ return m_tagSearchCondition; }

    /**
     * <p>The search criteria to be used to return tags.</p>
     */
    inline bool TagSearchConditionHasBeenSet() const { return m_tagSearchConditionHasBeenSet; }

    /**
     * <p>The search criteria to be used to return tags.</p>
     */
    inline void SetTagSearchCondition(const TagSearchCondition& value) { m_tagSearchConditionHasBeenSet = true; m_tagSearchCondition = value; }

    /**
     * <p>The search criteria to be used to return tags.</p>
     */
    inline void SetTagSearchCondition(TagSearchCondition&& value) { m_tagSearchConditionHasBeenSet = true; m_tagSearchCondition = std::move(value); }

    /**
     * <p>The search criteria to be used to return tags.</p>
     */
    inline ResourceTagsSearchCriteria& WithTagSearchCondition(const TagSearchCondition& value) { SetTagSearchCondition(value); return *this;}

    /**
     * <p>The search criteria to be used to return tags.</p>
     */
    inline ResourceTagsSearchCriteria& WithTagSearchCondition(TagSearchCondition&& value) { SetTagSearchCondition(std::move(value)); return *this;}

  private:

    TagSearchCondition m_tagSearchCondition;
    bool m_tagSearchConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
