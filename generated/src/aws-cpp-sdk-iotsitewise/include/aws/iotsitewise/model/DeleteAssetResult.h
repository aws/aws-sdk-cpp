/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssetStatus.h>
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
  class DeleteAssetResult
  {
  public:
    AWS_IOTSITEWISE_API DeleteAssetResult();
    AWS_IOTSITEWISE_API DeleteAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DeleteAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the asset, which contains a state (<code>DELETING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline const AssetStatus& GetAssetStatus() const{ return m_assetStatus; }

    /**
     * <p>The status of the asset, which contains a state (<code>DELETING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline void SetAssetStatus(const AssetStatus& value) { m_assetStatus = value; }

    /**
     * <p>The status of the asset, which contains a state (<code>DELETING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline void SetAssetStatus(AssetStatus&& value) { m_assetStatus = std::move(value); }

    /**
     * <p>The status of the asset, which contains a state (<code>DELETING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline DeleteAssetResult& WithAssetStatus(const AssetStatus& value) { SetAssetStatus(value); return *this;}

    /**
     * <p>The status of the asset, which contains a state (<code>DELETING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline DeleteAssetResult& WithAssetStatus(AssetStatus&& value) { SetAssetStatus(std::move(value)); return *this;}

  private:

    AssetStatus m_assetStatus;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
