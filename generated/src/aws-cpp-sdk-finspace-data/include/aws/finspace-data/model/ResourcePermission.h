/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>Resource permission for a dataset. When you create a dataset, all the other
   * members of the same user group inherit access to the dataset. You can only
   * create a dataset if your user group has application permission for Create
   * Datasets.</p> <p>The following is a list of valid dataset permissions that you
   * can apply: </p> <ul> <li> <p> <code>ViewDatasetDetails</code> </p> </li> <li>
   * <p> <code>ReadDatasetDetails</code> </p> </li> <li> <p>
   * <code>AddDatasetData</code> </p> </li> <li> <p> <code>CreateDataView</code> </p>
   * </li> <li> <p> <code>EditDatasetMetadata</code> </p> </li> <li> <p>
   * <code>DeleteDataset</code> </p> </li> </ul> <p>For more information on the
   * dataset permissions, see <a
   * href="https://docs.aws.amazon.com/finspace/latest/userguide/managing-user-permissions.html#supported-dataset-permissions">Supported
   * Dataset Permissions</a> in the FinSpace User Guide.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/ResourcePermission">AWS
   * API Reference</a></p>
   */
  class ResourcePermission
  {
  public:
    AWS_FINSPACEDATA_API ResourcePermission() = default;
    AWS_FINSPACEDATA_API ResourcePermission(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API ResourcePermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Permission for a resource.</p>
     */
    inline const Aws::String& GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    template<typename PermissionT = Aws::String>
    void SetPermission(PermissionT&& value) { m_permissionHasBeenSet = true; m_permission = std::forward<PermissionT>(value); }
    template<typename PermissionT = Aws::String>
    ResourcePermission& WithPermission(PermissionT&& value) { SetPermission(std::forward<PermissionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_permission;
    bool m_permissionHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
