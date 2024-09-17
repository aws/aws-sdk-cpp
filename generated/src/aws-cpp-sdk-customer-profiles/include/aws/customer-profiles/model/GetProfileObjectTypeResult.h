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
  class GetProfileObjectTypeResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeResult();
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the profile object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeName = value; }
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeName = std::move(value); }
    inline void SetObjectTypeName(const char* value) { m_objectTypeName.assign(value); }
    inline GetProfileObjectTypeResult& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}
    inline GetProfileObjectTypeResult& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}
    inline GetProfileObjectTypeResult& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the profile object type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetProfileObjectTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetProfileObjectTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetProfileObjectTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }
    inline GetProfileObjectTypeResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline GetProfileObjectTypeResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline GetProfileObjectTypeResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days until the data in the object expires.</p>
     */
    inline int GetExpirationDays() const{ return m_expirationDays; }
    inline void SetExpirationDays(int value) { m_expirationDays = value; }
    inline GetProfileObjectTypeResult& WithExpirationDays(int value) { SetExpirationDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKey = value; }
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKey = std::move(value); }
    inline void SetEncryptionKey(const char* value) { m_encryptionKey.assign(value); }
    inline GetProfileObjectTypeResult& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}
    inline GetProfileObjectTypeResult& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}
    inline GetProfileObjectTypeResult& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}
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
    inline void SetAllowProfileCreation(bool value) { m_allowProfileCreation = value; }
    inline GetProfileObjectTypeResult& WithAllowProfileCreation(bool value) { SetAllowProfileCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up.</p>
     */
    inline const Aws::String& GetSourceLastUpdatedTimestampFormat() const{ return m_sourceLastUpdatedTimestampFormat; }
    inline void SetSourceLastUpdatedTimestampFormat(const Aws::String& value) { m_sourceLastUpdatedTimestampFormat = value; }
    inline void SetSourceLastUpdatedTimestampFormat(Aws::String&& value) { m_sourceLastUpdatedTimestampFormat = std::move(value); }
    inline void SetSourceLastUpdatedTimestampFormat(const char* value) { m_sourceLastUpdatedTimestampFormat.assign(value); }
    inline GetProfileObjectTypeResult& WithSourceLastUpdatedTimestampFormat(const Aws::String& value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}
    inline GetProfileObjectTypeResult& WithSourceLastUpdatedTimestampFormat(Aws::String&& value) { SetSourceLastUpdatedTimestampFormat(std::move(value)); return *this;}
    inline GetProfileObjectTypeResult& WithSourceLastUpdatedTimestampFormat(const char* value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of provisioned profile object max count available.</p>
     */
    inline int GetMaxAvailableProfileObjectCount() const{ return m_maxAvailableProfileObjectCount; }
    inline void SetMaxAvailableProfileObjectCount(int value) { m_maxAvailableProfileObjectCount = value; }
    inline GetProfileObjectTypeResult& WithMaxAvailableProfileObjectCount(int value) { SetMaxAvailableProfileObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of profile object max count assigned to the object type.</p>
     */
    inline int GetMaxProfileObjectCount() const{ return m_maxProfileObjectCount; }
    inline void SetMaxProfileObjectCount(int value) { m_maxProfileObjectCount = value; }
    inline GetProfileObjectTypeResult& WithMaxProfileObjectCount(int value) { SetMaxProfileObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline const Aws::Map<Aws::String, ObjectTypeField>& GetFields() const{ return m_fields; }
    inline void SetFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { m_fields = value; }
    inline void SetFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { m_fields = std::move(value); }
    inline GetProfileObjectTypeResult& WithFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { SetFields(value); return *this;}
    inline GetProfileObjectTypeResult& WithFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { SetFields(std::move(value)); return *this;}
    inline GetProfileObjectTypeResult& AddFields(const Aws::String& key, const ObjectTypeField& value) { m_fields.emplace(key, value); return *this; }
    inline GetProfileObjectTypeResult& AddFields(Aws::String&& key, const ObjectTypeField& value) { m_fields.emplace(std::move(key), value); return *this; }
    inline GetProfileObjectTypeResult& AddFields(const Aws::String& key, ObjectTypeField&& value) { m_fields.emplace(key, std::move(value)); return *this; }
    inline GetProfileObjectTypeResult& AddFields(Aws::String&& key, ObjectTypeField&& value) { m_fields.emplace(std::move(key), std::move(value)); return *this; }
    inline GetProfileObjectTypeResult& AddFields(const char* key, ObjectTypeField&& value) { m_fields.emplace(key, std::move(value)); return *this; }
    inline GetProfileObjectTypeResult& AddFields(const char* key, const ObjectTypeField& value) { m_fields.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& GetKeys() const{ return m_keys; }
    inline void SetKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { m_keys = value; }
    inline void SetKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { m_keys = std::move(value); }
    inline GetProfileObjectTypeResult& WithKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { SetKeys(value); return *this;}
    inline GetProfileObjectTypeResult& WithKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { SetKeys(std::move(value)); return *this;}
    inline GetProfileObjectTypeResult& AddKeys(const Aws::String& key, const Aws::Vector<ObjectTypeKey>& value) { m_keys.emplace(key, value); return *this; }
    inline GetProfileObjectTypeResult& AddKeys(Aws::String&& key, const Aws::Vector<ObjectTypeKey>& value) { m_keys.emplace(std::move(key), value); return *this; }
    inline GetProfileObjectTypeResult& AddKeys(const Aws::String& key, Aws::Vector<ObjectTypeKey>&& value) { m_keys.emplace(key, std::move(value)); return *this; }
    inline GetProfileObjectTypeResult& AddKeys(Aws::String&& key, Aws::Vector<ObjectTypeKey>&& value) { m_keys.emplace(std::move(key), std::move(value)); return *this; }
    inline GetProfileObjectTypeResult& AddKeys(const char* key, Aws::Vector<ObjectTypeKey>&& value) { m_keys.emplace(key, std::move(value)); return *this; }
    inline GetProfileObjectTypeResult& AddKeys(const char* key, const Aws::Vector<ObjectTypeKey>& value) { m_keys.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetProfileObjectTypeResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetProfileObjectTypeResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetProfileObjectTypeResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetProfileObjectTypeResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetProfileObjectTypeResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetProfileObjectTypeResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetProfileObjectTypeResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetProfileObjectTypeResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetProfileObjectTypeResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetProfileObjectTypeResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetProfileObjectTypeResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetProfileObjectTypeResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetProfileObjectTypeResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetProfileObjectTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetProfileObjectTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetProfileObjectTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_objectTypeName;

    Aws::String m_description;

    Aws::String m_templateId;

    int m_expirationDays;

    Aws::String m_encryptionKey;

    bool m_allowProfileCreation;

    Aws::String m_sourceLastUpdatedTimestampFormat;

    int m_maxAvailableProfileObjectCount;

    int m_maxProfileObjectCount;

    Aws::Map<Aws::String, ObjectTypeField> m_fields;

    Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>> m_keys;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
