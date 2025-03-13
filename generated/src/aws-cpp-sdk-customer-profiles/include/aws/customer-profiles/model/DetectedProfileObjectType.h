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
    AWS_CUSTOMERPROFILES_API DetectedProfileObjectType() = default;
    AWS_CUSTOMERPROFILES_API DetectedProfileObjectType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API DetectedProfileObjectType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format of <code>sourceLastUpdatedTimestamp</code> that was detected in
     * fields.</p>
     */
    inline const Aws::String& GetSourceLastUpdatedTimestampFormat() const { return m_sourceLastUpdatedTimestampFormat; }
    inline bool SourceLastUpdatedTimestampFormatHasBeenSet() const { return m_sourceLastUpdatedTimestampFormatHasBeenSet; }
    template<typename SourceLastUpdatedTimestampFormatT = Aws::String>
    void SetSourceLastUpdatedTimestampFormat(SourceLastUpdatedTimestampFormatT&& value) { m_sourceLastUpdatedTimestampFormatHasBeenSet = true; m_sourceLastUpdatedTimestampFormat = std::forward<SourceLastUpdatedTimestampFormatT>(value); }
    template<typename SourceLastUpdatedTimestampFormatT = Aws::String>
    DetectedProfileObjectType& WithSourceLastUpdatedTimestampFormat(SourceLastUpdatedTimestampFormatT&& value) { SetSourceLastUpdatedTimestampFormat(std::forward<SourceLastUpdatedTimestampFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the name and the <code>ObjectType</code> field.</p>
     */
    inline const Aws::Map<Aws::String, ObjectTypeField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Map<Aws::String, ObjectTypeField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Map<Aws::String, ObjectTypeField>>
    DetectedProfileObjectType& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsKeyT = Aws::String, typename FieldsValueT = ObjectTypeField>
    DetectedProfileObjectType& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
      m_fieldsHasBeenSet = true; m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of unique keys that can be used to map data to a profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>& GetKeys() const { return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    template<typename KeysT = Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>>
    void SetKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys = std::forward<KeysT>(value); }
    template<typename KeysT = Aws::Map<Aws::String, Aws::Vector<ObjectTypeKey>>>
    DetectedProfileObjectType& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysKeyT = Aws::String, typename KeysValueT = Aws::Vector<ObjectTypeKey>>
    DetectedProfileObjectType& AddKeys(KeysKeyT&& key, KeysValueT&& value) {
      m_keysHasBeenSet = true; m_keys.emplace(std::forward<KeysKeyT>(key), std::forward<KeysValueT>(value)); return *this;
    }
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
