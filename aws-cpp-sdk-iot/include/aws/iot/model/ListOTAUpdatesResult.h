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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/OTAUpdateSummary.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API ListOTAUpdatesResult
  {
  public:
    ListOTAUpdatesResult();
    ListOTAUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListOTAUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of OTA update jobs.</p>
     */
    inline const Aws::Vector<OTAUpdateSummary>& GetOtaUpdates() const{ return m_otaUpdates; }

    /**
     * <p>A list of OTA update jobs.</p>
     */
    inline void SetOtaUpdates(const Aws::Vector<OTAUpdateSummary>& value) { m_otaUpdates = value; }

    /**
     * <p>A list of OTA update jobs.</p>
     */
    inline void SetOtaUpdates(Aws::Vector<OTAUpdateSummary>&& value) { m_otaUpdates = std::move(value); }

    /**
     * <p>A list of OTA update jobs.</p>
     */
    inline ListOTAUpdatesResult& WithOtaUpdates(const Aws::Vector<OTAUpdateSummary>& value) { SetOtaUpdates(value); return *this;}

    /**
     * <p>A list of OTA update jobs.</p>
     */
    inline ListOTAUpdatesResult& WithOtaUpdates(Aws::Vector<OTAUpdateSummary>&& value) { SetOtaUpdates(std::move(value)); return *this;}

    /**
     * <p>A list of OTA update jobs.</p>
     */
    inline ListOTAUpdatesResult& AddOtaUpdates(const OTAUpdateSummary& value) { m_otaUpdates.push_back(value); return *this; }

    /**
     * <p>A list of OTA update jobs.</p>
     */
    inline ListOTAUpdatesResult& AddOtaUpdates(OTAUpdateSummary&& value) { m_otaUpdates.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to use to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to use to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to use to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to use to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to use to get the next set of results.</p>
     */
    inline ListOTAUpdatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use to get the next set of results.</p>
     */
    inline ListOTAUpdatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use to get the next set of results.</p>
     */
    inline ListOTAUpdatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OTAUpdateSummary> m_otaUpdates;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
