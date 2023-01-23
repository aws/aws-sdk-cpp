/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssetModelStatus.h>
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
  class DeleteAssetModelResult
  {
  public:
    AWS_IOTSITEWISE_API DeleteAssetModelResult();
    AWS_IOTSITEWISE_API DeleteAssetModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DeleteAssetModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the asset model, which contains a state (<code>DELETING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline const AssetModelStatus& GetAssetModelStatus() const{ return m_assetModelStatus; }

    /**
     * <p>The status of the asset model, which contains a state (<code>DELETING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline void SetAssetModelStatus(const AssetModelStatus& value) { m_assetModelStatus = value; }

    /**
     * <p>The status of the asset model, which contains a state (<code>DELETING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline void SetAssetModelStatus(AssetModelStatus&& value) { m_assetModelStatus = std::move(value); }

    /**
     * <p>The status of the asset model, which contains a state (<code>DELETING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline DeleteAssetModelResult& WithAssetModelStatus(const AssetModelStatus& value) { SetAssetModelStatus(value); return *this;}

    /**
     * <p>The status of the asset model, which contains a state (<code>DELETING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline DeleteAssetModelResult& WithAssetModelStatus(AssetModelStatus&& value) { SetAssetModelStatus(std::move(value)); return *this;}

  private:

    AssetModelStatus m_assetModelStatus;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
