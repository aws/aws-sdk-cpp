/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/Predicate.h>
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
   * <p>Represents the data binding configuration for a specific property using data
   * stored in Amazon Web Services. For Amazon Web Services connected properties, you
   * can bind a property to data stored in an Amazon S3 bucket, an Amplify DataStore
   * model or an authenticated user attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ComponentBindingPropertiesValueProperties">AWS
   * API Reference</a></p>
   */
  class ComponentBindingPropertiesValueProperties
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ComponentBindingPropertiesValueProperties() = default;
    AWS_AMPLIFYUIBUILDER_API ComponentBindingPropertiesValueProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentBindingPropertiesValueProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    ComponentBindingPropertiesValueProperties& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to bind the data to.</p>
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    ComponentBindingPropertiesValueProperties& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of predicates for binding a component's properties to data.</p>
     */
    inline const Aws::Vector<Predicate>& GetPredicates() const { return m_predicates; }
    inline bool PredicatesHasBeenSet() const { return m_predicatesHasBeenSet; }
    template<typename PredicatesT = Aws::Vector<Predicate>>
    void SetPredicates(PredicatesT&& value) { m_predicatesHasBeenSet = true; m_predicates = std::forward<PredicatesT>(value); }
    template<typename PredicatesT = Aws::Vector<Predicate>>
    ComponentBindingPropertiesValueProperties& WithPredicates(PredicatesT&& value) { SetPredicates(std::forward<PredicatesT>(value)); return *this;}
    template<typename PredicatesT = Predicate>
    ComponentBindingPropertiesValueProperties& AddPredicates(PredicatesT&& value) { m_predicatesHasBeenSet = true; m_predicates.emplace_back(std::forward<PredicatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An authenticated user attribute.</p>
     */
    inline const Aws::String& GetUserAttribute() const { return m_userAttribute; }
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }
    template<typename UserAttributeT = Aws::String>
    void SetUserAttribute(UserAttributeT&& value) { m_userAttributeHasBeenSet = true; m_userAttribute = std::forward<UserAttributeT>(value); }
    template<typename UserAttributeT = Aws::String>
    ComponentBindingPropertiesValueProperties& WithUserAttribute(UserAttributeT&& value) { SetUserAttribute(std::forward<UserAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    ComponentBindingPropertiesValueProperties& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage key for an Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    ComponentBindingPropertiesValueProperties& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value to assign to the property.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    ComponentBindingPropertiesValueProperties& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a component slot.</p>
     */
    inline const Aws::String& GetSlotName() const { return m_slotName; }
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }
    template<typename SlotNameT = Aws::String>
    void SetSlotName(SlotNameT&& value) { m_slotNameHasBeenSet = true; m_slotName = std::forward<SlotNameT>(value); }
    template<typename SlotNameT = Aws::String>
    ComponentBindingPropertiesValueProperties& WithSlotName(SlotNameT&& value) { SetSlotName(std::forward<SlotNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::Vector<Predicate> m_predicates;
    bool m_predicatesHasBeenSet = false;

    Aws::String m_userAttribute;
    bool m_userAttributeHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
