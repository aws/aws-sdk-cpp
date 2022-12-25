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
   * <p>Contains an asset model hierarchy used in asset model creation. An asset
   * model hierarchy determines the kind (or type) of asset that can belong to a
   * hierarchy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelHierarchyDefinition">AWS
   * API Reference</a></p>
   */
  class AssetModelHierarchyDefinition
  {
  public:
    AWS_IOTSITEWISE_API AssetModelHierarchyDefinition();
    AWS_IOTSITEWISE_API AssetModelHierarchyDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelHierarchyDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the asset model hierarchy definition (as specified in the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the asset model hierarchy definition (as specified in the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the asset model hierarchy definition (as specified in the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the asset model hierarchy definition (as specified in the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the asset model hierarchy definition (as specified in the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the asset model hierarchy definition (as specified in the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation).</p>
     */
    inline AssetModelHierarchyDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the asset model hierarchy definition (as specified in the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation).</p>
     */
    inline AssetModelHierarchyDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset model hierarchy definition (as specified in the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation).</p>
     */
    inline AssetModelHierarchyDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of an asset model for this hierarchy.</p>
     */
    inline const Aws::String& GetChildAssetModelId() const{ return m_childAssetModelId; }

    /**
     * <p>The ID of an asset model for this hierarchy.</p>
     */
    inline bool ChildAssetModelIdHasBeenSet() const { return m_childAssetModelIdHasBeenSet; }

    /**
     * <p>The ID of an asset model for this hierarchy.</p>
     */
    inline void SetChildAssetModelId(const Aws::String& value) { m_childAssetModelIdHasBeenSet = true; m_childAssetModelId = value; }

    /**
     * <p>The ID of an asset model for this hierarchy.</p>
     */
    inline void SetChildAssetModelId(Aws::String&& value) { m_childAssetModelIdHasBeenSet = true; m_childAssetModelId = std::move(value); }

    /**
     * <p>The ID of an asset model for this hierarchy.</p>
     */
    inline void SetChildAssetModelId(const char* value) { m_childAssetModelIdHasBeenSet = true; m_childAssetModelId.assign(value); }

    /**
     * <p>The ID of an asset model for this hierarchy.</p>
     */
    inline AssetModelHierarchyDefinition& WithChildAssetModelId(const Aws::String& value) { SetChildAssetModelId(value); return *this;}

    /**
     * <p>The ID of an asset model for this hierarchy.</p>
     */
    inline AssetModelHierarchyDefinition& WithChildAssetModelId(Aws::String&& value) { SetChildAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of an asset model for this hierarchy.</p>
     */
    inline AssetModelHierarchyDefinition& WithChildAssetModelId(const char* value) { SetChildAssetModelId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_childAssetModelId;
    bool m_childAssetModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
