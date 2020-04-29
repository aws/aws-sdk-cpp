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
  class AWS_IOTSITEWISE_API UpdateAssetModelResult
  {
  public:
    UpdateAssetModelResult();
    UpdateAssetModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAssetModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the asset model, which contains a state (<code>UPDATING</code>
     * after successfully calling this action) and any error message.</p>
     */
    inline const AssetModelStatus& GetAssetModelStatus() const{ return m_assetModelStatus; }

    /**
     * <p>The status of the asset model, which contains a state (<code>UPDATING</code>
     * after successfully calling this action) and any error message.</p>
     */
    inline void SetAssetModelStatus(const AssetModelStatus& value) { m_assetModelStatus = value; }

    /**
     * <p>The status of the asset model, which contains a state (<code>UPDATING</code>
     * after successfully calling this action) and any error message.</p>
     */
    inline void SetAssetModelStatus(AssetModelStatus&& value) { m_assetModelStatus = std::move(value); }

    /**
     * <p>The status of the asset model, which contains a state (<code>UPDATING</code>
     * after successfully calling this action) and any error message.</p>
     */
    inline UpdateAssetModelResult& WithAssetModelStatus(const AssetModelStatus& value) { SetAssetModelStatus(value); return *this;}

    /**
     * <p>The status of the asset model, which contains a state (<code>UPDATING</code>
     * after successfully calling this action) and any error message.</p>
     */
    inline UpdateAssetModelResult& WithAssetModelStatus(AssetModelStatus&& value) { SetAssetModelStatus(std::move(value)); return *this;}

  private:

    AssetModelStatus m_assetModelStatus;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
