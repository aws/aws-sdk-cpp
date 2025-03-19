/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/OpenSearchResourceStatus.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information about the OpenSearch Service collection
   * used for this integration. An OpenSearch Service collection is a logical
   * grouping of one or more indexes that represent an analytics workload. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-collections.html">Creating
   * and managing OpenSearch Service Serverless collections</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/OpenSearchCollection">AWS
   * API Reference</a></p>
   */
  class OpenSearchCollection
  {
  public:
    AWS_CLOUDWATCHLOGS_API OpenSearchCollection() = default;
    AWS_CLOUDWATCHLOGS_API OpenSearchCollection(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API OpenSearchCollection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint of the collection.</p>
     */
    inline const Aws::String& GetCollectionEndpoint() const { return m_collectionEndpoint; }
    inline bool CollectionEndpointHasBeenSet() const { return m_collectionEndpointHasBeenSet; }
    template<typename CollectionEndpointT = Aws::String>
    void SetCollectionEndpoint(CollectionEndpointT&& value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint = std::forward<CollectionEndpointT>(value); }
    template<typename CollectionEndpointT = Aws::String>
    OpenSearchCollection& WithCollectionEndpoint(CollectionEndpointT&& value) { SetCollectionEndpoint(std::forward<CollectionEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the collection.</p>
     */
    inline const Aws::String& GetCollectionArn() const { return m_collectionArn; }
    inline bool CollectionArnHasBeenSet() const { return m_collectionArnHasBeenSet; }
    template<typename CollectionArnT = Aws::String>
    void SetCollectionArn(CollectionArnT&& value) { m_collectionArnHasBeenSet = true; m_collectionArn = std::forward<CollectionArnT>(value); }
    template<typename CollectionArnT = Aws::String>
    OpenSearchCollection& WithCollectionArn(CollectionArnT&& value) { SetCollectionArn(std::forward<CollectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the status of this OpenSearch
     * Service resource.</p>
     */
    inline const OpenSearchResourceStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = OpenSearchResourceStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = OpenSearchResourceStatus>
    OpenSearchCollection& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_collectionEndpoint;
    bool m_collectionEndpointHasBeenSet = false;

    Aws::String m_collectionArn;
    bool m_collectionArnHasBeenSet = false;

    OpenSearchResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
