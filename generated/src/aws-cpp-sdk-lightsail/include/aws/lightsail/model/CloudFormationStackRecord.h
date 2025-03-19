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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/DestinationInfo.h>
#include <aws/lightsail/model/CloudFormationStackRecordSourceInfo.h>
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
   * <p>Describes a CloudFormation stack record created as a result of the
   * <code>create cloud formation stack</code> action.</p> <p>A CloudFormation stack
   * record provides information about the AWS CloudFormation stack used to create a
   * new Amazon Elastic Compute Cloud instance from an exported Lightsail instance
   * snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CloudFormationStackRecord">AWS
   * API Reference</a></p>
   */
  class CloudFormationStackRecord
  {
  public:
    AWS_LIGHTSAIL_API CloudFormationStackRecord() = default;
    AWS_LIGHTSAIL_API CloudFormationStackRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API CloudFormationStackRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the CloudFormation stack record. It starts with
     * <code>CloudFormationStackRecord</code> followed by a GUID.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CloudFormationStackRecord& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack record.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CloudFormationStackRecord& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the CloudFormation stack record was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CloudFormationStackRecord& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects describing the Availability Zone and Amazon Web Services
     * Region of the CloudFormation stack record.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    CloudFormationStackRecord& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lightsail resource type (<code>CloudFormationStackRecord</code>).</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline CloudFormationStackRecord& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the CloudFormation stack record.</p>
     */
    inline RecordState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RecordState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CloudFormationStackRecord& WithState(RecordState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects describing the source of the CloudFormation stack
     * record.</p>
     */
    inline const Aws::Vector<CloudFormationStackRecordSourceInfo>& GetSourceInfo() const { return m_sourceInfo; }
    inline bool SourceInfoHasBeenSet() const { return m_sourceInfoHasBeenSet; }
    template<typename SourceInfoT = Aws::Vector<CloudFormationStackRecordSourceInfo>>
    void SetSourceInfo(SourceInfoT&& value) { m_sourceInfoHasBeenSet = true; m_sourceInfo = std::forward<SourceInfoT>(value); }
    template<typename SourceInfoT = Aws::Vector<CloudFormationStackRecordSourceInfo>>
    CloudFormationStackRecord& WithSourceInfo(SourceInfoT&& value) { SetSourceInfo(std::forward<SourceInfoT>(value)); return *this;}
    template<typename SourceInfoT = CloudFormationStackRecordSourceInfo>
    CloudFormationStackRecord& AddSourceInfo(SourceInfoT&& value) { m_sourceInfoHasBeenSet = true; m_sourceInfo.emplace_back(std::forward<SourceInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of objects describing the destination service, which is AWS
     * CloudFormation, and the Amazon Resource Name (ARN) of the AWS CloudFormation
     * stack.</p>
     */
    inline const DestinationInfo& GetDestinationInfo() const { return m_destinationInfo; }
    inline bool DestinationInfoHasBeenSet() const { return m_destinationInfoHasBeenSet; }
    template<typename DestinationInfoT = DestinationInfo>
    void SetDestinationInfo(DestinationInfoT&& value) { m_destinationInfoHasBeenSet = true; m_destinationInfo = std::forward<DestinationInfoT>(value); }
    template<typename DestinationInfoT = DestinationInfo>
    CloudFormationStackRecord& WithDestinationInfo(DestinationInfoT&& value) { SetDestinationInfo(std::forward<DestinationInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    RecordState m_state{RecordState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<CloudFormationStackRecordSourceInfo> m_sourceInfo;
    bool m_sourceInfoHasBeenSet = false;

    DestinationInfo m_destinationInfo;
    bool m_destinationInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
