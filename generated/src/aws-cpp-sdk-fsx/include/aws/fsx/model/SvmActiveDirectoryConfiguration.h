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
   * <p>Describes the configuration of the Microsoft Active Directory (AD) directory
   * to which the Amazon FSx for ONTAP storage virtual machine (SVM) is joined. Pleae
   * note, account credentials are not returned in the response
   * payload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SvmActiveDirectoryConfiguration">AWS
   * API Reference</a></p>
   */
  class SvmActiveDirectoryConfiguration
  {
  public:
    AWS_FSX_API SvmActiveDirectoryConfiguration();
    AWS_FSX_API SvmActiveDirectoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SvmActiveDirectoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The NetBIOS name of the Active Directory computer object that is joined to
     * your SVM.</p>
     */
    inline const Aws::String& GetNetBiosName() const{ return m_netBiosName; }

    /**
     * <p>The NetBIOS name of the Active Directory computer object that is joined to
     * your SVM.</p>
     */
    inline bool NetBiosNameHasBeenSet() const { return m_netBiosNameHasBeenSet; }

    /**
     * <p>The NetBIOS name of the Active Directory computer object that is joined to
     * your SVM.</p>
     */
    inline void SetNetBiosName(const Aws::String& value) { m_netBiosNameHasBeenSet = true; m_netBiosName = value; }

    /**
     * <p>The NetBIOS name of the Active Directory computer object that is joined to
     * your SVM.</p>
     */
    inline void SetNetBiosName(Aws::String&& value) { m_netBiosNameHasBeenSet = true; m_netBiosName = std::move(value); }

    /**
     * <p>The NetBIOS name of the Active Directory computer object that is joined to
     * your SVM.</p>
     */
    inline void SetNetBiosName(const char* value) { m_netBiosNameHasBeenSet = true; m_netBiosName.assign(value); }

    /**
     * <p>The NetBIOS name of the Active Directory computer object that is joined to
     * your SVM.</p>
     */
    inline SvmActiveDirectoryConfiguration& WithNetBiosName(const Aws::String& value) { SetNetBiosName(value); return *this;}

    /**
     * <p>The NetBIOS name of the Active Directory computer object that is joined to
     * your SVM.</p>
     */
    inline SvmActiveDirectoryConfiguration& WithNetBiosName(Aws::String&& value) { SetNetBiosName(std::move(value)); return *this;}

    /**
     * <p>The NetBIOS name of the Active Directory computer object that is joined to
     * your SVM.</p>
     */
    inline SvmActiveDirectoryConfiguration& WithNetBiosName(const char* value) { SetNetBiosName(value); return *this;}


    
    inline const SelfManagedActiveDirectoryAttributes& GetSelfManagedActiveDirectoryConfiguration() const{ return m_selfManagedActiveDirectoryConfiguration; }

    
    inline bool SelfManagedActiveDirectoryConfigurationHasBeenSet() const { return m_selfManagedActiveDirectoryConfigurationHasBeenSet; }

    
    inline void SetSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryAttributes& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = value; }

    
    inline void SetSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryAttributes&& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = std::move(value); }

    
    inline SvmActiveDirectoryConfiguration& WithSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryAttributes& value) { SetSelfManagedActiveDirectoryConfiguration(value); return *this;}

    
    inline SvmActiveDirectoryConfiguration& WithSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryAttributes&& value) { SetSelfManagedActiveDirectoryConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_netBiosName;
    bool m_netBiosNameHasBeenSet = false;

    SelfManagedActiveDirectoryAttributes m_selfManagedActiveDirectoryConfiguration;
    bool m_selfManagedActiveDirectoryConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
