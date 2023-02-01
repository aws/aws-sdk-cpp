/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/BatchPutAssetPropertyError.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains error information for asset property value entries that are
   * associated with the <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_BatchPutAssetPropertyValue.html">BatchPutAssetPropertyValue</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchPutAssetPropertyErrorEntry">AWS
   * API Reference</a></p>
   */
  class BatchPutAssetPropertyErrorEntry
  {
  public:
    AWS_IOTSITEWISE_API BatchPutAssetPropertyErrorEntry();
    AWS_IOTSITEWISE_API BatchPutAssetPropertyErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchPutAssetPropertyErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the failed entry.</p>
     */
    inline const Aws::String& GetEntryId() const{ return m_entryId; }

    /**
     * <p>The ID of the failed entry.</p>
     */
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }

    /**
     * <p>The ID of the failed entry.</p>
     */
    inline void SetEntryId(const Aws::String& value) { m_entryIdHasBeenSet = true; m_entryId = value; }

    /**
     * <p>The ID of the failed entry.</p>
     */
    inline void SetEntryId(Aws::String&& value) { m_entryIdHasBeenSet = true; m_entryId = std::move(value); }

    /**
     * <p>The ID of the failed entry.</p>
     */
    inline void SetEntryId(const char* value) { m_entryIdHasBeenSet = true; m_entryId.assign(value); }

    /**
     * <p>The ID of the failed entry.</p>
     */
    inline BatchPutAssetPropertyErrorEntry& WithEntryId(const Aws::String& value) { SetEntryId(value); return *this;}

    /**
     * <p>The ID of the failed entry.</p>
     */
    inline BatchPutAssetPropertyErrorEntry& WithEntryId(Aws::String&& value) { SetEntryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the failed entry.</p>
     */
    inline BatchPutAssetPropertyErrorEntry& WithEntryId(const char* value) { SetEntryId(value); return *this;}


    /**
     * <p>The list of update property value errors.</p>
     */
    inline const Aws::Vector<BatchPutAssetPropertyError>& GetErrors() const{ return m_errors; }

    /**
     * <p>The list of update property value errors.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>The list of update property value errors.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchPutAssetPropertyError>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>The list of update property value errors.</p>
     */
    inline void SetErrors(Aws::Vector<BatchPutAssetPropertyError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>The list of update property value errors.</p>
     */
    inline BatchPutAssetPropertyErrorEntry& WithErrors(const Aws::Vector<BatchPutAssetPropertyError>& value) { SetErrors(value); return *this;}

    /**
     * <p>The list of update property value errors.</p>
     */
    inline BatchPutAssetPropertyErrorEntry& WithErrors(Aws::Vector<BatchPutAssetPropertyError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>The list of update property value errors.</p>
     */
    inline BatchPutAssetPropertyErrorEntry& AddErrors(const BatchPutAssetPropertyError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>The list of update property value errors.</p>
     */
    inline BatchPutAssetPropertyErrorEntry& AddErrors(BatchPutAssetPropertyError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    Aws::Vector<BatchPutAssetPropertyError> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
