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
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueSuccessEntry() = default;
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueSuccessEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueSuccessEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the entry.</p>
     */
    inline const Aws::String& GetEntryId() const { return m_entryId; }
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }
    template<typename EntryIdT = Aws::String>
    void SetEntryId(EntryIdT&& value) { m_entryIdHasBeenSet = true; m_entryId = std::forward<EntryIdT>(value); }
    template<typename EntryIdT = Aws::String>
    BatchGetAssetPropertyValueSuccessEntry& WithEntryId(EntryIdT&& value) { SetEntryId(std::forward<EntryIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AssetPropertyValue& GetAssetPropertyValue() const { return m_assetPropertyValue; }
    inline bool AssetPropertyValueHasBeenSet() const { return m_assetPropertyValueHasBeenSet; }
    template<typename AssetPropertyValueT = AssetPropertyValue>
    void SetAssetPropertyValue(AssetPropertyValueT&& value) { m_assetPropertyValueHasBeenSet = true; m_assetPropertyValue = std::forward<AssetPropertyValueT>(value); }
    template<typename AssetPropertyValueT = AssetPropertyValue>
    BatchGetAssetPropertyValueSuccessEntry& WithAssetPropertyValue(AssetPropertyValueT&& value) { SetAssetPropertyValue(std::forward<AssetPropertyValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    AssetPropertyValue m_assetPropertyValue;
    bool m_assetPropertyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
