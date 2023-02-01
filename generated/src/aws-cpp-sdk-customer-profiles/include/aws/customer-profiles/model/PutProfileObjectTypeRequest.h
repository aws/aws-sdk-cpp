/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/customer-profiles/model/ObjectTypeField.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/ObjectTypeKey.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class PutProfileObjectTypeRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API PutProfileObjectTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutProfileObjectType"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline PutProfileObjectTypeRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline PutProfileObjectTypeRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline PutProfileObjectTypeRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The name of the profile object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = value; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::move(value); }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(const char* value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName.assign(value); }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutProfileObjectTypeRequest& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutProfileObjectTypeRequest& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutProfileObjectTypeRequest& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}


    /**
     * <p>Description of the profile object type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the profile object type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the profile object type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the profile object type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the profile object type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the profile object type.</p>
     */
    inline PutProfileObjectTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the profile object type.</p>
     */
    inline PutProfileObjectTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the profile object type.</p>
     */
    inline PutProfileObjectTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique identifier for the object template. For some attributes in the
     * request, the service will use the default value from the object template when
     * TemplateId is present. If these attributes are present in the request, the
     * service may return a <code>BadRequestException</code>. These attributes include:
     * AllowProfileCreation, SourceLastUpdatedTimestampFormat, Fields, and Keys. For
     * example, if AllowProfileCreation is set to true when TemplateId is set, the
     * service may return a <code>BadRequestException</code>.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>A unique identifier for the object template. For some attributes in the
     * request, the service will use the default value from the object template when
     * TemplateId is present. If these attributes are present in the request, the
     * service may return a <code>BadRequestException</code>. These attributes include:
     * AllowProfileCreation, SourceLastUpdatedTimestampFormat, Fields, and Keys. For
     * example, if AllowProfileCreation is set to true when TemplateId is set, the
     * service may return a <code>BadRequestException</code>.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>A unique identifier for the object template. For some attributes in the
     * request, the service will use the default value from the object template when
     * TemplateId is present. If these attributes are present in the request, the
     * service may return a <code>BadRequestException</code>. These attributes include:
     * AllowProfileCreation, SourceLastUpdatedTimestampFormat, Fields, and Keys. For
     * example, if AllowProfileCreation is set to true when TemplateId is set, the
     * service may return a <code>BadRequestException</code>.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>A unique identifier for the object template. For some attributes in the
     * request, the service will use the default value from the object template when
     * TemplateId is present. If these attributes are present in the request, the
     * service may return a <code>BadRequestException</code>. These attributes include:
     * AllowProfileCreation, SourceLastUpdatedTimestampFormat, Fields, and Keys. For
     * example, if AllowProfileCreation is set to true when TemplateId is set, the
     * service may return a <code>BadRequestException</code>.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>A unique identifier for the object template. For some attributes in the
     * request, the service will use the default value from the object template when
     * TemplateId is present. If these attributes are present in the request, the
     * service may return a <code>BadRequestException</code>. These attributes include:
     * AllowProfileCreation, SourceLastUpdatedTimestampFormat, Fields, and Keys. For
     * example, if AllowProfileCreation is set to true when TemplateId is set, the
     * service may return a <code>BadRequestException</code>.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>A unique identifier for the object template. For some attributes in the
     * request, the service will use the default value from the object template when
     * TemplateId is present. If these attributes are present in the request, the
     * service may return a <code>BadRequestException</code>. These attributes include:
     * AllowProfileCreation, SourceLastUpdatedTimestampFormat, Fields, and Keys. For
     * example, if AllowProfileCreation is set to true when TemplateId is set, the
     * service may return a <code>BadRequestException</code>.</p>
     */
    inline PutProfileObjectTypeRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>A unique identifier for the object template. For some attributes in the
     * request, the service will use the default value from the object template when
     * TemplateId is present. If these attributes are present in the request, the
     * service may return a <code>BadRequestException</code>. These attributes include:
     * AllowProfileCreation, SourceLastUpdatedTimestampFormat, Fields, and Keys. For
     * example, if AllowProfileCreation is set to true when TemplateId is set, the
     * service may return a <code>BadRequestException</code>.</p>
     */
    inline PutProfileObjectTypeRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the object template. For some attributes in the
     * request, the service will use the default value from the object template when
     * TemplateId is present. If these attributes are present in the request, the
     * service may return a <code>BadRequestException</code>. These attributes include:
     * AllowProfileCreation, SourceLastUpdatedTimestampFormat, Fields, and Keys. For
     * example, if AllowProfileCreation is set to true when TemplateId is set, the
     * service may return a <code>BadRequestException</code>.</p>
     */
    inline PutProfileObjectTypeRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The number of days until the data in the object expires.</p>
     */
    inline int GetExpirationDays() const{ return m_expirationDays; }

    /**
     * <p>The number of days until the data in the object expires.</p>
     */
    inline bool ExpirationDaysHasBeenSet() const { return m_expirationDaysHasBeenSet; }

    /**
     * <p>The number of days until the data in the object expires.</p>
     */
    inline void SetExpirationDays(int value) { m_expirationDaysHasBeenSet = true; m_expirationDays = value; }

    /**
     * <p>The number of days until the data in the object expires.</p>
     */
    inline PutProfileObjectTypeRequest& WithExpirationDays(int value) { SetExpirationDays(value); return *this;}


    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline PutProfileObjectTypeRequest& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline PutProfileObjectTypeRequest& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline PutProfileObjectTypeRequest& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p>Indicates whether a profile should be created when data is received if one
     * doesn’t exist for an object of this type. The default is <code>FALSE</code>. If
     * the AllowProfileCreation flag is set to <code>FALSE</code>, then the service
     * tries to fetch a standard profile and associate this object with the profile. If
     * it is set to <code>TRUE</code>, and if no match is found, then the service
     * creates a new standard profile.</p>
     */
    inline bool GetAllowProfileCreation() const{ return m_allowProfileCreation; }

    /**
     * <p>Indicates whether a profile should be created when data is received if one
     * doesn’t exist for an object of this type. The default is <code>FALSE</code>. If
     * the AllowProfileCreation flag is set to <code>FALSE</code>, then the service
     * tries to fetch a standard profile and associate this object with the profile. If
     * it is set to <code>TRUE</code>, and if no match is found, then the service
     * creates a new standard profile.</p>
     */
    inline bool AllowProfileCreationHasBeenSet() const { return m_allowProfileCreationHasBeenSet; }

    /**
     * <p>Indicates whether a profile should be created when data is received if one
     * doesn’t exist for an object of this type. The default is <code>FALSE</code>. If
     * the AllowProfileCreation flag is set to <code>FALSE</code>, then the service
     * tries to fetch a standard profile and associate this object with the profile. If
     * it is set to <code>TRUE</code>, and if no match is found, then the service
     * creates a new standard profile.</p>
     */
    inline void SetAllowProfileCreation(bool value) { m_allowProfileCreationHasBeenSet = true; m_allowProfileCreation = value; }

    /**
     * <p>Indicates whether a profile should be created when data is received if one
     * doesn’t exist for an object of this type. The default is <code>FALSE</code>. If
     * the AllowProfileCreation flag is set to <code>FALSE</code>, then the service
     * tries to fetch a standard profile and associate this object with the profile. If
     * it is set to <code>TRUE</code>, and if no match is found, then the service
     * creates a new standard profile.</p>
     */
    inline PutProfileObjectTypeRequest& WithAllowProfileCreation(bool value) { SetAllowProfileCreation(value); return *this;}


    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up. </p>
     */
    inline const Aws::String& GetSourceLastUpdatedTimestampFormat() const{ return m_sourceLastUpdatedTimestampFormat; }

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up. </p>
     */
    inline bool SourceLastUpdatedTimestampFormatHasBeenSet() const { return m_sourceLastUpdatedTimestampFormatHasBeenSet; }

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up. </p>
     */
    inline void SetSourceLastUpdatedTimestampFormat(const Aws::String& value) { m_sourceLastUpdatedTimestampFormatHasBeenSet = true; m_sourceLastUpdatedTimestampFormat = value; }

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up. </p>
     */
    inline void SetSourceLastUpdatedTimestampFormat(Aws::String&& value) { m_sourceLastUpdatedTimestampFormatHasBeenSet = true; m_sourceLastUpdatedTimestampFormat = std::move(value); }

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up. </p>
     */
    inline void SetSourceLastUpdatedTimestampFormat(const char* value) { m_sourceLastUpdatedTimestampFormatHasBeenSet = true; m_sourceLastUpdatedTimestampFormat.assign(value); }

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up. </p>
     */
    inline PutProfileObjectTypeRequest& WithSourceLastUpdatedTimestampFormat(const Aws::String& value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up. </p>
     */
    inline PutProfileObjectTypeRequest& WithSourceLastUpdatedTimestampFormat(Aws::String&& value) { SetSourceLastUpdatedTimestampFormat(std::move(value)); return *this;}

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up. </p>
     */
    inline PutProfileObjectTypeRequest& WithSourceLastUpdatedTimestampFormat(const char* value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}


    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline const Aws::Map<Aws::String, ObjectTypeField>& GetFields() const{ return m_fields; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline void SetFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline void SetFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeRequest& WithFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { SetFields(value); return *this;}

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeRequest& WithFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeRequest& AddFields(const Aws::String& key, const ObjectTypeField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeRequest& AddFields(Aws::String&& key, const ObjectTypeField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeRequest& AddFields(const Aws::String& key, ObjectTypeField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeRequest& AddFields(Aws::String&& key, ObjectTypeField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeRequest& AddFields(const char* key, ObjectTypeField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeRequest& AddFields(const char* key, const ObjectTypeField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }


    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& GetKeys() const{ return m_keys; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline void SetKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { m_keysHasBeenSet = true; m_keys = value; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline void SetKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeRequest& WithKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { SetKeys(value); return *this;}

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeRequest& WithKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeRequest& AddKeys(const Aws::String& key, const Aws::Vector<ObjectTypeKey>& value) { m_keysHasBeenSet = true; m_keys.emplace(key, value); return *this; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeRequest& AddKeys(Aws::String&& key, const Aws::Vector<ObjectTypeKey>& value) { m_keysHasBeenSet = true; m_keys.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeRequest& AddKeys(const Aws::String& key, Aws::Vector<ObjectTypeKey>&& value) { m_keysHasBeenSet = true; m_keys.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeRequest& AddKeys(Aws::String&& key, Aws::Vector<ObjectTypeKey>&& value) { m_keysHasBeenSet = true; m_keys.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeRequest& AddKeys(const char* key, Aws::Vector<ObjectTypeKey>&& value) { m_keysHasBeenSet = true; m_keys.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeRequest& AddKeys(const char* key, const Aws::Vector<ObjectTypeKey>& value) { m_keysHasBeenSet = true; m_keys.emplace(key, value); return *this; }


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    int m_expirationDays;
    bool m_expirationDaysHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    bool m_allowProfileCreation;
    bool m_allowProfileCreationHasBeenSet = false;

    Aws::String m_sourceLastUpdatedTimestampFormat;
    bool m_sourceLastUpdatedTimestampFormatHasBeenSet = false;

    Aws::Map<Aws::String, ObjectTypeField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>> m_keys;
    bool m_keysHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
