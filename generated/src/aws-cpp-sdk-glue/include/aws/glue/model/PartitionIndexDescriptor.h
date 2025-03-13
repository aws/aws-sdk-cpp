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
    AWS_GLUE_API PartitionIndexDescriptor() = default;
    AWS_GLUE_API PartitionIndexDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API PartitionIndexDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the partition index.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    PartitionIndexDescriptor& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more keys, as <code>KeySchemaElement</code> structures, for
     * the partition index.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeys() const { return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    template<typename KeysT = Aws::Vector<KeySchemaElement>>
    void SetKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys = std::forward<KeysT>(value); }
    template<typename KeysT = Aws::Vector<KeySchemaElement>>
    PartitionIndexDescriptor& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysT = KeySchemaElement>
    PartitionIndexDescriptor& AddKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys.emplace_back(std::forward<KeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the partition index. </p> <p>The possible statuses are:</p>
     * <ul> <li> <p>CREATING: The index is being created. When an index is in a
     * CREATING state, the index or its table cannot be deleted.</p> </li> <li>
     * <p>ACTIVE: The index creation succeeds.</p> </li> <li> <p>FAILED: The index
     * creation fails. </p> </li> <li> <p>DELETING: The index is deleted from the list
     * of indexes.</p> </li> </ul>
     */
    inline PartitionIndexStatus GetIndexStatus() const { return m_indexStatus; }
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
    inline void SetIndexStatus(PartitionIndexStatus value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline PartitionIndexDescriptor& WithIndexStatus(PartitionIndexStatus value) { SetIndexStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of errors that can occur when registering partition indexes for an
     * existing table.</p>
     */
    inline const Aws::Vector<BackfillError>& GetBackfillErrors() const { return m_backfillErrors; }
    inline bool BackfillErrorsHasBeenSet() const { return m_backfillErrorsHasBeenSet; }
    template<typename BackfillErrorsT = Aws::Vector<BackfillError>>
    void SetBackfillErrors(BackfillErrorsT&& value) { m_backfillErrorsHasBeenSet = true; m_backfillErrors = std::forward<BackfillErrorsT>(value); }
    template<typename BackfillErrorsT = Aws::Vector<BackfillError>>
    PartitionIndexDescriptor& WithBackfillErrors(BackfillErrorsT&& value) { SetBackfillErrors(std::forward<BackfillErrorsT>(value)); return *this;}
    template<typename BackfillErrorsT = BackfillError>
    PartitionIndexDescriptor& AddBackfillErrors(BackfillErrorsT&& value) { m_backfillErrorsHasBeenSet = true; m_backfillErrors.emplace_back(std::forward<BackfillErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::Vector<KeySchemaElement> m_keys;
    bool m_keysHasBeenSet = false;

    PartitionIndexStatus m_indexStatus{PartitionIndexStatus::NOT_SET};
    bool m_indexStatusHasBeenSet = false;

    Aws::Vector<BackfillError> m_backfillErrors;
    bool m_backfillErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
