/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
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
   * <p> A single item in a batch that failed to perform the intended action because
   * of an error preventing it from succeeding. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/FailedBatchItem">AWS
   * API Reference</a></p>
   */
  class FailedBatchItem
  {
  public:
    AWS_HONEYCODE_API FailedBatchItem();
    AWS_HONEYCODE_API FailedBatchItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API FailedBatchItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The id of the batch item that failed. This is the batch item id for the
     * BatchCreateTableRows and BatchUpsertTableRows operations and the row id for the
     * BatchUpdateTableRows and BatchDeleteTableRows operations. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The id of the batch item that failed. This is the batch item id for the
     * BatchCreateTableRows and BatchUpsertTableRows operations and the row id for the
     * BatchUpdateTableRows and BatchDeleteTableRows operations. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The id of the batch item that failed. This is the batch item id for the
     * BatchCreateTableRows and BatchUpsertTableRows operations and the row id for the
     * BatchUpdateTableRows and BatchDeleteTableRows operations. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The id of the batch item that failed. This is the batch item id for the
     * BatchCreateTableRows and BatchUpsertTableRows operations and the row id for the
     * BatchUpdateTableRows and BatchDeleteTableRows operations. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The id of the batch item that failed. This is the batch item id for the
     * BatchCreateTableRows and BatchUpsertTableRows operations and the row id for the
     * BatchUpdateTableRows and BatchDeleteTableRows operations. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The id of the batch item that failed. This is the batch item id for the
     * BatchCreateTableRows and BatchUpsertTableRows operations and the row id for the
     * BatchUpdateTableRows and BatchDeleteTableRows operations. </p>
     */
    inline FailedBatchItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The id of the batch item that failed. This is the batch item id for the
     * BatchCreateTableRows and BatchUpsertTableRows operations and the row id for the
     * BatchUpdateTableRows and BatchDeleteTableRows operations. </p>
     */
    inline FailedBatchItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The id of the batch item that failed. This is the batch item id for the
     * BatchCreateTableRows and BatchUpsertTableRows operations and the row id for the
     * BatchUpdateTableRows and BatchDeleteTableRows operations. </p>
     */
    inline FailedBatchItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The error message that indicates why the batch item failed. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p> The error message that indicates why the batch item failed. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p> The error message that indicates why the batch item failed. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p> The error message that indicates why the batch item failed. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p> The error message that indicates why the batch item failed. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p> The error message that indicates why the batch item failed. </p>
     */
    inline FailedBatchItem& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p> The error message that indicates why the batch item failed. </p>
     */
    inline FailedBatchItem& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p> The error message that indicates why the batch item failed. </p>
     */
    inline FailedBatchItem& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
