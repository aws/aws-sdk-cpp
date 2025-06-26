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
   * <p>Represents a cell in an Amazon Keyspaces table, containing both the value and
   * metadata about the cell.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/KeyspacesCell">AWS
   * API Reference</a></p>
   */
  class KeyspacesCell
  {
  public:
    AWS_KEYSPACESSTREAMS_API KeyspacesCell() = default;
    AWS_KEYSPACESSTREAMS_API KeyspacesCell(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API KeyspacesCell& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value stored in this cell, which can be of various data types supported
     * by Amazon Keyspaces.</p>
     */
    inline const KeyspacesCellValue& GetValue() const{
      return *m_value;
    }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = KeyspacesCellValue>
    void SetValue(ValueT&& value) {
      m_valueHasBeenSet = true; 
      m_value = Aws::MakeShared<KeyspacesCellValue>("KeyspacesCell", std::forward<ValueT>(value));
    }
    template<typename ValueT = KeyspacesCellValue>
    KeyspacesCell& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata associated with this cell, such as time-to-live (TTL) expiration
     * time and write timestamp.</p>
     */
    inline const KeyspacesMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = KeyspacesMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = KeyspacesMetadata>
    KeyspacesCell& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}
  private:

    std::shared_ptr<KeyspacesCellValue> m_value;
    bool m_valueHasBeenSet = false;

    KeyspacesMetadata m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
