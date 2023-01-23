/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssetPropertyValue.h>
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
  class GetAssetPropertyValueResult
  {
  public:
    AWS_IOTSITEWISE_API GetAssetPropertyValueResult();
    AWS_IOTSITEWISE_API GetAssetPropertyValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API GetAssetPropertyValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current asset property value.</p>
     */
    inline const AssetPropertyValue& GetPropertyValue() const{ return m_propertyValue; }

    /**
     * <p>The current asset property value.</p>
     */
    inline void SetPropertyValue(const AssetPropertyValue& value) { m_propertyValue = value; }

    /**
     * <p>The current asset property value.</p>
     */
    inline void SetPropertyValue(AssetPropertyValue&& value) { m_propertyValue = std::move(value); }

    /**
     * <p>The current asset property value.</p>
     */
    inline GetAssetPropertyValueResult& WithPropertyValue(const AssetPropertyValue& value) { SetPropertyValue(value); return *this;}

    /**
     * <p>The current asset property value.</p>
     */
    inline GetAssetPropertyValueResult& WithPropertyValue(AssetPropertyValue&& value) { SetPropertyValue(std::move(value)); return *this;}

  private:

    AssetPropertyValue m_propertyValue;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
