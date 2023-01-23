/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/customer-profiles/model/ObjectTypeField.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/ObjectTypeKey.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{
  class PutProfileObjectTypeResult
  {
  public:
    AWS_CUSTOMERPROFILES_API PutProfileObjectTypeResult();
    AWS_CUSTOMERPROFILES_API PutProfileObjectTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API PutProfileObjectTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the profile object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeName = value; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeName = std::move(value); }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(const char* value) { m_objectTypeName.assign(value); }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutProfileObjectTypeResult& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutProfileObjectTypeResult& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutProfileObjectTypeResult& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}


    /**
     * <p>Description of the profile object type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the profile object type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Description of the profile object type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>Description of the profile object type.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Description of the profile object type.</p>
     */
    inline PutProfileObjectTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the profile object type.</p>
     */
    inline PutProfileObjectTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the profile object type.</p>
     */
    inline PutProfileObjectTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }

    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }

    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }

    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline PutProfileObjectTypeResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline PutProfileObjectTypeResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline PutProfileObjectTypeResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The number of days until the data in the object expires.</p>
     */
    inline int GetExpirationDays() const{ return m_expirationDays; }

    /**
     * <p>The number of days until the data in the object expires.</p>
     */
    inline void SetExpirationDays(int value) { m_expirationDays = value; }

    /**
     * <p>The number of days until the data in the object expires.</p>
     */
    inline PutProfileObjectTypeResult& WithExpirationDays(int value) { SetExpirationDays(value); return *this;}


    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKey = value; }

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKey = std::move(value); }

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKey.assign(value); }

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline PutProfileObjectTypeResult& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline PutProfileObjectTypeResult& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline PutProfileObjectTypeResult& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


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
    inline void SetAllowProfileCreation(bool value) { m_allowProfileCreation = value; }

    /**
     * <p>Indicates whether a profile should be created when data is received if one
     * doesn’t exist for an object of this type. The default is <code>FALSE</code>. If
     * the AllowProfileCreation flag is set to <code>FALSE</code>, then the service
     * tries to fetch a standard profile and associate this object with the profile. If
     * it is set to <code>TRUE</code>, and if no match is found, then the service
     * creates a new standard profile.</p>
     */
    inline PutProfileObjectTypeResult& WithAllowProfileCreation(bool value) { SetAllowProfileCreation(value); return *this;}


    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up in fields that were parsed using <a
     * href="https://docs.oracle.com/javase/10/docs/api/java/text/SimpleDateFormat.html">SimpleDateFormat</a>.
     * If you have <code>sourceLastUpdatedTimestamp</code> in your field, you must set
     * up <code>sourceLastUpdatedTimestampFormat</code>.</p>
     */
    inline const Aws::String& GetSourceLastUpdatedTimestampFormat() const{ return m_sourceLastUpdatedTimestampFormat; }

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up in fields that were parsed using <a
     * href="https://docs.oracle.com/javase/10/docs/api/java/text/SimpleDateFormat.html">SimpleDateFormat</a>.
     * If you have <code>sourceLastUpdatedTimestamp</code> in your field, you must set
     * up <code>sourceLastUpdatedTimestampFormat</code>.</p>
     */
    inline void SetSourceLastUpdatedTimestampFormat(const Aws::String& value) { m_sourceLastUpdatedTimestampFormat = value; }

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up in fields that were parsed using <a
     * href="https://docs.oracle.com/javase/10/docs/api/java/text/SimpleDateFormat.html">SimpleDateFormat</a>.
     * If you have <code>sourceLastUpdatedTimestamp</code> in your field, you must set
     * up <code>sourceLastUpdatedTimestampFormat</code>.</p>
     */
    inline void SetSourceLastUpdatedTimestampFormat(Aws::String&& value) { m_sourceLastUpdatedTimestampFormat = std::move(value); }

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up in fields that were parsed using <a
     * href="https://docs.oracle.com/javase/10/docs/api/java/text/SimpleDateFormat.html">SimpleDateFormat</a>.
     * If you have <code>sourceLastUpdatedTimestamp</code> in your field, you must set
     * up <code>sourceLastUpdatedTimestampFormat</code>.</p>
     */
    inline void SetSourceLastUpdatedTimestampFormat(const char* value) { m_sourceLastUpdatedTimestampFormat.assign(value); }

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up in fields that were parsed using <a
     * href="https://docs.oracle.com/javase/10/docs/api/java/text/SimpleDateFormat.html">SimpleDateFormat</a>.
     * If you have <code>sourceLastUpdatedTimestamp</code> in your field, you must set
     * up <code>sourceLastUpdatedTimestampFormat</code>.</p>
     */
    inline PutProfileObjectTypeResult& WithSourceLastUpdatedTimestampFormat(const Aws::String& value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up in fields that were parsed using <a
     * href="https://docs.oracle.com/javase/10/docs/api/java/text/SimpleDateFormat.html">SimpleDateFormat</a>.
     * If you have <code>sourceLastUpdatedTimestamp</code> in your field, you must set
     * up <code>sourceLastUpdatedTimestampFormat</code>.</p>
     */
    inline PutProfileObjectTypeResult& WithSourceLastUpdatedTimestampFormat(Aws::String&& value) { SetSourceLastUpdatedTimestampFormat(std::move(value)); return *this;}

    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up in fields that were parsed using <a
     * href="https://docs.oracle.com/javase/10/docs/api/java/text/SimpleDateFormat.html">SimpleDateFormat</a>.
     * If you have <code>sourceLastUpdatedTimestamp</code> in your field, you must set
     * up <code>sourceLastUpdatedTimestampFormat</code>.</p>
     */
    inline PutProfileObjectTypeResult& WithSourceLastUpdatedTimestampFormat(const char* value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}


    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline const Aws::Map<Aws::String, ObjectTypeField>& GetFields() const{ return m_fields; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline void SetFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { m_fields = value; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline void SetFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { m_fields = std::move(value); }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeResult& WithFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { SetFields(value); return *this;}

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeResult& WithFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeResult& AddFields(const Aws::String& key, const ObjectTypeField& value) { m_fields.emplace(key, value); return *this; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeResult& AddFields(Aws::String&& key, const ObjectTypeField& value) { m_fields.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeResult& AddFields(const Aws::String& key, ObjectTypeField&& value) { m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeResult& AddFields(Aws::String&& key, ObjectTypeField&& value) { m_fields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeResult& AddFields(const char* key, ObjectTypeField&& value) { m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline PutProfileObjectTypeResult& AddFields(const char* key, const ObjectTypeField& value) { m_fields.emplace(key, value); return *this; }


    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& GetKeys() const{ return m_keys; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline void SetKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { m_keys = value; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline void SetKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { m_keys = std::move(value); }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeResult& WithKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { SetKeys(value); return *this;}

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeResult& WithKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeResult& AddKeys(const Aws::String& key, const Aws::Vector<ObjectTypeKey>& value) { m_keys.emplace(key, value); return *this; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeResult& AddKeys(Aws::String&& key, const Aws::Vector<ObjectTypeKey>& value) { m_keys.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeResult& AddKeys(const Aws::String& key, Aws::Vector<ObjectTypeKey>&& value) { m_keys.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeResult& AddKeys(Aws::String&& key, Aws::Vector<ObjectTypeKey>&& value) { m_keys.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeResult& AddKeys(const char* key, Aws::Vector<ObjectTypeKey>&& value) { m_keys.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline PutProfileObjectTypeResult& AddKeys(const char* key, const Aws::Vector<ObjectTypeKey>& value) { m_keys.emplace(key, value); return *this; }


    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline PutProfileObjectTypeResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline PutProfileObjectTypeResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline PutProfileObjectTypeResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline PutProfileObjectTypeResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutProfileObjectTypeResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_objectTypeName;

    Aws::String m_description;

    Aws::String m_templateId;

    int m_expirationDays;

    Aws::String m_encryptionKey;

    bool m_allowProfileCreation;

    Aws::String m_sourceLastUpdatedTimestampFormat;

    Aws::Map<Aws::String, ObjectTypeField> m_fields;

    Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>> m_keys;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
