/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/Property.h>
#include <aws/iotsitewise/model/CompositeModelProperty.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class DescribeAssetPropertyResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeAssetPropertyResult();
    AWS_IOTSITEWISE_API DescribeAssetPropertyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAssetPropertyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetId = value; }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetId = std::move(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline void SetAssetId(const char* value) { m_assetId.assign(value); }

    /**
     * <p>The ID of the asset.</p>
     */
    inline DescribeAssetPropertyResult& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline DescribeAssetPropertyResult& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset.</p>
     */
    inline DescribeAssetPropertyResult& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The name of the asset.</p>
     */
    inline const Aws::String& GetAssetName() const{ return m_assetName; }

    /**
     * <p>The name of the asset.</p>
     */
    inline void SetAssetName(const Aws::String& value) { m_assetName = value; }

    /**
     * <p>The name of the asset.</p>
     */
    inline void SetAssetName(Aws::String&& value) { m_assetName = std::move(value); }

    /**
     * <p>The name of the asset.</p>
     */
    inline void SetAssetName(const char* value) { m_assetName.assign(value); }

    /**
     * <p>The name of the asset.</p>
     */
    inline DescribeAssetPropertyResult& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}

    /**
     * <p>The name of the asset.</p>
     */
    inline DescribeAssetPropertyResult& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset.</p>
     */
    inline DescribeAssetPropertyResult& WithAssetName(const char* value) { SetAssetName(value); return *this;}


    /**
     * <p>The ID of the asset model.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The ID of the asset model.</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelId = value; }

    /**
     * <p>The ID of the asset model.</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelId = std::move(value); }

    /**
     * <p>The ID of the asset model.</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelId.assign(value); }

    /**
     * <p>The ID of the asset model.</p>
     */
    inline DescribeAssetPropertyResult& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The ID of the asset model.</p>
     */
    inline DescribeAssetPropertyResult& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model.</p>
     */
    inline DescribeAssetPropertyResult& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p>The asset property's definition, alias, and notification state.</p> <p>This
     * response includes this object for normal asset properties. If you describe an
     * asset property in a composite model, this response includes the asset property
     * information in <code>compositeModel</code>.</p>
     */
    inline const Property& GetAssetProperty() const{ return m_assetProperty; }

    /**
     * <p>The asset property's definition, alias, and notification state.</p> <p>This
     * response includes this object for normal asset properties. If you describe an
     * asset property in a composite model, this response includes the asset property
     * information in <code>compositeModel</code>.</p>
     */
    inline void SetAssetProperty(const Property& value) { m_assetProperty = value; }

    /**
     * <p>The asset property's definition, alias, and notification state.</p> <p>This
     * response includes this object for normal asset properties. If you describe an
     * asset property in a composite model, this response includes the asset property
     * information in <code>compositeModel</code>.</p>
     */
    inline void SetAssetProperty(Property&& value) { m_assetProperty = std::move(value); }

    /**
     * <p>The asset property's definition, alias, and notification state.</p> <p>This
     * response includes this object for normal asset properties. If you describe an
     * asset property in a composite model, this response includes the asset property
     * information in <code>compositeModel</code>.</p>
     */
    inline DescribeAssetPropertyResult& WithAssetProperty(const Property& value) { SetAssetProperty(value); return *this;}

    /**
     * <p>The asset property's definition, alias, and notification state.</p> <p>This
     * response includes this object for normal asset properties. If you describe an
     * asset property in a composite model, this response includes the asset property
     * information in <code>compositeModel</code>.</p>
     */
    inline DescribeAssetPropertyResult& WithAssetProperty(Property&& value) { SetAssetProperty(std::move(value)); return *this;}


    /**
     * <p>The composite asset model that declares this asset property, if this asset
     * property exists in a composite model.</p>
     */
    inline const CompositeModelProperty& GetCompositeModel() const{ return m_compositeModel; }

    /**
     * <p>The composite asset model that declares this asset property, if this asset
     * property exists in a composite model.</p>
     */
    inline void SetCompositeModel(const CompositeModelProperty& value) { m_compositeModel = value; }

    /**
     * <p>The composite asset model that declares this asset property, if this asset
     * property exists in a composite model.</p>
     */
    inline void SetCompositeModel(CompositeModelProperty&& value) { m_compositeModel = std::move(value); }

    /**
     * <p>The composite asset model that declares this asset property, if this asset
     * property exists in a composite model.</p>
     */
    inline DescribeAssetPropertyResult& WithCompositeModel(const CompositeModelProperty& value) { SetCompositeModel(value); return *this;}

    /**
     * <p>The composite asset model that declares this asset property, if this asset
     * property exists in a composite model.</p>
     */
    inline DescribeAssetPropertyResult& WithCompositeModel(CompositeModelProperty&& value) { SetCompositeModel(std::move(value)); return *this;}

  private:

    Aws::String m_assetId;

    Aws::String m_assetName;

    Aws::String m_assetModelId;

    Property m_assetProperty;

    CompositeModelProperty m_compositeModel;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
