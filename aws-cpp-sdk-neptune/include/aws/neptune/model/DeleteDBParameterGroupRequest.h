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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API DeleteDBParameterGroupRequest : public NeptuneRequest
  {
  public:
    DeleteDBParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBParameterGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Cannot be associated with any DB
     * instances</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Cannot be associated with any DB
     * instances</p> </li> </ul>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Cannot be associated with any DB
     * instances</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Cannot be associated with any DB
     * instances</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Cannot be associated with any DB
     * instances</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Cannot be associated with any DB
     * instances</p> </li> </ul>
     */
    inline DeleteDBParameterGroupRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Cannot be associated with any DB
     * instances</p> </li> </ul>
     */
    inline DeleteDBParameterGroupRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Cannot be associated with any DB
     * instances</p> </li> </ul>
     */
    inline DeleteDBParameterGroupRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}

  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
