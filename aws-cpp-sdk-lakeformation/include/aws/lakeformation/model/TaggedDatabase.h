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
    AWS_LAKEFORMATION_API TaggedDatabase();
    AWS_LAKEFORMATION_API TaggedDatabase(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TaggedDatabase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A database that has LF-tags attached to it.</p>
     */
    inline const DatabaseResource& GetDatabase() const{ return m_database; }

    /**
     * <p>A database that has LF-tags attached to it.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>A database that has LF-tags attached to it.</p>
     */
    inline void SetDatabase(const DatabaseResource& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>A database that has LF-tags attached to it.</p>
     */
    inline void SetDatabase(DatabaseResource&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>A database that has LF-tags attached to it.</p>
     */
    inline TaggedDatabase& WithDatabase(const DatabaseResource& value) { SetDatabase(value); return *this;}

    /**
     * <p>A database that has LF-tags attached to it.</p>
     */
    inline TaggedDatabase& WithDatabase(DatabaseResource&& value) { SetDatabase(std::move(value)); return *this;}


    /**
     * <p>A list of LF-tags attached to the database.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTags() const{ return m_lFTags; }

    /**
     * <p>A list of LF-tags attached to the database.</p>
     */
    inline bool LFTagsHasBeenSet() const { return m_lFTagsHasBeenSet; }

    /**
     * <p>A list of LF-tags attached to the database.</p>
     */
    inline void SetLFTags(const Aws::Vector<LFTagPair>& value) { m_lFTagsHasBeenSet = true; m_lFTags = value; }

    /**
     * <p>A list of LF-tags attached to the database.</p>
     */
    inline void SetLFTags(Aws::Vector<LFTagPair>&& value) { m_lFTagsHasBeenSet = true; m_lFTags = std::move(value); }

    /**
     * <p>A list of LF-tags attached to the database.</p>
     */
    inline TaggedDatabase& WithLFTags(const Aws::Vector<LFTagPair>& value) { SetLFTags(value); return *this;}

    /**
     * <p>A list of LF-tags attached to the database.</p>
     */
    inline TaggedDatabase& WithLFTags(Aws::Vector<LFTagPair>&& value) { SetLFTags(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tags attached to the database.</p>
     */
    inline TaggedDatabase& AddLFTags(const LFTagPair& value) { m_lFTagsHasBeenSet = true; m_lFTags.push_back(value); return *this; }

    /**
     * <p>A list of LF-tags attached to the database.</p>
     */
    inline TaggedDatabase& AddLFTags(LFTagPair&& value) { m_lFTagsHasBeenSet = true; m_lFTags.push_back(std::move(value)); return *this; }

  private:

    DatabaseResource m_database;
    bool m_databaseHasBeenSet = false;

    Aws::Vector<LFTagPair> m_lFTags;
    bool m_lFTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
