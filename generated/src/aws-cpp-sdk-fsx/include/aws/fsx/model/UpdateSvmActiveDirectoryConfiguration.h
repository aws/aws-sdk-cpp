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
    AWS_FSX_API UpdateSvmActiveDirectoryConfiguration();
    AWS_FSX_API UpdateSvmActiveDirectoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API UpdateSvmActiveDirectoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const SelfManagedActiveDirectoryConfigurationUpdates& GetSelfManagedActiveDirectoryConfiguration() const{ return m_selfManagedActiveDirectoryConfiguration; }

    
    inline bool SelfManagedActiveDirectoryConfigurationHasBeenSet() const { return m_selfManagedActiveDirectoryConfigurationHasBeenSet; }

    
    inline void SetSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryConfigurationUpdates& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = value; }

    
    inline void SetSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationUpdates&& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = std::move(value); }

    
    inline UpdateSvmActiveDirectoryConfiguration& WithSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryConfigurationUpdates& value) { SetSelfManagedActiveDirectoryConfiguration(value); return *this;}

    
    inline UpdateSvmActiveDirectoryConfiguration& WithSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationUpdates&& value) { SetSelfManagedActiveDirectoryConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies an updated NetBIOS name of the AD computer object
     * <code>NetBiosName</code> to which an SVM is joined.</p>
     */
    inline const Aws::String& GetNetBiosName() const{ return m_netBiosName; }

    /**
     * <p>Specifies an updated NetBIOS name of the AD computer object
     * <code>NetBiosName</code> to which an SVM is joined.</p>
     */
    inline bool NetBiosNameHasBeenSet() const { return m_netBiosNameHasBeenSet; }

    /**
     * <p>Specifies an updated NetBIOS name of the AD computer object
     * <code>NetBiosName</code> to which an SVM is joined.</p>
     */
    inline void SetNetBiosName(const Aws::String& value) { m_netBiosNameHasBeenSet = true; m_netBiosName = value; }

    /**
     * <p>Specifies an updated NetBIOS name of the AD computer object
     * <code>NetBiosName</code> to which an SVM is joined.</p>
     */
    inline void SetNetBiosName(Aws::String&& value) { m_netBiosNameHasBeenSet = true; m_netBiosName = std::move(value); }

    /**
     * <p>Specifies an updated NetBIOS name of the AD computer object
     * <code>NetBiosName</code> to which an SVM is joined.</p>
     */
    inline void SetNetBiosName(const char* value) { m_netBiosNameHasBeenSet = true; m_netBiosName.assign(value); }

    /**
     * <p>Specifies an updated NetBIOS name of the AD computer object
     * <code>NetBiosName</code> to which an SVM is joined.</p>
     */
    inline UpdateSvmActiveDirectoryConfiguration& WithNetBiosName(const Aws::String& value) { SetNetBiosName(value); return *this;}

    /**
     * <p>Specifies an updated NetBIOS name of the AD computer object
     * <code>NetBiosName</code> to which an SVM is joined.</p>
     */
    inline UpdateSvmActiveDirectoryConfiguration& WithNetBiosName(Aws::String&& value) { SetNetBiosName(std::move(value)); return *this;}

    /**
     * <p>Specifies an updated NetBIOS name of the AD computer object
     * <code>NetBiosName</code> to which an SVM is joined.</p>
     */
    inline UpdateSvmActiveDirectoryConfiguration& WithNetBiosName(const char* value) { SetNetBiosName(value); return *this;}

  private:

    SelfManagedActiveDirectoryConfigurationUpdates m_selfManagedActiveDirectoryConfiguration;
    bool m_selfManagedActiveDirectoryConfigurationHasBeenSet = false;

    Aws::String m_netBiosName;
    bool m_netBiosNameHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
