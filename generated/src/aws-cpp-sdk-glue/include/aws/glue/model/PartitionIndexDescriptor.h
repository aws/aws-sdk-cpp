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
#include <aws/glue/model/BackfillError.h>
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
  class PartitionIndexDescriptor
  {
  public:
    AWS_GLUE_API PartitionIndexDescriptor();
    AWS_GLUE_API PartitionIndexDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API PartitionIndexDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The status of the partition index. </p> <p>The possible statuses are:</p>
     * <ul> <li> <p>CREATING: The index is being created. When an index is in a
     * CREATING state, the index or its table cannot be deleted.</p> </li> <li>
     * <p>ACTIVE: The index creation succeeds.</p> </li> <li> <p>FAILED: The index
     * creation fails. </p> </li> <li> <p>DELETING: The index is deleted from the list
     * of indexes.</p> </li> </ul>
     */
    inline const PartitionIndexStatus& GetIndexStatus() const{ return m_indexStatus; }

    /**
     * <p>The status of the partition index. </p> <p>The possible statuses are:</p>
     * <ul> <li> <p>CREATING: The index is being created. When an index is in a
     * CREATING state, the index or its table cannot be deleted.</p> </li> <li>
     * <p>ACTIVE: The index creation succeeds.</p> </li> <li> <p>FAILED: The index
     * creation fails. </p> </li> <li> <p>DELETING: The index is deleted from the list
     * of indexes.</p> </li> </ul>
     */
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }

    /**
     * <p>The status of the partition index. </p> <p>The possible statuses are:</p>
     * <ul> <li> <p>CREATING: The index is being created. When an index is in a
     * CREATING state, the index or its table cannot be deleted.</p> </li> <li>
     * <p>ACTIVE: The index creation succeeds.</p> </li> <li> <p>FAILED: The index
     * creation fails. </p> </li> <li> <p>DELETING: The index is deleted from the list
     * of indexes.</p> </li> </ul>
     */
    inline void SetIndexStatus(const PartitionIndexStatus& value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }

    /**
     * <p>The status of the partition index. </p> <p>The possible statuses are:</p>
     * <ul> <li> <p>CREATING: The index is being created. When an index is in a
     * CREATING state, the index or its table cannot be deleted.</p> </li> <li>
     * <p>ACTIVE: The index creation succeeds.</p> </li> <li> <p>FAILED: The index
     * creation fails. </p> </li> <li> <p>DELETING: The index is deleted from the list
     * of indexes.</p> </li> </ul>
     */
    inline void SetIndexStatus(PartitionIndexStatus&& value) { m_indexStatusHasBeenSet = true; m_indexStatus = std::move(value); }

    /**
     * <p>The status of the partition index. </p> <p>The possible statuses are:</p>
     * <ul> <li> <p>CREATING: The index is being created. When an index is in a
     * CREATING state, the index or its table cannot be deleted.</p> </li> <li>
     * <p>ACTIVE: The index creation succeeds.</p> </li> <li> <p>FAILED: The index
     * creation fails. </p> </li> <li> <p>DELETING: The index is deleted from the list
     * of indexes.</p> </li> </ul>
     */
    inline PartitionIndexDescriptor& WithIndexStatus(const PartitionIndexStatus& value) { SetIndexStatus(value); return *this;}

    /**
     * <p>The status of the partition index. </p> <p>The possible statuses are:</p>
     * <ul> <li> <p>CREATING: The index is being created. When an index is in a
     * CREATING state, the index or its table cannot be deleted.</p> </li> <li>
     * <p>ACTIVE: The index creation succeeds.</p> </li> <li> <p>FAILED: The index
     * creation fails. </p> </li> <li> <p>DELETING: The index is deleted from the list
     * of indexes.</p> </li> </ul>
     */
    inline PartitionIndexDescriptor& WithIndexStatus(PartitionIndexStatus&& value) { SetIndexStatus(std::move(value)); return *this;}


    /**
     * <p>A list of errors that can occur when registering partition indexes for an
     * existing table.</p>
     */
    inline const Aws::Vector<BackfillError>& GetBackfillErrors() const{ return m_backfillErrors; }

    /**
     * <p>A list of errors that can occur when registering partition indexes for an
     * existing table.</p>
     */
    inline bool BackfillErrorsHasBeenSet() const { return m_backfillErrorsHasBeenSet; }

    /**
     * <p>A list of errors that can occur when registering partition indexes for an
     * existing table.</p>
     */
    inline void SetBackfillErrors(const Aws::Vector<BackfillError>& value) { m_backfillErrorsHasBeenSet = true; m_backfillErrors = value; }

    /**
     * <p>A list of errors that can occur when registering partition indexes for an
     * existing table.</p>
     */
    inline void SetBackfillErrors(Aws::Vector<BackfillError>&& value) { m_backfillErrorsHasBeenSet = true; m_backfillErrors = std::move(value); }

    /**
     * <p>A list of errors that can occur when registering partition indexes for an
     * existing table.</p>
     */
    inline PartitionIndexDescriptor& WithBackfillErrors(const Aws::Vector<BackfillError>& value) { SetBackfillErrors(value); return *this;}

    /**
     * <p>A list of errors that can occur when registering partition indexes for an
     * existing table.</p>
     */
    inline PartitionIndexDescriptor& WithBackfillErrors(Aws::Vector<BackfillError>&& value) { SetBackfillErrors(std::move(value)); return *this;}

    /**
     * <p>A list of errors that can occur when registering partition indexes for an
     * existing table.</p>
     */
    inline PartitionIndexDescriptor& AddBackfillErrors(const BackfillError& value) { m_backfillErrorsHasBeenSet = true; m_backfillErrors.push_back(value); return *this; }

    /**
     * <p>A list of errors that can occur when registering partition indexes for an
     * existing table.</p>
     */
    inline PartitionIndexDescriptor& AddBackfillErrors(BackfillError&& value) { m_backfillErrorsHasBeenSet = true; m_backfillErrors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::Vector<KeySchemaElement> m_keys;
    bool m_keysHasBeenSet = false;

    PartitionIndexStatus m_indexStatus;
    bool m_indexStatusHasBeenSet = false;

    Aws::Vector<BackfillError> m_backfillErrors;
    bool m_backfillErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
