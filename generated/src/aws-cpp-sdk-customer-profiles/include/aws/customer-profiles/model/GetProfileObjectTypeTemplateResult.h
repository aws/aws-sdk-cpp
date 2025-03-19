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
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeTemplateResult() = default;
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetProfileObjectTypeTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    GetProfileObjectTypeTemplateResult& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source of the object template.</p>
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    GetProfileObjectTypeTemplateResult& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the object template.</p>
     */
    inline const Aws::String& GetSourceObject() const { return m_sourceObject; }
    template<typename SourceObjectT = Aws::String>
    void SetSourceObject(SourceObjectT&& value) { m_sourceObjectHasBeenSet = true; m_sourceObject = std::forward<SourceObjectT>(value); }
    template<typename SourceObjectT = Aws::String>
    GetProfileObjectTypeTemplateResult& WithSourceObject(SourceObjectT&& value) { SetSourceObject(std::forward<SourceObjectT>(value)); return *this;}
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
    inline GetProfileObjectTypeTemplateResult& WithAllowProfileCreation(bool value) { SetAllowProfileCreation(value); return *this;}
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
    GetProfileObjectTypeTemplateResult& WithSourceLastUpdatedTimestampFormat(SourceLastUpdatedTimestampFormatT&& value) { SetSourceLastUpdatedTimestampFormat(std::forward<SourceLastUpdatedTimestampFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the name and ObjectType field.</p>
     */
    inline const Aws::Map<Aws::String, ObjectTypeField>& GetFields() const { return m_fields; }
    template<typename FieldsT = Aws::Map<Aws::String, ObjectTypeField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Map<Aws::String, ObjectTypeField>>
    GetProfileObjectTypeTemplateResult& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsKeyT = Aws::String, typename FieldsValueT = ObjectTypeField>
    GetProfileObjectTypeTemplateResult& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
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
    GetProfileObjectTypeTemplateResult& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysKeyT = Aws::String, typename KeysValueT = Aws::Vector<ObjectTypeKey>>
    GetProfileObjectTypeTemplateResult& AddKeys(KeysKeyT&& key, KeysValueT&& value) {
      m_keysHasBeenSet = true; m_keys.emplace(std::forward<KeysKeyT>(key), std::forward<KeysValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetProfileObjectTypeTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceObject;
    bool m_sourceObjectHasBeenSet = false;

    bool m_allowProfileCreation{false};
    bool m_allowProfileCreationHasBeenSet = false;

    Aws::String m_sourceLastUpdatedTimestampFormat;
    bool m_sourceLastUpdatedTimestampFormatHasBeenSet = false;

    Aws::Map<Aws::String, ObjectTypeField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>> m_keys;
    bool m_keysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
