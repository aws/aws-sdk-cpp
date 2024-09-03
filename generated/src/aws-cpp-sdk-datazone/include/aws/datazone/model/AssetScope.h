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
   * <p>The asset scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetScope">AWS
   * API Reference</a></p>
   */
  class AssetScope
  {
  public:
    AWS_DATAZONE_API AssetScope();
    AWS_DATAZONE_API AssetScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The asset ID of the asset scope.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline AssetScope& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline AssetScope& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline AssetScope& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message of the asset scope.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline AssetScope& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline AssetScope& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline AssetScope& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter IDs of the asset scope.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterIds() const{ return m_filterIds; }
    inline bool FilterIdsHasBeenSet() const { return m_filterIdsHasBeenSet; }
    inline void SetFilterIds(const Aws::Vector<Aws::String>& value) { m_filterIdsHasBeenSet = true; m_filterIds = value; }
    inline void SetFilterIds(Aws::Vector<Aws::String>&& value) { m_filterIdsHasBeenSet = true; m_filterIds = std::move(value); }
    inline AssetScope& WithFilterIds(const Aws::Vector<Aws::String>& value) { SetFilterIds(value); return *this;}
    inline AssetScope& WithFilterIds(Aws::Vector<Aws::String>&& value) { SetFilterIds(std::move(value)); return *this;}
    inline AssetScope& AddFilterIds(const Aws::String& value) { m_filterIdsHasBeenSet = true; m_filterIds.push_back(value); return *this; }
    inline AssetScope& AddFilterIds(Aws::String&& value) { m_filterIdsHasBeenSet = true; m_filterIds.push_back(std::move(value)); return *this; }
    inline AssetScope& AddFilterIds(const char* value) { m_filterIdsHasBeenSet = true; m_filterIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the asset scope.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AssetScope& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AssetScope& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AssetScope& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterIds;
    bool m_filterIdsHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
