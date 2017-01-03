﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteClusterParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DeleteClusterParameterGroupRequest : public RedshiftRequest
  {
  public:
    DeleteClusterParameterGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the parameter group to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>Cannot delete a default cluster parameter group.</p> </li> </ul>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the parameter group to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>Cannot delete a default cluster parameter group.</p> </li> </ul>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the parameter group to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>Cannot delete a default cluster parameter group.</p> </li> </ul>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the parameter group to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>Cannot delete a default cluster parameter group.</p> </li> </ul>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the parameter group to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>Cannot delete a default cluster parameter group.</p> </li> </ul>
     */
    inline DeleteClusterParameterGroupRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>Cannot delete a default cluster parameter group.</p> </li> </ul>
     */
    inline DeleteClusterParameterGroupRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>Cannot delete a default cluster parameter group.</p> </li> </ul>
     */
    inline DeleteClusterParameterGroupRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}

  private:
    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
