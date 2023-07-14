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
  class AWS_LIGHTSAIL_API ExportSnapshotRecord
  {
  public:
    ExportSnapshotRecord();
    ExportSnapshotRecord(Aws::Utils::Json::JsonView jsonValue);
    ExportSnapshotRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The export snapshot record name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The export snapshot record name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The export snapshot record name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The export snapshot record name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The export snapshot record name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The export snapshot record name.</p>
     */
    inline ExportSnapshotRecord& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The export snapshot record name.</p>
     */
    inline ExportSnapshotRecord& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The export snapshot record name.</p>
     */
    inline ExportSnapshotRecord& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline ExportSnapshotRecord& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline ExportSnapshotRecord& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the export snapshot record.</p>
     */
    inline ExportSnapshotRecord& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date when the export snapshot record was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date when the export snapshot record was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date when the export snapshot record was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date when the export snapshot record was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date when the export snapshot record was created.</p>
     */
    inline ExportSnapshotRecord& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date when the export snapshot record was created.</p>
     */
    inline ExportSnapshotRecord& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The AWS Region and Availability Zone where the export snapshot record is
     * located.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The AWS Region and Availability Zone where the export snapshot record is
     * located.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The AWS Region and Availability Zone where the export snapshot record is
     * located.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The AWS Region and Availability Zone where the export snapshot record is
     * located.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The AWS Region and Availability Zone where the export snapshot record is
     * located.</p>
     */
    inline ExportSnapshotRecord& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The AWS Region and Availability Zone where the export snapshot record is
     * located.</p>
     */
    inline ExportSnapshotRecord& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline ExportSnapshotRecord& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type (e.g., <code>ExportSnapshotRecord</code>).</p>
     */
    inline ExportSnapshotRecord& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The state of the export snapshot record.</p>
     */
    inline const RecordState& GetState() const{ return m_state; }

    /**
     * <p>The state of the export snapshot record.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the export snapshot record.</p>
     */
    inline void SetState(const RecordState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the export snapshot record.</p>
     */
    inline void SetState(RecordState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the export snapshot record.</p>
     */
    inline ExportSnapshotRecord& WithState(const RecordState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the export snapshot record.</p>
     */
    inline ExportSnapshotRecord& WithState(RecordState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A list of objects describing the source of the export snapshot record.</p>
     */
    inline const ExportSnapshotRecordSourceInfo& GetSourceInfo() const{ return m_sourceInfo; }

    /**
     * <p>A list of objects describing the source of the export snapshot record.</p>
     */
    inline bool SourceInfoHasBeenSet() const { return m_sourceInfoHasBeenSet; }

    /**
     * <p>A list of objects describing the source of the export snapshot record.</p>
     */
    inline void SetSourceInfo(const ExportSnapshotRecordSourceInfo& value) { m_sourceInfoHasBeenSet = true; m_sourceInfo = value; }

    /**
     * <p>A list of objects describing the source of the export snapshot record.</p>
     */
    inline void SetSourceInfo(ExportSnapshotRecordSourceInfo&& value) { m_sourceInfoHasBeenSet = true; m_sourceInfo = std::move(value); }

    /**
     * <p>A list of objects describing the source of the export snapshot record.</p>
     */
    inline ExportSnapshotRecord& WithSourceInfo(const ExportSnapshotRecordSourceInfo& value) { SetSourceInfo(value); return *this;}

    /**
     * <p>A list of objects describing the source of the export snapshot record.</p>
     */
    inline ExportSnapshotRecord& WithSourceInfo(ExportSnapshotRecordSourceInfo&& value) { SetSourceInfo(std::move(value)); return *this;}


    /**
     * <p>A list of objects describing the destination of the export snapshot
     * record.</p>
     */
    inline const DestinationInfo& GetDestinationInfo() const{ return m_destinationInfo; }

    /**
     * <p>A list of objects describing the destination of the export snapshot
     * record.</p>
     */
    inline bool DestinationInfoHasBeenSet() const { return m_destinationInfoHasBeenSet; }

    /**
     * <p>A list of objects describing the destination of the export snapshot
     * record.</p>
     */
    inline void SetDestinationInfo(const DestinationInfo& value) { m_destinationInfoHasBeenSet = true; m_destinationInfo = value; }

    /**
     * <p>A list of objects describing the destination of the export snapshot
     * record.</p>
     */
    inline void SetDestinationInfo(DestinationInfo&& value) { m_destinationInfoHasBeenSet = true; m_destinationInfo = std::move(value); }

    /**
     * <p>A list of objects describing the destination of the export snapshot
     * record.</p>
     */
    inline ExportSnapshotRecord& WithDestinationInfo(const DestinationInfo& value) { SetDestinationInfo(value); return *this;}

    /**
     * <p>A list of objects describing the destination of the export snapshot
     * record.</p>
     */
    inline ExportSnapshotRecord& WithDestinationInfo(DestinationInfo&& value) { SetDestinationInfo(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    ResourceLocation m_location;
    bool m_locationHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    RecordState m_state;
    bool m_stateHasBeenSet;

    ExportSnapshotRecordSourceInfo m_sourceInfo;
    bool m_sourceInfoHasBeenSet;

    DestinationInfo m_destinationInfo;
    bool m_destinationInfoHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
