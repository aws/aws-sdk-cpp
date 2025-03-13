/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SelfManagedActiveDirectoryAttributes.h>
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
   * <p>Describes the Microsoft Active Directory (AD) directory configuration to
   * which the FSx for ONTAP storage virtual machine (SVM) is joined. Note that
   * account credentials are not returned in the response payload.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SvmActiveDirectoryConfiguration">AWS
   * API Reference</a></p>
   */
  class SvmActiveDirectoryConfiguration
  {
  public:
    AWS_FSX_API SvmActiveDirectoryConfiguration() = default;
    AWS_FSX_API SvmActiveDirectoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SvmActiveDirectoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The NetBIOS name of the AD computer object to which the SVM is joined.</p>
     */
    inline const Aws::String& GetNetBiosName() const { return m_netBiosName; }
    inline bool NetBiosNameHasBeenSet() const { return m_netBiosNameHasBeenSet; }
    template<typename NetBiosNameT = Aws::String>
    void SetNetBiosName(NetBiosNameT&& value) { m_netBiosNameHasBeenSet = true; m_netBiosName = std::forward<NetBiosNameT>(value); }
    template<typename NetBiosNameT = Aws::String>
    SvmActiveDirectoryConfiguration& WithNetBiosName(NetBiosNameT&& value) { SetNetBiosName(std::forward<NetBiosNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SelfManagedActiveDirectoryAttributes& GetSelfManagedActiveDirectoryConfiguration() const { return m_selfManagedActiveDirectoryConfiguration; }
    inline bool SelfManagedActiveDirectoryConfigurationHasBeenSet() const { return m_selfManagedActiveDirectoryConfigurationHasBeenSet; }
    template<typename SelfManagedActiveDirectoryConfigurationT = SelfManagedActiveDirectoryAttributes>
    void SetSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationT&& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = std::forward<SelfManagedActiveDirectoryConfigurationT>(value); }
    template<typename SelfManagedActiveDirectoryConfigurationT = SelfManagedActiveDirectoryAttributes>
    SvmActiveDirectoryConfiguration& WithSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationT&& value) { SetSelfManagedActiveDirectoryConfiguration(std::forward<SelfManagedActiveDirectoryConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_netBiosName;
    bool m_netBiosNameHasBeenSet = false;

    SelfManagedActiveDirectoryAttributes m_selfManagedActiveDirectoryConfiguration;
    bool m_selfManagedActiveDirectoryConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
