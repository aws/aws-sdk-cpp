/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>Returns the name of the specified table, the keyspace it is stored in, and
   * the unique identifier in the format of an Amazon Resource Name
   * (ARN).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/TableSummary">AWS
   * API Reference</a></p>
   */
  class TableSummary
  {
  public:
    AWS_KEYSPACES_API TableSummary();
    AWS_KEYSPACES_API TableSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API TableSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the keyspace that the table is stored in.</p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = value; }
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::move(value); }
    inline void SetKeyspaceName(const char* value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName.assign(value); }
    inline TableSummary& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}
    inline TableSummary& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}
    inline TableSummary& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline TableSummary& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline TableSummary& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline TableSummary& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the table in the format of an Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline TableSummary& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline TableSummary& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline TableSummary& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
