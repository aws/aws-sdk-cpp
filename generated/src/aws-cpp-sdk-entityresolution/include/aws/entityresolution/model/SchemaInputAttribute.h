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
   * <p>A configuration object for defining input data fields in Entity Resolution.
   * The <code>SchemaInputAttribute</code> specifies how individual fields in your
   * input data should be processed and matched.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/SchemaInputAttribute">AWS
   * API Reference</a></p>
   */
  class SchemaInputAttribute
  {
  public:
    AWS_ENTITYRESOLUTION_API SchemaInputAttribute() = default;
    AWS_ENTITYRESOLUTION_API SchemaInputAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API SchemaInputAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string containing the field name.</p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    SchemaInputAttribute& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the attribute, selected from a list of values.</p> <p>LiveRamp
     * supports: <code>NAME</code> | <code>NAME_FIRST</code> | <code>NAME_MIDDLE</code>
     * | <code>NAME_LAST</code> | <code>ADDRESS</code> | <code>ADDRESS_STREET1</code> |
     * <code>ADDRESS_STREET2</code> | <code>ADDRESS_STREET3</code> |
     * <code>ADDRESS_CITY</code> | <code>ADDRESS_STATE</code> |
     * <code>ADDRESS_COUNTRY</code> | <code>ADDRESS_POSTALCODE</code> |
     * <code>PHONE</code> | <code>PHONE_NUMBER</code> | <code>EMAIL_ADDRESS</code> |
     * <code>UNIQUE_ID</code> | <code>PROVIDER_ID</code> </p> <p>TransUnion supports:
     * <code>NAME</code> | <code>NAME_FIRST</code> | <code>NAME_LAST</code> |
     * <code>ADDRESS</code> | <code>ADDRESS_CITY</code> | <code>ADDRESS_STATE</code> |
     * <code>ADDRESS_COUNTRY</code> | <code>ADDRESS_POSTALCODE</code> |
     * <code>PHONE_NUMBER</code> | <code>EMAIL_ADDRESS</code> | <code>UNIQUE_ID</code>
     * | <code>IPV4</code> | <code>IPV6</code> | <code>MAID</code> </p> <p>Unified ID
     * 2.0 supports: <code>PHONE_NUMBER</code> | <code>EMAIL_ADDRESS</code> |
     * <code>UNIQUE_ID</code> </p>  <p>Normalization is only supported for
     * <code>NAME</code>, <code>ADDRESS</code>, <code>PHONE</code>, and
     * <code>EMAIL_ADDRESS</code>. </p> <p>If you want to normalize
     * <code>NAME_FIRST</code>, <code>NAME_MIDDLE</code>, and <code>NAME_LAST</code>,
     * you must group them by assigning them to the <code>NAME</code>
     * <code>groupName</code>. </p> <p>If you want to normalize
     * <code>ADDRESS_STREET1</code>, <code>ADDRESS_STREET2</code>,
     * <code>ADDRESS_STREET3</code>, <code>ADDRESS_CITY</code>,
     * <code>ADDRESS_STATE</code>, <code>ADDRESS_COUNTRY</code>, and
     * <code>ADDRESS_POSTALCODE</code>, you must group them by assigning them to the
     * <code>ADDRESS</code> <code>groupName</code>. </p> <p>If you want to normalize
     * <code>PHONE_NUMBER</code> and <code>PHONE_COUNTRYCODE</code>, you must group
     * them by assigning them to the <code>PHONE</code> <code>groupName</code>. </p>
     * 
     */
    inline SchemaAttributeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SchemaAttributeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SchemaInputAttribute& WithType(SchemaAttributeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that instructs Entity Resolution to combine several columns into a
     * unified column with the identical attribute type. </p> <p>For example, when
     * working with columns such as <code>NAME_FIRST</code>, <code>NAME_MIDDLE</code>,
     * and <code>NAME_LAST</code>, assigning them a common <code>groupName</code> will
     * prompt Entity Resolution to concatenate them into a single value.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    SchemaInputAttribute& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key that allows grouping of multiple input attributes into a unified
     * matching group. </p> <p>For example, consider a scenario where the source table
     * contains various addresses, such as <code>business_address</code> and
     * <code>shipping_address</code>. By assigning a <code>matchKey</code> called
     * <code>address</code> to both attributes, Entity Resolution will match records
     * across these fields to create a consolidated matching group.</p> <p>If no
     * <code>matchKey</code> is specified for a column, it won't be utilized for
     * matching purposes but will still be included in the output table.</p>
     */
    inline const Aws::String& GetMatchKey() const { return m_matchKey; }
    inline bool MatchKeyHasBeenSet() const { return m_matchKeyHasBeenSet; }
    template<typename MatchKeyT = Aws::String>
    void SetMatchKey(MatchKeyT&& value) { m_matchKeyHasBeenSet = true; m_matchKey = std::forward<MatchKeyT>(value); }
    template<typename MatchKeyT = Aws::String>
    SchemaInputAttribute& WithMatchKey(MatchKeyT&& value) { SetMatchKey(std::forward<MatchKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtype of the attribute, selected from a list of values.</p>
     */
    inline const Aws::String& GetSubType() const { return m_subType; }
    inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
    template<typename SubTypeT = Aws::String>
    void SetSubType(SubTypeT&& value) { m_subTypeHasBeenSet = true; m_subType = std::forward<SubTypeT>(value); }
    template<typename SubTypeT = Aws::String>
    SchemaInputAttribute& WithSubType(SubTypeT&& value) { SetSubType(std::forward<SubTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates if the column values are hashed in the schema input. </p> <p>If
     * the value is set to <code>TRUE</code>, the column values are hashed. </p> <p>If
     * the value is set to <code>FALSE</code>, the column values are cleartext.</p>
     */
    inline bool GetHashed() const { return m_hashed; }
    inline bool HashedHasBeenSet() const { return m_hashedHasBeenSet; }
    inline void SetHashed(bool value) { m_hashedHasBeenSet = true; m_hashed = value; }
    inline SchemaInputAttribute& WithHashed(bool value) { SetHashed(value); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    SchemaAttributeType m_type{SchemaAttributeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_matchKey;
    bool m_matchKeyHasBeenSet = false;

    Aws::String m_subType;
    bool m_subTypeHasBeenSet = false;

    bool m_hashed{false};
    bool m_hashedHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
