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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/UserMetadata.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the metadata of a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ResourceMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API ResourceMetadata
  {
  public:
    ResourceMetadata();
    ResourceMetadata(Aws::Utils::Json::JsonView jsonValue);
    ResourceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of resource.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of resource.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetType(const ResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetType(ResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline ResourceMetadata& WithType(const ResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline ResourceMetadata& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline ResourceMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline ResourceMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline ResourceMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The original name of the resource before a rename operation.</p>
     */
    inline const Aws::String& GetOriginalName() const{ return m_originalName; }

    /**
     * <p>The original name of the resource before a rename operation.</p>
     */
    inline bool OriginalNameHasBeenSet() const { return m_originalNameHasBeenSet; }

    /**
     * <p>The original name of the resource before a rename operation.</p>
     */
    inline void SetOriginalName(const Aws::String& value) { m_originalNameHasBeenSet = true; m_originalName = value; }

    /**
     * <p>The original name of the resource before a rename operation.</p>
     */
    inline void SetOriginalName(Aws::String&& value) { m_originalNameHasBeenSet = true; m_originalName = std::move(value); }

    /**
     * <p>The original name of the resource before a rename operation.</p>
     */
    inline void SetOriginalName(const char* value) { m_originalNameHasBeenSet = true; m_originalName.assign(value); }

    /**
     * <p>The original name of the resource before a rename operation.</p>
     */
    inline ResourceMetadata& WithOriginalName(const Aws::String& value) { SetOriginalName(value); return *this;}

    /**
     * <p>The original name of the resource before a rename operation.</p>
     */
    inline ResourceMetadata& WithOriginalName(Aws::String&& value) { SetOriginalName(std::move(value)); return *this;}

    /**
     * <p>The original name of the resource before a rename operation.</p>
     */
    inline ResourceMetadata& WithOriginalName(const char* value) { SetOriginalName(value); return *this;}


    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline ResourceMetadata& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline ResourceMetadata& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline ResourceMetadata& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The version ID of the resource. This is an optional field and is filled for
     * action on document version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The version ID of the resource. This is an optional field and is filled for
     * action on document version.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The version ID of the resource. This is an optional field and is filled for
     * action on document version.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The version ID of the resource. This is an optional field and is filled for
     * action on document version.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The version ID of the resource. This is an optional field and is filled for
     * action on document version.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The version ID of the resource. This is an optional field and is filled for
     * action on document version.</p>
     */
    inline ResourceMetadata& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The version ID of the resource. This is an optional field and is filled for
     * action on document version.</p>
     */
    inline ResourceMetadata& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The version ID of the resource. This is an optional field and is filled for
     * action on document version.</p>
     */
    inline ResourceMetadata& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The owner of the resource.</p>
     */
    inline const UserMetadata& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the resource.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the resource.</p>
     */
    inline void SetOwner(const UserMetadata& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the resource.</p>
     */
    inline void SetOwner(UserMetadata&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the resource.</p>
     */
    inline ResourceMetadata& WithOwner(const UserMetadata& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the resource.</p>
     */
    inline ResourceMetadata& WithOwner(UserMetadata&& value) { SetOwner(std::move(value)); return *this;}


    /**
     * <p>The parent ID of the resource before a rename operation.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }

    /**
     * <p>The parent ID of the resource before a rename operation.</p>
     */
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }

    /**
     * <p>The parent ID of the resource before a rename operation.</p>
     */
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>The parent ID of the resource before a rename operation.</p>
     */
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }

    /**
     * <p>The parent ID of the resource before a rename operation.</p>
     */
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }

    /**
     * <p>The parent ID of the resource before a rename operation.</p>
     */
    inline ResourceMetadata& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}

    /**
     * <p>The parent ID of the resource before a rename operation.</p>
     */
    inline ResourceMetadata& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}

    /**
     * <p>The parent ID of the resource before a rename operation.</p>
     */
    inline ResourceMetadata& WithParentId(const char* value) { SetParentId(value); return *this;}

  private:

    ResourceType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_originalName;
    bool m_originalNameHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;

    UserMetadata m_owner;
    bool m_ownerHasBeenSet;

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
