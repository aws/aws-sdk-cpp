﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents metadata for a resource.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ResourceMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ResourceMetadata
  {
  public:
    ResourceMetadata();
    ResourceMetadata(Aws::Utils::Json::JsonView jsonValue);
    ResourceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full Amazon Resource Name (ARN) for the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The full Amazon Resource Name (ARN) for the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The full Amazon Resource Name (ARN) for the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) for the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) for the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) for the resource.</p>
     */
    inline ResourceMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) for the resource.</p>
     */
    inline ResourceMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) for the resource.</p>
     */
    inline ResourceMetadata& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline ResourceMetadata& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was created.</p>
     */
    inline ResourceMetadata& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was last
     * updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was last
     * updated.</p>
     */
    inline ResourceMetadata& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp in seconds for when the resource was last
     * updated.</p>
     */
    inline ResourceMetadata& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline const Aws::String& GetMeshOwner() const{ return m_meshOwner; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline bool MeshOwnerHasBeenSet() const { return m_meshOwnerHasBeenSet; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(const Aws::String& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = value; }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(Aws::String&& value) { m_meshOwnerHasBeenSet = true; m_meshOwner = std::move(value); }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetMeshOwner(const char* value) { m_meshOwnerHasBeenSet = true; m_meshOwner.assign(value); }

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline ResourceMetadata& WithMeshOwner(const Aws::String& value) { SetMeshOwner(value); return *this;}

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline ResourceMetadata& WithMeshOwner(Aws::String&& value) { SetMeshOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS IAM account ID of the service mesh owner. If the account ID is not
     * your own, then it's the ID of the account that shared the mesh with your
     * account. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline ResourceMetadata& WithMeshOwner(const char* value) { SetMeshOwner(value); return *this;}


    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's the ID of the mesh owner or of another account that the mesh is
     * shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline const Aws::String& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's the ID of the mesh owner or of another account that the mesh is
     * shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's the ID of the mesh owner or of another account that the mesh is
     * shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetResourceOwner(const Aws::String& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's the ID of the mesh owner or of another account that the mesh is
     * shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetResourceOwner(Aws::String&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's the ID of the mesh owner or of another account that the mesh is
     * shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline void SetResourceOwner(const char* value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner.assign(value); }

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's the ID of the mesh owner or of another account that the mesh is
     * shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline ResourceMetadata& WithResourceOwner(const Aws::String& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's the ID of the mesh owner or of another account that the mesh is
     * shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline ResourceMetadata& WithResourceOwner(Aws::String&& value) { SetResourceOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS IAM account ID of the resource owner. If the account ID is not your
     * own, then it's the ID of the mesh owner or of another account that the mesh is
     * shared with. For more information about mesh sharing, see <a
     * href="https://docs.aws.amazon.com/app-mesh/latest/userguide/sharing.html">Working
     * with shared meshes</a>.</p>
     */
    inline ResourceMetadata& WithResourceOwner(const char* value) { SetResourceOwner(value); return *this;}


    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline ResourceMetadata& WithUid(const Aws::String& value) { SetUid(value); return *this;}

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline ResourceMetadata& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the resource.</p>
     */
    inline ResourceMetadata& WithUid(const char* value) { SetUid(value); return *this;}


    /**
     * <p>The version of the resource. Resources are created at version 1, and this
     * version is incremented each time that they're updated.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version of the resource. Resources are created at version 1, and this
     * version is incremented each time that they're updated.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the resource. Resources are created at version 1, and this
     * version is incremented each time that they're updated.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the resource. Resources are created at version 1, and this
     * version is incremented each time that they're updated.</p>
     */
    inline ResourceMetadata& WithVersion(long long value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    Aws::String m_meshOwner;
    bool m_meshOwnerHasBeenSet;

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet;

    Aws::String m_uid;
    bool m_uidHasBeenSet;

    long long m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
