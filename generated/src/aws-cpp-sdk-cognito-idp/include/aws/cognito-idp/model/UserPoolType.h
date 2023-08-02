/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/UserPoolPolicyType.h>
#include <aws/cognito-idp/model/DeletionProtectionType.h>
#include <aws/cognito-idp/model/LambdaConfigType.h>
#include <aws/cognito-idp/model/StatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/VerificationMessageTemplateType.h>
#include <aws/cognito-idp/model/UserAttributeUpdateSettingsType.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
#include <aws/cognito-idp/model/DeviceConfigurationType.h>
#include <aws/cognito-idp/model/EmailConfigurationType.h>
#include <aws/cognito-idp/model/SmsConfigurationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AdminCreateUserConfigType.h>
#include <aws/cognito-idp/model/UserPoolAddOnsType.h>
#include <aws/cognito-idp/model/UsernameConfigurationType.h>
#include <aws/cognito-idp/model/AccountRecoverySettingType.h>
#include <aws/cognito-idp/model/SchemaAttributeType.h>
#include <aws/cognito-idp/model/VerifiedAttributeType.h>
#include <aws/cognito-idp/model/AliasAttributeType.h>
#include <aws/cognito-idp/model/UsernameAttributeType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>A container for information about the user pool.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolType">AWS
   * API Reference</a></p>
   */
  class UserPoolType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolType();
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the user pool.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the user pool.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the user pool.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the user pool.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the user pool.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the user pool.</p>
     */
    inline UserPoolType& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the user pool.</p>
     */
    inline UserPoolType& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user pool.</p>
     */
    inline UserPoolType& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the user pool.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the user pool.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the user pool.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the user pool.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the user pool.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the user pool.</p>
     */
    inline UserPoolType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the user pool.</p>
     */
    inline UserPoolType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the user pool.</p>
     */
    inline UserPoolType& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The policies associated with the user pool.</p>
     */
    inline const UserPoolPolicyType& GetPolicies() const{ return m_policies; }

    /**
     * <p>The policies associated with the user pool.</p>
     */
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }

    /**
     * <p>The policies associated with the user pool.</p>
     */
    inline void SetPolicies(const UserPoolPolicyType& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>The policies associated with the user pool.</p>
     */
    inline void SetPolicies(UserPoolPolicyType&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }

    /**
     * <p>The policies associated with the user pool.</p>
     */
    inline UserPoolType& WithPolicies(const UserPoolPolicyType& value) { SetPolicies(value); return *this;}

    /**
     * <p>The policies associated with the user pool.</p>
     */
    inline UserPoolType& WithPolicies(UserPoolPolicyType&& value) { SetPolicies(std::move(value)); return *this;}


    /**
     * <p>When active, <code>DeletionProtection</code> prevents accidental deletion of
     * your user pool. Before you can delete a user pool that you have protected
     * against deletion, you must deactivate this feature.</p> <p>When you try to
     * delete a protected user pool in a <code>DeleteUserPool</code> API request,
     * Amazon Cognito returns an <code>InvalidParameterException</code> error. To
     * delete a protected user pool, send a new <code>DeleteUserPool</code> request
     * after you deactivate deletion protection in an <code>UpdateUserPool</code> API
     * request.</p>
     */
    inline const DeletionProtectionType& GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>When active, <code>DeletionProtection</code> prevents accidental deletion of
     * your user pool. Before you can delete a user pool that you have protected
     * against deletion, you must deactivate this feature.</p> <p>When you try to
     * delete a protected user pool in a <code>DeleteUserPool</code> API request,
     * Amazon Cognito returns an <code>InvalidParameterException</code> error. To
     * delete a protected user pool, send a new <code>DeleteUserPool</code> request
     * after you deactivate deletion protection in an <code>UpdateUserPool</code> API
     * request.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>When active, <code>DeletionProtection</code> prevents accidental deletion of
     * your user pool. Before you can delete a user pool that you have protected
     * against deletion, you must deactivate this feature.</p> <p>When you try to
     * delete a protected user pool in a <code>DeleteUserPool</code> API request,
     * Amazon Cognito returns an <code>InvalidParameterException</code> error. To
     * delete a protected user pool, send a new <code>DeleteUserPool</code> request
     * after you deactivate deletion protection in an <code>UpdateUserPool</code> API
     * request.</p>
     */
    inline void SetDeletionProtection(const DeletionProtectionType& value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>When active, <code>DeletionProtection</code> prevents accidental deletion of
     * your user pool. Before you can delete a user pool that you have protected
     * against deletion, you must deactivate this feature.</p> <p>When you try to
     * delete a protected user pool in a <code>DeleteUserPool</code> API request,
     * Amazon Cognito returns an <code>InvalidParameterException</code> error. To
     * delete a protected user pool, send a new <code>DeleteUserPool</code> request
     * after you deactivate deletion protection in an <code>UpdateUserPool</code> API
     * request.</p>
     */
    inline void SetDeletionProtection(DeletionProtectionType&& value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = std::move(value); }

    /**
     * <p>When active, <code>DeletionProtection</code> prevents accidental deletion of
     * your user pool. Before you can delete a user pool that you have protected
     * against deletion, you must deactivate this feature.</p> <p>When you try to
     * delete a protected user pool in a <code>DeleteUserPool</code> API request,
     * Amazon Cognito returns an <code>InvalidParameterException</code> error. To
     * delete a protected user pool, send a new <code>DeleteUserPool</code> request
     * after you deactivate deletion protection in an <code>UpdateUserPool</code> API
     * request.</p>
     */
    inline UserPoolType& WithDeletionProtection(const DeletionProtectionType& value) { SetDeletionProtection(value); return *this;}

    /**
     * <p>When active, <code>DeletionProtection</code> prevents accidental deletion of
     * your user pool. Before you can delete a user pool that you have protected
     * against deletion, you must deactivate this feature.</p> <p>When you try to
     * delete a protected user pool in a <code>DeleteUserPool</code> API request,
     * Amazon Cognito returns an <code>InvalidParameterException</code> error. To
     * delete a protected user pool, send a new <code>DeleteUserPool</code> request
     * after you deactivate deletion protection in an <code>UpdateUserPool</code> API
     * request.</p>
     */
    inline UserPoolType& WithDeletionProtection(DeletionProtectionType&& value) { SetDeletionProtection(std::move(value)); return *this;}


    /**
     * <p>The Lambda triggers associated with the user pool.</p>
     */
    inline const LambdaConfigType& GetLambdaConfig() const{ return m_lambdaConfig; }

    /**
     * <p>The Lambda triggers associated with the user pool.</p>
     */
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }

    /**
     * <p>The Lambda triggers associated with the user pool.</p>
     */
    inline void SetLambdaConfig(const LambdaConfigType& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>The Lambda triggers associated with the user pool.</p>
     */
    inline void SetLambdaConfig(LambdaConfigType&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::move(value); }

    /**
     * <p>The Lambda triggers associated with the user pool.</p>
     */
    inline UserPoolType& WithLambdaConfig(const LambdaConfigType& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>The Lambda triggers associated with the user pool.</p>
     */
    inline UserPoolType& WithLambdaConfig(LambdaConfigType&& value) { SetLambdaConfig(std::move(value)); return *this;}


    /**
     * <p>The status of a user pool.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a user pool.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a user pool.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a user pool.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a user pool.</p>
     */
    inline UserPoolType& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a user pool.</p>
     */
    inline UserPoolType& WithStatus(StatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline UserPoolType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline UserPoolType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was created.</p>
     */
    inline UserPoolType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was created.</p>
     */
    inline UserPoolType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>A list of the user attributes and their properties in your user pool. The
     * attribute schema contains standard attributes, custom attributes with a
     * <code>custom:</code> prefix, and developer attributes with a <code>dev:</code>
     * prefix. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html">User
     * pool attributes</a>.</p> <p>Developer-only attributes are a legacy feature of
     * user pools, are read-only to all app clients. You can create and update
     * developer-only attributes only with IAM-authenticated API operations. Use app
     * client read/write permissions instead.</p>
     */
    inline const Aws::Vector<SchemaAttributeType>& GetSchemaAttributes() const{ return m_schemaAttributes; }

    /**
     * <p>A list of the user attributes and their properties in your user pool. The
     * attribute schema contains standard attributes, custom attributes with a
     * <code>custom:</code> prefix, and developer attributes with a <code>dev:</code>
     * prefix. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html">User
     * pool attributes</a>.</p> <p>Developer-only attributes are a legacy feature of
     * user pools, are read-only to all app clients. You can create and update
     * developer-only attributes only with IAM-authenticated API operations. Use app
     * client read/write permissions instead.</p>
     */
    inline bool SchemaAttributesHasBeenSet() const { return m_schemaAttributesHasBeenSet; }

    /**
     * <p>A list of the user attributes and their properties in your user pool. The
     * attribute schema contains standard attributes, custom attributes with a
     * <code>custom:</code> prefix, and developer attributes with a <code>dev:</code>
     * prefix. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html">User
     * pool attributes</a>.</p> <p>Developer-only attributes are a legacy feature of
     * user pools, are read-only to all app clients. You can create and update
     * developer-only attributes only with IAM-authenticated API operations. Use app
     * client read/write permissions instead.</p>
     */
    inline void SetSchemaAttributes(const Aws::Vector<SchemaAttributeType>& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes = value; }

    /**
     * <p>A list of the user attributes and their properties in your user pool. The
     * attribute schema contains standard attributes, custom attributes with a
     * <code>custom:</code> prefix, and developer attributes with a <code>dev:</code>
     * prefix. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html">User
     * pool attributes</a>.</p> <p>Developer-only attributes are a legacy feature of
     * user pools, are read-only to all app clients. You can create and update
     * developer-only attributes only with IAM-authenticated API operations. Use app
     * client read/write permissions instead.</p>
     */
    inline void SetSchemaAttributes(Aws::Vector<SchemaAttributeType>&& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes = std::move(value); }

    /**
     * <p>A list of the user attributes and their properties in your user pool. The
     * attribute schema contains standard attributes, custom attributes with a
     * <code>custom:</code> prefix, and developer attributes with a <code>dev:</code>
     * prefix. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html">User
     * pool attributes</a>.</p> <p>Developer-only attributes are a legacy feature of
     * user pools, are read-only to all app clients. You can create and update
     * developer-only attributes only with IAM-authenticated API operations. Use app
     * client read/write permissions instead.</p>
     */
    inline UserPoolType& WithSchemaAttributes(const Aws::Vector<SchemaAttributeType>& value) { SetSchemaAttributes(value); return *this;}

    /**
     * <p>A list of the user attributes and their properties in your user pool. The
     * attribute schema contains standard attributes, custom attributes with a
     * <code>custom:</code> prefix, and developer attributes with a <code>dev:</code>
     * prefix. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html">User
     * pool attributes</a>.</p> <p>Developer-only attributes are a legacy feature of
     * user pools, are read-only to all app clients. You can create and update
     * developer-only attributes only with IAM-authenticated API operations. Use app
     * client read/write permissions instead.</p>
     */
    inline UserPoolType& WithSchemaAttributes(Aws::Vector<SchemaAttributeType>&& value) { SetSchemaAttributes(std::move(value)); return *this;}

    /**
     * <p>A list of the user attributes and their properties in your user pool. The
     * attribute schema contains standard attributes, custom attributes with a
     * <code>custom:</code> prefix, and developer attributes with a <code>dev:</code>
     * prefix. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html">User
     * pool attributes</a>.</p> <p>Developer-only attributes are a legacy feature of
     * user pools, are read-only to all app clients. You can create and update
     * developer-only attributes only with IAM-authenticated API operations. Use app
     * client read/write permissions instead.</p>
     */
    inline UserPoolType& AddSchemaAttributes(const SchemaAttributeType& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes.push_back(value); return *this; }

    /**
     * <p>A list of the user attributes and their properties in your user pool. The
     * attribute schema contains standard attributes, custom attributes with a
     * <code>custom:</code> prefix, and developer attributes with a <code>dev:</code>
     * prefix. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html">User
     * pool attributes</a>.</p> <p>Developer-only attributes are a legacy feature of
     * user pools, are read-only to all app clients. You can create and update
     * developer-only attributes only with IAM-authenticated API operations. Use app
     * client read/write permissions instead.</p>
     */
    inline UserPoolType& AddSchemaAttributes(SchemaAttributeType&& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The attributes that are auto-verified in a user pool.</p>
     */
    inline const Aws::Vector<VerifiedAttributeType>& GetAutoVerifiedAttributes() const{ return m_autoVerifiedAttributes; }

    /**
     * <p>The attributes that are auto-verified in a user pool.</p>
     */
    inline bool AutoVerifiedAttributesHasBeenSet() const { return m_autoVerifiedAttributesHasBeenSet; }

    /**
     * <p>The attributes that are auto-verified in a user pool.</p>
     */
    inline void SetAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = value; }

    /**
     * <p>The attributes that are auto-verified in a user pool.</p>
     */
    inline void SetAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = std::move(value); }

    /**
     * <p>The attributes that are auto-verified in a user pool.</p>
     */
    inline UserPoolType& WithAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { SetAutoVerifiedAttributes(value); return *this;}

    /**
     * <p>The attributes that are auto-verified in a user pool.</p>
     */
    inline UserPoolType& WithAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { SetAutoVerifiedAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes that are auto-verified in a user pool.</p>
     */
    inline UserPoolType& AddAutoVerifiedAttributes(const VerifiedAttributeType& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }

    /**
     * <p>The attributes that are auto-verified in a user pool.</p>
     */
    inline UserPoolType& AddAutoVerifiedAttributes(VerifiedAttributeType&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The attributes that are aliased in a user pool.</p>
     */
    inline const Aws::Vector<AliasAttributeType>& GetAliasAttributes() const{ return m_aliasAttributes; }

    /**
     * <p>The attributes that are aliased in a user pool.</p>
     */
    inline bool AliasAttributesHasBeenSet() const { return m_aliasAttributesHasBeenSet; }

    /**
     * <p>The attributes that are aliased in a user pool.</p>
     */
    inline void SetAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = value; }

    /**
     * <p>The attributes that are aliased in a user pool.</p>
     */
    inline void SetAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = std::move(value); }

    /**
     * <p>The attributes that are aliased in a user pool.</p>
     */
    inline UserPoolType& WithAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { SetAliasAttributes(value); return *this;}

    /**
     * <p>The attributes that are aliased in a user pool.</p>
     */
    inline UserPoolType& WithAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { SetAliasAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes that are aliased in a user pool.</p>
     */
    inline UserPoolType& AddAliasAttributes(const AliasAttributeType& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(value); return *this; }

    /**
     * <p>The attributes that are aliased in a user pool.</p>
     */
    inline UserPoolType& AddAliasAttributes(AliasAttributeType&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether a user can use an email address or phone number as a
     * username when they sign up.</p>
     */
    inline const Aws::Vector<UsernameAttributeType>& GetUsernameAttributes() const{ return m_usernameAttributes; }

    /**
     * <p>Specifies whether a user can use an email address or phone number as a
     * username when they sign up.</p>
     */
    inline bool UsernameAttributesHasBeenSet() const { return m_usernameAttributesHasBeenSet; }

    /**
     * <p>Specifies whether a user can use an email address or phone number as a
     * username when they sign up.</p>
     */
    inline void SetUsernameAttributes(const Aws::Vector<UsernameAttributeType>& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes = value; }

    /**
     * <p>Specifies whether a user can use an email address or phone number as a
     * username when they sign up.</p>
     */
    inline void SetUsernameAttributes(Aws::Vector<UsernameAttributeType>&& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes = std::move(value); }

    /**
     * <p>Specifies whether a user can use an email address or phone number as a
     * username when they sign up.</p>
     */
    inline UserPoolType& WithUsernameAttributes(const Aws::Vector<UsernameAttributeType>& value) { SetUsernameAttributes(value); return *this;}

    /**
     * <p>Specifies whether a user can use an email address or phone number as a
     * username when they sign up.</p>
     */
    inline UserPoolType& WithUsernameAttributes(Aws::Vector<UsernameAttributeType>&& value) { SetUsernameAttributes(std::move(value)); return *this;}

    /**
     * <p>Specifies whether a user can use an email address or phone number as a
     * username when they sign up.</p>
     */
    inline UserPoolType& AddUsernameAttributes(const UsernameAttributeType& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes.push_back(value); return *this; }

    /**
     * <p>Specifies whether a user can use an email address or phone number as a
     * username when they sign up.</p>
     */
    inline UserPoolType& AddUsernameAttributes(UsernameAttributeType&& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline const Aws::String& GetSmsVerificationMessage() const{ return m_smsVerificationMessage; }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline bool SmsVerificationMessageHasBeenSet() const { return m_smsVerificationMessageHasBeenSet; }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline void SetSmsVerificationMessage(const Aws::String& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = value; }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline void SetSmsVerificationMessage(Aws::String&& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = std::move(value); }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline void SetSmsVerificationMessage(const char* value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage.assign(value); }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline UserPoolType& WithSmsVerificationMessage(const Aws::String& value) { SetSmsVerificationMessage(value); return *this;}

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline UserPoolType& WithSmsVerificationMessage(Aws::String&& value) { SetSmsVerificationMessage(std::move(value)); return *this;}

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline UserPoolType& WithSmsVerificationMessage(const char* value) { SetSmsVerificationMessage(value); return *this;}


    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline const Aws::String& GetEmailVerificationMessage() const{ return m_emailVerificationMessage; }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline bool EmailVerificationMessageHasBeenSet() const { return m_emailVerificationMessageHasBeenSet; }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline void SetEmailVerificationMessage(const Aws::String& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = value; }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline void SetEmailVerificationMessage(Aws::String&& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = std::move(value); }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline void SetEmailVerificationMessage(const char* value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage.assign(value); }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline UserPoolType& WithEmailVerificationMessage(const Aws::String& value) { SetEmailVerificationMessage(value); return *this;}

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline UserPoolType& WithEmailVerificationMessage(Aws::String&& value) { SetEmailVerificationMessage(std::move(value)); return *this;}

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline UserPoolType& WithEmailVerificationMessage(const char* value) { SetEmailVerificationMessage(value); return *this;}


    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline const Aws::String& GetEmailVerificationSubject() const{ return m_emailVerificationSubject; }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline bool EmailVerificationSubjectHasBeenSet() const { return m_emailVerificationSubjectHasBeenSet; }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline void SetEmailVerificationSubject(const Aws::String& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = value; }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline void SetEmailVerificationSubject(Aws::String&& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = std::move(value); }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline void SetEmailVerificationSubject(const char* value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject.assign(value); }

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline UserPoolType& WithEmailVerificationSubject(const Aws::String& value) { SetEmailVerificationSubject(value); return *this;}

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline UserPoolType& WithEmailVerificationSubject(Aws::String&& value) { SetEmailVerificationSubject(std::move(value)); return *this;}

    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline UserPoolType& WithEmailVerificationSubject(const char* value) { SetEmailVerificationSubject(value); return *this;}


    /**
     * <p>The template for verification messages.</p>
     */
    inline const VerificationMessageTemplateType& GetVerificationMessageTemplate() const{ return m_verificationMessageTemplate; }

    /**
     * <p>The template for verification messages.</p>
     */
    inline bool VerificationMessageTemplateHasBeenSet() const { return m_verificationMessageTemplateHasBeenSet; }

    /**
     * <p>The template for verification messages.</p>
     */
    inline void SetVerificationMessageTemplate(const VerificationMessageTemplateType& value) { m_verificationMessageTemplateHasBeenSet = true; m_verificationMessageTemplate = value; }

    /**
     * <p>The template for verification messages.</p>
     */
    inline void SetVerificationMessageTemplate(VerificationMessageTemplateType&& value) { m_verificationMessageTemplateHasBeenSet = true; m_verificationMessageTemplate = std::move(value); }

    /**
     * <p>The template for verification messages.</p>
     */
    inline UserPoolType& WithVerificationMessageTemplate(const VerificationMessageTemplateType& value) { SetVerificationMessageTemplate(value); return *this;}

    /**
     * <p>The template for verification messages.</p>
     */
    inline UserPoolType& WithVerificationMessageTemplate(VerificationMessageTemplateType&& value) { SetVerificationMessageTemplate(std::move(value)); return *this;}


    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline const Aws::String& GetSmsAuthenticationMessage() const{ return m_smsAuthenticationMessage; }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline bool SmsAuthenticationMessageHasBeenSet() const { return m_smsAuthenticationMessageHasBeenSet; }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(const Aws::String& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = value; }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(Aws::String&& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = std::move(value); }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(const char* value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage.assign(value); }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline UserPoolType& WithSmsAuthenticationMessage(const Aws::String& value) { SetSmsAuthenticationMessage(value); return *this;}

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline UserPoolType& WithSmsAuthenticationMessage(Aws::String&& value) { SetSmsAuthenticationMessage(std::move(value)); return *this;}

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline UserPoolType& WithSmsAuthenticationMessage(const char* value) { SetSmsAuthenticationMessage(value); return *this;}


    /**
     * <p>The settings for updates to user attributes. These settings include the
     * property <code>AttributesRequireVerificationBeforeUpdate</code>, a user-pool
     * setting that tells Amazon Cognito how to handle changes to the value of your
     * users' email address and phone number attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html#user-pool-settings-verifications-verify-attribute-updates">
     * Verifying updates to email addresses and phone numbers</a>.</p>
     */
    inline const UserAttributeUpdateSettingsType& GetUserAttributeUpdateSettings() const{ return m_userAttributeUpdateSettings; }

    /**
     * <p>The settings for updates to user attributes. These settings include the
     * property <code>AttributesRequireVerificationBeforeUpdate</code>, a user-pool
     * setting that tells Amazon Cognito how to handle changes to the value of your
     * users' email address and phone number attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html#user-pool-settings-verifications-verify-attribute-updates">
     * Verifying updates to email addresses and phone numbers</a>.</p>
     */
    inline bool UserAttributeUpdateSettingsHasBeenSet() const { return m_userAttributeUpdateSettingsHasBeenSet; }

    /**
     * <p>The settings for updates to user attributes. These settings include the
     * property <code>AttributesRequireVerificationBeforeUpdate</code>, a user-pool
     * setting that tells Amazon Cognito how to handle changes to the value of your
     * users' email address and phone number attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html#user-pool-settings-verifications-verify-attribute-updates">
     * Verifying updates to email addresses and phone numbers</a>.</p>
     */
    inline void SetUserAttributeUpdateSettings(const UserAttributeUpdateSettingsType& value) { m_userAttributeUpdateSettingsHasBeenSet = true; m_userAttributeUpdateSettings = value; }

    /**
     * <p>The settings for updates to user attributes. These settings include the
     * property <code>AttributesRequireVerificationBeforeUpdate</code>, a user-pool
     * setting that tells Amazon Cognito how to handle changes to the value of your
     * users' email address and phone number attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html#user-pool-settings-verifications-verify-attribute-updates">
     * Verifying updates to email addresses and phone numbers</a>.</p>
     */
    inline void SetUserAttributeUpdateSettings(UserAttributeUpdateSettingsType&& value) { m_userAttributeUpdateSettingsHasBeenSet = true; m_userAttributeUpdateSettings = std::move(value); }

    /**
     * <p>The settings for updates to user attributes. These settings include the
     * property <code>AttributesRequireVerificationBeforeUpdate</code>, a user-pool
     * setting that tells Amazon Cognito how to handle changes to the value of your
     * users' email address and phone number attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html#user-pool-settings-verifications-verify-attribute-updates">
     * Verifying updates to email addresses and phone numbers</a>.</p>
     */
    inline UserPoolType& WithUserAttributeUpdateSettings(const UserAttributeUpdateSettingsType& value) { SetUserAttributeUpdateSettings(value); return *this;}

    /**
     * <p>The settings for updates to user attributes. These settings include the
     * property <code>AttributesRequireVerificationBeforeUpdate</code>, a user-pool
     * setting that tells Amazon Cognito how to handle changes to the value of your
     * users' email address and phone number attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html#user-pool-settings-verifications-verify-attribute-updates">
     * Verifying updates to email addresses and phone numbers</a>.</p>
     */
    inline UserPoolType& WithUserAttributeUpdateSettings(UserAttributeUpdateSettingsType&& value) { SetUserAttributeUpdateSettings(std::move(value)); return *this;}


    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens aren't required and can't be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you're initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens aren't required and can't be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you're initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline bool MfaConfigurationHasBeenSet() const { return m_mfaConfigurationHasBeenSet; }

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens aren't required and can't be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you're initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens aren't required and can't be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you're initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = std::move(value); }

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens aren't required and can't be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you're initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline UserPoolType& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens aren't required and can't be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you're initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline UserPoolType& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}


    /**
     * <p>The device-remembering configuration for a user pool. A null value indicates
     * that you have deactivated device remembering in your user pool.</p> 
     * <p>When you provide a value for any <code>DeviceConfiguration</code> field, you
     * activate the Amazon Cognito device-remembering feature.</p> 
     */
    inline const DeviceConfigurationType& GetDeviceConfiguration() const{ return m_deviceConfiguration; }

    /**
     * <p>The device-remembering configuration for a user pool. A null value indicates
     * that you have deactivated device remembering in your user pool.</p> 
     * <p>When you provide a value for any <code>DeviceConfiguration</code> field, you
     * activate the Amazon Cognito device-remembering feature.</p> 
     */
    inline bool DeviceConfigurationHasBeenSet() const { return m_deviceConfigurationHasBeenSet; }

    /**
     * <p>The device-remembering configuration for a user pool. A null value indicates
     * that you have deactivated device remembering in your user pool.</p> 
     * <p>When you provide a value for any <code>DeviceConfiguration</code> field, you
     * activate the Amazon Cognito device-remembering feature.</p> 
     */
    inline void SetDeviceConfiguration(const DeviceConfigurationType& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = value; }

    /**
     * <p>The device-remembering configuration for a user pool. A null value indicates
     * that you have deactivated device remembering in your user pool.</p> 
     * <p>When you provide a value for any <code>DeviceConfiguration</code> field, you
     * activate the Amazon Cognito device-remembering feature.</p> 
     */
    inline void SetDeviceConfiguration(DeviceConfigurationType&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = std::move(value); }

    /**
     * <p>The device-remembering configuration for a user pool. A null value indicates
     * that you have deactivated device remembering in your user pool.</p> 
     * <p>When you provide a value for any <code>DeviceConfiguration</code> field, you
     * activate the Amazon Cognito device-remembering feature.</p> 
     */
    inline UserPoolType& WithDeviceConfiguration(const DeviceConfigurationType& value) { SetDeviceConfiguration(value); return *this;}

    /**
     * <p>The device-remembering configuration for a user pool. A null value indicates
     * that you have deactivated device remembering in your user pool.</p> 
     * <p>When you provide a value for any <code>DeviceConfiguration</code> field, you
     * activate the Amazon Cognito device-remembering feature.</p> 
     */
    inline UserPoolType& WithDeviceConfiguration(DeviceConfigurationType&& value) { SetDeviceConfiguration(std::move(value)); return *this;}


    /**
     * <p>A number estimating the size of the user pool.</p>
     */
    inline int GetEstimatedNumberOfUsers() const{ return m_estimatedNumberOfUsers; }

    /**
     * <p>A number estimating the size of the user pool.</p>
     */
    inline bool EstimatedNumberOfUsersHasBeenSet() const { return m_estimatedNumberOfUsersHasBeenSet; }

    /**
     * <p>A number estimating the size of the user pool.</p>
     */
    inline void SetEstimatedNumberOfUsers(int value) { m_estimatedNumberOfUsersHasBeenSet = true; m_estimatedNumberOfUsers = value; }

    /**
     * <p>A number estimating the size of the user pool.</p>
     */
    inline UserPoolType& WithEstimatedNumberOfUsers(int value) { SetEstimatedNumberOfUsers(value); return *this;}


    /**
     * <p>The email configuration of your user pool. The email configuration type sets
     * your preferred sending method, Amazon Web Services Region, and sender for
     * messages from your user pool.</p>
     */
    inline const EmailConfigurationType& GetEmailConfiguration() const{ return m_emailConfiguration; }

    /**
     * <p>The email configuration of your user pool. The email configuration type sets
     * your preferred sending method, Amazon Web Services Region, and sender for
     * messages from your user pool.</p>
     */
    inline bool EmailConfigurationHasBeenSet() const { return m_emailConfigurationHasBeenSet; }

    /**
     * <p>The email configuration of your user pool. The email configuration type sets
     * your preferred sending method, Amazon Web Services Region, and sender for
     * messages from your user pool.</p>
     */
    inline void SetEmailConfiguration(const EmailConfigurationType& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = value; }

    /**
     * <p>The email configuration of your user pool. The email configuration type sets
     * your preferred sending method, Amazon Web Services Region, and sender for
     * messages from your user pool.</p>
     */
    inline void SetEmailConfiguration(EmailConfigurationType&& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = std::move(value); }

    /**
     * <p>The email configuration of your user pool. The email configuration type sets
     * your preferred sending method, Amazon Web Services Region, and sender for
     * messages from your user pool.</p>
     */
    inline UserPoolType& WithEmailConfiguration(const EmailConfigurationType& value) { SetEmailConfiguration(value); return *this;}

    /**
     * <p>The email configuration of your user pool. The email configuration type sets
     * your preferred sending method, Amazon Web Services Region, and sender for
     * messages from your user pool.</p>
     */
    inline UserPoolType& WithEmailConfiguration(EmailConfigurationType&& value) { SetEmailConfiguration(std::move(value)); return *this;}


    /**
     * <p>The SMS configuration with the settings that your Amazon Cognito user pool
     * must use to send an SMS message from your Amazon Web Services account through
     * Amazon Simple Notification Service. To send SMS messages with Amazon SNS in the
     * Amazon Web Services Region that you want, the Amazon Cognito user pool uses an
     * Identity and Access Management (IAM) role in your Amazon Web Services
     * account.</p>
     */
    inline const SmsConfigurationType& GetSmsConfiguration() const{ return m_smsConfiguration; }

    /**
     * <p>The SMS configuration with the settings that your Amazon Cognito user pool
     * must use to send an SMS message from your Amazon Web Services account through
     * Amazon Simple Notification Service. To send SMS messages with Amazon SNS in the
     * Amazon Web Services Region that you want, the Amazon Cognito user pool uses an
     * Identity and Access Management (IAM) role in your Amazon Web Services
     * account.</p>
     */
    inline bool SmsConfigurationHasBeenSet() const { return m_smsConfigurationHasBeenSet; }

    /**
     * <p>The SMS configuration with the settings that your Amazon Cognito user pool
     * must use to send an SMS message from your Amazon Web Services account through
     * Amazon Simple Notification Service. To send SMS messages with Amazon SNS in the
     * Amazon Web Services Region that you want, the Amazon Cognito user pool uses an
     * Identity and Access Management (IAM) role in your Amazon Web Services
     * account.</p>
     */
    inline void SetSmsConfiguration(const SmsConfigurationType& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = value; }

    /**
     * <p>The SMS configuration with the settings that your Amazon Cognito user pool
     * must use to send an SMS message from your Amazon Web Services account through
     * Amazon Simple Notification Service. To send SMS messages with Amazon SNS in the
     * Amazon Web Services Region that you want, the Amazon Cognito user pool uses an
     * Identity and Access Management (IAM) role in your Amazon Web Services
     * account.</p>
     */
    inline void SetSmsConfiguration(SmsConfigurationType&& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = std::move(value); }

    /**
     * <p>The SMS configuration with the settings that your Amazon Cognito user pool
     * must use to send an SMS message from your Amazon Web Services account through
     * Amazon Simple Notification Service. To send SMS messages with Amazon SNS in the
     * Amazon Web Services Region that you want, the Amazon Cognito user pool uses an
     * Identity and Access Management (IAM) role in your Amazon Web Services
     * account.</p>
     */
    inline UserPoolType& WithSmsConfiguration(const SmsConfigurationType& value) { SetSmsConfiguration(value); return *this;}

    /**
     * <p>The SMS configuration with the settings that your Amazon Cognito user pool
     * must use to send an SMS message from your Amazon Web Services account through
     * Amazon Simple Notification Service. To send SMS messages with Amazon SNS in the
     * Amazon Web Services Region that you want, the Amazon Cognito user pool uses an
     * Identity and Access Management (IAM) role in your Amazon Web Services
     * account.</p>
     */
    inline UserPoolType& WithSmsConfiguration(SmsConfigurationType&& value) { SetSmsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserPoolTags() const{ return m_userPoolTags; }

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline bool UserPoolTagsHasBeenSet() const { return m_userPoolTagsHasBeenSet; }

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline void SetUserPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags = value; }

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline void SetUserPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags = std::move(value); }

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UserPoolType& WithUserPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { SetUserPoolTags(value); return *this;}

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UserPoolType& WithUserPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { SetUserPoolTags(std::move(value)); return *this;}

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UserPoolType& AddUserPoolTags(const Aws::String& key, const Aws::String& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, value); return *this; }

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UserPoolType& AddUserPoolTags(Aws::String&& key, const Aws::String& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UserPoolType& AddUserPoolTags(const Aws::String& key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UserPoolType& AddUserPoolTags(Aws::String&& key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UserPoolType& AddUserPoolTags(const char* key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UserPoolType& AddUserPoolTags(Aws::String&& key, const char* value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UserPoolType& AddUserPoolTags(const char* key, const char* value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, value); return *this; }


    /**
     * <p>The reason why the SMS configuration can't send the messages to your
     * users.</p> <p>This message might include comma-separated values to describe why
     * your SMS configuration can't send messages to user pool end users.</p> <dl>
     * <dt>InvalidSmsRoleAccessPolicyException</dt> <dd> <p>The Identity and Access
     * Management role that Amazon Cognito uses to send SMS messages isn't properly
     * configured. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SmsConfigurationType.html">SmsConfigurationType</a>.</p>
     * </dd> <dt>SNSSandbox</dt> <dd> <p>The Amazon Web Services account is in the SNS
     * SMS Sandbox and messages will only reach verified end users. This parameter
     * won’t get populated with SNSSandbox if the user creating the user pool doesn’t
     * have SNS permissions. To learn how to move your Amazon Web Services account out
     * of the sandbox, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox-moving-to-production.html">Moving
     * out of the SMS sandbox</a>.</p> </dd> </dl>
     */
    inline const Aws::String& GetSmsConfigurationFailure() const{ return m_smsConfigurationFailure; }

    /**
     * <p>The reason why the SMS configuration can't send the messages to your
     * users.</p> <p>This message might include comma-separated values to describe why
     * your SMS configuration can't send messages to user pool end users.</p> <dl>
     * <dt>InvalidSmsRoleAccessPolicyException</dt> <dd> <p>The Identity and Access
     * Management role that Amazon Cognito uses to send SMS messages isn't properly
     * configured. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SmsConfigurationType.html">SmsConfigurationType</a>.</p>
     * </dd> <dt>SNSSandbox</dt> <dd> <p>The Amazon Web Services account is in the SNS
     * SMS Sandbox and messages will only reach verified end users. This parameter
     * won’t get populated with SNSSandbox if the user creating the user pool doesn’t
     * have SNS permissions. To learn how to move your Amazon Web Services account out
     * of the sandbox, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox-moving-to-production.html">Moving
     * out of the SMS sandbox</a>.</p> </dd> </dl>
     */
    inline bool SmsConfigurationFailureHasBeenSet() const { return m_smsConfigurationFailureHasBeenSet; }

    /**
     * <p>The reason why the SMS configuration can't send the messages to your
     * users.</p> <p>This message might include comma-separated values to describe why
     * your SMS configuration can't send messages to user pool end users.</p> <dl>
     * <dt>InvalidSmsRoleAccessPolicyException</dt> <dd> <p>The Identity and Access
     * Management role that Amazon Cognito uses to send SMS messages isn't properly
     * configured. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SmsConfigurationType.html">SmsConfigurationType</a>.</p>
     * </dd> <dt>SNSSandbox</dt> <dd> <p>The Amazon Web Services account is in the SNS
     * SMS Sandbox and messages will only reach verified end users. This parameter
     * won’t get populated with SNSSandbox if the user creating the user pool doesn’t
     * have SNS permissions. To learn how to move your Amazon Web Services account out
     * of the sandbox, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox-moving-to-production.html">Moving
     * out of the SMS sandbox</a>.</p> </dd> </dl>
     */
    inline void SetSmsConfigurationFailure(const Aws::String& value) { m_smsConfigurationFailureHasBeenSet = true; m_smsConfigurationFailure = value; }

    /**
     * <p>The reason why the SMS configuration can't send the messages to your
     * users.</p> <p>This message might include comma-separated values to describe why
     * your SMS configuration can't send messages to user pool end users.</p> <dl>
     * <dt>InvalidSmsRoleAccessPolicyException</dt> <dd> <p>The Identity and Access
     * Management role that Amazon Cognito uses to send SMS messages isn't properly
     * configured. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SmsConfigurationType.html">SmsConfigurationType</a>.</p>
     * </dd> <dt>SNSSandbox</dt> <dd> <p>The Amazon Web Services account is in the SNS
     * SMS Sandbox and messages will only reach verified end users. This parameter
     * won’t get populated with SNSSandbox if the user creating the user pool doesn’t
     * have SNS permissions. To learn how to move your Amazon Web Services account out
     * of the sandbox, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox-moving-to-production.html">Moving
     * out of the SMS sandbox</a>.</p> </dd> </dl>
     */
    inline void SetSmsConfigurationFailure(Aws::String&& value) { m_smsConfigurationFailureHasBeenSet = true; m_smsConfigurationFailure = std::move(value); }

    /**
     * <p>The reason why the SMS configuration can't send the messages to your
     * users.</p> <p>This message might include comma-separated values to describe why
     * your SMS configuration can't send messages to user pool end users.</p> <dl>
     * <dt>InvalidSmsRoleAccessPolicyException</dt> <dd> <p>The Identity and Access
     * Management role that Amazon Cognito uses to send SMS messages isn't properly
     * configured. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SmsConfigurationType.html">SmsConfigurationType</a>.</p>
     * </dd> <dt>SNSSandbox</dt> <dd> <p>The Amazon Web Services account is in the SNS
     * SMS Sandbox and messages will only reach verified end users. This parameter
     * won’t get populated with SNSSandbox if the user creating the user pool doesn’t
     * have SNS permissions. To learn how to move your Amazon Web Services account out
     * of the sandbox, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox-moving-to-production.html">Moving
     * out of the SMS sandbox</a>.</p> </dd> </dl>
     */
    inline void SetSmsConfigurationFailure(const char* value) { m_smsConfigurationFailureHasBeenSet = true; m_smsConfigurationFailure.assign(value); }

    /**
     * <p>The reason why the SMS configuration can't send the messages to your
     * users.</p> <p>This message might include comma-separated values to describe why
     * your SMS configuration can't send messages to user pool end users.</p> <dl>
     * <dt>InvalidSmsRoleAccessPolicyException</dt> <dd> <p>The Identity and Access
     * Management role that Amazon Cognito uses to send SMS messages isn't properly
     * configured. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SmsConfigurationType.html">SmsConfigurationType</a>.</p>
     * </dd> <dt>SNSSandbox</dt> <dd> <p>The Amazon Web Services account is in the SNS
     * SMS Sandbox and messages will only reach verified end users. This parameter
     * won’t get populated with SNSSandbox if the user creating the user pool doesn’t
     * have SNS permissions. To learn how to move your Amazon Web Services account out
     * of the sandbox, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox-moving-to-production.html">Moving
     * out of the SMS sandbox</a>.</p> </dd> </dl>
     */
    inline UserPoolType& WithSmsConfigurationFailure(const Aws::String& value) { SetSmsConfigurationFailure(value); return *this;}

    /**
     * <p>The reason why the SMS configuration can't send the messages to your
     * users.</p> <p>This message might include comma-separated values to describe why
     * your SMS configuration can't send messages to user pool end users.</p> <dl>
     * <dt>InvalidSmsRoleAccessPolicyException</dt> <dd> <p>The Identity and Access
     * Management role that Amazon Cognito uses to send SMS messages isn't properly
     * configured. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SmsConfigurationType.html">SmsConfigurationType</a>.</p>
     * </dd> <dt>SNSSandbox</dt> <dd> <p>The Amazon Web Services account is in the SNS
     * SMS Sandbox and messages will only reach verified end users. This parameter
     * won’t get populated with SNSSandbox if the user creating the user pool doesn’t
     * have SNS permissions. To learn how to move your Amazon Web Services account out
     * of the sandbox, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox-moving-to-production.html">Moving
     * out of the SMS sandbox</a>.</p> </dd> </dl>
     */
    inline UserPoolType& WithSmsConfigurationFailure(Aws::String&& value) { SetSmsConfigurationFailure(std::move(value)); return *this;}

    /**
     * <p>The reason why the SMS configuration can't send the messages to your
     * users.</p> <p>This message might include comma-separated values to describe why
     * your SMS configuration can't send messages to user pool end users.</p> <dl>
     * <dt>InvalidSmsRoleAccessPolicyException</dt> <dd> <p>The Identity and Access
     * Management role that Amazon Cognito uses to send SMS messages isn't properly
     * configured. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SmsConfigurationType.html">SmsConfigurationType</a>.</p>
     * </dd> <dt>SNSSandbox</dt> <dd> <p>The Amazon Web Services account is in the SNS
     * SMS Sandbox and messages will only reach verified end users. This parameter
     * won’t get populated with SNSSandbox if the user creating the user pool doesn’t
     * have SNS permissions. To learn how to move your Amazon Web Services account out
     * of the sandbox, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox-moving-to-production.html">Moving
     * out of the SMS sandbox</a>.</p> </dd> </dl>
     */
    inline UserPoolType& WithSmsConfigurationFailure(const char* value) { SetSmsConfigurationFailure(value); return *this;}


    /**
     * <p>Deprecated. Review error codes from API requests with
     * <code>EventSource:cognito-idp.amazonaws.com</code> in CloudTrail for information
     * about problems with user pool email configuration.</p>
     */
    inline const Aws::String& GetEmailConfigurationFailure() const{ return m_emailConfigurationFailure; }

    /**
     * <p>Deprecated. Review error codes from API requests with
     * <code>EventSource:cognito-idp.amazonaws.com</code> in CloudTrail for information
     * about problems with user pool email configuration.</p>
     */
    inline bool EmailConfigurationFailureHasBeenSet() const { return m_emailConfigurationFailureHasBeenSet; }

    /**
     * <p>Deprecated. Review error codes from API requests with
     * <code>EventSource:cognito-idp.amazonaws.com</code> in CloudTrail for information
     * about problems with user pool email configuration.</p>
     */
    inline void SetEmailConfigurationFailure(const Aws::String& value) { m_emailConfigurationFailureHasBeenSet = true; m_emailConfigurationFailure = value; }

    /**
     * <p>Deprecated. Review error codes from API requests with
     * <code>EventSource:cognito-idp.amazonaws.com</code> in CloudTrail for information
     * about problems with user pool email configuration.</p>
     */
    inline void SetEmailConfigurationFailure(Aws::String&& value) { m_emailConfigurationFailureHasBeenSet = true; m_emailConfigurationFailure = std::move(value); }

    /**
     * <p>Deprecated. Review error codes from API requests with
     * <code>EventSource:cognito-idp.amazonaws.com</code> in CloudTrail for information
     * about problems with user pool email configuration.</p>
     */
    inline void SetEmailConfigurationFailure(const char* value) { m_emailConfigurationFailureHasBeenSet = true; m_emailConfigurationFailure.assign(value); }

    /**
     * <p>Deprecated. Review error codes from API requests with
     * <code>EventSource:cognito-idp.amazonaws.com</code> in CloudTrail for information
     * about problems with user pool email configuration.</p>
     */
    inline UserPoolType& WithEmailConfigurationFailure(const Aws::String& value) { SetEmailConfigurationFailure(value); return *this;}

    /**
     * <p>Deprecated. Review error codes from API requests with
     * <code>EventSource:cognito-idp.amazonaws.com</code> in CloudTrail for information
     * about problems with user pool email configuration.</p>
     */
    inline UserPoolType& WithEmailConfigurationFailure(Aws::String&& value) { SetEmailConfigurationFailure(std::move(value)); return *this;}

    /**
     * <p>Deprecated. Review error codes from API requests with
     * <code>EventSource:cognito-idp.amazonaws.com</code> in CloudTrail for information
     * about problems with user pool email configuration.</p>
     */
    inline UserPoolType& WithEmailConfigurationFailure(const char* value) { SetEmailConfigurationFailure(value); return *this;}


    /**
     * <p>The domain prefix, if the user pool has a domain associated with it.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain prefix, if the user pool has a domain associated with it.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The domain prefix, if the user pool has a domain associated with it.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The domain prefix, if the user pool has a domain associated with it.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The domain prefix, if the user pool has a domain associated with it.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The domain prefix, if the user pool has a domain associated with it.</p>
     */
    inline UserPoolType& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain prefix, if the user pool has a domain associated with it.</p>
     */
    inline UserPoolType& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The domain prefix, if the user pool has a domain associated with it.</p>
     */
    inline UserPoolType& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>A custom domain name that you provide to Amazon Cognito. This parameter
     * applies only if you use a custom domain to host the sign-up and sign-in pages
     * for your application. An example of a custom domain name might be
     * <code>auth.example.com</code>.</p> <p>For more information about adding a custom
     * domain to your user pool, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
     * Your Own Domain for the Hosted UI</a>.</p>
     */
    inline const Aws::String& GetCustomDomain() const{ return m_customDomain; }

    /**
     * <p>A custom domain name that you provide to Amazon Cognito. This parameter
     * applies only if you use a custom domain to host the sign-up and sign-in pages
     * for your application. An example of a custom domain name might be
     * <code>auth.example.com</code>.</p> <p>For more information about adding a custom
     * domain to your user pool, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
     * Your Own Domain for the Hosted UI</a>.</p>
     */
    inline bool CustomDomainHasBeenSet() const { return m_customDomainHasBeenSet; }

    /**
     * <p>A custom domain name that you provide to Amazon Cognito. This parameter
     * applies only if you use a custom domain to host the sign-up and sign-in pages
     * for your application. An example of a custom domain name might be
     * <code>auth.example.com</code>.</p> <p>For more information about adding a custom
     * domain to your user pool, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
     * Your Own Domain for the Hosted UI</a>.</p>
     */
    inline void SetCustomDomain(const Aws::String& value) { m_customDomainHasBeenSet = true; m_customDomain = value; }

    /**
     * <p>A custom domain name that you provide to Amazon Cognito. This parameter
     * applies only if you use a custom domain to host the sign-up and sign-in pages
     * for your application. An example of a custom domain name might be
     * <code>auth.example.com</code>.</p> <p>For more information about adding a custom
     * domain to your user pool, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
     * Your Own Domain for the Hosted UI</a>.</p>
     */
    inline void SetCustomDomain(Aws::String&& value) { m_customDomainHasBeenSet = true; m_customDomain = std::move(value); }

    /**
     * <p>A custom domain name that you provide to Amazon Cognito. This parameter
     * applies only if you use a custom domain to host the sign-up and sign-in pages
     * for your application. An example of a custom domain name might be
     * <code>auth.example.com</code>.</p> <p>For more information about adding a custom
     * domain to your user pool, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
     * Your Own Domain for the Hosted UI</a>.</p>
     */
    inline void SetCustomDomain(const char* value) { m_customDomainHasBeenSet = true; m_customDomain.assign(value); }

    /**
     * <p>A custom domain name that you provide to Amazon Cognito. This parameter
     * applies only if you use a custom domain to host the sign-up and sign-in pages
     * for your application. An example of a custom domain name might be
     * <code>auth.example.com</code>.</p> <p>For more information about adding a custom
     * domain to your user pool, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
     * Your Own Domain for the Hosted UI</a>.</p>
     */
    inline UserPoolType& WithCustomDomain(const Aws::String& value) { SetCustomDomain(value); return *this;}

    /**
     * <p>A custom domain name that you provide to Amazon Cognito. This parameter
     * applies only if you use a custom domain to host the sign-up and sign-in pages
     * for your application. An example of a custom domain name might be
     * <code>auth.example.com</code>.</p> <p>For more information about adding a custom
     * domain to your user pool, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
     * Your Own Domain for the Hosted UI</a>.</p>
     */
    inline UserPoolType& WithCustomDomain(Aws::String&& value) { SetCustomDomain(std::move(value)); return *this;}

    /**
     * <p>A custom domain name that you provide to Amazon Cognito. This parameter
     * applies only if you use a custom domain to host the sign-up and sign-in pages
     * for your application. An example of a custom domain name might be
     * <code>auth.example.com</code>.</p> <p>For more information about adding a custom
     * domain to your user pool, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
     * Your Own Domain for the Hosted UI</a>.</p>
     */
    inline UserPoolType& WithCustomDomain(const char* value) { SetCustomDomain(value); return *this;}


    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline const AdminCreateUserConfigType& GetAdminCreateUserConfig() const{ return m_adminCreateUserConfig; }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline bool AdminCreateUserConfigHasBeenSet() const { return m_adminCreateUserConfigHasBeenSet; }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline void SetAdminCreateUserConfig(const AdminCreateUserConfigType& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = value; }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline void SetAdminCreateUserConfig(AdminCreateUserConfigType&& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = std::move(value); }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline UserPoolType& WithAdminCreateUserConfig(const AdminCreateUserConfigType& value) { SetAdminCreateUserConfig(value); return *this;}

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline UserPoolType& WithAdminCreateUserConfig(AdminCreateUserConfigType&& value) { SetAdminCreateUserConfig(std::move(value)); return *this;}


    /**
     * <p>User pool add-ons. Contains settings for activation of advanced security
     * features. To log user security information but take no action, set to
     * <code>AUDIT</code>. To configure automatic security responses to risky traffic
     * to your user pool, set to <code>ENFORCED</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">Adding
     * advanced security to a user pool</a>.</p>
     */
    inline const UserPoolAddOnsType& GetUserPoolAddOns() const{ return m_userPoolAddOns; }

    /**
     * <p>User pool add-ons. Contains settings for activation of advanced security
     * features. To log user security information but take no action, set to
     * <code>AUDIT</code>. To configure automatic security responses to risky traffic
     * to your user pool, set to <code>ENFORCED</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">Adding
     * advanced security to a user pool</a>.</p>
     */
    inline bool UserPoolAddOnsHasBeenSet() const { return m_userPoolAddOnsHasBeenSet; }

    /**
     * <p>User pool add-ons. Contains settings for activation of advanced security
     * features. To log user security information but take no action, set to
     * <code>AUDIT</code>. To configure automatic security responses to risky traffic
     * to your user pool, set to <code>ENFORCED</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">Adding
     * advanced security to a user pool</a>.</p>
     */
    inline void SetUserPoolAddOns(const UserPoolAddOnsType& value) { m_userPoolAddOnsHasBeenSet = true; m_userPoolAddOns = value; }

    /**
     * <p>User pool add-ons. Contains settings for activation of advanced security
     * features. To log user security information but take no action, set to
     * <code>AUDIT</code>. To configure automatic security responses to risky traffic
     * to your user pool, set to <code>ENFORCED</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">Adding
     * advanced security to a user pool</a>.</p>
     */
    inline void SetUserPoolAddOns(UserPoolAddOnsType&& value) { m_userPoolAddOnsHasBeenSet = true; m_userPoolAddOns = std::move(value); }

    /**
     * <p>User pool add-ons. Contains settings for activation of advanced security
     * features. To log user security information but take no action, set to
     * <code>AUDIT</code>. To configure automatic security responses to risky traffic
     * to your user pool, set to <code>ENFORCED</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">Adding
     * advanced security to a user pool</a>.</p>
     */
    inline UserPoolType& WithUserPoolAddOns(const UserPoolAddOnsType& value) { SetUserPoolAddOns(value); return *this;}

    /**
     * <p>User pool add-ons. Contains settings for activation of advanced security
     * features. To log user security information but take no action, set to
     * <code>AUDIT</code>. To configure automatic security responses to risky traffic
     * to your user pool, set to <code>ENFORCED</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">Adding
     * advanced security to a user pool</a>.</p>
     */
    inline UserPoolType& WithUserPoolAddOns(UserPoolAddOnsType&& value) { SetUserPoolAddOns(std::move(value)); return *this;}


    /**
     * <p>Case sensitivity of the username input for the selected sign-in option. For
     * example, when case sensitivity is set to <code>False</code>, users can sign in
     * using either "username" or "Username". This configuration is immutable once it
     * has been set. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UsernameConfigurationType.html">UsernameConfigurationType</a>.</p>
     */
    inline const UsernameConfigurationType& GetUsernameConfiguration() const{ return m_usernameConfiguration; }

    /**
     * <p>Case sensitivity of the username input for the selected sign-in option. For
     * example, when case sensitivity is set to <code>False</code>, users can sign in
     * using either "username" or "Username". This configuration is immutable once it
     * has been set. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UsernameConfigurationType.html">UsernameConfigurationType</a>.</p>
     */
    inline bool UsernameConfigurationHasBeenSet() const { return m_usernameConfigurationHasBeenSet; }

    /**
     * <p>Case sensitivity of the username input for the selected sign-in option. For
     * example, when case sensitivity is set to <code>False</code>, users can sign in
     * using either "username" or "Username". This configuration is immutable once it
     * has been set. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UsernameConfigurationType.html">UsernameConfigurationType</a>.</p>
     */
    inline void SetUsernameConfiguration(const UsernameConfigurationType& value) { m_usernameConfigurationHasBeenSet = true; m_usernameConfiguration = value; }

    /**
     * <p>Case sensitivity of the username input for the selected sign-in option. For
     * example, when case sensitivity is set to <code>False</code>, users can sign in
     * using either "username" or "Username". This configuration is immutable once it
     * has been set. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UsernameConfigurationType.html">UsernameConfigurationType</a>.</p>
     */
    inline void SetUsernameConfiguration(UsernameConfigurationType&& value) { m_usernameConfigurationHasBeenSet = true; m_usernameConfiguration = std::move(value); }

    /**
     * <p>Case sensitivity of the username input for the selected sign-in option. For
     * example, when case sensitivity is set to <code>False</code>, users can sign in
     * using either "username" or "Username". This configuration is immutable once it
     * has been set. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UsernameConfigurationType.html">UsernameConfigurationType</a>.</p>
     */
    inline UserPoolType& WithUsernameConfiguration(const UsernameConfigurationType& value) { SetUsernameConfiguration(value); return *this;}

    /**
     * <p>Case sensitivity of the username input for the selected sign-in option. For
     * example, when case sensitivity is set to <code>False</code>, users can sign in
     * using either "username" or "Username". This configuration is immutable once it
     * has been set. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UsernameConfigurationType.html">UsernameConfigurationType</a>.</p>
     */
    inline UserPoolType& WithUsernameConfiguration(UsernameConfigurationType&& value) { SetUsernameConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the user pool.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the user pool.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the user pool.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the user pool.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the user pool.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the user pool.</p>
     */
    inline UserPoolType& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the user pool.</p>
     */
    inline UserPoolType& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the user pool.</p>
     */
    inline UserPoolType& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The available verified method a user can use to recover their password when
     * they call <code>ForgotPassword</code>. You can use this setting to define a
     * preferred method when a user has more than one method available. With this
     * setting, SMS doesn't qualify for a valid password recovery mechanism if the user
     * also has SMS multi-factor authentication (MFA) activated. In the absence of this
     * setting, Amazon Cognito uses the legacy behavior to determine the recovery
     * method where SMS is preferred through email.</p>
     */
    inline const AccountRecoverySettingType& GetAccountRecoverySetting() const{ return m_accountRecoverySetting; }

    /**
     * <p>The available verified method a user can use to recover their password when
     * they call <code>ForgotPassword</code>. You can use this setting to define a
     * preferred method when a user has more than one method available. With this
     * setting, SMS doesn't qualify for a valid password recovery mechanism if the user
     * also has SMS multi-factor authentication (MFA) activated. In the absence of this
     * setting, Amazon Cognito uses the legacy behavior to determine the recovery
     * method where SMS is preferred through email.</p>
     */
    inline bool AccountRecoverySettingHasBeenSet() const { return m_accountRecoverySettingHasBeenSet; }

    /**
     * <p>The available verified method a user can use to recover their password when
     * they call <code>ForgotPassword</code>. You can use this setting to define a
     * preferred method when a user has more than one method available. With this
     * setting, SMS doesn't qualify for a valid password recovery mechanism if the user
     * also has SMS multi-factor authentication (MFA) activated. In the absence of this
     * setting, Amazon Cognito uses the legacy behavior to determine the recovery
     * method where SMS is preferred through email.</p>
     */
    inline void SetAccountRecoverySetting(const AccountRecoverySettingType& value) { m_accountRecoverySettingHasBeenSet = true; m_accountRecoverySetting = value; }

    /**
     * <p>The available verified method a user can use to recover their password when
     * they call <code>ForgotPassword</code>. You can use this setting to define a
     * preferred method when a user has more than one method available. With this
     * setting, SMS doesn't qualify for a valid password recovery mechanism if the user
     * also has SMS multi-factor authentication (MFA) activated. In the absence of this
     * setting, Amazon Cognito uses the legacy behavior to determine the recovery
     * method where SMS is preferred through email.</p>
     */
    inline void SetAccountRecoverySetting(AccountRecoverySettingType&& value) { m_accountRecoverySettingHasBeenSet = true; m_accountRecoverySetting = std::move(value); }

    /**
     * <p>The available verified method a user can use to recover their password when
     * they call <code>ForgotPassword</code>. You can use this setting to define a
     * preferred method when a user has more than one method available. With this
     * setting, SMS doesn't qualify for a valid password recovery mechanism if the user
     * also has SMS multi-factor authentication (MFA) activated. In the absence of this
     * setting, Amazon Cognito uses the legacy behavior to determine the recovery
     * method where SMS is preferred through email.</p>
     */
    inline UserPoolType& WithAccountRecoverySetting(const AccountRecoverySettingType& value) { SetAccountRecoverySetting(value); return *this;}

    /**
     * <p>The available verified method a user can use to recover their password when
     * they call <code>ForgotPassword</code>. You can use this setting to define a
     * preferred method when a user has more than one method available. With this
     * setting, SMS doesn't qualify for a valid password recovery mechanism if the user
     * also has SMS multi-factor authentication (MFA) activated. In the absence of this
     * setting, Amazon Cognito uses the legacy behavior to determine the recovery
     * method where SMS is preferred through email.</p>
     */
    inline UserPoolType& WithAccountRecoverySetting(AccountRecoverySettingType&& value) { SetAccountRecoverySetting(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    UserPoolPolicyType m_policies;
    bool m_policiesHasBeenSet = false;

    DeletionProtectionType m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    LambdaConfigType m_lambdaConfig;
    bool m_lambdaConfigHasBeenSet = false;

    StatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Vector<SchemaAttributeType> m_schemaAttributes;
    bool m_schemaAttributesHasBeenSet = false;

    Aws::Vector<VerifiedAttributeType> m_autoVerifiedAttributes;
    bool m_autoVerifiedAttributesHasBeenSet = false;

    Aws::Vector<AliasAttributeType> m_aliasAttributes;
    bool m_aliasAttributesHasBeenSet = false;

    Aws::Vector<UsernameAttributeType> m_usernameAttributes;
    bool m_usernameAttributesHasBeenSet = false;

    Aws::String m_smsVerificationMessage;
    bool m_smsVerificationMessageHasBeenSet = false;

    Aws::String m_emailVerificationMessage;
    bool m_emailVerificationMessageHasBeenSet = false;

    Aws::String m_emailVerificationSubject;
    bool m_emailVerificationSubjectHasBeenSet = false;

    VerificationMessageTemplateType m_verificationMessageTemplate;
    bool m_verificationMessageTemplateHasBeenSet = false;

    Aws::String m_smsAuthenticationMessage;
    bool m_smsAuthenticationMessageHasBeenSet = false;

    UserAttributeUpdateSettingsType m_userAttributeUpdateSettings;
    bool m_userAttributeUpdateSettingsHasBeenSet = false;

    UserPoolMfaType m_mfaConfiguration;
    bool m_mfaConfigurationHasBeenSet = false;

    DeviceConfigurationType m_deviceConfiguration;
    bool m_deviceConfigurationHasBeenSet = false;

    int m_estimatedNumberOfUsers;
    bool m_estimatedNumberOfUsersHasBeenSet = false;

    EmailConfigurationType m_emailConfiguration;
    bool m_emailConfigurationHasBeenSet = false;

    SmsConfigurationType m_smsConfiguration;
    bool m_smsConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userPoolTags;
    bool m_userPoolTagsHasBeenSet = false;

    Aws::String m_smsConfigurationFailure;
    bool m_smsConfigurationFailureHasBeenSet = false;

    Aws::String m_emailConfigurationFailure;
    bool m_emailConfigurationFailureHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_customDomain;
    bool m_customDomainHasBeenSet = false;

    AdminCreateUserConfigType m_adminCreateUserConfig;
    bool m_adminCreateUserConfigHasBeenSet = false;

    UserPoolAddOnsType m_userPoolAddOns;
    bool m_userPoolAddOnsHasBeenSet = false;

    UsernameConfigurationType m_usernameConfiguration;
    bool m_usernameConfigurationHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AccountRecoverySettingType m_accountRecoverySetting;
    bool m_accountRecoverySettingHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
