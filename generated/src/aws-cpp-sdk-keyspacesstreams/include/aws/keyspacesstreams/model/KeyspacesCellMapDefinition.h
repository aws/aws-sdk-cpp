/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/keyspacesstreams/model/KeyspacesMetadata.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
namespace KeyspacesStreams
{
namespace Model
{
  class KeyspacesCellValue;

  /**
   * <p>Represents a key-value pair within a map data type in Amazon Keyspaces,
   * including the associated metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/KeyspacesCellMapDefinition">AWS
   * API Reference</a></p>
   */
  class KeyspacesCellMapDefinition
  {
  public:
    AWS_KEYSPACESSTREAMS_API KeyspacesCellMapDefinition() = default;
    AWS_KEYSPACESSTREAMS_API KeyspacesCellMapDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API KeyspacesCellMapDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of this map entry in the Amazon Keyspaces cell.</p>
     */
    inline const KeyspacesCellValue& GetKey() const{
      return *m_key;
    }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = KeyspacesCellValue>
    void SetKey(KeyT&& value) {
      m_keyHasBeenSet = true; 
      m_key = Aws::MakeShared<KeyspacesCellValue>("KeyspacesCellMapDefinition", std::forward<KeyT>(value));
    }
    template<typename KeyT = KeyspacesCellValue>
    KeyspacesCellMapDefinition& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value associated with the key in this map entry.</p>
     */
    inline const KeyspacesCellValue& GetValue() const{
      return *m_value;
    }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = KeyspacesCellValue>
    void SetValue(ValueT&& value) {
      m_valueHasBeenSet = true; 
      m_value = Aws::MakeShared<KeyspacesCellValue>("KeyspacesCellMapDefinition", std::forward<ValueT>(value));
    }
    template<typename ValueT = KeyspacesCellValue>
    KeyspacesCellMapDefinition& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata for this specific key-value pair within the map, such as timestamps
     * and TTL information.</p>
     */
    inline const KeyspacesMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = KeyspacesMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = KeyspacesMetadata>
    KeyspacesCellMapDefinition& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}
  private:

    std::shared_ptr<KeyspacesCellValue> m_key;
    bool m_keyHasBeenSet = false;

    std::shared_ptr<KeyspacesCellValue> m_value;
    bool m_valueHasBeenSet = false;

    KeyspacesMetadata m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
