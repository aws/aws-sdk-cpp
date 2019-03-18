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
   * <code>create cloud formation stack</code> operation.</p> <p>A CloudFormation
   * stack record provides information about the AWS CloudFormation stack used to
   * create a new Amazon Elastic Compute Cloud instance from an exported Lightsail
   * instance snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CloudFormationStackRecord">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API CloudFormationStackRecord
  {
  public:
    CloudFormationStackRecord();
    CloudFormationStackRecord(Aws::Utils::Json::JsonView jsonValue);
    CloudFormationStackRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the CloudFormation stack record. It starts with
     * <code>CloudFormationStackRecord</code> followed by a GUID.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the CloudFormation stack record. It starts with
     * <code>CloudFormationStackRecord</code> followed by a GUID.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the CloudFormation stack record. It starts with
     * <code>CloudFormationStackRecord</code> followed by a GUID.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the CloudFormation stack record. It starts with
     * <code>CloudFormationStackRecord</code> followed by a GUID.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the CloudFormation stack record. It starts with
     * <code>CloudFormationStackRecord</code> followed by a GUID.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the CloudFormation stack record. It starts with
     * <code>CloudFormationStackRecord</code> followed by a GUID.</p>
     */
    inline CloudFormationStackRecord& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the CloudFormation stack record. It starts with
     * <code>CloudFormationStackRecord</code> followed by a GUID.</p>
     */
    inline CloudFormationStackRecord& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudFormation stack record. It starts with
     * <code>CloudFormationStackRecord</code> followed by a GUID.</p>
     */
    inline CloudFormationStackRecord& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack record.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack record.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack record.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack record.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack record.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack record.</p>
     */
    inline CloudFormationStackRecord& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack record.</p>
     */
    inline CloudFormationStackRecord& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack record.</p>
     */
    inline CloudFormationStackRecord& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date when the CloudFormation stack record was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date when the CloudFormation stack record was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date when the CloudFormation stack record was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date when the CloudFormation stack record was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date when the CloudFormation stack record was created.</p>
     */
    inline CloudFormationStackRecord& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date when the CloudFormation stack record was created.</p>
     */
    inline CloudFormationStackRecord& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A list of objects describing the Availability Zone and AWS Region of the
     * CloudFormation stack record.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>A list of objects describing the Availability Zone and AWS Region of the
     * CloudFormation stack record.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>A list of objects describing the Availability Zone and AWS Region of the
     * CloudFormation stack record.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>A list of objects describing the Availability Zone and AWS Region of the
     * CloudFormation stack record.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>A list of objects describing the Availability Zone and AWS Region of the
     * CloudFormation stack record.</p>
     */
    inline CloudFormationStackRecord& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>A list of objects describing the Availability Zone and AWS Region of the
     * CloudFormation stack record.</p>
     */
    inline CloudFormationStackRecord& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The Lightsail resource type (e.g.,
     * <code>CloudFormationStackRecord</code>).</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The Lightsail resource type (e.g.,
     * <code>CloudFormationStackRecord</code>).</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The Lightsail resource type (e.g.,
     * <code>CloudFormationStackRecord</code>).</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The Lightsail resource type (e.g.,
     * <code>CloudFormationStackRecord</code>).</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The Lightsail resource type (e.g.,
     * <code>CloudFormationStackRecord</code>).</p>
     */
    inline CloudFormationStackRecord& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The Lightsail resource type (e.g.,
     * <code>CloudFormationStackRecord</code>).</p>
     */
    inline CloudFormationStackRecord& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The current state of the CloudFormation stack record.</p>
     */
    inline const RecordState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the CloudFormation stack record.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the CloudFormation stack record.</p>
     */
    inline void SetState(const RecordState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the CloudFormation stack record.</p>
     */
    inline void SetState(RecordState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the CloudFormation stack record.</p>
     */
    inline CloudFormationStackRecord& WithState(const RecordState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the CloudFormation stack record.</p>
     */
    inline CloudFormationStackRecord& WithState(RecordState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A list of objects describing the source of the CloudFormation stack
     * record.</p>
     */
    inline const Aws::Vector<CloudFormationStackRecordSourceInfo>& GetSourceInfo() const{ return m_sourceInfo; }

    /**
     * <p>A list of objects describing the source of the CloudFormation stack
     * record.</p>
     */
    inline bool SourceInfoHasBeenSet() const { return m_sourceInfoHasBeenSet; }

    /**
     * <p>A list of objects describing the source of the CloudFormation stack
     * record.</p>
     */
    inline void SetSourceInfo(const Aws::Vector<CloudFormationStackRecordSourceInfo>& value) { m_sourceInfoHasBeenSet = true; m_sourceInfo = value; }

    /**
     * <p>A list of objects describing the source of the CloudFormation stack
     * record.</p>
     */
    inline void SetSourceInfo(Aws::Vector<CloudFormationStackRecordSourceInfo>&& value) { m_sourceInfoHasBeenSet = true; m_sourceInfo = std::move(value); }

    /**
     * <p>A list of objects describing the source of the CloudFormation stack
     * record.</p>
     */
    inline CloudFormationStackRecord& WithSourceInfo(const Aws::Vector<CloudFormationStackRecordSourceInfo>& value) { SetSourceInfo(value); return *this;}

    /**
     * <p>A list of objects describing the source of the CloudFormation stack
     * record.</p>
     */
    inline CloudFormationStackRecord& WithSourceInfo(Aws::Vector<CloudFormationStackRecordSourceInfo>&& value) { SetSourceInfo(std::move(value)); return *this;}

    /**
     * <p>A list of objects describing the source of the CloudFormation stack
     * record.</p>
     */
    inline CloudFormationStackRecord& AddSourceInfo(const CloudFormationStackRecordSourceInfo& value) { m_sourceInfoHasBeenSet = true; m_sourceInfo.push_back(value); return *this; }

    /**
     * <p>A list of objects describing the source of the CloudFormation stack
     * record.</p>
     */
    inline CloudFormationStackRecord& AddSourceInfo(CloudFormationStackRecordSourceInfo&& value) { m_sourceInfoHasBeenSet = true; m_sourceInfo.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of objects describing the destination service, which is AWS
     * CloudFormation, and the Amazon Resource Name (ARN) of the AWS CloudFormation
     * stack.</p>
     */
    inline const DestinationInfo& GetDestinationInfo() const{ return m_destinationInfo; }

    /**
     * <p>A list of objects describing the destination service, which is AWS
     * CloudFormation, and the Amazon Resource Name (ARN) of the AWS CloudFormation
     * stack.</p>
     */
    inline bool DestinationInfoHasBeenSet() const { return m_destinationInfoHasBeenSet; }

    /**
     * <p>A list of objects describing the destination service, which is AWS
     * CloudFormation, and the Amazon Resource Name (ARN) of the AWS CloudFormation
     * stack.</p>
     */
    inline void SetDestinationInfo(const DestinationInfo& value) { m_destinationInfoHasBeenSet = true; m_destinationInfo = value; }

    /**
     * <p>A list of objects describing the destination service, which is AWS
     * CloudFormation, and the Amazon Resource Name (ARN) of the AWS CloudFormation
     * stack.</p>
     */
    inline void SetDestinationInfo(DestinationInfo&& value) { m_destinationInfoHasBeenSet = true; m_destinationInfo = std::move(value); }

    /**
     * <p>A list of objects describing the destination service, which is AWS
     * CloudFormation, and the Amazon Resource Name (ARN) of the AWS CloudFormation
     * stack.</p>
     */
    inline CloudFormationStackRecord& WithDestinationInfo(const DestinationInfo& value) { SetDestinationInfo(value); return *this;}

    /**
     * <p>A list of objects describing the destination service, which is AWS
     * CloudFormation, and the Amazon Resource Name (ARN) of the AWS CloudFormation
     * stack.</p>
     */
    inline CloudFormationStackRecord& WithDestinationInfo(DestinationInfo&& value) { SetDestinationInfo(std::move(value)); return *this;}

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

    Aws::Vector<CloudFormationStackRecordSourceInfo> m_sourceInfo;
    bool m_sourceInfoHasBeenSet;

    DestinationInfo m_destinationInfo;
    bool m_destinationInfoHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
