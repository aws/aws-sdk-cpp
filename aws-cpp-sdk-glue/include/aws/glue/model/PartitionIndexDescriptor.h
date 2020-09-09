/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/PartitionIndexStatus.h>
#include <aws/glue/model/KeySchemaElement.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A descriptor for a partition index in a table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PartitionIndexDescriptor">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API PartitionIndexDescriptor
  {
  public:
    PartitionIndexDescriptor();
    PartitionIndexDescriptor(Aws::Utils::Json::JsonView jsonValue);
    PartitionIndexDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the partition index.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the partition index.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the partition index.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the partition index.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the partition index.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the partition index.</p>
     */
    inline PartitionIndexDescriptor& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the partition index.</p>
     */
    inline PartitionIndexDescriptor& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the partition index.</p>
     */
    inline PartitionIndexDescriptor& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>A list of one or more keys, as <code>KeySchemaElement</code> structures, for
     * the partition index.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeys() const{ return m_keys; }

    /**
     * <p>A list of one or more keys, as <code>KeySchemaElement</code> structures, for
     * the partition index.</p>
     */
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }

    /**
     * <p>A list of one or more keys, as <code>KeySchemaElement</code> structures, for
     * the partition index.</p>
     */
    inline void SetKeys(const Aws::Vector<KeySchemaElement>& value) { m_keysHasBeenSet = true; m_keys = value; }

    /**
     * <p>A list of one or more keys, as <code>KeySchemaElement</code> structures, for
     * the partition index.</p>
     */
    inline void SetKeys(Aws::Vector<KeySchemaElement>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }

    /**
     * <p>A list of one or more keys, as <code>KeySchemaElement</code> structures, for
     * the partition index.</p>
     */
    inline PartitionIndexDescriptor& WithKeys(const Aws::Vector<KeySchemaElement>& value) { SetKeys(value); return *this;}

    /**
     * <p>A list of one or more keys, as <code>KeySchemaElement</code> structures, for
     * the partition index.</p>
     */
    inline PartitionIndexDescriptor& WithKeys(Aws::Vector<KeySchemaElement>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>A list of one or more keys, as <code>KeySchemaElement</code> structures, for
     * the partition index.</p>
     */
    inline PartitionIndexDescriptor& AddKeys(const KeySchemaElement& value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }

    /**
     * <p>A list of one or more keys, as <code>KeySchemaElement</code> structures, for
     * the partition index.</p>
     */
    inline PartitionIndexDescriptor& AddKeys(KeySchemaElement&& value) { m_keysHasBeenSet = true; m_keys.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the partition index. </p>
     */
    inline const PartitionIndexStatus& GetIndexStatus() const{ return m_indexStatus; }

    /**
     * <p>The status of the partition index. </p>
     */
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }

    /**
     * <p>The status of the partition index. </p>
     */
    inline void SetIndexStatus(const PartitionIndexStatus& value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }

    /**
     * <p>The status of the partition index. </p>
     */
    inline void SetIndexStatus(PartitionIndexStatus&& value) { m_indexStatusHasBeenSet = true; m_indexStatus = std::move(value); }

    /**
     * <p>The status of the partition index. </p>
     */
    inline PartitionIndexDescriptor& WithIndexStatus(const PartitionIndexStatus& value) { SetIndexStatus(value); return *this;}

    /**
     * <p>The status of the partition index. </p>
     */
    inline PartitionIndexDescriptor& WithIndexStatus(PartitionIndexStatus&& value) { SetIndexStatus(std::move(value)); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;

    Aws::Vector<KeySchemaElement> m_keys;
    bool m_keysHasBeenSet;

    PartitionIndexStatus m_indexStatus;
    bool m_indexStatusHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
