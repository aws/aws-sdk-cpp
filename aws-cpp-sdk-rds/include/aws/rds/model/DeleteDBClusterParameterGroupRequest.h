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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBClusterParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DeleteDBClusterParameterGroupRequest : public RDSRequest
  {
  public:
    DeleteDBClusterParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBClusterParameterGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Can't be associated with any DB clusters.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Can't be associated with any DB clusters.</p> </li> </ul>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Can't be associated with any DB clusters.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Can't be associated with any DB clusters.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Can't be associated with any DB clusters.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Can't be associated with any DB clusters.</p> </li> </ul>
     */
    inline DeleteDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Can't be associated with any DB clusters.</p> </li> </ul>
     */
    inline DeleteDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Can't be associated with any DB clusters.</p> </li> </ul>
     */
    inline DeleteDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}

  private:

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
