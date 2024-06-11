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
#include <aws/lightsail/model/RecordState.h>
#include <aws/lightsail/model/ExportSnapshotRecordSourceInfo.h>
#include <aws/lightsail/model/DestinationInfo.h>
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
   * <p>Describes an export snapshot record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ExportSnapshotRecord">AWS
   * API Reference</a></p>
   */
  class ExportSnapshotRecord
  {
  public:
    AWS_LIGHTSAIL_API ExportSnapshotRecord();
    AWS_LIGHTSAIL_API ExportSnapshotRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ExportSnapshotRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The export snapshot record name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ExportSnapshotRecord& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ExportSnapshotRecord& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ExportSnapshotRecord& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ExportSnapshotRecord& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ExportSnapshotRecord& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ExportSnapshotRecord& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the export snapshot record was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ExportSnapshotRecord& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ExportSnapshotRecord& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region and Availability Zone where the export snapshot record is
     * located.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline ExportSnapshotRecord& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}
    inline ExportSnapshotRecord& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail resource type (<code>ExportSnapshotRecord</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ExportSnapshotRecord& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline ExportSnapshotRecord& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the export snapshot record.</p>
     */
    inline const RecordState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const RecordState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(RecordState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ExportSnapshotRecord& WithState(const RecordState& value) { SetState(value); return *this;}
    inline ExportSnapshotRecord& WithState(RecordState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects describing the source of the export snapshot record.</p>
     */
    inline const ExportSnapshotRecordSourceInfo& GetSourceInfo() const{ return m_sourceInfo; }
    inline bool SourceInfoHasBeenSet() const { return m_sourceInfoHasBeenSet; }
    inline void SetSourceInfo(const ExportSnapshotRecordSourceInfo& value) { m_sourceInfoHasBeenSet = true; m_sourceInfo = value; }
    inline void SetSourceInfo(ExportSnapshotRecordSourceInfo&& value) { m_sourceInfoHasBeenSet = true; m_sourceInfo = std::move(value); }
    inline ExportSnapshotRecord& WithSourceInfo(const ExportSnapshotRecordSourceInfo& value) { SetSourceInfo(value); return *this;}
    inline ExportSnapshotRecord& WithSourceInfo(ExportSnapshotRecordSourceInfo&& value) { SetSourceInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects describing the destination of the export snapshot
     * record.</p>
     */
    inline const DestinationInfo& GetDestinationInfo() const{ return m_destinationInfo; }
    inline bool DestinationInfoHasBeenSet() const { return m_destinationInfoHasBeenSet; }
    inline void SetDestinationInfo(const DestinationInfo& value) { m_destinationInfoHasBeenSet = true; m_destinationInfo = value; }
    inline void SetDestinationInfo(DestinationInfo&& value) { m_destinationInfoHasBeenSet = true; m_destinationInfo = std::move(value); }
    inline ExportSnapshotRecord& WithDestinationInfo(const DestinationInfo& value) { SetDestinationInfo(value); return *this;}
    inline ExportSnapshotRecord& WithDestinationInfo(DestinationInfo&& value) { SetDestinationInfo(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    RecordState m_state;
    bool m_stateHasBeenSet = false;

    ExportSnapshotRecordSourceInfo m_sourceInfo;
    bool m_sourceInfoHasBeenSet = false;

    DestinationInfo m_destinationInfo;
    bool m_destinationInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
