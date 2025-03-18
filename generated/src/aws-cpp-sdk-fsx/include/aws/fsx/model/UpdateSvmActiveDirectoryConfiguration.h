/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SelfManagedActiveDirectoryConfigurationUpdates.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Specifies updates to an FSx for ONTAP storage virtual machine's (SVM)
   * Microsoft Active Directory (AD) configuration. Note that account credentials are
   * not returned in the response payload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateSvmActiveDirectoryConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateSvmActiveDirectoryConfiguration
  {
  public:
    AWS_FSX_API UpdateSvmActiveDirectoryConfiguration() = default;
    AWS_FSX_API UpdateSvmActiveDirectoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API UpdateSvmActiveDirectoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SelfManagedActiveDirectoryConfigurationUpdates& GetSelfManagedActiveDirectoryConfiguration() const { return m_selfManagedActiveDirectoryConfiguration; }
    inline bool SelfManagedActiveDirectoryConfigurationHasBeenSet() const { return m_selfManagedActiveDirectoryConfigurationHasBeenSet; }
    template<typename SelfManagedActiveDirectoryConfigurationT = SelfManagedActiveDirectoryConfigurationUpdates>
    void SetSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationT&& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = std::forward<SelfManagedActiveDirectoryConfigurationT>(value); }
    template<typename SelfManagedActiveDirectoryConfigurationT = SelfManagedActiveDirectoryConfigurationUpdates>
    UpdateSvmActiveDirectoryConfiguration& WithSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationT&& value) { SetSelfManagedActiveDirectoryConfiguration(std::forward<SelfManagedActiveDirectoryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an updated NetBIOS name of the AD computer object
     * <code>NetBiosName</code> to which an SVM is joined.</p>
     */
    inline const Aws::String& GetNetBiosName() const { return m_netBiosName; }
    inline bool NetBiosNameHasBeenSet() const { return m_netBiosNameHasBeenSet; }
    template<typename NetBiosNameT = Aws::String>
    void SetNetBiosName(NetBiosNameT&& value) { m_netBiosNameHasBeenSet = true; m_netBiosName = std::forward<NetBiosNameT>(value); }
    template<typename NetBiosNameT = Aws::String>
    UpdateSvmActiveDirectoryConfiguration& WithNetBiosName(NetBiosNameT&& value) { SetNetBiosName(std::forward<NetBiosNameT>(value)); return *this;}
    ///@}
  private:

    SelfManagedActiveDirectoryConfigurationUpdates m_selfManagedActiveDirectoryConfiguration;
    bool m_selfManagedActiveDirectoryConfigurationHasBeenSet = false;

    Aws::String m_netBiosName;
    bool m_netBiosNameHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
