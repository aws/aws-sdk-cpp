/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Kafka
{
namespace Model
{

  /**
   */
  class DeleteReplicatorRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API DeleteReplicatorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReplicator"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;

    AWS_KAFKA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The current version of the replicator.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline DeleteReplicatorRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline DeleteReplicatorRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline DeleteReplicatorRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator to be deleted.</p>
     */
    inline const Aws::String& GetReplicatorArn() const{ return m_replicatorArn; }
    inline bool ReplicatorArnHasBeenSet() const { return m_replicatorArnHasBeenSet; }
    inline void SetReplicatorArn(const Aws::String& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = value; }
    inline void SetReplicatorArn(Aws::String&& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = std::move(value); }
    inline void SetReplicatorArn(const char* value) { m_replicatorArnHasBeenSet = true; m_replicatorArn.assign(value); }
    inline DeleteReplicatorRequest& WithReplicatorArn(const Aws::String& value) { SetReplicatorArn(value); return *this;}
    inline DeleteReplicatorRequest& WithReplicatorArn(Aws::String&& value) { SetReplicatorArn(std::move(value)); return *this;}
    inline DeleteReplicatorRequest& WithReplicatorArn(const char* value) { SetReplicatorArn(value); return *this;}
    ///@}
  private:

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_replicatorArn;
    bool m_replicatorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
