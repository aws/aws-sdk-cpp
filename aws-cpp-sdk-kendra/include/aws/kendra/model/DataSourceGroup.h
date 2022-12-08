/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Data source information for user context filtering.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DataSourceGroup">AWS
   * API Reference</a></p>
   */
  class DataSourceGroup
  {
  public:
    AWS_KENDRA_API DataSourceGroup();
    AWS_KENDRA_API DataSourceGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DataSourceGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the group you want to add to your list of groups. This is
     * for filtering search results based on the groups' access to documents.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier of the group you want to add to your list of groups. This is
     * for filtering search results based on the groups' access to documents.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The identifier of the group you want to add to your list of groups. This is
     * for filtering search results based on the groups' access to documents.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The identifier of the group you want to add to your list of groups. This is
     * for filtering search results based on the groups' access to documents.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The identifier of the group you want to add to your list of groups. This is
     * for filtering search results based on the groups' access to documents.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The identifier of the group you want to add to your list of groups. This is
     * for filtering search results based on the groups' access to documents.</p>
     */
    inline DataSourceGroup& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier of the group you want to add to your list of groups. This is
     * for filtering search results based on the groups' access to documents.</p>
     */
    inline DataSourceGroup& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the group you want to add to your list of groups. This is
     * for filtering search results based on the groups' access to documents.</p>
     */
    inline DataSourceGroup& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The identifier of the data source group you want to add to your list of data
     * source groups. This is for filtering search results based on the groups' access
     * to documents in that data source.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the data source group you want to add to your list of data
     * source groups. This is for filtering search results based on the groups' access
     * to documents in that data source.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The identifier of the data source group you want to add to your list of data
     * source groups. This is for filtering search results based on the groups' access
     * to documents in that data source.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The identifier of the data source group you want to add to your list of data
     * source groups. This is for filtering search results based on the groups' access
     * to documents in that data source.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the data source group you want to add to your list of data
     * source groups. This is for filtering search results based on the groups' access
     * to documents in that data source.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the data source group you want to add to your list of data
     * source groups. This is for filtering search results based on the groups' access
     * to documents in that data source.</p>
     */
    inline DataSourceGroup& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the data source group you want to add to your list of data
     * source groups. This is for filtering search results based on the groups' access
     * to documents in that data source.</p>
     */
    inline DataSourceGroup& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source group you want to add to your list of data
     * source groups. This is for filtering search results based on the groups' access
     * to documents in that data source.</p>
     */
    inline DataSourceGroup& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
