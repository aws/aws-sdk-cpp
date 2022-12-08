/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
  class DeleteClusterParameterGroupRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DeleteClusterParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteClusterParameterGroup"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

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
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

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
    inline DeleteClusterParameterGroupRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group to be deleted.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be the name of an existing cluster parameter group.</p> </li> <li>
     * <p>Cannot delete a default cluster parameter group.</p> </li> </ul>
     */
    inline DeleteClusterParameterGroupRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
