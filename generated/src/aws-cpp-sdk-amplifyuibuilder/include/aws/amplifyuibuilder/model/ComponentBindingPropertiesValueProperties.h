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
    AWS_AMPLIFYUIBUILDER_API ComponentBindingPropertiesValueProperties();
    AWS_AMPLIFYUIBUILDER_API ComponentBindingPropertiesValueProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentBindingPropertiesValueProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }
    inline ComponentBindingPropertiesValueProperties& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithModel(const char* value) { SetModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to bind the data to.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }
    inline ComponentBindingPropertiesValueProperties& WithField(const Aws::String& value) { SetField(value); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithField(const char* value) { SetField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of predicates for binding a component's properties to data.</p>
     */
    inline const Aws::Vector<Predicate>& GetPredicates() const{ return m_predicates; }
    inline bool PredicatesHasBeenSet() const { return m_predicatesHasBeenSet; }
    inline void SetPredicates(const Aws::Vector<Predicate>& value) { m_predicatesHasBeenSet = true; m_predicates = value; }
    inline void SetPredicates(Aws::Vector<Predicate>&& value) { m_predicatesHasBeenSet = true; m_predicates = std::move(value); }
    inline ComponentBindingPropertiesValueProperties& WithPredicates(const Aws::Vector<Predicate>& value) { SetPredicates(value); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithPredicates(Aws::Vector<Predicate>&& value) { SetPredicates(std::move(value)); return *this;}
    inline ComponentBindingPropertiesValueProperties& AddPredicates(const Predicate& value) { m_predicatesHasBeenSet = true; m_predicates.push_back(value); return *this; }
    inline ComponentBindingPropertiesValueProperties& AddPredicates(Predicate&& value) { m_predicatesHasBeenSet = true; m_predicates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An authenticated user attribute.</p>
     */
    inline const Aws::String& GetUserAttribute() const{ return m_userAttribute; }
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }
    inline void SetUserAttribute(const Aws::String& value) { m_userAttributeHasBeenSet = true; m_userAttribute = value; }
    inline void SetUserAttribute(Aws::String&& value) { m_userAttributeHasBeenSet = true; m_userAttribute = std::move(value); }
    inline void SetUserAttribute(const char* value) { m_userAttributeHasBeenSet = true; m_userAttribute.assign(value); }
    inline ComponentBindingPropertiesValueProperties& WithUserAttribute(const Aws::String& value) { SetUserAttribute(value); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithUserAttribute(Aws::String&& value) { SetUserAttribute(std::move(value)); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithUserAttribute(const char* value) { SetUserAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline ComponentBindingPropertiesValueProperties& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage key for an Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline ComponentBindingPropertiesValueProperties& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value to assign to the property.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline ComponentBindingPropertiesValueProperties& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a component slot.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }
    inline ComponentBindingPropertiesValueProperties& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}
    inline ComponentBindingPropertiesValueProperties& WithSlotName(const char* value) { SetSlotName(value); return *this;}
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
