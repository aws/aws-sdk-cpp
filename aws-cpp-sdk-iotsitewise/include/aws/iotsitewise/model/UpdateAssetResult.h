/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOTSITEWISE_API UpdateAssetResult
  {
  public:
    UpdateAssetResult();
    UpdateAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the asset, which contains a state (<code>UPDATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline const AssetStatus& GetAssetStatus() const{ return m_assetStatus; }

    /**
     * <p>The status of the asset, which contains a state (<code>UPDATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline void SetAssetStatus(const AssetStatus& value) { m_assetStatus = value; }

    /**
     * <p>The status of the asset, which contains a state (<code>UPDATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline void SetAssetStatus(AssetStatus&& value) { m_assetStatus = std::move(value); }

    /**
     * <p>The status of the asset, which contains a state (<code>UPDATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline UpdateAssetResult& WithAssetStatus(const AssetStatus& value) { SetAssetStatus(value); return *this;}

    /**
     * <p>The status of the asset, which contains a state (<code>UPDATING</code> after
     * successfully calling this action) and any error message.</p>
     */
    inline UpdateAssetResult& WithAssetStatus(AssetStatus&& value) { SetAssetStatus(std::move(value)); return *this;}

  private:

    AssetStatus m_assetStatus;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
