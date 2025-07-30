/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Describes the current hybrid directory configuration settings for a
   * directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/HybridSettingsDescription">AWS
   * API Reference</a></p>
   */
  class HybridSettingsDescription
  {
  public:
    AWS_DIRECTORYSERVICE_API HybridSettingsDescription() = default;
    AWS_DIRECTORYSERVICE_API HybridSettingsDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API HybridSettingsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP addresses of the DNS servers in your self-managed AD environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelfManagedDnsIpAddrs() const { return m_selfManagedDnsIpAddrs; }
    inline bool SelfManagedDnsIpAddrsHasBeenSet() const { return m_selfManagedDnsIpAddrsHasBeenSet; }
    template<typename SelfManagedDnsIpAddrsT = Aws::Vector<Aws::String>>
    void SetSelfManagedDnsIpAddrs(SelfManagedDnsIpAddrsT&& value) { m_selfManagedDnsIpAddrsHasBeenSet = true; m_selfManagedDnsIpAddrs = std::forward<SelfManagedDnsIpAddrsT>(value); }
    template<typename SelfManagedDnsIpAddrsT = Aws::Vector<Aws::String>>
    HybridSettingsDescription& WithSelfManagedDnsIpAddrs(SelfManagedDnsIpAddrsT&& value) { SetSelfManagedDnsIpAddrs(std::forward<SelfManagedDnsIpAddrsT>(value)); return *this;}
    template<typename SelfManagedDnsIpAddrsT = Aws::String>
    HybridSettingsDescription& AddSelfManagedDnsIpAddrs(SelfManagedDnsIpAddrsT&& value) { m_selfManagedDnsIpAddrsHasBeenSet = true; m_selfManagedDnsIpAddrs.emplace_back(std::forward<SelfManagedDnsIpAddrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifiers of the self-managed instances with SSM used for hybrid
     * directory operations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelfManagedInstanceIds() const { return m_selfManagedInstanceIds; }
    inline bool SelfManagedInstanceIdsHasBeenSet() const { return m_selfManagedInstanceIdsHasBeenSet; }
    template<typename SelfManagedInstanceIdsT = Aws::Vector<Aws::String>>
    void SetSelfManagedInstanceIds(SelfManagedInstanceIdsT&& value) { m_selfManagedInstanceIdsHasBeenSet = true; m_selfManagedInstanceIds = std::forward<SelfManagedInstanceIdsT>(value); }
    template<typename SelfManagedInstanceIdsT = Aws::Vector<Aws::String>>
    HybridSettingsDescription& WithSelfManagedInstanceIds(SelfManagedInstanceIdsT&& value) { SetSelfManagedInstanceIds(std::forward<SelfManagedInstanceIdsT>(value)); return *this;}
    template<typename SelfManagedInstanceIdsT = Aws::String>
    HybridSettingsDescription& AddSelfManagedInstanceIds(SelfManagedInstanceIdsT&& value) { m_selfManagedInstanceIdsHasBeenSet = true; m_selfManagedInstanceIds.emplace_back(std::forward<SelfManagedInstanceIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_selfManagedDnsIpAddrs;
    bool m_selfManagedDnsIpAddrsHasBeenSet = false;

    Aws::Vector<Aws::String> m_selfManagedInstanceIds;
    bool m_selfManagedInstanceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
