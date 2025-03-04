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
    AWS_DYNAMODB_API SourceTableFeatureDetails() = default;
    AWS_DYNAMODB_API SourceTableFeatureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API SourceTableFeatureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the LSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema and Projection for the LSIs on the table at
     * the time of backup. </p>
     */
    inline const Aws::Vector<LocalSecondaryIndexInfo>& GetLocalSecondaryIndexes() const { return m_localSecondaryIndexes; }
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }
    template<typename LocalSecondaryIndexesT = Aws::Vector<LocalSecondaryIndexInfo>>
    void SetLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::forward<LocalSecondaryIndexesT>(value); }
    template<typename LocalSecondaryIndexesT = Aws::Vector<LocalSecondaryIndexInfo>>
    SourceTableFeatureDetails& WithLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { SetLocalSecondaryIndexes(std::forward<LocalSecondaryIndexesT>(value)); return *this;}
    template<typename LocalSecondaryIndexesT = LocalSecondaryIndexInfo>
    SourceTableFeatureDetails& AddLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace_back(std::forward<LocalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the GSI properties for the table when the backup was created. It
     * includes the IndexName, KeySchema, Projection, and ProvisionedThroughput for the
     * GSIs on the table at the time of backup. </p>
     */
    inline const Aws::Vector<GlobalSecondaryIndexInfo>& GetGlobalSecondaryIndexes() const { return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<GlobalSecondaryIndexInfo>>
    void SetGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::forward<GlobalSecondaryIndexesT>(value); }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<GlobalSecondaryIndexInfo>>
    SourceTableFeatureDetails& WithGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { SetGlobalSecondaryIndexes(std::forward<GlobalSecondaryIndexesT>(value)); return *this;}
    template<typename GlobalSecondaryIndexesT = GlobalSecondaryIndexInfo>
    SourceTableFeatureDetails& AddGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace_back(std::forward<GlobalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stream settings on the table when the backup was created.</p>
     */
    inline const StreamSpecification& GetStreamDescription() const { return m_streamDescription; }
    inline bool StreamDescriptionHasBeenSet() const { return m_streamDescriptionHasBeenSet; }
    template<typename StreamDescriptionT = StreamSpecification>
    void SetStreamDescription(StreamDescriptionT&& value) { m_streamDescriptionHasBeenSet = true; m_streamDescription = std::forward<StreamDescriptionT>(value); }
    template<typename StreamDescriptionT = StreamSpecification>
    SourceTableFeatureDetails& WithStreamDescription(StreamDescriptionT&& value) { SetStreamDescription(std::forward<StreamDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time to Live settings on the table when the backup was created.</p>
     */
    inline const TimeToLiveDescription& GetTimeToLiveDescription() const { return m_timeToLiveDescription; }
    inline bool TimeToLiveDescriptionHasBeenSet() const { return m_timeToLiveDescriptionHasBeenSet; }
    template<typename TimeToLiveDescriptionT = TimeToLiveDescription>
    void SetTimeToLiveDescription(TimeToLiveDescriptionT&& value) { m_timeToLiveDescriptionHasBeenSet = true; m_timeToLiveDescription = std::forward<TimeToLiveDescriptionT>(value); }
    template<typename TimeToLiveDescriptionT = TimeToLiveDescription>
    SourceTableFeatureDetails& WithTimeToLiveDescription(TimeToLiveDescriptionT&& value) { SetTimeToLiveDescription(std::forward<TimeToLiveDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the server-side encryption status on the table when the
     * backup was created.</p>
     */
    inline const SSEDescription& GetSSEDescription() const { return m_sSEDescription; }
    inline bool SSEDescriptionHasBeenSet() const { return m_sSEDescriptionHasBeenSet; }
    template<typename SSEDescriptionT = SSEDescription>
    void SetSSEDescription(SSEDescriptionT&& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = std::forward<SSEDescriptionT>(value); }
    template<typename SSEDescriptionT = SSEDescription>
    SourceTableFeatureDetails& WithSSEDescription(SSEDescriptionT&& value) { SetSSEDescription(std::forward<SSEDescriptionT>(value)); return *this;}
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
