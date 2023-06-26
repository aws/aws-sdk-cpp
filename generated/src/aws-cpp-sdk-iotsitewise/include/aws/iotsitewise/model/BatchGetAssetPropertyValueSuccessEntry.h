/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetPropertyValue.h>
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
   * <p>Contains success information for an entry that is associated with the <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_BatchGetAssetPropertyValue.html">BatchGetAssetPropertyValue</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyValueSuccessEntry">AWS
   * API Reference</a></p>
   */
  class BatchGetAssetPropertyValueSuccessEntry
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueSuccessEntry();
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueSuccessEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueSuccessEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the entry.</p>
     */
    inline const Aws::String& GetEntryId() const{ return m_entryId; }

    /**
     * <p>The ID of the entry.</p>
     */
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }

    /**
     * <p>The ID of the entry.</p>
     */
    inline void SetEntryId(const Aws::String& value) { m_entryIdHasBeenSet = true; m_entryId = value; }

    /**
     * <p>The ID of the entry.</p>
     */
    inline void SetEntryId(Aws::String&& value) { m_entryIdHasBeenSet = true; m_entryId = std::move(value); }

    /**
     * <p>The ID of the entry.</p>
     */
    inline void SetEntryId(const char* value) { m_entryIdHasBeenSet = true; m_entryId.assign(value); }

    /**
     * <p>The ID of the entry.</p>
     */
    inline BatchGetAssetPropertyValueSuccessEntry& WithEntryId(const Aws::String& value) { SetEntryId(value); return *this;}

    /**
     * <p>The ID of the entry.</p>
     */
    inline BatchGetAssetPropertyValueSuccessEntry& WithEntryId(Aws::String&& value) { SetEntryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entry.</p>
     */
    inline BatchGetAssetPropertyValueSuccessEntry& WithEntryId(const char* value) { SetEntryId(value); return *this;}


    
    inline const AssetPropertyValue& GetAssetPropertyValue() const{ return m_assetPropertyValue; }

    
    inline bool AssetPropertyValueHasBeenSet() const { return m_assetPropertyValueHasBeenSet; }

    
    inline void SetAssetPropertyValue(const AssetPropertyValue& value) { m_assetPropertyValueHasBeenSet = true; m_assetPropertyValue = value; }

    
    inline void SetAssetPropertyValue(AssetPropertyValue&& value) { m_assetPropertyValueHasBeenSet = true; m_assetPropertyValue = std::move(value); }

    
    inline BatchGetAssetPropertyValueSuccessEntry& WithAssetPropertyValue(const AssetPropertyValue& value) { SetAssetPropertyValue(value); return *this;}

    
    inline BatchGetAssetPropertyValueSuccessEntry& WithAssetPropertyValue(AssetPropertyValue&& value) { SetAssetPropertyValue(std::move(value)); return *this;}

  private:

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    AssetPropertyValue m_assetPropertyValue;
    bool m_assetPropertyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
