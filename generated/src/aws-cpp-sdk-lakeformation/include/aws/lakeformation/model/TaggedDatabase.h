/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/DatabaseResource.h>
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
   * <p>A structure describing a database resource with LF-tags.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/TaggedDatabase">AWS
   * API Reference</a></p>
   */
  class TaggedDatabase
  {
  public:
    AWS_LAKEFORMATION_API TaggedDatabase() = default;
    AWS_LAKEFORMATION_API TaggedDatabase(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TaggedDatabase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A database that has LF-tags attached to it.</p>
     */
    inline const DatabaseResource& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = DatabaseResource>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = DatabaseResource>
    TaggedDatabase& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of LF-tags attached to the database.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTags() const { return m_lFTags; }
    inline bool LFTagsHasBeenSet() const { return m_lFTagsHasBeenSet; }
    template<typename LFTagsT = Aws::Vector<LFTagPair>>
    void SetLFTags(LFTagsT&& value) { m_lFTagsHasBeenSet = true; m_lFTags = std::forward<LFTagsT>(value); }
    template<typename LFTagsT = Aws::Vector<LFTagPair>>
    TaggedDatabase& WithLFTags(LFTagsT&& value) { SetLFTags(std::forward<LFTagsT>(value)); return *this;}
    template<typename LFTagsT = LFTagPair>
    TaggedDatabase& AddLFTags(LFTagsT&& value) { m_lFTagsHasBeenSet = true; m_lFTags.emplace_back(std::forward<LFTagsT>(value)); return *this; }
    ///@}
  private:

    DatabaseResource m_database;
    bool m_databaseHasBeenSet = false;

    Aws::Vector<LFTagPair> m_lFTags;
    bool m_lFTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
