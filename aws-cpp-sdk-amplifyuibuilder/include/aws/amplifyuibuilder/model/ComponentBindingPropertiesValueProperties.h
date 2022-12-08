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


    /**
     * <p>An Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>An Amazon S3 bucket.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>An Amazon S3 bucket.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>An Amazon S3 bucket.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>An Amazon S3 bucket.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>An Amazon S3 bucket.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>An Amazon S3 bucket.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 bucket.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The default value to assign to the property.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value to assign to the property.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value to assign to the property.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value to assign to the property.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value to assign to the property.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value to assign to the property.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value to assign to the property.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value to assign to the property.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The field to bind the data to.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The field to bind the data to.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The field to bind the data to.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The field to bind the data to.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The field to bind the data to.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The field to bind the data to.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The field to bind the data to.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The field to bind the data to.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithField(const char* value) { SetField(value); return *this;}


    /**
     * <p>The storage key for an Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The storage key for an Amazon S3 bucket.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The storage key for an Amazon S3 bucket.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The storage key for an Amazon S3 bucket.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The storage key for an Amazon S3 bucket.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The storage key for an Amazon S3 bucket.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The storage key for an Amazon S3 bucket.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The storage key for an Amazon S3 bucket.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * <p>An Amplify DataStore model.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithModel(const char* value) { SetModel(value); return *this;}


    /**
     * <p>A list of predicates for binding a component's properties to data.</p>
     */
    inline const Aws::Vector<Predicate>& GetPredicates() const{ return m_predicates; }

    /**
     * <p>A list of predicates for binding a component's properties to data.</p>
     */
    inline bool PredicatesHasBeenSet() const { return m_predicatesHasBeenSet; }

    /**
     * <p>A list of predicates for binding a component's properties to data.</p>
     */
    inline void SetPredicates(const Aws::Vector<Predicate>& value) { m_predicatesHasBeenSet = true; m_predicates = value; }

    /**
     * <p>A list of predicates for binding a component's properties to data.</p>
     */
    inline void SetPredicates(Aws::Vector<Predicate>&& value) { m_predicatesHasBeenSet = true; m_predicates = std::move(value); }

    /**
     * <p>A list of predicates for binding a component's properties to data.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithPredicates(const Aws::Vector<Predicate>& value) { SetPredicates(value); return *this;}

    /**
     * <p>A list of predicates for binding a component's properties to data.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithPredicates(Aws::Vector<Predicate>&& value) { SetPredicates(std::move(value)); return *this;}

    /**
     * <p>A list of predicates for binding a component's properties to data.</p>
     */
    inline ComponentBindingPropertiesValueProperties& AddPredicates(const Predicate& value) { m_predicatesHasBeenSet = true; m_predicates.push_back(value); return *this; }

    /**
     * <p>A list of predicates for binding a component's properties to data.</p>
     */
    inline ComponentBindingPropertiesValueProperties& AddPredicates(Predicate&& value) { m_predicatesHasBeenSet = true; m_predicates.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of a component slot.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }

    /**
     * <p>The name of a component slot.</p>
     */
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }

    /**
     * <p>The name of a component slot.</p>
     */
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }

    /**
     * <p>The name of a component slot.</p>
     */
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }

    /**
     * <p>The name of a component slot.</p>
     */
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }

    /**
     * <p>The name of a component slot.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}

    /**
     * <p>The name of a component slot.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}

    /**
     * <p>The name of a component slot.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithSlotName(const char* value) { SetSlotName(value); return *this;}


    /**
     * <p>An authenticated user attribute.</p>
     */
    inline const Aws::String& GetUserAttribute() const{ return m_userAttribute; }

    /**
     * <p>An authenticated user attribute.</p>
     */
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }

    /**
     * <p>An authenticated user attribute.</p>
     */
    inline void SetUserAttribute(const Aws::String& value) { m_userAttributeHasBeenSet = true; m_userAttribute = value; }

    /**
     * <p>An authenticated user attribute.</p>
     */
    inline void SetUserAttribute(Aws::String&& value) { m_userAttributeHasBeenSet = true; m_userAttribute = std::move(value); }

    /**
     * <p>An authenticated user attribute.</p>
     */
    inline void SetUserAttribute(const char* value) { m_userAttributeHasBeenSet = true; m_userAttribute.assign(value); }

    /**
     * <p>An authenticated user attribute.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithUserAttribute(const Aws::String& value) { SetUserAttribute(value); return *this;}

    /**
     * <p>An authenticated user attribute.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithUserAttribute(Aws::String&& value) { SetUserAttribute(std::move(value)); return *this;}

    /**
     * <p>An authenticated user attribute.</p>
     */
    inline ComponentBindingPropertiesValueProperties& WithUserAttribute(const char* value) { SetUserAttribute(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::Vector<Predicate> m_predicates;
    bool m_predicatesHasBeenSet = false;

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;

    Aws::String m_userAttribute;
    bool m_userAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
