/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class ReplicateInstanceRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API ReplicateInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReplicateInstance"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance. You can provide the <code>InstanceId</code>, or the
     * entire ARN.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance. You can provide the <code>InstanceId</code>, or the
     * entire ARN.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance. You can provide the <code>InstanceId</code>, or the
     * entire ARN.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance. You can provide the <code>InstanceId</code>, or the
     * entire ARN.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance. You can provide the <code>InstanceId</code>, or the
     * entire ARN.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance. You can provide the <code>InstanceId</code>, or the
     * entire ARN.</p>
     */
    inline ReplicateInstanceRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance. You can provide the <code>InstanceId</code>, or the
     * entire ARN.</p>
     */
    inline ReplicateInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance. You can provide the <code>InstanceId</code>, or the
     * entire ARN.</p>
     */
    inline ReplicateInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region where to replicate the Amazon Connect
     * instance.</p>
     */
    inline const Aws::String& GetReplicaRegion() const{ return m_replicaRegion; }

    /**
     * <p>The Amazon Web Services Region where to replicate the Amazon Connect
     * instance.</p>
     */
    inline bool ReplicaRegionHasBeenSet() const { return m_replicaRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where to replicate the Amazon Connect
     * instance.</p>
     */
    inline void SetReplicaRegion(const Aws::String& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = value; }

    /**
     * <p>The Amazon Web Services Region where to replicate the Amazon Connect
     * instance.</p>
     */
    inline void SetReplicaRegion(Aws::String&& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where to replicate the Amazon Connect
     * instance.</p>
     */
    inline void SetReplicaRegion(const char* value) { m_replicaRegionHasBeenSet = true; m_replicaRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region where to replicate the Amazon Connect
     * instance.</p>
     */
    inline ReplicateInstanceRequest& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where to replicate the Amazon Connect
     * instance.</p>
     */
    inline ReplicateInstanceRequest& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where to replicate the Amazon Connect
     * instance.</p>
     */
    inline ReplicateInstanceRequest& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline ReplicateInstanceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline ReplicateInstanceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline ReplicateInstanceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The alias for the replicated instance. The <code>ReplicaAlias</code> must be
     * unique.</p>
     */
    inline const Aws::String& GetReplicaAlias() const{ return m_replicaAlias; }

    /**
     * <p>The alias for the replicated instance. The <code>ReplicaAlias</code> must be
     * unique.</p>
     */
    inline bool ReplicaAliasHasBeenSet() const { return m_replicaAliasHasBeenSet; }

    /**
     * <p>The alias for the replicated instance. The <code>ReplicaAlias</code> must be
     * unique.</p>
     */
    inline void SetReplicaAlias(const Aws::String& value) { m_replicaAliasHasBeenSet = true; m_replicaAlias = value; }

    /**
     * <p>The alias for the replicated instance. The <code>ReplicaAlias</code> must be
     * unique.</p>
     */
    inline void SetReplicaAlias(Aws::String&& value) { m_replicaAliasHasBeenSet = true; m_replicaAlias = std::move(value); }

    /**
     * <p>The alias for the replicated instance. The <code>ReplicaAlias</code> must be
     * unique.</p>
     */
    inline void SetReplicaAlias(const char* value) { m_replicaAliasHasBeenSet = true; m_replicaAlias.assign(value); }

    /**
     * <p>The alias for the replicated instance. The <code>ReplicaAlias</code> must be
     * unique.</p>
     */
    inline ReplicateInstanceRequest& WithReplicaAlias(const Aws::String& value) { SetReplicaAlias(value); return *this;}

    /**
     * <p>The alias for the replicated instance. The <code>ReplicaAlias</code> must be
     * unique.</p>
     */
    inline ReplicateInstanceRequest& WithReplicaAlias(Aws::String&& value) { SetReplicaAlias(std::move(value)); return *this;}

    /**
     * <p>The alias for the replicated instance. The <code>ReplicaAlias</code> must be
     * unique.</p>
     */
    inline ReplicateInstanceRequest& WithReplicaAlias(const char* value) { SetReplicaAlias(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_replicaRegion;
    bool m_replicaRegionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_replicaAlias;
    bool m_replicaAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
