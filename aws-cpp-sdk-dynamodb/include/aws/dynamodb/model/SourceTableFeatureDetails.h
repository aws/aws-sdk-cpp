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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/StreamSpecification.h>
#include <aws/dynamodb/model/TimeToLiveDescription.h>
#include <aws/dynamodb/model/SSEDescription.h>
#include <aws/dynamodb/model/LocalSecondaryIndexInfo.h>
#include <aws/dynamodb/model/GlobalSecondaryIndexInfo.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Contains the details of the features enabled on the table when the backup was
   * created. For example, LSIs, GSIs, streams, TTL. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/SourceTableFeatureDetails">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API SourceTableFeatureDetails
  {
  public:
    SourceTableFeatureDetails();
    SourceTableFeatureDetails(Aws::Utils::Json::JsonView jsonValue);
    SourceTableFeatureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the LSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema and Projection for the LSIs on the table at
     * the time of backup. </p>
     */
    inline const Aws::Vector<LocalSecondaryIndexInfo>& GetLocalSecondaryIndexes() const{ return m_localSecondaryIndexes; }

    /**
     * <p>Represents the LSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema and Projection for the LSIs on the table at
     * the time of backup. </p>
     */
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }

    /**
     * <p>Represents the LSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema and Projection for the LSIs on the table at
     * the time of backup. </p>
     */
    inline void SetLocalSecondaryIndexes(const Aws::Vector<LocalSecondaryIndexInfo>& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = value; }

    /**
     * <p>Represents the LSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema and Projection for the LSIs on the table at
     * the time of backup. </p>
     */
    inline void SetLocalSecondaryIndexes(Aws::Vector<LocalSecondaryIndexInfo>&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::move(value); }

    /**
     * <p>Represents the LSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema and Projection for the LSIs on the table at
     * the time of backup. </p>
     */
    inline SourceTableFeatureDetails& WithLocalSecondaryIndexes(const Aws::Vector<LocalSecondaryIndexInfo>& value) { SetLocalSecondaryIndexes(value); return *this;}

    /**
     * <p>Represents the LSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema and Projection for the LSIs on the table at
     * the time of backup. </p>
     */
    inline SourceTableFeatureDetails& WithLocalSecondaryIndexes(Aws::Vector<LocalSecondaryIndexInfo>&& value) { SetLocalSecondaryIndexes(std::move(value)); return *this;}

    /**
     * <p>Represents the LSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema and Projection for the LSIs on the table at
     * the time of backup. </p>
     */
    inline SourceTableFeatureDetails& AddLocalSecondaryIndexes(const LocalSecondaryIndexInfo& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(value); return *this; }

    /**
     * <p>Represents the LSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema and Projection for the LSIs on the table at
     * the time of backup. </p>
     */
    inline SourceTableFeatureDetails& AddLocalSecondaryIndexes(LocalSecondaryIndexInfo&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents the GSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema, Projection and ProvisionedThroughput for the
     * GSIs on the table at the time of backup. </p>
     */
    inline const Aws::Vector<GlobalSecondaryIndexInfo>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }

    /**
     * <p>Represents the GSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema, Projection and ProvisionedThroughput for the
     * GSIs on the table at the time of backup. </p>
     */
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }

    /**
     * <p>Represents the GSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema, Projection and ProvisionedThroughput for the
     * GSIs on the table at the time of backup. </p>
     */
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<GlobalSecondaryIndexInfo>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }

    /**
     * <p>Represents the GSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema, Projection and ProvisionedThroughput for the
     * GSIs on the table at the time of backup. </p>
     */
    inline void SetGlobalSecondaryIndexes(Aws::Vector<GlobalSecondaryIndexInfo>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }

    /**
     * <p>Represents the GSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema, Projection and ProvisionedThroughput for the
     * GSIs on the table at the time of backup. </p>
     */
    inline SourceTableFeatureDetails& WithGlobalSecondaryIndexes(const Aws::Vector<GlobalSecondaryIndexInfo>& value) { SetGlobalSecondaryIndexes(value); return *this;}

    /**
     * <p>Represents the GSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema, Projection and ProvisionedThroughput for the
     * GSIs on the table at the time of backup. </p>
     */
    inline SourceTableFeatureDetails& WithGlobalSecondaryIndexes(Aws::Vector<GlobalSecondaryIndexInfo>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}

    /**
     * <p>Represents the GSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema, Projection and ProvisionedThroughput for the
     * GSIs on the table at the time of backup. </p>
     */
    inline SourceTableFeatureDetails& AddGlobalSecondaryIndexes(const GlobalSecondaryIndexInfo& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }

    /**
     * <p>Represents the GSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema, Projection and ProvisionedThroughput for the
     * GSIs on the table at the time of backup. </p>
     */
    inline SourceTableFeatureDetails& AddGlobalSecondaryIndexes(GlobalSecondaryIndexInfo&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }


    /**
     * <p>Stream settings on the table when the backup was created.</p>
     */
    inline const StreamSpecification& GetStreamDescription() const{ return m_streamDescription; }

    /**
     * <p>Stream settings on the table when the backup was created.</p>
     */
    inline bool StreamDescriptionHasBeenSet() const { return m_streamDescriptionHasBeenSet; }

    /**
     * <p>Stream settings on the table when the backup was created.</p>
     */
    inline void SetStreamDescription(const StreamSpecification& value) { m_streamDescriptionHasBeenSet = true; m_streamDescription = value; }

    /**
     * <p>Stream settings on the table when the backup was created.</p>
     */
    inline void SetStreamDescription(StreamSpecification&& value) { m_streamDescriptionHasBeenSet = true; m_streamDescription = std::move(value); }

    /**
     * <p>Stream settings on the table when the backup was created.</p>
     */
    inline SourceTableFeatureDetails& WithStreamDescription(const StreamSpecification& value) { SetStreamDescription(value); return *this;}

    /**
     * <p>Stream settings on the table when the backup was created.</p>
     */
    inline SourceTableFeatureDetails& WithStreamDescription(StreamSpecification&& value) { SetStreamDescription(std::move(value)); return *this;}


    /**
     * <p>Time to Live settings on the table when the backup was created.</p>
     */
    inline const TimeToLiveDescription& GetTimeToLiveDescription() const{ return m_timeToLiveDescription; }

    /**
     * <p>Time to Live settings on the table when the backup was created.</p>
     */
    inline bool TimeToLiveDescriptionHasBeenSet() const { return m_timeToLiveDescriptionHasBeenSet; }

    /**
     * <p>Time to Live settings on the table when the backup was created.</p>
     */
    inline void SetTimeToLiveDescription(const TimeToLiveDescription& value) { m_timeToLiveDescriptionHasBeenSet = true; m_timeToLiveDescription = value; }

    /**
     * <p>Time to Live settings on the table when the backup was created.</p>
     */
    inline void SetTimeToLiveDescription(TimeToLiveDescription&& value) { m_timeToLiveDescriptionHasBeenSet = true; m_timeToLiveDescription = std::move(value); }

    /**
     * <p>Time to Live settings on the table when the backup was created.</p>
     */
    inline SourceTableFeatureDetails& WithTimeToLiveDescription(const TimeToLiveDescription& value) { SetTimeToLiveDescription(value); return *this;}

    /**
     * <p>Time to Live settings on the table when the backup was created.</p>
     */
    inline SourceTableFeatureDetails& WithTimeToLiveDescription(TimeToLiveDescription&& value) { SetTimeToLiveDescription(std::move(value)); return *this;}


    /**
     * <p>The description of the server-side encryption status on the table when the
     * backup was created.</p>
     */
    inline const SSEDescription& GetSSEDescription() const{ return m_sSEDescription; }

    /**
     * <p>The description of the server-side encryption status on the table when the
     * backup was created.</p>
     */
    inline bool SSEDescriptionHasBeenSet() const { return m_sSEDescriptionHasBeenSet; }

    /**
     * <p>The description of the server-side encryption status on the table when the
     * backup was created.</p>
     */
    inline void SetSSEDescription(const SSEDescription& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = value; }

    /**
     * <p>The description of the server-side encryption status on the table when the
     * backup was created.</p>
     */
    inline void SetSSEDescription(SSEDescription&& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = std::move(value); }

    /**
     * <p>The description of the server-side encryption status on the table when the
     * backup was created.</p>
     */
    inline SourceTableFeatureDetails& WithSSEDescription(const SSEDescription& value) { SetSSEDescription(value); return *this;}

    /**
     * <p>The description of the server-side encryption status on the table when the
     * backup was created.</p>
     */
    inline SourceTableFeatureDetails& WithSSEDescription(SSEDescription&& value) { SetSSEDescription(std::move(value)); return *this;}

  private:

    Aws::Vector<LocalSecondaryIndexInfo> m_localSecondaryIndexes;
    bool m_localSecondaryIndexesHasBeenSet;

    Aws::Vector<GlobalSecondaryIndexInfo> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet;

    StreamSpecification m_streamDescription;
    bool m_streamDescriptionHasBeenSet;

    TimeToLiveDescription m_timeToLiveDescription;
    bool m_timeToLiveDescriptionHasBeenSet;

    SSEDescription m_sSEDescription;
    bool m_sSEDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
