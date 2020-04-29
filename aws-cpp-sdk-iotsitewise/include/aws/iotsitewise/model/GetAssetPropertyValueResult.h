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
  class AWS_IOTSITEWISE_API GetAssetPropertyValueResult
  {
  public:
    GetAssetPropertyValueResult();
    GetAssetPropertyValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAssetPropertyValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
