/**
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
    AWS_LIGHTSAIL_API RelationalDatabaseSnapshot() = default;
    AWS_LIGHTSAIL_API RelationalDatabaseSnapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RelationalDatabaseSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database snapshot.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RelationalDatabaseSnapshot& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the database snapshot.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RelationalDatabaseSnapshot& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code for the database snapshot. Include this code in your email
     * to support when you have questions about a database snapshot in Lightsail. This
     * code enables our support team to look up your Lightsail information more
     * easily.</p>
     */
    inline const Aws::String& GetSupportCode() const { return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    template<typename SupportCodeT = Aws::String>
    void SetSupportCode(SupportCodeT&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::forward<SupportCodeT>(value); }
    template<typename SupportCodeT = Aws::String>
    RelationalDatabaseSnapshot& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the database snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    RelationalDatabaseSnapshot& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region name and Availability Zone where the database snapshot is
     * located.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    RelationalDatabaseSnapshot& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail resource type.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline RelationalDatabaseSnapshot& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RelationalDatabaseSnapshot& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RelationalDatabaseSnapshot& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The software of the database snapshot (for example, <code>MySQL</code>)</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    RelationalDatabaseSnapshot& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine version for the database snapshot (for example,
     * <code>5.7.23</code>).</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    RelationalDatabaseSnapshot& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the disk in GB (for example, <code>32</code>) for the database
     * snapshot.</p>
     */
    inline int GetSizeInGb() const { return m_sizeInGb; }
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }
    inline RelationalDatabaseSnapshot& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the database snapshot.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    RelationalDatabaseSnapshot& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source database from which the database snapshot was
     * created.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseName() const { return m_fromRelationalDatabaseName; }
    inline bool FromRelationalDatabaseNameHasBeenSet() const { return m_fromRelationalDatabaseNameHasBeenSet; }
    template<typename FromRelationalDatabaseNameT = Aws::String>
    void SetFromRelationalDatabaseName(FromRelationalDatabaseNameT&& value) { m_fromRelationalDatabaseNameHasBeenSet = true; m_fromRelationalDatabaseName = std::forward<FromRelationalDatabaseNameT>(value); }
    template<typename FromRelationalDatabaseNameT = Aws::String>
    RelationalDatabaseSnapshot& WithFromRelationalDatabaseName(FromRelationalDatabaseNameT&& value) { SetFromRelationalDatabaseName(std::forward<FromRelationalDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the database from which the database
     * snapshot was created.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseArn() const { return m_fromRelationalDatabaseArn; }
    inline bool FromRelationalDatabaseArnHasBeenSet() const { return m_fromRelationalDatabaseArnHasBeenSet; }
    template<typename FromRelationalDatabaseArnT = Aws::String>
    void SetFromRelationalDatabaseArn(FromRelationalDatabaseArnT&& value) { m_fromRelationalDatabaseArnHasBeenSet = true; m_fromRelationalDatabaseArn = std::forward<FromRelationalDatabaseArnT>(value); }
    template<typename FromRelationalDatabaseArnT = Aws::String>
    RelationalDatabaseSnapshot& WithFromRelationalDatabaseArn(FromRelationalDatabaseArnT&& value) { SetFromRelationalDatabaseArn(std::forward<FromRelationalDatabaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle ID of the database from which the database snapshot was
     * created.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseBundleId() const { return m_fromRelationalDatabaseBundleId; }
    inline bool FromRelationalDatabaseBundleIdHasBeenSet() const { return m_fromRelationalDatabaseBundleIdHasBeenSet; }
    template<typename FromRelationalDatabaseBundleIdT = Aws::String>
    void SetFromRelationalDatabaseBundleId(FromRelationalDatabaseBundleIdT&& value) { m_fromRelationalDatabaseBundleIdHasBeenSet = true; m_fromRelationalDatabaseBundleId = std::forward<FromRelationalDatabaseBundleIdT>(value); }
    template<typename FromRelationalDatabaseBundleIdT = Aws::String>
    RelationalDatabaseSnapshot& WithFromRelationalDatabaseBundleId(FromRelationalDatabaseBundleIdT&& value) { SetFromRelationalDatabaseBundleId(std::forward<FromRelationalDatabaseBundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blueprint ID of the database from which the database snapshot was
     * created. A blueprint describes the major engine version of a database.</p>
     */
    inline const Aws::String& GetFromRelationalDatabaseBlueprintId() const { return m_fromRelationalDatabaseBlueprintId; }
    inline bool FromRelationalDatabaseBlueprintIdHasBeenSet() const { return m_fromRelationalDatabaseBlueprintIdHasBeenSet; }
    template<typename FromRelationalDatabaseBlueprintIdT = Aws::String>
    void SetFromRelationalDatabaseBlueprintId(FromRelationalDatabaseBlueprintIdT&& value) { m_fromRelationalDatabaseBlueprintIdHasBeenSet = true; m_fromRelationalDatabaseBlueprintId = std::forward<FromRelationalDatabaseBlueprintIdT>(value); }
    template<typename FromRelationalDatabaseBlueprintIdT = Aws::String>
    RelationalDatabaseSnapshot& WithFromRelationalDatabaseBlueprintId(FromRelationalDatabaseBlueprintIdT&& value) { SetFromRelationalDatabaseBlueprintId(std::forward<FromRelationalDatabaseBlueprintIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_sizeInGb{0};
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
