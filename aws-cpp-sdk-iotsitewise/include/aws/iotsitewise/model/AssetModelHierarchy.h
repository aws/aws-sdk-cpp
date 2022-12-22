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
   * <p>Describes an asset hierarchy that contains a hierarchy's name, ID, and child
   * asset model ID that specifies the type of asset that can be in this
   * hierarchy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelHierarchy">AWS
   * API Reference</a></p>
   */
  class AssetModelHierarchy
  {
  public:
    AWS_IOTSITEWISE_API AssetModelHierarchy();
    AWS_IOTSITEWISE_API AssetModelHierarchy(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelHierarchy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the asset model hierarchy. This ID is a
     * <code>hierarchyId</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the asset model hierarchy. This ID is a
     * <code>hierarchyId</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the asset model hierarchy. This ID is a
     * <code>hierarchyId</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the asset model hierarchy. This ID is a
     * <code>hierarchyId</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the asset model hierarchy. This ID is a
     * <code>hierarchyId</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the asset model hierarchy. This ID is a
     * <code>hierarchyId</code>.</p>
     */
    inline AssetModelHierarchy& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the asset model hierarchy. This ID is a
     * <code>hierarchyId</code>.</p>
     */
    inline AssetModelHierarchy& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model hierarchy. This ID is a
     * <code>hierarchyId</code>.</p>
     */
    inline AssetModelHierarchy& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the asset model hierarchy that you specify by using the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the asset model hierarchy that you specify by using the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the asset model hierarchy that you specify by using the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the asset model hierarchy that you specify by using the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the asset model hierarchy that you specify by using the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the asset model hierarchy that you specify by using the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation.</p>
     */
    inline AssetModelHierarchy& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the asset model hierarchy that you specify by using the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation.</p>
     */
    inline AssetModelHierarchy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset model hierarchy that you specify by using the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * API operation.</p>
     */
    inline AssetModelHierarchy& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the asset model. All assets in this hierarchy must be instances of
     * the <code>childAssetModelId</code> asset model.</p>
     */
    inline const Aws::String& GetChildAssetModelId() const{ return m_childAssetModelId; }

    /**
     * <p>The ID of the asset model. All assets in this hierarchy must be instances of
     * the <code>childAssetModelId</code> asset model.</p>
     */
    inline bool ChildAssetModelIdHasBeenSet() const { return m_childAssetModelIdHasBeenSet; }

    /**
     * <p>The ID of the asset model. All assets in this hierarchy must be instances of
     * the <code>childAssetModelId</code> asset model.</p>
     */
    inline void SetChildAssetModelId(const Aws::String& value) { m_childAssetModelIdHasBeenSet = true; m_childAssetModelId = value; }

    /**
     * <p>The ID of the asset model. All assets in this hierarchy must be instances of
     * the <code>childAssetModelId</code> asset model.</p>
     */
    inline void SetChildAssetModelId(Aws::String&& value) { m_childAssetModelIdHasBeenSet = true; m_childAssetModelId = std::move(value); }

    /**
     * <p>The ID of the asset model. All assets in this hierarchy must be instances of
     * the <code>childAssetModelId</code> asset model.</p>
     */
    inline void SetChildAssetModelId(const char* value) { m_childAssetModelIdHasBeenSet = true; m_childAssetModelId.assign(value); }

    /**
     * <p>The ID of the asset model. All assets in this hierarchy must be instances of
     * the <code>childAssetModelId</code> asset model.</p>
     */
    inline AssetModelHierarchy& WithChildAssetModelId(const Aws::String& value) { SetChildAssetModelId(value); return *this;}

    /**
     * <p>The ID of the asset model. All assets in this hierarchy must be instances of
     * the <code>childAssetModelId</code> asset model.</p>
     */
    inline AssetModelHierarchy& WithChildAssetModelId(Aws::String&& value) { SetChildAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model. All assets in this hierarchy must be instances of
     * the <code>childAssetModelId</code> asset model.</p>
     */
    inline AssetModelHierarchy& WithChildAssetModelId(const char* value) { SetChildAssetModelId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_childAssetModelId;
    bool m_childAssetModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
