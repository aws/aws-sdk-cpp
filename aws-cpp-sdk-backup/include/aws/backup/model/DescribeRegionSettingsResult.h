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
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Backup
{
namespace Model
{
  class AWS_BACKUP_API DescribeRegionSettingsResult
  {
  public:
    DescribeRegionSettingsResult();
    DescribeRegionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRegionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of all services along with the opt-in preferences in the
     * region.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResourceTypeOptInPreference() const{ return m_resourceTypeOptInPreference; }

    /**
     * <p>Returns a list of all services along with the opt-in preferences in the
     * region.</p>
     */
    inline void SetResourceTypeOptInPreference(const Aws::Map<Aws::String, bool>& value) { m_resourceTypeOptInPreference = value; }

    /**
     * <p>Returns a list of all services along with the opt-in preferences in the
     * region.</p>
     */
    inline void SetResourceTypeOptInPreference(Aws::Map<Aws::String, bool>&& value) { m_resourceTypeOptInPreference = std::move(value); }

    /**
     * <p>Returns a list of all services along with the opt-in preferences in the
     * region.</p>
     */
    inline DescribeRegionSettingsResult& WithResourceTypeOptInPreference(const Aws::Map<Aws::String, bool>& value) { SetResourceTypeOptInPreference(value); return *this;}

    /**
     * <p>Returns a list of all services along with the opt-in preferences in the
     * region.</p>
     */
    inline DescribeRegionSettingsResult& WithResourceTypeOptInPreference(Aws::Map<Aws::String, bool>&& value) { SetResourceTypeOptInPreference(std::move(value)); return *this;}

    /**
     * <p>Returns a list of all services along with the opt-in preferences in the
     * region.</p>
     */
    inline DescribeRegionSettingsResult& AddResourceTypeOptInPreference(const Aws::String& key, bool value) { m_resourceTypeOptInPreference.emplace(key, value); return *this; }

    /**
     * <p>Returns a list of all services along with the opt-in preferences in the
     * region.</p>
     */
    inline DescribeRegionSettingsResult& AddResourceTypeOptInPreference(Aws::String&& key, bool value) { m_resourceTypeOptInPreference.emplace(std::move(key), value); return *this; }

    /**
     * <p>Returns a list of all services along with the opt-in preferences in the
     * region.</p>
     */
    inline DescribeRegionSettingsResult& AddResourceTypeOptInPreference(const char* key, bool value) { m_resourceTypeOptInPreference.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, bool> m_resourceTypeOptInPreference;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
