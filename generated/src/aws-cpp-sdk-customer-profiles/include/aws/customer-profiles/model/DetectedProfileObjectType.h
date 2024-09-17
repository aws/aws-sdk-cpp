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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Contains <code>ProfileObjectType</code> mapping information from the
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DetectedProfileObjectType">AWS
   * API Reference</a></p>
   */
  class DetectedProfileObjectType
  {
  public:
    AWS_CUSTOMERPROFILES_API DetectedProfileObjectType();
    AWS_CUSTOMERPROFILES_API DetectedProfileObjectType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API DetectedProfileObjectType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of <code>sourceLastUpdatedTimestamp</code> that was detected in
     * fields.</p>
     */
    inline const Aws::String& GetSourceLastUpdatedTimestampFormat() const{ return m_sourceLastUpdatedTimestampFormat; }
    inline bool SourceLastUpdatedTimestampFormatHasBeenSet() const { return m_sourceLastUpdatedTimestampFormatHasBeenSet; }
    inline void SetSourceLastUpdatedTimestampFormat(const Aws::String& value) { m_sourceLastUpdatedTimestampFormatHasBeenSet = true; m_sourceLastUpdatedTimestampFormat = value; }
    inline void SetSourceLastUpdatedTimestampFormat(Aws::String&& value) { m_sourceLastUpdatedTimestampFormatHasBeenSet = true; m_sourceLastUpdatedTimestampFormat = std::move(value); }
    inline void SetSourceLastUpdatedTimestampFormat(const char* value) { m_sourceLastUpdatedTimestampFormatHasBeenSet = true; m_sourceLastUpdatedTimestampFormat.assign(value); }
    inline DetectedProfileObjectType& WithSourceLastUpdatedTimestampFormat(const Aws::String& value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}
    inline DetectedProfileObjectType& WithSourceLastUpdatedTimestampFormat(Aws::String&& value) { SetSourceLastUpdatedTimestampFormat(std::move(value)); return *this;}
    inline DetectedProfileObjectType& WithSourceLastUpdatedTimestampFormat(const char* value) { SetSourceLastUpdatedTimestampFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the name and the <code>ObjectType</code> field.</p>
     */
    inline const Aws::Map<Aws::String, ObjectTypeField>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline DetectedProfileObjectType& WithFields(const Aws::Map<Aws::String, ObjectTypeField>& value) { SetFields(value); return *this;}
    inline DetectedProfileObjectType& WithFields(Aws::Map<Aws::String, ObjectTypeField>&& value) { SetFields(std::move(value)); return *this;}
    inline DetectedProfileObjectType& AddFields(const Aws::String& key, const ObjectTypeField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }
    inline DetectedProfileObjectType& AddFields(Aws::String&& key, const ObjectTypeField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), value); return *this; }
    inline DetectedProfileObjectType& AddFields(const Aws::String& key, ObjectTypeField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }
    inline DetectedProfileObjectType& AddFields(Aws::String&& key, ObjectTypeField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), std::move(value)); return *this; }
    inline DetectedProfileObjectType& AddFields(const char* key, ObjectTypeField&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }
    inline DetectedProfileObjectType& AddFields(const char* key, const ObjectTypeField& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of unique keys that can be used to map data to a profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& GetKeys() const{ return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    inline void SetKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { m_keysHasBeenSet = true; m_keys = value; }
    inline void SetKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }
    inline DetectedProfileObjectType& WithKeys(const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& value) { SetKeys(value); return *this;}
    inline DetectedProfileObjectType& WithKeys(Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>&& value) { SetKeys(std::move(value)); return *this;}
    inline DetectedProfileObjectType& AddKeys(const Aws::String& key, const Aws::Vector<ObjectTypeKey>& value) { m_keysHasBeenSet = true; m_keys.emplace(key, value); return *this; }
    inline DetectedProfileObjectType& AddKeys(Aws::String&& key, const Aws::Vector<ObjectTypeKey>& value) { m_keysHasBeenSet = true; m_keys.emplace(std::move(key), value); return *this; }
    inline DetectedProfileObjectType& AddKeys(const Aws::String& key, Aws::Vector<ObjectTypeKey>&& value) { m_keysHasBeenSet = true; m_keys.emplace(key, std::move(value)); return *this; }
    inline DetectedProfileObjectType& AddKeys(Aws::String&& key, Aws::Vector<ObjectTypeKey>&& value) { m_keysHasBeenSet = true; m_keys.emplace(std::move(key), std::move(value)); return *this; }
    inline DetectedProfileObjectType& AddKeys(const char* key, Aws::Vector<ObjectTypeKey>&& value) { m_keysHasBeenSet = true; m_keys.emplace(key, std::move(value)); return *this; }
    inline DetectedProfileObjectType& AddKeys(const char* key, const Aws::Vector<ObjectTypeKey>& value) { m_keysHasBeenSet = true; m_keys.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_sourceLastUpdatedTimestampFormat;
    bool m_sourceLastUpdatedTimestampFormatHasBeenSet = false;

    Aws::Map<Aws::String, ObjectTypeField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>> m_keys;
    bool m_keysHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
