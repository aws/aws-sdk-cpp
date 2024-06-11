/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetProfileObjectTypeTemplateResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeTemplateResult();
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }
    inline GetProfileObjectTypeTemplateResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source of the object template.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }
    inline void SetSourceName(const Aws::String& value) { m_sourceName = value; }
    inline void SetSourceName(Aws::String&& value) { m_sourceName = std::move(value); }
    inline void SetSourceName(const char* value) { m_sourceName.assign(value); }
    inline GetProfileObjectTypeTemplateResult& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithSourceName(const char* value) { SetSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the object template.</p>
     */
    inline const Aws::String& GetSourceObject() const{ return m_sourceObject; }
    inline void SetSourceObject(const Aws::String& value) { m_sourceObject = value; }
    inline void SetSourceObject(Aws::String&& value) { m_sourceObject = std::move(value); }
    inline void SetSourceObject(const char* value) { m_sourceObject.assign(value); }
    inline GetProfileObjectTypeTemplateResult& WithSourceObject(const Aws::String& value) { SetSourceObject(value); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithSourceObject(Aws::String&& value) { SetSourceObject(std::move(value)); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithSourceObject(const char* value) { SetSourceObject(value); return *this;}
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
    inline GetProfileObjectTypeTemplateResult& WithAllowProfileCreation(bool value) { SetAllowProfileCreation(value); return *this;}
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
    inline GetProfileObjectTypeTemplateResult& WithSourceLastUpdatedTimestampFormat(const Aws::String& value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithSourceLastUpdatedTimestampFormat(Aws::String&& value) { SetSourceLastUpdatedTimestampFormat(std::move(value)); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithSourceLastUpdatedTimestampFormat(const char* value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline const Aws::Map<Aws::String, ObjectTypeField>& GetFields() const{ return m_fields; }
    inline void SetFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { m_fields = value; }
    inline void SetFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { m_fields = std::move(value); }
    inline GetProfileObjectTypeTemplateResult& WithFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { SetFields(value); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { SetFields(std::move(value)); return *this;}
    inline GetProfileObjectTypeTemplateResult& AddFields(const Aws::String& key, const ObjectTypeField& value) { m_fields.emplace(key, value); return *this; }
    inline GetProfileObjectTypeTemplateResult& AddFields(Aws::String&& key, const ObjectTypeField& value) { m_fields.emplace(std::move(key), value); return *this; }
    inline GetProfileObjectTypeTemplateResult& AddFields(const Aws::String& key, ObjectTypeField&& value) { m_fields.emplace(key, std::move(value)); return *this; }
    inline GetProfileObjectTypeTemplateResult& AddFields(Aws::String&& key, ObjectTypeField&& value) { m_fields.emplace(std::move(key), std::move(value)); return *this; }
    inline GetProfileObjectTypeTemplateResult& AddFields(const char* key, ObjectTypeField&& value) { m_fields.emplace(key, std::move(value)); return *this; }
    inline GetProfileObjectTypeTemplateResult& AddFields(const char* key, const ObjectTypeField& value) { m_fields.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of unique keys that can be used to map data to the profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& GetKeys() const{ return m_keys; }
    inline void SetKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { m_keys = value; }
    inline void SetKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { m_keys = std::move(value); }
    inline GetProfileObjectTypeTemplateResult& WithKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { SetKeys(value); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { SetKeys(std::move(value)); return *this;}
    inline GetProfileObjectTypeTemplateResult& AddKeys(const Aws::String& key, const Aws::Vector<ObjectTypeKey>& value) { m_keys.emplace(key, value); return *this; }
    inline GetProfileObjectTypeTemplateResult& AddKeys(Aws::String&& key, const Aws::Vector<ObjectTypeKey>& value) { m_keys.emplace(std::move(key), value); return *this; }
    inline GetProfileObjectTypeTemplateResult& AddKeys(const Aws::String& key, Aws::Vector<ObjectTypeKey>&& value) { m_keys.emplace(key, std::move(value)); return *this; }
    inline GetProfileObjectTypeTemplateResult& AddKeys(Aws::String&& key, Aws::Vector<ObjectTypeKey>&& value) { m_keys.emplace(std::move(key), std::move(value)); return *this; }
    inline GetProfileObjectTypeTemplateResult& AddKeys(const char* key, Aws::Vector<ObjectTypeKey>&& value) { m_keys.emplace(key, std::move(value)); return *this; }
    inline GetProfileObjectTypeTemplateResult& AddKeys(const char* key, const Aws::Vector<ObjectTypeKey>& value) { m_keys.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetProfileObjectTypeTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetProfileObjectTypeTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_templateId;

    Aws::String m_sourceName;

    Aws::String m_sourceObject;

    bool m_allowProfileCreation;

    Aws::String m_sourceLastUpdatedTimestampFormat;

    Aws::Map<Aws::String, ObjectTypeField> m_fields;

    Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>> m_keys;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
