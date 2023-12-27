/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/SchemaAttributeType.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>An object containing <code>FieldName</code>, <code>Type</code>,
   * <code>GroupName</code>, and <code>MatchKey</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/SchemaInputAttribute">AWS
   * API Reference</a></p>
   */
  class SchemaInputAttribute
  {
  public:
    AWS_ENTITYRESOLUTION_API SchemaInputAttribute();
    AWS_ENTITYRESOLUTION_API SchemaInputAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API SchemaInputAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string containing the field name.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>A string containing the field name.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>A string containing the field name.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>A string containing the field name.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>A string containing the field name.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>A string containing the field name.</p>
     */
    inline SchemaInputAttribute& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>A string containing the field name.</p>
     */
    inline SchemaInputAttribute& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>A string containing the field name.</p>
     */
    inline SchemaInputAttribute& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>Instruct Entity Resolution to combine several columns into a unified column
     * with the identical attribute type. For example, when working with columns such
     * as first_name, middle_name, and last_name, assigning them a common
     * <code>GroupName</code> will prompt Entity Resolution to concatenate them into a
     * single value.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>Instruct Entity Resolution to combine several columns into a unified column
     * with the identical attribute type. For example, when working with columns such
     * as first_name, middle_name, and last_name, assigning them a common
     * <code>GroupName</code> will prompt Entity Resolution to concatenate them into a
     * single value.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>Instruct Entity Resolution to combine several columns into a unified column
     * with the identical attribute type. For example, when working with columns such
     * as first_name, middle_name, and last_name, assigning them a common
     * <code>GroupName</code> will prompt Entity Resolution to concatenate them into a
     * single value.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>Instruct Entity Resolution to combine several columns into a unified column
     * with the identical attribute type. For example, when working with columns such
     * as first_name, middle_name, and last_name, assigning them a common
     * <code>GroupName</code> will prompt Entity Resolution to concatenate them into a
     * single value.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>Instruct Entity Resolution to combine several columns into a unified column
     * with the identical attribute type. For example, when working with columns such
     * as first_name, middle_name, and last_name, assigning them a common
     * <code>GroupName</code> will prompt Entity Resolution to concatenate them into a
     * single value.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>Instruct Entity Resolution to combine several columns into a unified column
     * with the identical attribute type. For example, when working with columns such
     * as first_name, middle_name, and last_name, assigning them a common
     * <code>GroupName</code> will prompt Entity Resolution to concatenate them into a
     * single value.</p>
     */
    inline SchemaInputAttribute& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>Instruct Entity Resolution to combine several columns into a unified column
     * with the identical attribute type. For example, when working with columns such
     * as first_name, middle_name, and last_name, assigning them a common
     * <code>GroupName</code> will prompt Entity Resolution to concatenate them into a
     * single value.</p>
     */
    inline SchemaInputAttribute& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>Instruct Entity Resolution to combine several columns into a unified column
     * with the identical attribute type. For example, when working with columns such
     * as first_name, middle_name, and last_name, assigning them a common
     * <code>GroupName</code> will prompt Entity Resolution to concatenate them into a
     * single value.</p>
     */
    inline SchemaInputAttribute& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>A key that allows grouping of multiple input attributes into a unified
     * matching group. For example, let's consider a scenario where the source table
     * contains various addresses, such as <code>business_address</code> and
     * <code>shipping_address</code>. By assigning the <code>MatchKey</code>
     * <i>Address</i> to both attributes, Entity Resolution will match records across
     * these fields to create a consolidated matching group. If no
     * <code>MatchKey</code> is specified for a column, it won't be utilized for
     * matching purposes but will still be included in the output table.</p>
     */
    inline const Aws::String& GetMatchKey() const{ return m_matchKey; }

    /**
     * <p>A key that allows grouping of multiple input attributes into a unified
     * matching group. For example, let's consider a scenario where the source table
     * contains various addresses, such as <code>business_address</code> and
     * <code>shipping_address</code>. By assigning the <code>MatchKey</code>
     * <i>Address</i> to both attributes, Entity Resolution will match records across
     * these fields to create a consolidated matching group. If no
     * <code>MatchKey</code> is specified for a column, it won't be utilized for
     * matching purposes but will still be included in the output table.</p>
     */
    inline bool MatchKeyHasBeenSet() const { return m_matchKeyHasBeenSet; }

    /**
     * <p>A key that allows grouping of multiple input attributes into a unified
     * matching group. For example, let's consider a scenario where the source table
     * contains various addresses, such as <code>business_address</code> and
     * <code>shipping_address</code>. By assigning the <code>MatchKey</code>
     * <i>Address</i> to both attributes, Entity Resolution will match records across
     * these fields to create a consolidated matching group. If no
     * <code>MatchKey</code> is specified for a column, it won't be utilized for
     * matching purposes but will still be included in the output table.</p>
     */
    inline void SetMatchKey(const Aws::String& value) { m_matchKeyHasBeenSet = true; m_matchKey = value; }

    /**
     * <p>A key that allows grouping of multiple input attributes into a unified
     * matching group. For example, let's consider a scenario where the source table
     * contains various addresses, such as <code>business_address</code> and
     * <code>shipping_address</code>. By assigning the <code>MatchKey</code>
     * <i>Address</i> to both attributes, Entity Resolution will match records across
     * these fields to create a consolidated matching group. If no
     * <code>MatchKey</code> is specified for a column, it won't be utilized for
     * matching purposes but will still be included in the output table.</p>
     */
    inline void SetMatchKey(Aws::String&& value) { m_matchKeyHasBeenSet = true; m_matchKey = std::move(value); }

    /**
     * <p>A key that allows grouping of multiple input attributes into a unified
     * matching group. For example, let's consider a scenario where the source table
     * contains various addresses, such as <code>business_address</code> and
     * <code>shipping_address</code>. By assigning the <code>MatchKey</code>
     * <i>Address</i> to both attributes, Entity Resolution will match records across
     * these fields to create a consolidated matching group. If no
     * <code>MatchKey</code> is specified for a column, it won't be utilized for
     * matching purposes but will still be included in the output table.</p>
     */
    inline void SetMatchKey(const char* value) { m_matchKeyHasBeenSet = true; m_matchKey.assign(value); }

    /**
     * <p>A key that allows grouping of multiple input attributes into a unified
     * matching group. For example, let's consider a scenario where the source table
     * contains various addresses, such as <code>business_address</code> and
     * <code>shipping_address</code>. By assigning the <code>MatchKey</code>
     * <i>Address</i> to both attributes, Entity Resolution will match records across
     * these fields to create a consolidated matching group. If no
     * <code>MatchKey</code> is specified for a column, it won't be utilized for
     * matching purposes but will still be included in the output table.</p>
     */
    inline SchemaInputAttribute& WithMatchKey(const Aws::String& value) { SetMatchKey(value); return *this;}

    /**
     * <p>A key that allows grouping of multiple input attributes into a unified
     * matching group. For example, let's consider a scenario where the source table
     * contains various addresses, such as <code>business_address</code> and
     * <code>shipping_address</code>. By assigning the <code>MatchKey</code>
     * <i>Address</i> to both attributes, Entity Resolution will match records across
     * these fields to create a consolidated matching group. If no
     * <code>MatchKey</code> is specified for a column, it won't be utilized for
     * matching purposes but will still be included in the output table.</p>
     */
    inline SchemaInputAttribute& WithMatchKey(Aws::String&& value) { SetMatchKey(std::move(value)); return *this;}

    /**
     * <p>A key that allows grouping of multiple input attributes into a unified
     * matching group. For example, let's consider a scenario where the source table
     * contains various addresses, such as <code>business_address</code> and
     * <code>shipping_address</code>. By assigning the <code>MatchKey</code>
     * <i>Address</i> to both attributes, Entity Resolution will match records across
     * these fields to create a consolidated matching group. If no
     * <code>MatchKey</code> is specified for a column, it won't be utilized for
     * matching purposes but will still be included in the output table.</p>
     */
    inline SchemaInputAttribute& WithMatchKey(const char* value) { SetMatchKey(value); return *this;}


    /**
     * <p>The subtype of the attribute, selected from a list of values.</p>
     */
    inline const Aws::String& GetSubType() const{ return m_subType; }

    /**
     * <p>The subtype of the attribute, selected from a list of values.</p>
     */
    inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }

    /**
     * <p>The subtype of the attribute, selected from a list of values.</p>
     */
    inline void SetSubType(const Aws::String& value) { m_subTypeHasBeenSet = true; m_subType = value; }

    /**
     * <p>The subtype of the attribute, selected from a list of values.</p>
     */
    inline void SetSubType(Aws::String&& value) { m_subTypeHasBeenSet = true; m_subType = std::move(value); }

    /**
     * <p>The subtype of the attribute, selected from a list of values.</p>
     */
    inline void SetSubType(const char* value) { m_subTypeHasBeenSet = true; m_subType.assign(value); }

    /**
     * <p>The subtype of the attribute, selected from a list of values.</p>
     */
    inline SchemaInputAttribute& WithSubType(const Aws::String& value) { SetSubType(value); return *this;}

    /**
     * <p>The subtype of the attribute, selected from a list of values.</p>
     */
    inline SchemaInputAttribute& WithSubType(Aws::String&& value) { SetSubType(std::move(value)); return *this;}

    /**
     * <p>The subtype of the attribute, selected from a list of values.</p>
     */
    inline SchemaInputAttribute& WithSubType(const char* value) { SetSubType(value); return *this;}


    /**
     * <p>The type of the attribute, selected from a list of values.</p>
     */
    inline const SchemaAttributeType& GetType() const{ return m_type; }

    /**
     * <p>The type of the attribute, selected from a list of values.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the attribute, selected from a list of values.</p>
     */
    inline void SetType(const SchemaAttributeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the attribute, selected from a list of values.</p>
     */
    inline void SetType(SchemaAttributeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the attribute, selected from a list of values.</p>
     */
    inline SchemaInputAttribute& WithType(const SchemaAttributeType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the attribute, selected from a list of values.</p>
     */
    inline SchemaInputAttribute& WithType(SchemaAttributeType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_matchKey;
    bool m_matchKeyHasBeenSet = false;

    Aws::String m_subType;
    bool m_subTypeHasBeenSet = false;

    SchemaAttributeType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
