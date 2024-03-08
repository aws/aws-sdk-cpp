/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a summary of the components of the composite model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CompositionRelationshipSummary">AWS
   * API Reference</a></p>
   */
  class CompositionRelationshipSummary
  {
  public:
    AWS_IOTSITEWISE_API CompositionRelationshipSummary();
    AWS_IOTSITEWISE_API CompositionRelationshipSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API CompositionRelationshipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline CompositionRelationshipSummary& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline CompositionRelationshipSummary& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model, in UUID format.</p>
     */
    inline CompositionRelationshipSummary& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const{ return m_assetModelCompositeModelId; }

    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline bool AssetModelCompositeModelIdHasBeenSet() const { return m_assetModelCompositeModelIdHasBeenSet; }

    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline void SetAssetModelCompositeModelId(const Aws::String& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = value; }

    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline void SetAssetModelCompositeModelId(Aws::String&& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = std::move(value); }

    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline void SetAssetModelCompositeModelId(const char* value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId.assign(value); }

    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline CompositionRelationshipSummary& WithAssetModelCompositeModelId(const Aws::String& value) { SetAssetModelCompositeModelId(value); return *this;}

    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline CompositionRelationshipSummary& WithAssetModelCompositeModelId(Aws::String&& value) { SetAssetModelCompositeModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of a composite model on this asset model.</p>
     */
    inline CompositionRelationshipSummary& WithAssetModelCompositeModelId(const char* value) { SetAssetModelCompositeModelId(value); return *this;}


    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelType() const{ return m_assetModelCompositeModelType; }

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline bool AssetModelCompositeModelTypeHasBeenSet() const { return m_assetModelCompositeModelTypeHasBeenSet; }

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline void SetAssetModelCompositeModelType(const Aws::String& value) { m_assetModelCompositeModelTypeHasBeenSet = true; m_assetModelCompositeModelType = value; }

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline void SetAssetModelCompositeModelType(Aws::String&& value) { m_assetModelCompositeModelTypeHasBeenSet = true; m_assetModelCompositeModelType = std::move(value); }

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline void SetAssetModelCompositeModelType(const char* value) { m_assetModelCompositeModelTypeHasBeenSet = true; m_assetModelCompositeModelType.assign(value); }

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline CompositionRelationshipSummary& WithAssetModelCompositeModelType(const Aws::String& value) { SetAssetModelCompositeModelType(value); return *this;}

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline CompositionRelationshipSummary& WithAssetModelCompositeModelType(Aws::String&& value) { SetAssetModelCompositeModelType(std::move(value)); return *this;}

    /**
     * <p>The composite model type. Valid values are <code>AWS/ALARM</code>,
     * <code>CUSTOM</code>, or <code> AWS/L4E_ANOMALY</code>.</p>
     */
    inline CompositionRelationshipSummary& WithAssetModelCompositeModelType(const char* value) { SetAssetModelCompositeModelType(value); return *this;}

  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelId;
    bool m_assetModelCompositeModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelType;
    bool m_assetModelCompositeModelTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
