/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents the input to <a>DeleteDBClusterParameterGroup</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBClusterParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class DeleteDBClusterParameterGroupRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API DeleteDBClusterParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBClusterParameterGroup"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default cluster parameter group.</p> </li> <li> <p>Cannot
     * be associated with any clusters.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default cluster parameter group.</p> </li> <li> <p>Cannot
     * be associated with any clusters.</p> </li> </ul>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default cluster parameter group.</p> </li> <li> <p>Cannot
     * be associated with any clusters.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default cluster parameter group.</p> </li> <li> <p>Cannot
     * be associated with any clusters.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default cluster parameter group.</p> </li> <li> <p>Cannot
     * be associated with any clusters.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default cluster parameter group.</p> </li> <li> <p>Cannot
     * be associated with any clusters.</p> </li> </ul>
     */
    inline DeleteDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default cluster parameter group.</p> </li> <li> <p>Cannot
     * be associated with any clusters.</p> </li> </ul>
     */
    inline DeleteDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default cluster parameter group.</p> </li> <li> <p>Cannot
     * be associated with any clusters.</p> </li> </ul>
     */
    inline DeleteDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}

  private:

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
