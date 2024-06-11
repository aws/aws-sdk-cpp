/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/GenericDataRelationshipType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the relationship between generic data models.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CodegenGenericDataRelationshipType">AWS
   * API Reference</a></p>
   */
  class CodegenGenericDataRelationshipType
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataRelationshipType();
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataRelationshipType(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataRelationshipType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data relationship type.</p>
     */
    inline const GenericDataRelationshipType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GenericDataRelationshipType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GenericDataRelationshipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CodegenGenericDataRelationshipType& WithType(const GenericDataRelationshipType& value) { SetType(value); return *this;}
    inline CodegenGenericDataRelationshipType& WithType(GenericDataRelationshipType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the related model in the data relationship.</p>
     */
    inline const Aws::String& GetRelatedModelName() const{ return m_relatedModelName; }
    inline bool RelatedModelNameHasBeenSet() const { return m_relatedModelNameHasBeenSet; }
    inline void SetRelatedModelName(const Aws::String& value) { m_relatedModelNameHasBeenSet = true; m_relatedModelName = value; }
    inline void SetRelatedModelName(Aws::String&& value) { m_relatedModelNameHasBeenSet = true; m_relatedModelName = std::move(value); }
    inline void SetRelatedModelName(const char* value) { m_relatedModelNameHasBeenSet = true; m_relatedModelName.assign(value); }
    inline CodegenGenericDataRelationshipType& WithRelatedModelName(const Aws::String& value) { SetRelatedModelName(value); return *this;}
    inline CodegenGenericDataRelationshipType& WithRelatedModelName(Aws::String&& value) { SetRelatedModelName(std::move(value)); return *this;}
    inline CodegenGenericDataRelationshipType& WithRelatedModelName(const char* value) { SetRelatedModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The related model fields in the data relationship.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedModelFields() const{ return m_relatedModelFields; }
    inline bool RelatedModelFieldsHasBeenSet() const { return m_relatedModelFieldsHasBeenSet; }
    inline void SetRelatedModelFields(const Aws::Vector<Aws::String>& value) { m_relatedModelFieldsHasBeenSet = true; m_relatedModelFields = value; }
    inline void SetRelatedModelFields(Aws::Vector<Aws::String>&& value) { m_relatedModelFieldsHasBeenSet = true; m_relatedModelFields = std::move(value); }
    inline CodegenGenericDataRelationshipType& WithRelatedModelFields(const Aws::Vector<Aws::String>& value) { SetRelatedModelFields(value); return *this;}
    inline CodegenGenericDataRelationshipType& WithRelatedModelFields(Aws::Vector<Aws::String>&& value) { SetRelatedModelFields(std::move(value)); return *this;}
    inline CodegenGenericDataRelationshipType& AddRelatedModelFields(const Aws::String& value) { m_relatedModelFieldsHasBeenSet = true; m_relatedModelFields.push_back(value); return *this; }
    inline CodegenGenericDataRelationshipType& AddRelatedModelFields(Aws::String&& value) { m_relatedModelFieldsHasBeenSet = true; m_relatedModelFields.push_back(std::move(value)); return *this; }
    inline CodegenGenericDataRelationshipType& AddRelatedModelFields(const char* value) { m_relatedModelFieldsHasBeenSet = true; m_relatedModelFields.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the relationship can unlink the associated model.</p>
     */
    inline bool GetCanUnlinkAssociatedModel() const{ return m_canUnlinkAssociatedModel; }
    inline bool CanUnlinkAssociatedModelHasBeenSet() const { return m_canUnlinkAssociatedModelHasBeenSet; }
    inline void SetCanUnlinkAssociatedModel(bool value) { m_canUnlinkAssociatedModelHasBeenSet = true; m_canUnlinkAssociatedModel = value; }
    inline CodegenGenericDataRelationshipType& WithCanUnlinkAssociatedModel(bool value) { SetCanUnlinkAssociatedModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the related join field in the data relationship.</p>
     */
    inline const Aws::String& GetRelatedJoinFieldName() const{ return m_relatedJoinFieldName; }
    inline bool RelatedJoinFieldNameHasBeenSet() const { return m_relatedJoinFieldNameHasBeenSet; }
    inline void SetRelatedJoinFieldName(const Aws::String& value) { m_relatedJoinFieldNameHasBeenSet = true; m_relatedJoinFieldName = value; }
    inline void SetRelatedJoinFieldName(Aws::String&& value) { m_relatedJoinFieldNameHasBeenSet = true; m_relatedJoinFieldName = std::move(value); }
    inline void SetRelatedJoinFieldName(const char* value) { m_relatedJoinFieldNameHasBeenSet = true; m_relatedJoinFieldName.assign(value); }
    inline CodegenGenericDataRelationshipType& WithRelatedJoinFieldName(const Aws::String& value) { SetRelatedJoinFieldName(value); return *this;}
    inline CodegenGenericDataRelationshipType& WithRelatedJoinFieldName(Aws::String&& value) { SetRelatedJoinFieldName(std::move(value)); return *this;}
    inline CodegenGenericDataRelationshipType& WithRelatedJoinFieldName(const char* value) { SetRelatedJoinFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the related join table in the data relationship.</p>
     */
    inline const Aws::String& GetRelatedJoinTableName() const{ return m_relatedJoinTableName; }
    inline bool RelatedJoinTableNameHasBeenSet() const { return m_relatedJoinTableNameHasBeenSet; }
    inline void SetRelatedJoinTableName(const Aws::String& value) { m_relatedJoinTableNameHasBeenSet = true; m_relatedJoinTableName = value; }
    inline void SetRelatedJoinTableName(Aws::String&& value) { m_relatedJoinTableNameHasBeenSet = true; m_relatedJoinTableName = std::move(value); }
    inline void SetRelatedJoinTableName(const char* value) { m_relatedJoinTableNameHasBeenSet = true; m_relatedJoinTableName.assign(value); }
    inline CodegenGenericDataRelationshipType& WithRelatedJoinTableName(const Aws::String& value) { SetRelatedJoinTableName(value); return *this;}
    inline CodegenGenericDataRelationshipType& WithRelatedJoinTableName(Aws::String&& value) { SetRelatedJoinTableName(std::move(value)); return *this;}
    inline CodegenGenericDataRelationshipType& WithRelatedJoinTableName(const char* value) { SetRelatedJoinTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the <code>belongsTo</code> field on the related data model. </p>
     */
    inline const Aws::String& GetBelongsToFieldOnRelatedModel() const{ return m_belongsToFieldOnRelatedModel; }
    inline bool BelongsToFieldOnRelatedModelHasBeenSet() const { return m_belongsToFieldOnRelatedModelHasBeenSet; }
    inline void SetBelongsToFieldOnRelatedModel(const Aws::String& value) { m_belongsToFieldOnRelatedModelHasBeenSet = true; m_belongsToFieldOnRelatedModel = value; }
    inline void SetBelongsToFieldOnRelatedModel(Aws::String&& value) { m_belongsToFieldOnRelatedModelHasBeenSet = true; m_belongsToFieldOnRelatedModel = std::move(value); }
    inline void SetBelongsToFieldOnRelatedModel(const char* value) { m_belongsToFieldOnRelatedModelHasBeenSet = true; m_belongsToFieldOnRelatedModel.assign(value); }
    inline CodegenGenericDataRelationshipType& WithBelongsToFieldOnRelatedModel(const Aws::String& value) { SetBelongsToFieldOnRelatedModel(value); return *this;}
    inline CodegenGenericDataRelationshipType& WithBelongsToFieldOnRelatedModel(Aws::String&& value) { SetBelongsToFieldOnRelatedModel(std::move(value)); return *this;}
    inline CodegenGenericDataRelationshipType& WithBelongsToFieldOnRelatedModel(const char* value) { SetBelongsToFieldOnRelatedModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated fields of the data relationship.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedFields() const{ return m_associatedFields; }
    inline bool AssociatedFieldsHasBeenSet() const { return m_associatedFieldsHasBeenSet; }
    inline void SetAssociatedFields(const Aws::Vector<Aws::String>& value) { m_associatedFieldsHasBeenSet = true; m_associatedFields = value; }
    inline void SetAssociatedFields(Aws::Vector<Aws::String>&& value) { m_associatedFieldsHasBeenSet = true; m_associatedFields = std::move(value); }
    inline CodegenGenericDataRelationshipType& WithAssociatedFields(const Aws::Vector<Aws::String>& value) { SetAssociatedFields(value); return *this;}
    inline CodegenGenericDataRelationshipType& WithAssociatedFields(Aws::Vector<Aws::String>&& value) { SetAssociatedFields(std::move(value)); return *this;}
    inline CodegenGenericDataRelationshipType& AddAssociatedFields(const Aws::String& value) { m_associatedFieldsHasBeenSet = true; m_associatedFields.push_back(value); return *this; }
    inline CodegenGenericDataRelationshipType& AddAssociatedFields(Aws::String&& value) { m_associatedFieldsHasBeenSet = true; m_associatedFields.push_back(std::move(value)); return *this; }
    inline CodegenGenericDataRelationshipType& AddAssociatedFields(const char* value) { m_associatedFieldsHasBeenSet = true; m_associatedFields.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the <code>@index</code> directive is supported for a
     * <code>hasMany</code> data relationship.</p>
     */
    inline bool GetIsHasManyIndex() const{ return m_isHasManyIndex; }
    inline bool IsHasManyIndexHasBeenSet() const { return m_isHasManyIndexHasBeenSet; }
    inline void SetIsHasManyIndex(bool value) { m_isHasManyIndexHasBeenSet = true; m_isHasManyIndex = value; }
    inline CodegenGenericDataRelationshipType& WithIsHasManyIndex(bool value) { SetIsHasManyIndex(value); return *this;}
    ///@}
  private:

    GenericDataRelationshipType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_relatedModelName;
    bool m_relatedModelNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_relatedModelFields;
    bool m_relatedModelFieldsHasBeenSet = false;

    bool m_canUnlinkAssociatedModel;
    bool m_canUnlinkAssociatedModelHasBeenSet = false;

    Aws::String m_relatedJoinFieldName;
    bool m_relatedJoinFieldNameHasBeenSet = false;

    Aws::String m_relatedJoinTableName;
    bool m_relatedJoinTableNameHasBeenSet = false;

    Aws::String m_belongsToFieldOnRelatedModel;
    bool m_belongsToFieldOnRelatedModelHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedFields;
    bool m_associatedFieldsHasBeenSet = false;

    bool m_isHasManyIndex;
    bool m_isHasManyIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
