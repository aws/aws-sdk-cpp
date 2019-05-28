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
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ConfigListItem.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListConfigsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API ListConfigsResult
  {
  public:
    ListConfigsResult();
    ListConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of <code>Config</code> items.</p>
     */
    inline const Aws::Vector<ConfigListItem>& GetConfigList() const{ return m_configList; }

    /**
     * <p>List of <code>Config</code> items.</p>
     */
    inline void SetConfigList(const Aws::Vector<ConfigListItem>& value) { m_configList = value; }

    /**
     * <p>List of <code>Config</code> items.</p>
     */
    inline void SetConfigList(Aws::Vector<ConfigListItem>&& value) { m_configList = std::move(value); }

    /**
     * <p>List of <code>Config</code> items.</p>
     */
    inline ListConfigsResult& WithConfigList(const Aws::Vector<ConfigListItem>& value) { SetConfigList(value); return *this;}

    /**
     * <p>List of <code>Config</code> items.</p>
     */
    inline ListConfigsResult& WithConfigList(Aws::Vector<ConfigListItem>&& value) { SetConfigList(std::move(value)); return *this;}

    /**
     * <p>List of <code>Config</code> items.</p>
     */
    inline ListConfigsResult& AddConfigList(const ConfigListItem& value) { m_configList.push_back(value); return *this; }

    /**
     * <p>List of <code>Config</code> items.</p>
     */
    inline ListConfigsResult& AddConfigList(ConfigListItem&& value) { m_configList.push_back(std::move(value)); return *this; }


    /**
     * <p>Next token returned in the response of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token returned in the response of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Next token returned in the response of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Next token returned in the response of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Next token returned in the response of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline ListConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token returned in the response of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline ListConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token returned in the response of a previous <code>ListConfigs</code>
     * call. Used to get the next page of results.</p>
     */
    inline ListConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConfigListItem> m_configList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
