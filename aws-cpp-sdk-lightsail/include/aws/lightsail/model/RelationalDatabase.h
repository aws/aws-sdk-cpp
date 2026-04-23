/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/RelationalDatabaseHardware.h>
#include <aws/lightsail/model/PendingModifiedRelationalDatabaseValues.h>
#include <aws/lightsail/model/RelationalDatabaseEndpoint.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/PendingMaintenanceAction.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RelationalDatabase">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API RelationalDatabase
  {
  public:
    RelationalDatabase();
    RelationalDatabase(Aws::Utils::Json::JsonView jsonValue);
    RelationalDatabase& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique name of the database resource in Lightsail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The unique name of the database resource in Lightsail.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The unique name of the database resource in Lightsail.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The unique name of the database resource in Lightsail.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The unique name of the database resource in Lightsail.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The unique name of the database resource in Lightsail.</p>
     */
    inline RelationalDatabase& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The unique name of the database resource in Lightsail.</p>
     */
    inline RelationalDatabase& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the database resource in Lightsail.</p>
     */
    inline RelationalDatabase& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline RelationalDatabase& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline RelationalDatabase& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database.</p>
     */
    inline RelationalDatabase& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The support code for the database. Include this code in your email to support
     * when you have questions about a database in Lightsail. This code enables our
     * support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }

    /**
     * <p>The support code for the database. Include this code in your email to support
     * when you have questions about a database in Lightsail. This code enables our
     * support team to look up your Lightsail information more easily.</p>
     */
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }

    /**
     * <p>The support code for the database. Include this code in your email to support
     * when you have questions about a database in Lightsail. This code enables our
     * support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code for the database. Include this code in your email to support
     * when you have questions about a database in Lightsail. This code enables our
     * support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }

    /**
     * <p>The support code for the database. Include this code in your email to support
     * when you have questions about a database in Lightsail. This code enables our
     * support team to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }

    /**
     * <p>The support code for the database. Include this code in your email to support
     * when you have questions about a database in Lightsail. This code enables our
     * support team to look up your Lightsail information more easily.</p>
     */
    inline RelationalDatabase& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code for the database. Include this code in your email to support
     * when you have questions about a database in Lightsail. This code enables our
     * support team to look up your Lightsail information more easily.</p>
     */
    inline RelationalDatabase& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}

    /**
     * <p>The support code for the database. Include this code in your email to support
     * when you have questions about a database in Lightsail. This code enables our
     * support team to look up your Lightsail information more easily.</p>
     */
    inline RelationalDatabase& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}


    /**
     * <p>The timestamp when the database was created. Formatted in Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the database was created. Formatted in Unix time.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the database was created. Formatted in Unix time.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the database was created. Formatted in Unix time.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the database was created. Formatted in Unix time.</p>
     */
    inline RelationalDatabase& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the database was created. Formatted in Unix time.</p>
     */
    inline RelationalDatabase& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Region name and Availability Zone where the database is located.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The Region name and Availability Zone where the database is located.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The Region name and Availability Zone where the database is located.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The Region name and Availability Zone where the database is located.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The Region name and Availability Zone where the database is located.</p>
     */
    inline RelationalDatabase& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The Region name and Availability Zone where the database is located.</p>
     */
    inline RelationalDatabase& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The Lightsail resource type for the database (for example,
     * <code>RelationalDatabase</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type for the database (for example,
     * <code>RelationalDatabase</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type for the database (for example,
     * <code>RelationalDatabase</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type for the database (for example,
     * <code>RelationalDatabase</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type for the database (for example,
     * <code>RelationalDatabase</code>).</p>
     */
    inline RelationalDatabase& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type for the database (for example,
     * <code>RelationalDatabase</code>).</p>
     */
    inline RelationalDatabase& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline RelationalDatabase& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline RelationalDatabase& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline RelationalDatabase& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
     * Dev Guide</a>.</p>
     */
    inline RelationalDatabase& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The blueprint ID for the database. A blueprint describes the major engine
     * version of a database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseBlueprintId() const{ return m_relationalDatabaseBlueprintId; }

    /**
     * <p>The blueprint ID for the database. A blueprint describes the major engine
     * version of a database.</p>
     */
    inline bool RelationalDatabaseBlueprintIdHasBeenSet() const { return m_relationalDatabaseBlueprintIdHasBeenSet; }

    /**
     * <p>The blueprint ID for the database. A blueprint describes the major engine
     * version of a database.</p>
     */
    inline void SetRelationalDatabaseBlueprintId(const Aws::String& value) { m_relationalDatabaseBlueprintIdHasBeenSet = true; m_relationalDatabaseBlueprintId = value; }

    /**
     * <p>The blueprint ID for the database. A blueprint describes the major engine
     * version of a database.</p>
     */
    inline void SetRelationalDatabaseBlueprintId(Aws::String&& value) { m_relationalDatabaseBlueprintIdHasBeenSet = true; m_relationalDatabaseBlueprintId = std::move(value); }

    /**
     * <p>The blueprint ID for the database. A blueprint describes the major engine
     * version of a database.</p>
     */
    inline void SetRelationalDatabaseBlueprintId(const char* value) { m_relationalDatabaseBlueprintIdHasBeenSet = true; m_relationalDatabaseBlueprintId.assign(value); }

    /**
     * <p>The blueprint ID for the database. A blueprint describes the major engine
     * version of a database.</p>
     */
    inline RelationalDatabase& WithRelationalDatabaseBlueprintId(const Aws::String& value) { SetRelationalDatabaseBlueprintId(value); return *this;}

    /**
     * <p>The blueprint ID for the database. A blueprint describes the major engine
     * version of a database.</p>
     */
    inline RelationalDatabase& WithRelationalDatabaseBlueprintId(Aws::String&& value) { SetRelationalDatabaseBlueprintId(std::move(value)); return *this;}

    /**
     * <p>The blueprint ID for the database. A blueprint describes the major engine
     * version of a database.</p>
     */
    inline RelationalDatabase& WithRelationalDatabaseBlueprintId(const char* value) { SetRelationalDatabaseBlueprintId(value); return *this;}


    /**
     * <p>The bundle ID for the database. A bundle describes the performance
     * specifications for your database.</p>
     */
    inline const Aws::String& GetRelationalDatabaseBundleId() const{ return m_relationalDatabaseBundleId; }

    /**
     * <p>The bundle ID for the database. A bundle describes the performance
     * specifications for your database.</p>
     */
    inline bool RelationalDatabaseBundleIdHasBeenSet() const { return m_relationalDatabaseBundleIdHasBeenSet; }

    /**
     * <p>The bundle ID for the database. A bundle describes the performance
     * specifications for your database.</p>
     */
    inline void SetRelationalDatabaseBundleId(const Aws::String& value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId = value; }

    /**
     * <p>The bundle ID for the database. A bundle describes the performance
     * specifications for your database.</p>
     */
    inline void SetRelationalDatabaseBundleId(Aws::String&& value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId = std::move(value); }

    /**
     * <p>The bundle ID for the database. A bundle describes the performance
     * specifications for your database.</p>
     */
    inline void SetRelationalDatabaseBundleId(const char* value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId.assign(value); }

    /**
     * <p>The bundle ID for the database. A bundle describes the performance
     * specifications for your database.</p>
     */
    inline RelationalDatabase& WithRelationalDatabaseBundleId(const Aws::String& value) { SetRelationalDatabaseBundleId(value); return *this;}

    /**
     * <p>The bundle ID for the database. A bundle describes the performance
     * specifications for your database.</p>
     */
    inline RelationalDatabase& WithRelationalDatabaseBundleId(Aws::String&& value) { SetRelationalDatabaseBundleId(std::move(value)); return *this;}

    /**
     * <p>The bundle ID for the database. A bundle describes the performance
     * specifications for your database.</p>
     */
    inline RelationalDatabase& WithRelationalDatabaseBundleId(const char* value) { SetRelationalDatabaseBundleId(value); return *this;}


    /**
     * <p>The name of the master database created when the Lightsail database resource
     * is created.</p>
     */
    inline const Aws::String& GetMasterDatabaseName() const{ return m_masterDatabaseName; }

    /**
     * <p>The name of the master database created when the Lightsail database resource
     * is created.</p>
     */
    inline bool MasterDatabaseNameHasBeenSet() const { return m_masterDatabaseNameHasBeenSet; }

    /**
     * <p>The name of the master database created when the Lightsail database resource
     * is created.</p>
     */
    inline void SetMasterDatabaseName(const Aws::String& value) { m_masterDatabaseNameHasBeenSet = true; m_masterDatabaseName = value; }

    /**
     * <p>The name of the master database created when the Lightsail database resource
     * is created.</p>
     */
    inline void SetMasterDatabaseName(Aws::String&& value) { m_masterDatabaseNameHasBeenSet = true; m_masterDatabaseName = std::move(value); }

    /**
     * <p>The name of the master database created when the Lightsail database resource
     * is created.</p>
     */
    inline void SetMasterDatabaseName(const char* value) { m_masterDatabaseNameHasBeenSet = true; m_masterDatabaseName.assign(value); }

    /**
     * <p>The name of the master database created when the Lightsail database resource
     * is created.</p>
     */
    inline RelationalDatabase& WithMasterDatabaseName(const Aws::String& value) { SetMasterDatabaseName(value); return *this;}

    /**
     * <p>The name of the master database created when the Lightsail database resource
     * is created.</p>
     */
    inline RelationalDatabase& WithMasterDatabaseName(Aws::String&& value) { SetMasterDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the master database created when the Lightsail database resource
     * is created.</p>
     */
    inline RelationalDatabase& WithMasterDatabaseName(const char* value) { SetMasterDatabaseName(value); return *this;}


    /**
     * <p>Describes the hardware of the database.</p>
     */
    inline const RelationalDatabaseHardware& GetHardware() const{ return m_hardware; }

    /**
     * <p>Describes the hardware of the database.</p>
     */
    inline bool HardwareHasBeenSet() const { return m_hardwareHasBeenSet; }

    /**
     * <p>Describes the hardware of the database.</p>
     */
    inline void SetHardware(const RelationalDatabaseHardware& value) { m_hardwareHasBeenSet = true; m_hardware = value; }

    /**
     * <p>Describes the hardware of the database.</p>
     */
    inline void SetHardware(RelationalDatabaseHardware&& value) { m_hardwareHasBeenSet = true; m_hardware = std::move(value); }

    /**
     * <p>Describes the hardware of the database.</p>
     */
    inline RelationalDatabase& WithHardware(const RelationalDatabaseHardware& value) { SetHardware(value); return *this;}

    /**
     * <p>Describes the hardware of the database.</p>
     */
    inline RelationalDatabase& WithHardware(RelationalDatabaseHardware&& value) { SetHardware(std::move(value)); return *this;}


    /**
     * <p>Describes the current state of the database.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>Describes the current state of the database.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Describes the current state of the database.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Describes the current state of the database.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Describes the current state of the database.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>Describes the current state of the database.</p>
     */
    inline RelationalDatabase& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>Describes the current state of the database.</p>
     */
    inline RelationalDatabase& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>Describes the current state of the database.</p>
     */
    inline RelationalDatabase& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>Describes the secondary Availability Zone of a high availability
     * database.</p> <p>The secondary database is used for failover support of a high
     * availability database.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const{ return m_secondaryAvailabilityZone; }

    /**
     * <p>Describes the secondary Availability Zone of a high availability
     * database.</p> <p>The secondary database is used for failover support of a high
     * availability database.</p>
     */
    inline bool SecondaryAvailabilityZoneHasBeenSet() const { return m_secondaryAvailabilityZoneHasBeenSet; }

    /**
     * <p>Describes the secondary Availability Zone of a high availability
     * database.</p> <p>The secondary database is used for failover support of a high
     * availability database.</p>
     */
    inline void SetSecondaryAvailabilityZone(const Aws::String& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = value; }

    /**
     * <p>Describes the secondary Availability Zone of a high availability
     * database.</p> <p>The secondary database is used for failover support of a high
     * availability database.</p>
     */
    inline void SetSecondaryAvailabilityZone(Aws::String&& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = std::move(value); }

    /**
     * <p>Describes the secondary Availability Zone of a high availability
     * database.</p> <p>The secondary database is used for failover support of a high
     * availability database.</p>
     */
    inline void SetSecondaryAvailabilityZone(const char* value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone.assign(value); }

    /**
     * <p>Describes the secondary Availability Zone of a high availability
     * database.</p> <p>The secondary database is used for failover support of a high
     * availability database.</p>
     */
    inline RelationalDatabase& WithSecondaryAvailabilityZone(const Aws::String& value) { SetSecondaryAvailabilityZone(value); return *this;}

    /**
     * <p>Describes the secondary Availability Zone of a high availability
     * database.</p> <p>The secondary database is used for failover support of a high
     * availability database.</p>
     */
    inline RelationalDatabase& WithSecondaryAvailabilityZone(Aws::String&& value) { SetSecondaryAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>Describes the secondary Availability Zone of a high availability
     * database.</p> <p>The secondary database is used for failover support of a high
     * availability database.</p>
     */
    inline RelationalDatabase& WithSecondaryAvailabilityZone(const char* value) { SetSecondaryAvailabilityZone(value); return *this;}


    /**
     * <p>A Boolean value indicating whether automated backup retention is enabled for
     * the database.</p>
     */
    inline bool GetBackupRetentionEnabled() const{ return m_backupRetentionEnabled; }

    /**
     * <p>A Boolean value indicating whether automated backup retention is enabled for
     * the database.</p>
     */
    inline bool BackupRetentionEnabledHasBeenSet() const { return m_backupRetentionEnabledHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether automated backup retention is enabled for
     * the database.</p>
     */
    inline void SetBackupRetentionEnabled(bool value) { m_backupRetentionEnabledHasBeenSet = true; m_backupRetentionEnabled = value; }

    /**
     * <p>A Boolean value indicating whether automated backup retention is enabled for
     * the database.</p>
     */
    inline RelationalDatabase& WithBackupRetentionEnabled(bool value) { SetBackupRetentionEnabled(value); return *this;}


    /**
     * <p>Describes pending database value modifications.</p>
     */
    inline const PendingModifiedRelationalDatabaseValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }

    /**
     * <p>Describes pending database value modifications.</p>
     */
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }

    /**
     * <p>Describes pending database value modifications.</p>
     */
    inline void SetPendingModifiedValues(const PendingModifiedRelationalDatabaseValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p>Describes pending database value modifications.</p>
     */
    inline void SetPendingModifiedValues(PendingModifiedRelationalDatabaseValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }

    /**
     * <p>Describes pending database value modifications.</p>
     */
    inline RelationalDatabase& WithPendingModifiedValues(const PendingModifiedRelationalDatabaseValues& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p>Describes pending database value modifications.</p>
     */
    inline RelationalDatabase& WithPendingModifiedValues(PendingModifiedRelationalDatabaseValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}


    /**
     * <p>The database software (for example, <code>MySQL</code>).</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database software (for example, <code>MySQL</code>).</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The database software (for example, <code>MySQL</code>).</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database software (for example, <code>MySQL</code>).</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The database software (for example, <code>MySQL</code>).</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database software (for example, <code>MySQL</code>).</p>
     */
    inline RelationalDatabase& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database software (for example, <code>MySQL</code>).</p>
     */
    inline RelationalDatabase& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The database software (for example, <code>MySQL</code>).</p>
     */
    inline RelationalDatabase& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The database engine version (for example, <code>5.7.23</code>).</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The database engine version (for example, <code>5.7.23</code>).</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The database engine version (for example, <code>5.7.23</code>).</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The database engine version (for example, <code>5.7.23</code>).</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The database engine version (for example, <code>5.7.23</code>).</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The database engine version (for example, <code>5.7.23</code>).</p>
     */
    inline RelationalDatabase& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The database engine version (for example, <code>5.7.23</code>).</p>
     */
    inline RelationalDatabase& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The database engine version (for example, <code>5.7.23</code>).</p>
     */
    inline RelationalDatabase& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The latest point in time to which the database can be restored. Formatted in
     * Unix time.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableTime() const{ return m_latestRestorableTime; }

    /**
     * <p>The latest point in time to which the database can be restored. Formatted in
     * Unix time.</p>
     */
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }

    /**
     * <p>The latest point in time to which the database can be restored. Formatted in
     * Unix time.</p>
     */
    inline void SetLatestRestorableTime(const Aws::Utils::DateTime& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = value; }

    /**
     * <p>The latest point in time to which the database can be restored. Formatted in
     * Unix time.</p>
     */
    inline void SetLatestRestorableTime(Aws::Utils::DateTime&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::move(value); }

    /**
     * <p>The latest point in time to which the database can be restored. Formatted in
     * Unix time.</p>
     */
    inline RelationalDatabase& WithLatestRestorableTime(const Aws::Utils::DateTime& value) { SetLatestRestorableTime(value); return *this;}

    /**
     * <p>The latest point in time to which the database can be restored. Formatted in
     * Unix time.</p>
     */
    inline RelationalDatabase& WithLatestRestorableTime(Aws::Utils::DateTime&& value) { SetLatestRestorableTime(std::move(value)); return *this;}


    /**
     * <p>The master user name of the database.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The master user name of the database.</p>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The master user name of the database.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The master user name of the database.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The master user name of the database.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The master user name of the database.</p>
     */
    inline RelationalDatabase& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The master user name of the database.</p>
     */
    inline RelationalDatabase& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The master user name of the database.</p>
     */
    inline RelationalDatabase& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The status of parameter updates for the database.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }

    /**
     * <p>The status of parameter updates for the database.</p>
     */
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }

    /**
     * <p>The status of parameter updates for the database.</p>
     */
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }

    /**
     * <p>The status of parameter updates for the database.</p>
     */
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }

    /**
     * <p>The status of parameter updates for the database.</p>
     */
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }

    /**
     * <p>The status of parameter updates for the database.</p>
     */
    inline RelationalDatabase& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}

    /**
     * <p>The status of parameter updates for the database.</p>
     */
    inline RelationalDatabase& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}

    /**
     * <p>The status of parameter updates for the database.</p>
     */
    inline RelationalDatabase& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}


    /**
     * <p>The daily time range during which automated backups are created for the
     * database (for example, <code>16:00-16:30</code>).</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The daily time range during which automated backups are created for the
     * database (for example, <code>16:00-16:30</code>).</p>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The daily time range during which automated backups are created for the
     * database (for example, <code>16:00-16:30</code>).</p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created for the
     * database (for example, <code>16:00-16:30</code>).</p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The daily time range during which automated backups are created for the
     * database (for example, <code>16:00-16:30</code>).</p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The daily time range during which automated backups are created for the
     * database (for example, <code>16:00-16:30</code>).</p>
     */
    inline RelationalDatabase& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created for the
     * database (for example, <code>16:00-16:30</code>).</p>
     */
    inline RelationalDatabase& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range during which automated backups are created for the
     * database (for example, <code>16:00-16:30</code>).</p>
     */
    inline RelationalDatabase& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur on the
     * database.</p> <p>In the format <code>ddd:hh24:mi-ddd:hh24:mi</code>. For
     * example, <code>Tue:17:00-Tue:17:30</code>.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur on the
     * database.</p> <p>In the format <code>ddd:hh24:mi-ddd:hh24:mi</code>. For
     * example, <code>Tue:17:00-Tue:17:30</code>.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur on the
     * database.</p> <p>In the format <code>ddd:hh24:mi-ddd:hh24:mi</code>. For
     * example, <code>Tue:17:00-Tue:17:30</code>.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur on the
     * database.</p> <p>In the format <code>ddd:hh24:mi-ddd:hh24:mi</code>. For
     * example, <code>Tue:17:00-Tue:17:30</code>.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur on the
     * database.</p> <p>In the format <code>ddd:hh24:mi-ddd:hh24:mi</code>. For
     * example, <code>Tue:17:00-Tue:17:30</code>.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur on the
     * database.</p> <p>In the format <code>ddd:hh24:mi-ddd:hh24:mi</code>. For
     * example, <code>Tue:17:00-Tue:17:30</code>.</p>
     */
    inline RelationalDatabase& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur on the
     * database.</p> <p>In the format <code>ddd:hh24:mi-ddd:hh24:mi</code>. For
     * example, <code>Tue:17:00-Tue:17:30</code>.</p>
     */
    inline RelationalDatabase& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur on the
     * database.</p> <p>In the format <code>ddd:hh24:mi-ddd:hh24:mi</code>. For
     * example, <code>Tue:17:00-Tue:17:30</code>.</p>
     */
    inline RelationalDatabase& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the database is publicly accessible.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>A Boolean value indicating whether the database is publicly accessible.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the database is publicly accessible.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>A Boolean value indicating whether the database is publicly accessible.</p>
     */
    inline RelationalDatabase& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>The master endpoint for the database.</p>
     */
    inline const RelationalDatabaseEndpoint& GetMasterEndpoint() const{ return m_masterEndpoint; }

    /**
     * <p>The master endpoint for the database.</p>
     */
    inline bool MasterEndpointHasBeenSet() const { return m_masterEndpointHasBeenSet; }

    /**
     * <p>The master endpoint for the database.</p>
     */
    inline void SetMasterEndpoint(const RelationalDatabaseEndpoint& value) { m_masterEndpointHasBeenSet = true; m_masterEndpoint = value; }

    /**
     * <p>The master endpoint for the database.</p>
     */
    inline void SetMasterEndpoint(RelationalDatabaseEndpoint&& value) { m_masterEndpointHasBeenSet = true; m_masterEndpoint = std::move(value); }

    /**
     * <p>The master endpoint for the database.</p>
     */
    inline RelationalDatabase& WithMasterEndpoint(const RelationalDatabaseEndpoint& value) { SetMasterEndpoint(value); return *this;}

    /**
     * <p>The master endpoint for the database.</p>
     */
    inline RelationalDatabase& WithMasterEndpoint(RelationalDatabaseEndpoint&& value) { SetMasterEndpoint(std::move(value)); return *this;}


    /**
     * <p>Describes the pending maintenance actions for the database.</p>
     */
    inline const Aws::Vector<PendingMaintenanceAction>& GetPendingMaintenanceActions() const{ return m_pendingMaintenanceActions; }

    /**
     * <p>Describes the pending maintenance actions for the database.</p>
     */
    inline bool PendingMaintenanceActionsHasBeenSet() const { return m_pendingMaintenanceActionsHasBeenSet; }

    /**
     * <p>Describes the pending maintenance actions for the database.</p>
     */
    inline void SetPendingMaintenanceActions(const Aws::Vector<PendingMaintenanceAction>& value) { m_pendingMaintenanceActionsHasBeenSet = true; m_pendingMaintenanceActions = value; }

    /**
     * <p>Describes the pending maintenance actions for the database.</p>
     */
    inline void SetPendingMaintenanceActions(Aws::Vector<PendingMaintenanceAction>&& value) { m_pendingMaintenanceActionsHasBeenSet = true; m_pendingMaintenanceActions = std::move(value); }

    /**
     * <p>Describes the pending maintenance actions for the database.</p>
     */
    inline RelationalDatabase& WithPendingMaintenanceActions(const Aws::Vector<PendingMaintenanceAction>& value) { SetPendingMaintenanceActions(value); return *this;}

    /**
     * <p>Describes the pending maintenance actions for the database.</p>
     */
    inline RelationalDatabase& WithPendingMaintenanceActions(Aws::Vector<PendingMaintenanceAction>&& value) { SetPendingMaintenanceActions(std::move(value)); return *this;}

    /**
     * <p>Describes the pending maintenance actions for the database.</p>
     */
    inline RelationalDatabase& AddPendingMaintenanceActions(const PendingMaintenanceAction& value) { m_pendingMaintenanceActionsHasBeenSet = true; m_pendingMaintenanceActions.push_back(value); return *this; }

    /**
     * <p>Describes the pending maintenance actions for the database.</p>
     */
    inline RelationalDatabase& AddPendingMaintenanceActions(PendingMaintenanceAction&& value) { m_pendingMaintenanceActionsHasBeenSet = true; m_pendingMaintenanceActions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    ResourceLocation m_location;
    bool m_locationHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_relationalDatabaseBlueprintId;
    bool m_relationalDatabaseBlueprintIdHasBeenSet;

    Aws::String m_relationalDatabaseBundleId;
    bool m_relationalDatabaseBundleIdHasBeenSet;

    Aws::String m_masterDatabaseName;
    bool m_masterDatabaseNameHasBeenSet;

    RelationalDatabaseHardware m_hardware;
    bool m_hardwareHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;

    Aws::String m_secondaryAvailabilityZone;
    bool m_secondaryAvailabilityZoneHasBeenSet;

    bool m_backupRetentionEnabled;
    bool m_backupRetentionEnabledHasBeenSet;

    PendingModifiedRelationalDatabaseValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::Utils::DateTime m_latestRestorableTime;
    bool m_latestRestorableTimeHasBeenSet;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    RelationalDatabaseEndpoint m_masterEndpoint;
    bool m_masterEndpointHasBeenSet;

    Aws::Vector<PendingMaintenanceAction> m_pendingMaintenanceActions;
    bool m_pendingMaintenanceActionsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
