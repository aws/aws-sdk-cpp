/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SelfManagedActiveDirectoryConfigurationUpdates.h>
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
   * <p>Updates the Microsoft Active Directory (AD) configuration of an SVM joined to
   * an AD. Please note, account credentials are not returned in the response
   * payload.</p><p><h3>See Also:</h3>   <a
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

  private:

    SelfManagedActiveDirectoryConfigurationUpdates m_selfManagedActiveDirectoryConfiguration;
    bool m_selfManagedActiveDirectoryConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
