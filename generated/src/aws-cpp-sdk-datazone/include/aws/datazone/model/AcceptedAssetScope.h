/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The accepted asset scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AcceptedAssetScope">AWS
   * API Reference</a></p>
   */
  class AcceptedAssetScope
  {
  public:
    AWS_DATAZONE_API AcceptedAssetScope();
    AWS_DATAZONE_API AcceptedAssetScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AcceptedAssetScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset ID of the accepted asset scope.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline AcceptedAssetScope& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline AcceptedAssetScope& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline AcceptedAssetScope& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter IDs of the accepted asset scope.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterIds() const{ return m_filterIds; }
    inline bool FilterIdsHasBeenSet() const { return m_filterIdsHasBeenSet; }
    inline void SetFilterIds(const Aws::Vector<Aws::String>& value) { m_filterIdsHasBeenSet = true; m_filterIds = value; }
    inline void SetFilterIds(Aws::Vector<Aws::String>&& value) { m_filterIdsHasBeenSet = true; m_filterIds = std::move(value); }
    inline AcceptedAssetScope& WithFilterIds(const Aws::Vector<Aws::String>& value) { SetFilterIds(value); return *this;}
    inline AcceptedAssetScope& WithFilterIds(Aws::Vector<Aws::String>&& value) { SetFilterIds(std::move(value)); return *this;}
    inline AcceptedAssetScope& AddFilterIds(const Aws::String& value) { m_filterIdsHasBeenSet = true; m_filterIds.push_back(value); return *this; }
    inline AcceptedAssetScope& AddFilterIds(Aws::String&& value) { m_filterIdsHasBeenSet = true; m_filterIds.push_back(std::move(value)); return *this; }
    inline AcceptedAssetScope& AddFilterIds(const char* value) { m_filterIdsHasBeenSet = true; m_filterIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterIds;
    bool m_filterIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
