/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Table.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a version of a table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TableVersion">AWS
   * API Reference</a></p>
   */
  class TableVersion
  {
  public:
    AWS_GLUE_API TableVersion();
    AWS_GLUE_API TableVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The table in question.</p>
     */
    inline const Table& GetTable() const{ return m_table; }

    /**
     * <p>The table in question.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>The table in question.</p>
     */
    inline void SetTable(const Table& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The table in question.</p>
     */
    inline void SetTable(Table&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>The table in question.</p>
     */
    inline TableVersion& WithTable(const Table& value) { SetTable(value); return *this;}

    /**
     * <p>The table in question.</p>
     */
    inline TableVersion& WithTable(Table&& value) { SetTable(std::move(value)); return *this;}


    /**
     * <p>The ID value that identifies this table version. A <code>VersionId</code> is
     * a string representation of an integer. Each version is incremented by 1.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The ID value that identifies this table version. A <code>VersionId</code> is
     * a string representation of an integer. Each version is incremented by 1.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The ID value that identifies this table version. A <code>VersionId</code> is
     * a string representation of an integer. Each version is incremented by 1.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The ID value that identifies this table version. A <code>VersionId</code> is
     * a string representation of an integer. Each version is incremented by 1.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The ID value that identifies this table version. A <code>VersionId</code> is
     * a string representation of an integer. Each version is incremented by 1.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The ID value that identifies this table version. A <code>VersionId</code> is
     * a string representation of an integer. Each version is incremented by 1.</p>
     */
    inline TableVersion& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The ID value that identifies this table version. A <code>VersionId</code> is
     * a string representation of an integer. Each version is incremented by 1.</p>
     */
    inline TableVersion& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID value that identifies this table version. A <code>VersionId</code> is
     * a string representation of an integer. Each version is incremented by 1.</p>
     */
    inline TableVersion& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Table m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
