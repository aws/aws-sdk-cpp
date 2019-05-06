/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>DeleteDBSubnetGroup</a>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DeleteDBSubnetGroupRequest : public DocDBRequest
  {
  public:
    DeleteDBSubnetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBSubnetGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You can't
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You can't
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You can't
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You can't
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You can't
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You can't
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline DeleteDBSubnetGroupRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You can't
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline DeleteDBSubnetGroupRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the database subnet group to delete.</p> <note> <p>You can't
     * delete the default subnet group.</p> </note> <p>Constraints:</p> <p>Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline DeleteDBSubnetGroupRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

  private:

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
