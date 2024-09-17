/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace-data/model/ResourcePermission.h>
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
   * <p>Permission group parameters for Dataset permissions.</p> <p>Here is an
   * example of how you could specify the <code>PermissionGroupParams</code>:</p> <p>
   * <code> { "permissionGroupId": "0r6fCRtSTUk4XPfXQe3M0g", "datasetPermissions": [
   * {"permission": "ViewDatasetDetails"}, {"permission": "AddDatasetData"},
   * {"permission": "EditDatasetMetadata"}, {"permission": "DeleteDataset"} ] }
   * </code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/PermissionGroupParams">AWS
   * API Reference</a></p>
   */
  class PermissionGroupParams
  {
  public:
    AWS_FINSPACEDATA_API PermissionGroupParams();
    AWS_FINSPACEDATA_API PermissionGroupParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API PermissionGroupParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the <code>PermissionGroup</code>.</p>
     */
    inline const Aws::String& GetPermissionGroupId() const{ return m_permissionGroupId; }
    inline bool PermissionGroupIdHasBeenSet() const { return m_permissionGroupIdHasBeenSet; }
    inline void SetPermissionGroupId(const Aws::String& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = value; }
    inline void SetPermissionGroupId(Aws::String&& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = std::move(value); }
    inline void SetPermissionGroupId(const char* value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId.assign(value); }
    inline PermissionGroupParams& WithPermissionGroupId(const Aws::String& value) { SetPermissionGroupId(value); return *this;}
    inline PermissionGroupParams& WithPermissionGroupId(Aws::String&& value) { SetPermissionGroupId(std::move(value)); return *this;}
    inline PermissionGroupParams& WithPermissionGroupId(const char* value) { SetPermissionGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of resource permissions.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetDatasetPermissions() const{ return m_datasetPermissions; }
    inline bool DatasetPermissionsHasBeenSet() const { return m_datasetPermissionsHasBeenSet; }
    inline void SetDatasetPermissions(const Aws::Vector<ResourcePermission>& value) { m_datasetPermissionsHasBeenSet = true; m_datasetPermissions = value; }
    inline void SetDatasetPermissions(Aws::Vector<ResourcePermission>&& value) { m_datasetPermissionsHasBeenSet = true; m_datasetPermissions = std::move(value); }
    inline PermissionGroupParams& WithDatasetPermissions(const Aws::Vector<ResourcePermission>& value) { SetDatasetPermissions(value); return *this;}
    inline PermissionGroupParams& WithDatasetPermissions(Aws::Vector<ResourcePermission>&& value) { SetDatasetPermissions(std::move(value)); return *this;}
    inline PermissionGroupParams& AddDatasetPermissions(const ResourcePermission& value) { m_datasetPermissionsHasBeenSet = true; m_datasetPermissions.push_back(value); return *this; }
    inline PermissionGroupParams& AddDatasetPermissions(ResourcePermission&& value) { m_datasetPermissionsHasBeenSet = true; m_datasetPermissions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_permissionGroupId;
    bool m_permissionGroupIdHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_datasetPermissions;
    bool m_datasetPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
