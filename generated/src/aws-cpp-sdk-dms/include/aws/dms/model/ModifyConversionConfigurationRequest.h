/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class ModifyConversionConfigurationRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyConversionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyConversionConfiguration"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetMigrationProjectIdentifier() const{ return m_migrationProjectIdentifier; }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline bool MigrationProjectIdentifierHasBeenSet() const { return m_migrationProjectIdentifierHasBeenSet; }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline void SetMigrationProjectIdentifier(const Aws::String& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = value; }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline void SetMigrationProjectIdentifier(Aws::String&& value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier = std::move(value); }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline void SetMigrationProjectIdentifier(const char* value) { m_migrationProjectIdentifierHasBeenSet = true; m_migrationProjectIdentifier.assign(value); }

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline ModifyConversionConfigurationRequest& WithMigrationProjectIdentifier(const Aws::String& value) { SetMigrationProjectIdentifier(value); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline ModifyConversionConfigurationRequest& WithMigrationProjectIdentifier(Aws::String&& value) { SetMigrationProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The migration project name or Amazon Resource Name (ARN).</p>
     */
    inline ModifyConversionConfigurationRequest& WithMigrationProjectIdentifier(const char* value) { SetMigrationProjectIdentifier(value); return *this;}


    /**
     * <p>The new conversion configuration.</p>
     */
    inline const Aws::String& GetConversionConfiguration() const{ return m_conversionConfiguration; }

    /**
     * <p>The new conversion configuration.</p>
     */
    inline bool ConversionConfigurationHasBeenSet() const { return m_conversionConfigurationHasBeenSet; }

    /**
     * <p>The new conversion configuration.</p>
     */
    inline void SetConversionConfiguration(const Aws::String& value) { m_conversionConfigurationHasBeenSet = true; m_conversionConfiguration = value; }

    /**
     * <p>The new conversion configuration.</p>
     */
    inline void SetConversionConfiguration(Aws::String&& value) { m_conversionConfigurationHasBeenSet = true; m_conversionConfiguration = std::move(value); }

    /**
     * <p>The new conversion configuration.</p>
     */
    inline void SetConversionConfiguration(const char* value) { m_conversionConfigurationHasBeenSet = true; m_conversionConfiguration.assign(value); }

    /**
     * <p>The new conversion configuration.</p>
     */
    inline ModifyConversionConfigurationRequest& WithConversionConfiguration(const Aws::String& value) { SetConversionConfiguration(value); return *this;}

    /**
     * <p>The new conversion configuration.</p>
     */
    inline ModifyConversionConfigurationRequest& WithConversionConfiguration(Aws::String&& value) { SetConversionConfiguration(std::move(value)); return *this;}

    /**
     * <p>The new conversion configuration.</p>
     */
    inline ModifyConversionConfigurationRequest& WithConversionConfiguration(const char* value) { SetConversionConfiguration(value); return *this;}

  private:

    Aws::String m_migrationProjectIdentifier;
    bool m_migrationProjectIdentifierHasBeenSet = false;

    Aws::String m_conversionConfiguration;
    bool m_conversionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
