/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SelfManagedActiveDirectoryConfiguration.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The configuration that Amazon FSx uses to join the ONTAP storage virtual
   * machine (SVM) to your self-managed (including on-premises) Microsoft Active
   * Directory directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateSvmActiveDirectoryConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateSvmActiveDirectoryConfiguration
  {
  public:
    AWS_FSX_API CreateSvmActiveDirectoryConfiguration() = default;
    AWS_FSX_API CreateSvmActiveDirectoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateSvmActiveDirectoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The NetBIOS name of the Active Directory computer object that will be created
     * for your SVM.</p>
     */
    inline const Aws::String& GetNetBiosName() const { return m_netBiosName; }
    inline bool NetBiosNameHasBeenSet() const { return m_netBiosNameHasBeenSet; }
    template<typename NetBiosNameT = Aws::String>
    void SetNetBiosName(NetBiosNameT&& value) { m_netBiosNameHasBeenSet = true; m_netBiosName = std::forward<NetBiosNameT>(value); }
    template<typename NetBiosNameT = Aws::String>
    CreateSvmActiveDirectoryConfiguration& WithNetBiosName(NetBiosNameT&& value) { SetNetBiosName(std::forward<NetBiosNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SelfManagedActiveDirectoryConfiguration& GetSelfManagedActiveDirectoryConfiguration() const { return m_selfManagedActiveDirectoryConfiguration; }
    inline bool SelfManagedActiveDirectoryConfigurationHasBeenSet() const { return m_selfManagedActiveDirectoryConfigurationHasBeenSet; }
    template<typename SelfManagedActiveDirectoryConfigurationT = SelfManagedActiveDirectoryConfiguration>
    void SetSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationT&& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = std::forward<SelfManagedActiveDirectoryConfigurationT>(value); }
    template<typename SelfManagedActiveDirectoryConfigurationT = SelfManagedActiveDirectoryConfiguration>
    CreateSvmActiveDirectoryConfiguration& WithSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationT&& value) { SetSelfManagedActiveDirectoryConfiguration(std::forward<SelfManagedActiveDirectoryConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_netBiosName;
    bool m_netBiosNameHasBeenSet = false;

    SelfManagedActiveDirectoryConfiguration m_selfManagedActiveDirectoryConfiguration;
    bool m_selfManagedActiveDirectoryConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
