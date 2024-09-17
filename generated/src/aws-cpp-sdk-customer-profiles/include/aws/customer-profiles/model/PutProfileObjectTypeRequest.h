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


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline PutProfileObjectTypeRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline PutProfileObjectTypeRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline PutProfileObjectTypeRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profile object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = value; }
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::move(value); }
    inline void SetObjectTypeName(const char* value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName.assign(value); }
    inline PutProfileObjectTypeRequest& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}
    inline PutProfileObjectTypeRequest& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}
    inline PutProfileObjectTypeRequest& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the profile object type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PutProfileObjectTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PutProfileObjectTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PutProfileObjectTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
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
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }
    inline PutProfileObjectTypeRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline PutProfileObjectTypeRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline PutProfileObjectTypeRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days until the data in the object expires.</p>
     */
    inline int GetExpirationDays() const{ return m_expirationDays; }
    inline bool ExpirationDaysHasBeenSet() const { return m_expirationDaysHasBeenSet; }
    inline void SetExpirationDays(int value) { m_expirationDaysHasBeenSet = true; m_expirationDays = value; }
    inline PutProfileObjectTypeRequest& WithExpirationDays(int value) { SetExpirationDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }
    inline PutProfileObjectTypeRequest& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}
    inline PutProfileObjectTypeRequest& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}
    inline PutProfileObjectTypeRequest& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a profile should be created when data is received if one
     * doesn’t exist for an object of this type. The default is <code>FALSE</code>. If
     * the AllowProfileCreation flag is set to <code>FALSE</code>, then the service
     * tries to fetch a standard profile and associate this object with the profile. If
     * it is set to <code>TRUE</code>, and if no match is found, then the service
     * creates a new standard profile.</p>
     */
    inline bool GetAllowProfileCreation() const{ return m_allowProfileCreation; }
    inline bool AllowProfileCreationHasBeenSet() const { return m_allowProfileCreationHasBeenSet; }
    inline void SetAllowProfileCreation(bool value) { m_allowProfileCreationHasBeenSet = true; m_allowProfileCreation = value; }
    inline PutProfileObjectTypeRequest& WithAllowProfileCreation(bool value) { SetAllowProfileCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up. </p>
     */
    inline const Aws::String& GetSourceLastUpdatedTimestampFormat() const{ return m_sourceLastUpdatedTimestampFormat; }
    inline bool SourceLastUpdatedTimestampFormatHasBeenSet() const { return m_sourceLastUpdatedTimestampFormatHasBeenSet; }
    inline void SetSourceLastUpdatedTimestampFormat(const Aws::String& value) { m_sourceLastUpdatedTimestampFormatHasBeenSet = true; m_sourceLastUpdatedTimestampFormat = value; }
    inline void SetSourceLastUpdatedTimestampFormat(Aws::String&& value) { m_sourceLastUpdatedTimestampFormatHasBeenSet = true; m_sourceLastUpdatedTimestampFormat = std::move(value); }
    inline void SetSourceLastUpdatedTimestampFormat(const char* value) { m_sourceLastUpdatedTimestampFormatHasBeenSet = true; m_sourceLastUpdatedTimestampFormat.assign(value); }
    inline PutProfileObjectTypeRequest& WithSourceLastUpdatedTimestampFormat(const Aws::String& value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}
    inline PutProfileObjectTypeRequest& WithSourceLastUpdatedTimestampFormat(Aws::String&& value) { SetSourceLastUpdatedTimestampFormat(std::move(value)); return *this;}
    inline PutProfileObjectTypeRequest& WithSourceLastUpdatedTimestampFormat(const char* value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of profile object max count assigned to the object type</p>
     */
    inline int GetMaxProfileObjectCount() const{ return m_maxProfileObjectCount; }
    inline bool MaxProfileObjectCountHasBeenSet() const { return m_maxProfileObjectCountHasBeenSet; }
    inline void SetMaxProfileObjectCount(int value) { m_maxProfileObjectCountHasBeenSet = true; m_maxProfileObjectCount = value; }
    inline PutProfileObjectTypeRequest& WithMaxProfileObjectCount(int value) { SetMaxProfileObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline const Aws::Map<Aws::String, ObjectTypeField>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline PutProfileObjectTypeRequest& WithFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { SetFields(value); return *this;}
    inline PutProfileObjectTypeRequest& WithFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { SetFields(std::move(value)); return *this;}
    inline PutProfileObjectTypeRequest& AddFields(const Aws::String& key, const ObjectTypeField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }
    inline PutProfileObjectTypeRequest& AddFields(Aws::String&& key, const ObjectTypeField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), value); return *this; }
    inline PutProfileObjectTypeRequest& AddFields(const Aws::String& key, ObjectTypeField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }
    inline PutProfileObjectTypeRequest& AddFields(Aws::String&& key, ObjectTypeField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), std::move(value)); return *this; }
    inline PutProfileObjectTypeRequest& AddFields(const char* key, ObjectTypeField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }
    inline PutProfileObjectTypeRequest& AddFields(const char* key, const ObjectTypeField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& GetKeys() const{ return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    inline void SetKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { m_keysHasBeenSet = true; m_keys = value; }
    inline void SetKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }
    inline PutProfileObjectTypeRequest& WithKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { SetKeys(value); return *this;}
    inline PutProfileObjectTypeRequest& WithKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { SetKeys(std::move(value)); return *this;}
    inline PutProfileObjectTypeRequest& AddKeys(const Aws::String& key, const Aws::Vector<ObjectTypeKey>& value) { m_keysHasBeenSet = true; m_keys.emplace(key, value); return *this; }
    inline PutProfileObjectTypeRequest& AddKeys(Aws::String&& key, const Aws::Vector<ObjectTypeKey>& value) { m_keysHasBeenSet = true; m_keys.emplace(std::move(key), value); return *this; }
    inline PutProfileObjectTypeRequest& AddKeys(const Aws::String& key, Aws::Vector<ObjectTypeKey>&& value) { m_keysHasBeenSet = true; m_keys.emplace(key, std::move(value)); return *this; }
    inline PutProfileObjectTypeRequest& AddKeys(Aws::String&& key, Aws::Vector<ObjectTypeKey>&& value) { m_keysHasBeenSet = true; m_keys.emplace(std::move(key), std::move(value)); return *this; }
    inline PutProfileObjectTypeRequest& AddKeys(const char* key, Aws::Vector<ObjectTypeKey>&& value) { m_keysHasBeenSet = true; m_keys.emplace(key, std::move(value)); return *this; }
    inline PutProfileObjectTypeRequest& AddKeys(const char* key, const Aws::Vector<ObjectTypeKey>& value) { m_keysHasBeenSet = true; m_keys.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutProfileObjectTypeRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline PutProfileObjectTypeRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline PutProfileObjectTypeRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline PutProfileObjectTypeRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PutProfileObjectTypeRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PutProfileObjectTypeRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline PutProfileObjectTypeRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PutProfileObjectTypeRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PutProfileObjectTypeRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
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

    int m_maxProfileObjectCount;
    bool m_maxProfileObjectCountHasBeenSet = false;

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
