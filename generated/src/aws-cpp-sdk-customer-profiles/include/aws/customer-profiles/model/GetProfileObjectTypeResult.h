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
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeResult() = default;
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the profile object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const { return m_objectTypeName; }
    template<typename ObjectTypeNameT = Aws::String>
    void SetObjectTypeName(ObjectTypeNameT&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::forward<ObjectTypeNameT>(value); }
    template<typename ObjectTypeNameT = Aws::String>
    GetProfileObjectTypeResult& WithObjectTypeName(ObjectTypeNameT&& value) { SetObjectTypeName(std::forward<ObjectTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the profile object type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetProfileObjectTypeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    GetProfileObjectTypeResult& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days until the data in the object expires.</p>
     */
    inline int GetExpirationDays() const { return m_expirationDays; }
    inline void SetExpirationDays(int value) { m_expirationDaysHasBeenSet = true; m_expirationDays = value; }
    inline GetProfileObjectTypeResult& WithExpirationDays(int value) { SetExpirationDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-provided key to encrypt the profile object that will be created
     * in this profile object type.</p>
     */
    inline const Aws::String& GetEncryptionKey() const { return m_encryptionKey; }
    template<typename EncryptionKeyT = Aws::String>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = Aws::String>
    GetProfileObjectTypeResult& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
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
    inline bool GetAllowProfileCreation() const { return m_allowProfileCreation; }
    inline void SetAllowProfileCreation(bool value) { m_allowProfileCreationHasBeenSet = true; m_allowProfileCreation = value; }
    inline GetProfileObjectTypeResult& WithAllowProfileCreation(bool value) { SetAllowProfileCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of your <code>sourceLastUpdatedTimestamp</code> that was
     * previously set up.</p>
     */
    inline const Aws::String& GetSourceLastUpdatedTimestampFormat() const { return m_sourceLastUpdatedTimestampFormat; }
    template<typename SourceLastUpdatedTimestampFormatT = Aws::String>
    void SetSourceLastUpdatedTimestampFormat(SourceLastUpdatedTimestampFormatT&& value) { m_sourceLastUpdatedTimestampFormatHasBeenSet = true; m_sourceLastUpdatedTimestampFormat = std::forward<SourceLastUpdatedTimestampFormatT>(value); }
    template<typename SourceLastUpdatedTimestampFormatT = Aws::String>
    GetProfileObjectTypeResult& WithSourceLastUpdatedTimestampFormat(SourceLastUpdatedTimestampFormatT&& value) { SetSourceLastUpdatedTimestampFormat(std::forward<SourceLastUpdatedTimestampFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of provisioned profile object max count available.</p>
     */
    inline int GetMaxAvailableProfileObjectCount() const { return m_maxAvailableProfileObjectCount; }
    inline void SetMaxAvailableProfileObjectCount(int value) { m_maxAvailableProfileObjectCountHasBeenSet = true; m_maxAvailableProfileObjectCount = value; }
    inline GetProfileObjectTypeResult& WithMaxAvailableProfileObjectCount(int value) { SetMaxAvailableProfileObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of profile object max count assigned to the object type.</p>
     */
    inline int GetMaxProfileObjectCount() const { return m_maxProfileObjectCount; }
    inline void SetMaxProfileObjectCount(int value) { m_maxProfileObjectCountHasBeenSet = true; m_maxProfileObjectCount = value; }
    inline GetProfileObjectTypeResult& WithMaxProfileObjectCount(int value) { SetMaxProfileObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline const Aws::Map<Aws::String, ObjectTypeField>& GetFields() const { return m_fields; }
    template<typename FieldsT = Aws::Map<Aws::String, ObjectTypeField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Map<Aws::String, ObjectTypeField>>
    GetProfileObjectTypeResult& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsKeyT = Aws::String, typename FieldsValueT = ObjectTypeField>
    GetProfileObjectTypeResult& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
      m_fieldsHasBeenSet = true; m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& GetKeys() const { return m_keys; }
    template<typename KeysT = Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>>
    void SetKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys = std::forward<KeysT>(value); }
    template<typename KeysT = Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>>
    GetProfileObjectTypeResult& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysKeyT = Aws::String, typename KeysValueT = Aws::Vector<ObjectTypeKey>>
    GetProfileObjectTypeResult& AddKeys(KeysKeyT&& key, KeysValueT&& value) {
      m_keysHasBeenSet = true; m_keys.emplace(std::forward<KeysKeyT>(key), std::forward<KeysValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetProfileObjectTypeResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetProfileObjectTypeResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetProfileObjectTypeResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetProfileObjectTypeResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetProfileObjectTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    int m_expirationDays{0};
    bool m_expirationDaysHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    bool m_allowProfileCreation{false};
    bool m_allowProfileCreationHasBeenSet = false;

    Aws::String m_sourceLastUpdatedTimestampFormat;
    bool m_sourceLastUpdatedTimestampFormatHasBeenSet = false;

    int m_maxAvailableProfileObjectCount{0};
    bool m_maxAvailableProfileObjectCountHasBeenSet = false;

    int m_maxProfileObjectCount{0};
    bool m_maxProfileObjectCountHasBeenSet = false;

    Aws::Map<Aws::String, ObjectTypeField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>> m_keys;
    bool m_keysHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
