/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/BatchPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/SimulationJobRequest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class StartSimulationJobBatchRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API StartSimulationJobBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSimulationJobBatch"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline StartSimulationJobBatchRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline StartSimulationJobBatchRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline StartSimulationJobBatchRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The batch policy.</p>
     */
    inline const BatchPolicy& GetBatchPolicy() const{ return m_batchPolicy; }

    /**
     * <p>The batch policy.</p>
     */
    inline bool BatchPolicyHasBeenSet() const { return m_batchPolicyHasBeenSet; }

    /**
     * <p>The batch policy.</p>
     */
    inline void SetBatchPolicy(const BatchPolicy& value) { m_batchPolicyHasBeenSet = true; m_batchPolicy = value; }

    /**
     * <p>The batch policy.</p>
     */
    inline void SetBatchPolicy(BatchPolicy&& value) { m_batchPolicyHasBeenSet = true; m_batchPolicy = std::move(value); }

    /**
     * <p>The batch policy.</p>
     */
    inline StartSimulationJobBatchRequest& WithBatchPolicy(const BatchPolicy& value) { SetBatchPolicy(value); return *this;}

    /**
     * <p>The batch policy.</p>
     */
    inline StartSimulationJobBatchRequest& WithBatchPolicy(BatchPolicy&& value) { SetBatchPolicy(std::move(value)); return *this;}


    /**
     * <p>A list of simulation job requests to create in the batch.</p>
     */
    inline const Aws::Vector<SimulationJobRequest>& GetCreateSimulationJobRequests() const{ return m_createSimulationJobRequests; }

    /**
     * <p>A list of simulation job requests to create in the batch.</p>
     */
    inline bool CreateSimulationJobRequestsHasBeenSet() const { return m_createSimulationJobRequestsHasBeenSet; }

    /**
     * <p>A list of simulation job requests to create in the batch.</p>
     */
    inline void SetCreateSimulationJobRequests(const Aws::Vector<SimulationJobRequest>& value) { m_createSimulationJobRequestsHasBeenSet = true; m_createSimulationJobRequests = value; }

    /**
     * <p>A list of simulation job requests to create in the batch.</p>
     */
    inline void SetCreateSimulationJobRequests(Aws::Vector<SimulationJobRequest>&& value) { m_createSimulationJobRequestsHasBeenSet = true; m_createSimulationJobRequests = std::move(value); }

    /**
     * <p>A list of simulation job requests to create in the batch.</p>
     */
    inline StartSimulationJobBatchRequest& WithCreateSimulationJobRequests(const Aws::Vector<SimulationJobRequest>& value) { SetCreateSimulationJobRequests(value); return *this;}

    /**
     * <p>A list of simulation job requests to create in the batch.</p>
     */
    inline StartSimulationJobBatchRequest& WithCreateSimulationJobRequests(Aws::Vector<SimulationJobRequest>&& value) { SetCreateSimulationJobRequests(std::move(value)); return *this;}

    /**
     * <p>A list of simulation job requests to create in the batch.</p>
     */
    inline StartSimulationJobBatchRequest& AddCreateSimulationJobRequests(const SimulationJobRequest& value) { m_createSimulationJobRequestsHasBeenSet = true; m_createSimulationJobRequests.push_back(value); return *this; }

    /**
     * <p>A list of simulation job requests to create in the batch.</p>
     */
    inline StartSimulationJobBatchRequest& AddCreateSimulationJobRequests(SimulationJobRequest&& value) { m_createSimulationJobRequestsHasBeenSet = true; m_createSimulationJobRequests.push_back(std::move(value)); return *this; }


    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline StartSimulationJobBatchRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline StartSimulationJobBatchRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline StartSimulationJobBatchRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline StartSimulationJobBatchRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline StartSimulationJobBatchRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline StartSimulationJobBatchRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline StartSimulationJobBatchRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline StartSimulationJobBatchRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline StartSimulationJobBatchRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    BatchPolicy m_batchPolicy;
    bool m_batchPolicyHasBeenSet = false;

    Aws::Vector<SimulationJobRequest> m_createSimulationJobRequests;
    bool m_createSimulationJobRequestsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
