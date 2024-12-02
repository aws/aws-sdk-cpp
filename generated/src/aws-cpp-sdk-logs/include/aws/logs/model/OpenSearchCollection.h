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
    AWS_CLOUDWATCHLOGS_API OpenSearchCollection();
    AWS_CLOUDWATCHLOGS_API OpenSearchCollection(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API OpenSearchCollection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint of the collection.</p>
     */
    inline const Aws::String& GetCollectionEndpoint() const{ return m_collectionEndpoint; }
    inline bool CollectionEndpointHasBeenSet() const { return m_collectionEndpointHasBeenSet; }
    inline void SetCollectionEndpoint(const Aws::String& value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint = value; }
    inline void SetCollectionEndpoint(Aws::String&& value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint = std::move(value); }
    inline void SetCollectionEndpoint(const char* value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint.assign(value); }
    inline OpenSearchCollection& WithCollectionEndpoint(const Aws::String& value) { SetCollectionEndpoint(value); return *this;}
    inline OpenSearchCollection& WithCollectionEndpoint(Aws::String&& value) { SetCollectionEndpoint(std::move(value)); return *this;}
    inline OpenSearchCollection& WithCollectionEndpoint(const char* value) { SetCollectionEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the collection.</p>
     */
    inline const Aws::String& GetCollectionArn() const{ return m_collectionArn; }
    inline bool CollectionArnHasBeenSet() const { return m_collectionArnHasBeenSet; }
    inline void SetCollectionArn(const Aws::String& value) { m_collectionArnHasBeenSet = true; m_collectionArn = value; }
    inline void SetCollectionArn(Aws::String&& value) { m_collectionArnHasBeenSet = true; m_collectionArn = std::move(value); }
    inline void SetCollectionArn(const char* value) { m_collectionArnHasBeenSet = true; m_collectionArn.assign(value); }
    inline OpenSearchCollection& WithCollectionArn(const Aws::String& value) { SetCollectionArn(value); return *this;}
    inline OpenSearchCollection& WithCollectionArn(Aws::String&& value) { SetCollectionArn(std::move(value)); return *this;}
    inline OpenSearchCollection& WithCollectionArn(const char* value) { SetCollectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the status of this OpenSearch
     * Service resource.</p>
     */
    inline const OpenSearchResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OpenSearchResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OpenSearchResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline OpenSearchCollection& WithStatus(const OpenSearchResourceStatus& value) { SetStatus(value); return *this;}
    inline OpenSearchCollection& WithStatus(OpenSearchResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
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
