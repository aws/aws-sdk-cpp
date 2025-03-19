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
    AWS_EKS_API ClientStat() = default;
    AWS_EKS_API ClientStat(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ClientStat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user agent of the Kubernetes client using the deprecated resource.</p>
     */
    inline const Aws::String& GetUserAgent() const { return m_userAgent; }
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
    template<typename UserAgentT = Aws::String>
    void SetUserAgent(UserAgentT&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::forward<UserAgentT>(value); }
    template<typename UserAgentT = Aws::String>
    ClientStat& WithUserAgent(UserAgentT&& value) { SetUserAgent(std::forward<UserAgentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests from the Kubernetes client seen over the last 30
     * days.</p>
     */
    inline int GetNumberOfRequestsLast30Days() const { return m_numberOfRequestsLast30Days; }
    inline bool NumberOfRequestsLast30DaysHasBeenSet() const { return m_numberOfRequestsLast30DaysHasBeenSet; }
    inline void SetNumberOfRequestsLast30Days(int value) { m_numberOfRequestsLast30DaysHasBeenSet = true; m_numberOfRequestsLast30Days = value; }
    inline ClientStat& WithNumberOfRequestsLast30Days(int value) { SetNumberOfRequestsLast30Days(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last request seen from the Kubernetes client.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRequestTime() const { return m_lastRequestTime; }
    inline bool LastRequestTimeHasBeenSet() const { return m_lastRequestTimeHasBeenSet; }
    template<typename LastRequestTimeT = Aws::Utils::DateTime>
    void SetLastRequestTime(LastRequestTimeT&& value) { m_lastRequestTimeHasBeenSet = true; m_lastRequestTime = std::forward<LastRequestTimeT>(value); }
    template<typename LastRequestTimeT = Aws::Utils::DateTime>
    ClientStat& WithLastRequestTime(LastRequestTimeT&& value) { SetLastRequestTime(std::forward<LastRequestTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;

    int m_numberOfRequestsLast30Days{0};
    bool m_numberOfRequestsLast30DaysHasBeenSet = false;

    Aws::Utils::DateTime m_lastRequestTime{};
    bool m_lastRequestTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
