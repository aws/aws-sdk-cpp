/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SourceTableFeatureDetails
  {
  public:
    AWS_DYNAMODB_API SourceTableFeatureDetails();
    AWS_DYNAMODB_API SourceTableFeatureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API SourceTableFeatureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the LSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema and Projection for the LSIs on the table at
     * the time of backup. </p>
     */
    inline const Aws::Vector<LocalSecondaryIndexInfo>& GetLocalSecondaryIndexes() const{ return m_localSecondaryIndexes; }
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }
    inline void SetLocalSecondaryIndexes(const Aws::Vector<LocalSecondaryIndexInfo>& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = value; }
    inline void SetLocalSecondaryIndexes(Aws::Vector<LocalSecondaryIndexInfo>&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::move(value); }
    inline SourceTableFeatureDetails& WithLocalSecondaryIndexes(const Aws::Vector<LocalSecondaryIndexInfo>& value) { SetLocalSecondaryIndexes(value); return *this;}
    inline SourceTableFeatureDetails& WithLocalSecondaryIndexes(Aws::Vector<LocalSecondaryIndexInfo>&& value) { SetLocalSecondaryIndexes(std::move(value)); return *this;}
    inline SourceTableFeatureDetails& AddLocalSecondaryIndexes(const LocalSecondaryIndexInfo& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(value); return *this; }
    inline SourceTableFeatureDetails& AddLocalSecondaryIndexes(LocalSecondaryIndexInfo&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the GSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema, Projection, and ProvisionedThroughput for the
     * GSIs on the table at the time of backup. </p>
     */
    inline const Aws::Vector<GlobalSecondaryIndexInfo>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<GlobalSecondaryIndexInfo>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }
    inline void SetGlobalSecondaryIndexes(Aws::Vector<GlobalSecondaryIndexInfo>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }
    inline SourceTableFeatureDetails& WithGlobalSecondaryIndexes(const Aws::Vector<GlobalSecondaryIndexInfo>& value) { SetGlobalSecondaryIndexes(value); return *this;}
    inline SourceTableFeatureDetails& WithGlobalSecondaryIndexes(Aws::Vector<GlobalSecondaryIndexInfo>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}
    inline SourceTableFeatureDetails& AddGlobalSecondaryIndexes(const GlobalSecondaryIndexInfo& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }
    inline SourceTableFeatureDetails& AddGlobalSecondaryIndexes(GlobalSecondaryIndexInfo&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stream settings on the table when the backup was created.</p>
     */
    inline const StreamSpecification& GetStreamDescription() const{ return m_streamDescription; }
    inline bool StreamDescriptionHasBeenSet() const { return m_streamDescriptionHasBeenSet; }
    inline void SetStreamDescription(const StreamSpecification& value) { m_streamDescriptionHasBeenSet = true; m_streamDescription = value; }
    inline void SetStreamDescription(StreamSpecification&& value) { m_streamDescriptionHasBeenSet = true; m_streamDescription = std::move(value); }
    inline SourceTableFeatureDetails& WithStreamDescription(const StreamSpecification& value) { SetStreamDescription(value); return *this;}
    inline SourceTableFeatureDetails& WithStreamDescription(StreamSpecification&& value) { SetStreamDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time to Live settings on the table when the backup was created.</p>
     */
    inline const TimeToLiveDescription& GetTimeToLiveDescription() const{ return m_timeToLiveDescription; }
    inline bool TimeToLiveDescriptionHasBeenSet() const { return m_timeToLiveDescriptionHasBeenSet; }
    inline void SetTimeToLiveDescription(const TimeToLiveDescription& value) { m_timeToLiveDescriptionHasBeenSet = true; m_timeToLiveDescription = value; }
    inline void SetTimeToLiveDescription(TimeToLiveDescription&& value) { m_timeToLiveDescriptionHasBeenSet = true; m_timeToLiveDescription = std::move(value); }
    inline SourceTableFeatureDetails& WithTimeToLiveDescription(const TimeToLiveDescription& value) { SetTimeToLiveDescription(value); return *this;}
    inline SourceTableFeatureDetails& WithTimeToLiveDescription(TimeToLiveDescription&& value) { SetTimeToLiveDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the server-side encryption status on the table when the
     * backup was created.</p>
     */
    inline const SSEDescription& GetSSEDescription() const{ return m_sSEDescription; }
    inline bool SSEDescriptionHasBeenSet() const { return m_sSEDescriptionHasBeenSet; }
    inline void SetSSEDescription(const SSEDescription& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = value; }
    inline void SetSSEDescription(SSEDescription&& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = std::move(value); }
    inline SourceTableFeatureDetails& WithSSEDescription(const SSEDescription& value) { SetSSEDescription(value); return *this;}
    inline SourceTableFeatureDetails& WithSSEDescription(SSEDescription&& value) { SetSSEDescription(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LocalSecondaryIndexInfo> m_localSecondaryIndexes;
    bool m_localSecondaryIndexesHasBeenSet = false;

    Aws::Vector<GlobalSecondaryIndexInfo> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;

    StreamSpecification m_streamDescription;
    bool m_streamDescriptionHasBeenSet = false;

    TimeToLiveDescription m_timeToLiveDescription;
    bool m_timeToLiveDescriptionHasBeenSet = false;

    SSEDescription m_sSEDescription;
    bool m_sSEDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
