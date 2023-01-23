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
    AWS_LAKEFORMATION_API ColumnLFTag();
    AWS_LAKEFORMATION_API ColumnLFTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API ColumnLFTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a column resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a column resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a column resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a column resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a column resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a column resource.</p>
     */
    inline ColumnLFTag& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a column resource.</p>
     */
    inline ColumnLFTag& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a column resource.</p>
     */
    inline ColumnLFTag& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The LF-tags attached to a column resource.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTags() const{ return m_lFTags; }

    /**
     * <p>The LF-tags attached to a column resource.</p>
     */
    inline bool LFTagsHasBeenSet() const { return m_lFTagsHasBeenSet; }

    /**
     * <p>The LF-tags attached to a column resource.</p>
     */
    inline void SetLFTags(const Aws::Vector<LFTagPair>& value) { m_lFTagsHasBeenSet = true; m_lFTags = value; }

    /**
     * <p>The LF-tags attached to a column resource.</p>
     */
    inline void SetLFTags(Aws::Vector<LFTagPair>&& value) { m_lFTagsHasBeenSet = true; m_lFTags = std::move(value); }

    /**
     * <p>The LF-tags attached to a column resource.</p>
     */
    inline ColumnLFTag& WithLFTags(const Aws::Vector<LFTagPair>& value) { SetLFTags(value); return *this;}

    /**
     * <p>The LF-tags attached to a column resource.</p>
     */
    inline ColumnLFTag& WithLFTags(Aws::Vector<LFTagPair>&& value) { SetLFTags(std::move(value)); return *this;}

    /**
     * <p>The LF-tags attached to a column resource.</p>
     */
    inline ColumnLFTag& AddLFTags(const LFTagPair& value) { m_lFTagsHasBeenSet = true; m_lFTags.push_back(value); return *this; }

    /**
     * <p>The LF-tags attached to a column resource.</p>
     */
    inline ColumnLFTag& AddLFTags(LFTagPair&& value) { m_lFTagsHasBeenSet = true; m_lFTags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<LFTagPair> m_lFTags;
    bool m_lFTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
