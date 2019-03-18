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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p>Request sampling results for a single rule from a service. Results are for
   * the last 10 seconds unless the service has been assigned a longer reporting
   * interval after a previous call to <a>GetSamplingTargets</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingStatisticsDocument">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API SamplingStatisticsDocument
  {
  public:
    SamplingStatisticsDocument();
    SamplingStatisticsDocument(Aws::Utils::Json::JsonView jsonValue);
    SamplingStatisticsDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the sampling rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline SamplingStatisticsDocument& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline SamplingStatisticsDocument& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline SamplingStatisticsDocument& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>A unique identifier for the service in hexadecimal.</p>
     */
    inline const Aws::String& GetClientID() const{ return m_clientID; }

    /**
     * <p>A unique identifier for the service in hexadecimal.</p>
     */
    inline bool ClientIDHasBeenSet() const { return m_clientIDHasBeenSet; }

    /**
     * <p>A unique identifier for the service in hexadecimal.</p>
     */
    inline void SetClientID(const Aws::String& value) { m_clientIDHasBeenSet = true; m_clientID = value; }

    /**
     * <p>A unique identifier for the service in hexadecimal.</p>
     */
    inline void SetClientID(Aws::String&& value) { m_clientIDHasBeenSet = true; m_clientID = std::move(value); }

    /**
     * <p>A unique identifier for the service in hexadecimal.</p>
     */
    inline void SetClientID(const char* value) { m_clientIDHasBeenSet = true; m_clientID.assign(value); }

    /**
     * <p>A unique identifier for the service in hexadecimal.</p>
     */
    inline SamplingStatisticsDocument& WithClientID(const Aws::String& value) { SetClientID(value); return *this;}

    /**
     * <p>A unique identifier for the service in hexadecimal.</p>
     */
    inline SamplingStatisticsDocument& WithClientID(Aws::String&& value) { SetClientID(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the service in hexadecimal.</p>
     */
    inline SamplingStatisticsDocument& WithClientID(const char* value) { SetClientID(value); return *this;}


    /**
     * <p>The current time.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The current time.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The current time.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The current time.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The current time.</p>
     */
    inline SamplingStatisticsDocument& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The current time.</p>
     */
    inline SamplingStatisticsDocument& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The number of requests that matched the rule.</p>
     */
    inline int GetRequestCount() const{ return m_requestCount; }

    /**
     * <p>The number of requests that matched the rule.</p>
     */
    inline bool RequestCountHasBeenSet() const { return m_requestCountHasBeenSet; }

    /**
     * <p>The number of requests that matched the rule.</p>
     */
    inline void SetRequestCount(int value) { m_requestCountHasBeenSet = true; m_requestCount = value; }

    /**
     * <p>The number of requests that matched the rule.</p>
     */
    inline SamplingStatisticsDocument& WithRequestCount(int value) { SetRequestCount(value); return *this;}


    /**
     * <p>The number of requests recorded.</p>
     */
    inline int GetSampledCount() const{ return m_sampledCount; }

    /**
     * <p>The number of requests recorded.</p>
     */
    inline bool SampledCountHasBeenSet() const { return m_sampledCountHasBeenSet; }

    /**
     * <p>The number of requests recorded.</p>
     */
    inline void SetSampledCount(int value) { m_sampledCountHasBeenSet = true; m_sampledCount = value; }

    /**
     * <p>The number of requests recorded.</p>
     */
    inline SamplingStatisticsDocument& WithSampledCount(int value) { SetSampledCount(value); return *this;}


    /**
     * <p>The number of requests recorded with borrowed reservoir quota.</p>
     */
    inline int GetBorrowCount() const{ return m_borrowCount; }

    /**
     * <p>The number of requests recorded with borrowed reservoir quota.</p>
     */
    inline bool BorrowCountHasBeenSet() const { return m_borrowCountHasBeenSet; }

    /**
     * <p>The number of requests recorded with borrowed reservoir quota.</p>
     */
    inline void SetBorrowCount(int value) { m_borrowCountHasBeenSet = true; m_borrowCount = value; }

    /**
     * <p>The number of requests recorded with borrowed reservoir quota.</p>
     */
    inline SamplingStatisticsDocument& WithBorrowCount(int value) { SetBorrowCount(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;

    Aws::String m_clientID;
    bool m_clientIDHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;

    int m_requestCount;
    bool m_requestCountHasBeenSet;

    int m_sampledCount;
    bool m_sampledCountHasBeenSet;

    int m_borrowCount;
    bool m_borrowCountHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
