/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/FieldNamespace.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connectcases/model/FieldType.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Object to store detailed field information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetFieldResponse">AWS
   * API Reference</a></p>
   */
  class GetFieldResponse
  {
  public:
    AWS_CONNECTCASES_API GetFieldResponse();
    AWS_CONNECTCASES_API GetFieldResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API GetFieldResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timestamp at which the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline GetFieldResponse& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline GetFieldResponse& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Denotes whether or not the resource has been deleted.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }
    inline GetFieldResponse& WithDeleted(bool value) { SetDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the field.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline GetFieldResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetFieldResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetFieldResponse& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the field.</p>
     */
    inline const Aws::String& GetFieldArn() const{ return m_fieldArn; }
    inline bool FieldArnHasBeenSet() const { return m_fieldArnHasBeenSet; }
    inline void SetFieldArn(const Aws::String& value) { m_fieldArnHasBeenSet = true; m_fieldArn = value; }
    inline void SetFieldArn(Aws::String&& value) { m_fieldArnHasBeenSet = true; m_fieldArn = std::move(value); }
    inline void SetFieldArn(const char* value) { m_fieldArnHasBeenSet = true; m_fieldArn.assign(value); }
    inline GetFieldResponse& WithFieldArn(const Aws::String& value) { SetFieldArn(value); return *this;}
    inline GetFieldResponse& WithFieldArn(Aws::String&& value) { SetFieldArn(std::move(value)); return *this;}
    inline GetFieldResponse& WithFieldArn(const char* value) { SetFieldArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of the field.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }
    inline GetFieldResponse& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}
    inline GetFieldResponse& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}
    inline GetFieldResponse& WithFieldId(const char* value) { SetFieldId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp at which the resource was created or last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline GetFieldResponse& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline GetFieldResponse& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the field.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GetFieldResponse& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetFieldResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetFieldResponse& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Namespace of the field.</p>
     */
    inline const FieldNamespace& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const FieldNamespace& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(FieldNamespace&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline GetFieldResponse& WithNamespace(const FieldNamespace& value) { SetNamespace(value); return *this;}
    inline GetFieldResponse& WithNamespace(FieldNamespace&& value) { SetNamespace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline GetFieldResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetFieldResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetFieldResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline GetFieldResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline GetFieldResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline GetFieldResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetFieldResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline GetFieldResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline GetFieldResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Type of the field.</p>
     */
    inline const FieldType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FieldType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FieldType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GetFieldResponse& WithType(const FieldType& value) { SetType(value); return *this;}
    inline GetFieldResponse& WithType(FieldType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    bool m_deleted;
    bool m_deletedHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_fieldArn;
    bool m_fieldArnHasBeenSet = false;

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FieldNamespace m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    FieldType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
