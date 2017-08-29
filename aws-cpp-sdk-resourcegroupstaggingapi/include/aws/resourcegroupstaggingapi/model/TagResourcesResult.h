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
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resourcegroupstaggingapi/model/FailureInfo.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{
  class AWS_RESOURCEGROUPSTAGGINGAPI_API TagResourcesResult
  {
  public:
    TagResourcesResult();
    TagResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TagResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details of resources that could not be tagged. An error code, status code,
     * and error message are returned for each failed item.</p>
     */
    inline const Aws::Map<Aws::String, FailureInfo>& GetFailedResourcesMap() const{ return m_failedResourcesMap; }

    /**
     * <p>Details of resources that could not be tagged. An error code, status code,
     * and error message are returned for each failed item.</p>
     */
    inline void SetFailedResourcesMap(const Aws::Map<Aws::String, FailureInfo>& value) { m_failedResourcesMap = value; }

    /**
     * <p>Details of resources that could not be tagged. An error code, status code,
     * and error message are returned for each failed item.</p>
     */
    inline void SetFailedResourcesMap(Aws::Map<Aws::String, FailureInfo>&& value) { m_failedResourcesMap = std::move(value); }

    /**
     * <p>Details of resources that could not be tagged. An error code, status code,
     * and error message are returned for each failed item.</p>
     */
    inline TagResourcesResult& WithFailedResourcesMap(const Aws::Map<Aws::String, FailureInfo>& value) { SetFailedResourcesMap(value); return *this;}

    /**
     * <p>Details of resources that could not be tagged. An error code, status code,
     * and error message are returned for each failed item.</p>
     */
    inline TagResourcesResult& WithFailedResourcesMap(Aws::Map<Aws::String, FailureInfo>&& value) { SetFailedResourcesMap(std::move(value)); return *this;}

    /**
     * <p>Details of resources that could not be tagged. An error code, status code,
     * and error message are returned for each failed item.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(const Aws::String& key, const FailureInfo& value) { m_failedResourcesMap.emplace(key, value); return *this; }

    /**
     * <p>Details of resources that could not be tagged. An error code, status code,
     * and error message are returned for each failed item.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(Aws::String&& key, const FailureInfo& value) { m_failedResourcesMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>Details of resources that could not be tagged. An error code, status code,
     * and error message are returned for each failed item.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(const Aws::String& key, FailureInfo&& value) { m_failedResourcesMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details of resources that could not be tagged. An error code, status code,
     * and error message are returned for each failed item.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(Aws::String&& key, FailureInfo&& value) { m_failedResourcesMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Details of resources that could not be tagged. An error code, status code,
     * and error message are returned for each failed item.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(const char* key, FailureInfo&& value) { m_failedResourcesMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Details of resources that could not be tagged. An error code, status code,
     * and error message are returned for each failed item.</p>
     */
    inline TagResourcesResult& AddFailedResourcesMap(const char* key, const FailureInfo& value) { m_failedResourcesMap.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, FailureInfo> m_failedResourcesMap;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
