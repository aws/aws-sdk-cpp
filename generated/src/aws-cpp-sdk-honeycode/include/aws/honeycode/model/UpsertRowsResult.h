/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/honeycode/model/UpsertAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p> An object that represents the result of a single upsert row request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/UpsertRowsResult">AWS
   * API Reference</a></p>
   */
  class UpsertRowsResult
  {
  public:
    AWS_HONEYCODE_API UpsertRowsResult();
    AWS_HONEYCODE_API UpsertRowsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API UpsertRowsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The list of row ids that were changed as part of an upsert row operation. If
     * the upsert resulted in an update, this list could potentially contain multiple
     * rows that matched the filter and hence got updated. If the upsert resulted in an
     * append, this list would only have the single row that was appended. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRowIds() const{ return m_rowIds; }

    /**
     * <p> The list of row ids that were changed as part of an upsert row operation. If
     * the upsert resulted in an update, this list could potentially contain multiple
     * rows that matched the filter and hence got updated. If the upsert resulted in an
     * append, this list would only have the single row that was appended. </p>
     */
    inline bool RowIdsHasBeenSet() const { return m_rowIdsHasBeenSet; }

    /**
     * <p> The list of row ids that were changed as part of an upsert row operation. If
     * the upsert resulted in an update, this list could potentially contain multiple
     * rows that matched the filter and hence got updated. If the upsert resulted in an
     * append, this list would only have the single row that was appended. </p>
     */
    inline void SetRowIds(const Aws::Vector<Aws::String>& value) { m_rowIdsHasBeenSet = true; m_rowIds = value; }

    /**
     * <p> The list of row ids that were changed as part of an upsert row operation. If
     * the upsert resulted in an update, this list could potentially contain multiple
     * rows that matched the filter and hence got updated. If the upsert resulted in an
     * append, this list would only have the single row that was appended. </p>
     */
    inline void SetRowIds(Aws::Vector<Aws::String>&& value) { m_rowIdsHasBeenSet = true; m_rowIds = std::move(value); }

    /**
     * <p> The list of row ids that were changed as part of an upsert row operation. If
     * the upsert resulted in an update, this list could potentially contain multiple
     * rows that matched the filter and hence got updated. If the upsert resulted in an
     * append, this list would only have the single row that was appended. </p>
     */
    inline UpsertRowsResult& WithRowIds(const Aws::Vector<Aws::String>& value) { SetRowIds(value); return *this;}

    /**
     * <p> The list of row ids that were changed as part of an upsert row operation. If
     * the upsert resulted in an update, this list could potentially contain multiple
     * rows that matched the filter and hence got updated. If the upsert resulted in an
     * append, this list would only have the single row that was appended. </p>
     */
    inline UpsertRowsResult& WithRowIds(Aws::Vector<Aws::String>&& value) { SetRowIds(std::move(value)); return *this;}

    /**
     * <p> The list of row ids that were changed as part of an upsert row operation. If
     * the upsert resulted in an update, this list could potentially contain multiple
     * rows that matched the filter and hence got updated. If the upsert resulted in an
     * append, this list would only have the single row that was appended. </p>
     */
    inline UpsertRowsResult& AddRowIds(const Aws::String& value) { m_rowIdsHasBeenSet = true; m_rowIds.push_back(value); return *this; }

    /**
     * <p> The list of row ids that were changed as part of an upsert row operation. If
     * the upsert resulted in an update, this list could potentially contain multiple
     * rows that matched the filter and hence got updated. If the upsert resulted in an
     * append, this list would only have the single row that was appended. </p>
     */
    inline UpsertRowsResult& AddRowIds(Aws::String&& value) { m_rowIdsHasBeenSet = true; m_rowIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of row ids that were changed as part of an upsert row operation. If
     * the upsert resulted in an update, this list could potentially contain multiple
     * rows that matched the filter and hence got updated. If the upsert resulted in an
     * append, this list would only have the single row that was appended. </p>
     */
    inline UpsertRowsResult& AddRowIds(const char* value) { m_rowIdsHasBeenSet = true; m_rowIds.push_back(value); return *this; }


    /**
     * <p> The result of the upsert action. </p>
     */
    inline const UpsertAction& GetUpsertAction() const{ return m_upsertAction; }

    /**
     * <p> The result of the upsert action. </p>
     */
    inline bool UpsertActionHasBeenSet() const { return m_upsertActionHasBeenSet; }

    /**
     * <p> The result of the upsert action. </p>
     */
    inline void SetUpsertAction(const UpsertAction& value) { m_upsertActionHasBeenSet = true; m_upsertAction = value; }

    /**
     * <p> The result of the upsert action. </p>
     */
    inline void SetUpsertAction(UpsertAction&& value) { m_upsertActionHasBeenSet = true; m_upsertAction = std::move(value); }

    /**
     * <p> The result of the upsert action. </p>
     */
    inline UpsertRowsResult& WithUpsertAction(const UpsertAction& value) { SetUpsertAction(value); return *this;}

    /**
     * <p> The result of the upsert action. </p>
     */
    inline UpsertRowsResult& WithUpsertAction(UpsertAction&& value) { SetUpsertAction(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_rowIds;
    bool m_rowIdsHasBeenSet = false;

    UpsertAction m_upsertAction;
    bool m_upsertActionHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
