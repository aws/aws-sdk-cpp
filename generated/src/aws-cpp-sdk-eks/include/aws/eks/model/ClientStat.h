/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Details about clients using the deprecated resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ClientStat">AWS API
   * Reference</a></p>
   */
  class ClientStat
  {
  public:
    AWS_EKS_API ClientStat();
    AWS_EKS_API ClientStat(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ClientStat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user agent of the Kubernetes client using the deprecated resource.</p>
     */
    inline const Aws::String& GetUserAgent() const{ return m_userAgent; }

    /**
     * <p>The user agent of the Kubernetes client using the deprecated resource.</p>
     */
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }

    /**
     * <p>The user agent of the Kubernetes client using the deprecated resource.</p>
     */
    inline void SetUserAgent(const Aws::String& value) { m_userAgentHasBeenSet = true; m_userAgent = value; }

    /**
     * <p>The user agent of the Kubernetes client using the deprecated resource.</p>
     */
    inline void SetUserAgent(Aws::String&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::move(value); }

    /**
     * <p>The user agent of the Kubernetes client using the deprecated resource.</p>
     */
    inline void SetUserAgent(const char* value) { m_userAgentHasBeenSet = true; m_userAgent.assign(value); }

    /**
     * <p>The user agent of the Kubernetes client using the deprecated resource.</p>
     */
    inline ClientStat& WithUserAgent(const Aws::String& value) { SetUserAgent(value); return *this;}

    /**
     * <p>The user agent of the Kubernetes client using the deprecated resource.</p>
     */
    inline ClientStat& WithUserAgent(Aws::String&& value) { SetUserAgent(std::move(value)); return *this;}

    /**
     * <p>The user agent of the Kubernetes client using the deprecated resource.</p>
     */
    inline ClientStat& WithUserAgent(const char* value) { SetUserAgent(value); return *this;}


    /**
     * <p>The number of requests from the Kubernetes client seen over the last 30
     * days.</p>
     */
    inline int GetNumberOfRequestsLast30Days() const{ return m_numberOfRequestsLast30Days; }

    /**
     * <p>The number of requests from the Kubernetes client seen over the last 30
     * days.</p>
     */
    inline bool NumberOfRequestsLast30DaysHasBeenSet() const { return m_numberOfRequestsLast30DaysHasBeenSet; }

    /**
     * <p>The number of requests from the Kubernetes client seen over the last 30
     * days.</p>
     */
    inline void SetNumberOfRequestsLast30Days(int value) { m_numberOfRequestsLast30DaysHasBeenSet = true; m_numberOfRequestsLast30Days = value; }

    /**
     * <p>The number of requests from the Kubernetes client seen over the last 30
     * days.</p>
     */
    inline ClientStat& WithNumberOfRequestsLast30Days(int value) { SetNumberOfRequestsLast30Days(value); return *this;}


    /**
     * <p>The timestamp of the last request seen from the Kubernetes client.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRequestTime() const{ return m_lastRequestTime; }

    /**
     * <p>The timestamp of the last request seen from the Kubernetes client.</p>
     */
    inline bool LastRequestTimeHasBeenSet() const { return m_lastRequestTimeHasBeenSet; }

    /**
     * <p>The timestamp of the last request seen from the Kubernetes client.</p>
     */
    inline void SetLastRequestTime(const Aws::Utils::DateTime& value) { m_lastRequestTimeHasBeenSet = true; m_lastRequestTime = value; }

    /**
     * <p>The timestamp of the last request seen from the Kubernetes client.</p>
     */
    inline void SetLastRequestTime(Aws::Utils::DateTime&& value) { m_lastRequestTimeHasBeenSet = true; m_lastRequestTime = std::move(value); }

    /**
     * <p>The timestamp of the last request seen from the Kubernetes client.</p>
     */
    inline ClientStat& WithLastRequestTime(const Aws::Utils::DateTime& value) { SetLastRequestTime(value); return *this;}

    /**
     * <p>The timestamp of the last request seen from the Kubernetes client.</p>
     */
    inline ClientStat& WithLastRequestTime(Aws::Utils::DateTime&& value) { SetLastRequestTime(std::move(value)); return *this;}

  private:

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;

    int m_numberOfRequestsLast30Days;
    bool m_numberOfRequestsLast30DaysHasBeenSet = false;

    Aws::Utils::DateTime m_lastRequestTime;
    bool m_lastRequestTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
