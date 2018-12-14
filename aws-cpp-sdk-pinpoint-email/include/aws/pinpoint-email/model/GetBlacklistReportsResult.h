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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/BlacklistEntry.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>An object that contains information about blacklist events.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetBlacklistReportsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API GetBlacklistReportsResult
  {
  public:
    GetBlacklistReportsResult();
    GetBlacklistReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBlacklistReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<BlacklistEntry>>& GetBlacklistReport() const{ return m_blacklistReport; }

    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline void SetBlacklistReport(const Aws::Map<Aws::String, Aws::Vector<BlacklistEntry>>& value) { m_blacklistReport = value; }

    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline void SetBlacklistReport(Aws::Map<Aws::String, Aws::Vector<BlacklistEntry>>&& value) { m_blacklistReport = std::move(value); }

    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline GetBlacklistReportsResult& WithBlacklistReport(const Aws::Map<Aws::String, Aws::Vector<BlacklistEntry>>& value) { SetBlacklistReport(value); return *this;}

    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline GetBlacklistReportsResult& WithBlacklistReport(Aws::Map<Aws::String, Aws::Vector<BlacklistEntry>>&& value) { SetBlacklistReport(std::move(value)); return *this;}

    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline GetBlacklistReportsResult& AddBlacklistReport(const Aws::String& key, const Aws::Vector<BlacklistEntry>& value) { m_blacklistReport.emplace(key, value); return *this; }

    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline GetBlacklistReportsResult& AddBlacklistReport(Aws::String&& key, const Aws::Vector<BlacklistEntry>& value) { m_blacklistReport.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline GetBlacklistReportsResult& AddBlacklistReport(const Aws::String& key, Aws::Vector<BlacklistEntry>&& value) { m_blacklistReport.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline GetBlacklistReportsResult& AddBlacklistReport(Aws::String&& key, Aws::Vector<BlacklistEntry>&& value) { m_blacklistReport.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline GetBlacklistReportsResult& AddBlacklistReport(const char* key, Aws::Vector<BlacklistEntry>&& value) { m_blacklistReport.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline GetBlacklistReportsResult& AddBlacklistReport(const char* key, const Aws::Vector<BlacklistEntry>& value) { m_blacklistReport.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Vector<BlacklistEntry>> m_blacklistReport;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
