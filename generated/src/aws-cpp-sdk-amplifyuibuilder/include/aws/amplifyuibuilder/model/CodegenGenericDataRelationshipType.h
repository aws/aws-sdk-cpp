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
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataRelationshipType() = default;
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataRelationshipType(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataRelationshipType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data relationship type.</p>
     */
    inline GenericDataRelationshipType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GenericDataRelationshipType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CodegenGenericDataRelationshipType& WithType(GenericDataRelationshipType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the related model in the data relationship.</p>
     */
    inline const Aws::String& GetRelatedModelName() const { return m_relatedModelName; }
    inline bool RelatedModelNameHasBeenSet() const { return m_relatedModelNameHasBeenSet; }
    template<typename RelatedModelNameT = Aws::String>
    void SetRelatedModelName(RelatedModelNameT&& value) { m_relatedModelNameHasBeenSet = true; m_relatedModelName = std::forward<RelatedModelNameT>(value); }
    template<typename RelatedModelNameT = Aws::String>
    CodegenGenericDataRelationshipType& WithRelatedModelName(RelatedModelNameT&& value) { SetRelatedModelName(std::forward<RelatedModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The related model fields in the data relationship.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedModelFields() const { return m_relatedModelFields; }
    inline bool RelatedModelFieldsHasBeenSet() const { return m_relatedModelFieldsHasBeenSet; }
    template<typename RelatedModelFieldsT = Aws::Vector<Aws::String>>
    void SetRelatedModelFields(RelatedModelFieldsT&& value) { m_relatedModelFieldsHasBeenSet = true; m_relatedModelFields = std::forward<RelatedModelFieldsT>(value); }
    template<typename RelatedModelFieldsT = Aws::Vector<Aws::String>>
    CodegenGenericDataRelationshipType& WithRelatedModelFields(RelatedModelFieldsT&& value) { SetRelatedModelFields(std::forward<RelatedModelFieldsT>(value)); return *this;}
    template<typename RelatedModelFieldsT = Aws::String>
    CodegenGenericDataRelationshipType& AddRelatedModelFields(RelatedModelFieldsT&& value) { m_relatedModelFieldsHasBeenSet = true; m_relatedModelFields.emplace_back(std::forward<RelatedModelFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the relationship can unlink the associated model.</p>
     */
    inline bool GetCanUnlinkAssociatedModel() const { return m_canUnlinkAssociatedModel; }
    inline bool CanUnlinkAssociatedModelHasBeenSet() const { return m_canUnlinkAssociatedModelHasBeenSet; }
    inline void SetCanUnlinkAssociatedModel(bool value) { m_canUnlinkAssociatedModelHasBeenSet = true; m_canUnlinkAssociatedModel = value; }
    inline CodegenGenericDataRelationshipType& WithCanUnlinkAssociatedModel(bool value) { SetCanUnlinkAssociatedModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the related join field in the data relationship.</p>
     */
    inline const Aws::String& GetRelatedJoinFieldName() const { return m_relatedJoinFieldName; }
    inline bool RelatedJoinFieldNameHasBeenSet() const { return m_relatedJoinFieldNameHasBeenSet; }
    template<typename RelatedJoinFieldNameT = Aws::String>
    void SetRelatedJoinFieldName(RelatedJoinFieldNameT&& value) { m_relatedJoinFieldNameHasBeenSet = true; m_relatedJoinFieldName = std::forward<RelatedJoinFieldNameT>(value); }
    template<typename RelatedJoinFieldNameT = Aws::String>
    CodegenGenericDataRelationshipType& WithRelatedJoinFieldName(RelatedJoinFieldNameT&& value) { SetRelatedJoinFieldName(std::forward<RelatedJoinFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the related join table in the data relationship.</p>
     */
    inline const Aws::String& GetRelatedJoinTableName() const { return m_relatedJoinTableName; }
    inline bool RelatedJoinTableNameHasBeenSet() const { return m_relatedJoinTableNameHasBeenSet; }
    template<typename RelatedJoinTableNameT = Aws::String>
    void SetRelatedJoinTableName(RelatedJoinTableNameT&& value) { m_relatedJoinTableNameHasBeenSet = true; m_relatedJoinTableName = std::forward<RelatedJoinTableNameT>(value); }
    template<typename RelatedJoinTableNameT = Aws::String>
    CodegenGenericDataRelationshipType& WithRelatedJoinTableName(RelatedJoinTableNameT&& value) { SetRelatedJoinTableName(std::forward<RelatedJoinTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the <code>belongsTo</code> field on the related data model. </p>
     */
    inline const Aws::String& GetBelongsToFieldOnRelatedModel() const { return m_belongsToFieldOnRelatedModel; }
    inline bool BelongsToFieldOnRelatedModelHasBeenSet() const { return m_belongsToFieldOnRelatedModelHasBeenSet; }
    template<typename BelongsToFieldOnRelatedModelT = Aws::String>
    void SetBelongsToFieldOnRelatedModel(BelongsToFieldOnRelatedModelT&& value) { m_belongsToFieldOnRelatedModelHasBeenSet = true; m_belongsToFieldOnRelatedModel = std::forward<BelongsToFieldOnRelatedModelT>(value); }
    template<typename BelongsToFieldOnRelatedModelT = Aws::String>
    CodegenGenericDataRelationshipType& WithBelongsToFieldOnRelatedModel(BelongsToFieldOnRelatedModelT&& value) { SetBelongsToFieldOnRelatedModel(std::forward<BelongsToFieldOnRelatedModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated fields of the data relationship.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedFields() const { return m_associatedFields; }
    inline bool AssociatedFieldsHasBeenSet() const { return m_associatedFieldsHasBeenSet; }
    template<typename AssociatedFieldsT = Aws::Vector<Aws::String>>
    void SetAssociatedFields(AssociatedFieldsT&& value) { m_associatedFieldsHasBeenSet = true; m_associatedFields = std::forward<AssociatedFieldsT>(value); }
    template<typename AssociatedFieldsT = Aws::Vector<Aws::String>>
    CodegenGenericDataRelationshipType& WithAssociatedFields(AssociatedFieldsT&& value) { SetAssociatedFields(std::forward<AssociatedFieldsT>(value)); return *this;}
    template<typename AssociatedFieldsT = Aws::String>
    CodegenGenericDataRelationshipType& AddAssociatedFields(AssociatedFieldsT&& value) { m_associatedFieldsHasBeenSet = true; m_associatedFields.emplace_back(std::forward<AssociatedFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the <code>@index</code> directive is supported for a
     * <code>hasMany</code> data relationship.</p>
     */
    inline bool GetIsHasManyIndex() const { return m_isHasManyIndex; }
    inline bool IsHasManyIndexHasBeenSet() const { return m_isHasManyIndexHasBeenSet; }
    inline void SetIsHasManyIndex(bool value) { m_isHasManyIndexHasBeenSet = true; m_isHasManyIndex = value; }
    inline CodegenGenericDataRelationshipType& WithIsHasManyIndex(bool value) { SetIsHasManyIndex(value); return *this;}
    ///@}
  private:

    GenericDataRelationshipType m_type{GenericDataRelationshipType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_relatedModelName;
    bool m_relatedModelNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_relatedModelFields;
    bool m_relatedModelFieldsHasBeenSet = false;

    bool m_canUnlinkAssociatedModel{false};
    bool m_canUnlinkAssociatedModelHasBeenSet = false;

    Aws::String m_relatedJoinFieldName;
    bool m_relatedJoinFieldNameHasBeenSet = false;

    Aws::String m_relatedJoinTableName;
    bool m_relatedJoinTableNameHasBeenSet = false;

    Aws::String m_belongsToFieldOnRelatedModel;
    bool m_belongsToFieldOnRelatedModelHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedFields;
    bool m_associatedFieldsHasBeenSet = false;

    bool m_isHasManyIndex{false};
    bool m_isHasManyIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
