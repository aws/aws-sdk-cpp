﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
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
   * <p>Describes a database snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RelationalDatabaseSnapshot">AWS
   * API Reference</a></p>
   */
  class RelationalDatabaseSnapshot
  {
  public:
    AWS_LIGHTSAIL_API RelationalDatabaseSnapshot();
    AWS_LIGHTSAIL_API RelationalDatabaseSnapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RelationalDatabaseSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database snapshot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RelationalDatabaseSnapshot& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RelationalDatabaseSnapshot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RelationalDatabaseSnapshot& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the database snapshot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RelationalDatabaseSnapshot& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RelationalDatabaseSnapshot& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RelationalDatabaseSnapshot& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code for the database snapshot. Include this code in your email
     * to support when you have questions about a database snapshot in Lightsail. This
     * code enables our support team to look up your Lightsail information more
     * easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }
    inline RelationalDatabaseSnapshot& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}
    inline RelationalDatabaseSnapshot& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}
    inline RelationalDatabaseSnapshot& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the database snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline RelationalDatabaseSnapshot& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline RelationalDatabaseSnapshot& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region name and Availability Zone where the database snapshot is
     * located.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline RelationalDatabaseSnapshot& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}
    inline RelationalDatabaseSnapshot& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail resource type.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline RelationalDatabaseSnapshot& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline RelationalDatabaseSnapshot& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RelationalDatabaseSnapshot& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RelationalDatabaseSnapshot& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RelationalDatabaseSnapshot& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RelationalDatabaseSnapshot& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The software of the database snapshot (for example, <code>MySQL</code>)</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline RelationalDatabaseSnapshot& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline RelationalDatabaseSnapshot& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline RelationalDatabaseSnapshot& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine version for the database snapshot (for example,
     * <code>5.7.23</code>).</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline RelationalDatabaseSnapshot& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline RelationalDatabaseSnapshot& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline RelationalDatabaseSnapshot& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the disk in GB (for example, <code>32</code>) for the database
     * snapshot.</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }
    inline RelationalDatabaseSnapshot& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the database snapshot.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline RelationalDatabaseSnapshot& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline RelationalDatabaseSnapshot& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline RelationalDatabaseSnapshot& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source database from which the database snapshot was
     * created.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseName() const{ return m_fromRelationalDatabaseName; }
    inline bool FromRelationalDatabaseNameHasBeenSet() const { return m_fromRelationalDatabaseNameHasBeenSet; }
    inline void SetFromRelationalDatabaseName(const Aws::String& value) { m_fromRelationalDatabaseNameHasBeenSet = true; m_fromRelationalDatabaseName = value; }
    inline void SetFromRelationalDatabaseName(Aws::String&& value) { m_fromRelationalDatabaseNameHasBeenSet = true; m_fromRelationalDatabaseName = std::move(value); }
    inline void SetFromRelationalDatabaseName(const char* value) { m_fromRelationalDatabaseNameHasBeenSet = true; m_fromRelationalDatabaseName.assign(value); }
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseName(const Aws::String& value) { SetFromRelationalDatabaseName(value); return *this;}
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseName(Aws::String&& value) { SetFromRelationalDatabaseName(std::move(value)); return *this;}
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseName(const char* value) { SetFromRelationalDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the database from which the database
     * snapshot was created.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseArn() const{ return m_fromRelationalDatabaseArn; }
    inline bool FromRelationalDatabaseArnHasBeenSet() const { return m_fromRelationalDatabaseArnHasBeenSet; }
    inline void SetFromRelationalDatabaseArn(const Aws::String& value) { m_fromRelationalDatabaseArnHasBeenSet = true; m_fromRelationalDatabaseArn = value; }
    inline void SetFromRelationalDatabaseArn(Aws::String&& value) { m_fromRelationalDatabaseArnHasBeenSet = true; m_fromRelationalDatabaseArn = std::move(value); }
    inline void SetFromRelationalDatabaseArn(const char* value) { m_fromRelationalDatabaseArnHasBeenSet = true; m_fromRelationalDatabaseArn.assign(value); }
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseArn(const Aws::String& value) { SetFromRelationalDatabaseArn(value); return *this;}
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseArn(Aws::String&& value) { SetFromRelationalDatabaseArn(std::move(value)); return *this;}
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseArn(const char* value) { SetFromRelationalDatabaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle ID of the database from which the database snapshot was
     * created.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseBundleId() const{ return m_fromRelationalDatabaseBundleId; }
    inline bool FromRelationalDatabaseBundleIdHasBeenSet() const { return m_fromRelationalDatabaseBundleIdHasBeenSet; }
    inline void SetFromRelationalDatabaseBundleId(const Aws::String& value) { m_fromRelationalDatabaseBundleIdHasBeenSet = true; m_fromRelationalDatabaseBundleId = value; }
    inline void SetFromRelationalDatabaseBundleId(Aws::String&& value) { m_fromRelationalDatabaseBundleIdHasBeenSet = true; m_fromRelationalDatabaseBundleId = std::move(value); }
    inline void SetFromRelationalDatabaseBundleId(const char* value) { m_fromRelationalDatabaseBundleIdHasBeenSet = true; m_fromRelationalDatabaseBundleId.assign(value); }
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBundleId(const Aws::String& value) { SetFromRelationalDatabaseBundleId(value); return *this;}
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBundleId(Aws::String&& value) { SetFromRelationalDatabaseBundleId(std::move(value)); return *this;}
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBundleId(const char* value) { SetFromRelationalDatabaseBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blueprint ID of the database from which the database snapshot was
     * created. A blueprint describes the major engine version of a database.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseBlueprintId() const{ return m_fromRelationalDatabaseBlueprintId; }
    inline bool FromRelationalDatabaseBlueprintIdHasBeenSet() const { return m_fromRelationalDatabaseBlueprintIdHasBeenSet; }
    inline void SetFromRelationalDatabaseBlueprintId(const Aws::String& value) { m_fromRelationalDatabaseBlueprintIdHasBeenSet = true; m_fromRelationalDatabaseBlueprintId = value; }
    inline void SetFromRelationalDatabaseBlueprintId(Aws::String&& value) { m_fromRelationalDatabaseBlueprintIdHasBeenSet = true; m_fromRelationalDatabaseBlueprintId = std::move(value); }
    inline void SetFromRelationalDatabaseBlueprintId(const char* value) { m_fromRelationalDatabaseBlueprintIdHasBeenSet = true; m_fromRelationalDatabaseBlueprintId.assign(value); }
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBlueprintId(const Aws::String& value) { SetFromRelationalDatabaseBlueprintId(value); return *this;}
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBlueprintId(Aws::String&& value) { SetFromRelationalDatabaseBlueprintId(std::move(value)); return *this;}
    inline RelationalDatabaseSnapshot& WithFromRelationalDatabaseBlueprintId(const char* value) { SetFromRelationalDatabaseBlueprintId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_fromRelationalDatabaseName;
    bool m_fromRelationalDatabaseNameHasBeenSet = false;

    Aws::String m_fromRelationalDatabaseArn;
    bool m_fromRelationalDatabaseArnHasBeenSet = false;

    Aws::String m_fromRelationalDatabaseBundleId;
    bool m_fromRelationalDatabaseBundleIdHasBeenSet = false;

    Aws::String m_fromRelationalDatabaseBlueprintId;
    bool m_fromRelationalDatabaseBlueprintIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
