/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class MoveCapacityReservationInstancesRequest : public EC2Request
  {
  public:
    AWS_EC2_API MoveCapacityReservationInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MoveCapacityReservationInstances"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline MoveCapacityReservationInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensure
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline MoveCapacityReservationInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline MoveCapacityReservationInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline MoveCapacityReservationInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Capacity Reservation from which you want to move capacity.
     * </p>
     */
    inline const Aws::String& GetSourceCapacityReservationId() const{ return m_sourceCapacityReservationId; }
    inline bool SourceCapacityReservationIdHasBeenSet() const { return m_sourceCapacityReservationIdHasBeenSet; }
    inline void SetSourceCapacityReservationId(const Aws::String& value) { m_sourceCapacityReservationIdHasBeenSet = true; m_sourceCapacityReservationId = value; }
    inline void SetSourceCapacityReservationId(Aws::String&& value) { m_sourceCapacityReservationIdHasBeenSet = true; m_sourceCapacityReservationId = std::move(value); }
    inline void SetSourceCapacityReservationId(const char* value) { m_sourceCapacityReservationIdHasBeenSet = true; m_sourceCapacityReservationId.assign(value); }
    inline MoveCapacityReservationInstancesRequest& WithSourceCapacityReservationId(const Aws::String& value) { SetSourceCapacityReservationId(value); return *this;}
    inline MoveCapacityReservationInstancesRequest& WithSourceCapacityReservationId(Aws::String&& value) { SetSourceCapacityReservationId(std::move(value)); return *this;}
    inline MoveCapacityReservationInstancesRequest& WithSourceCapacityReservationId(const char* value) { SetSourceCapacityReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Capacity Reservation that you want to move capacity into. </p>
     */
    inline const Aws::String& GetDestinationCapacityReservationId() const{ return m_destinationCapacityReservationId; }
    inline bool DestinationCapacityReservationIdHasBeenSet() const { return m_destinationCapacityReservationIdHasBeenSet; }
    inline void SetDestinationCapacityReservationId(const Aws::String& value) { m_destinationCapacityReservationIdHasBeenSet = true; m_destinationCapacityReservationId = value; }
    inline void SetDestinationCapacityReservationId(Aws::String&& value) { m_destinationCapacityReservationIdHasBeenSet = true; m_destinationCapacityReservationId = std::move(value); }
    inline void SetDestinationCapacityReservationId(const char* value) { m_destinationCapacityReservationIdHasBeenSet = true; m_destinationCapacityReservationId.assign(value); }
    inline MoveCapacityReservationInstancesRequest& WithDestinationCapacityReservationId(const Aws::String& value) { SetDestinationCapacityReservationId(value); return *this;}
    inline MoveCapacityReservationInstancesRequest& WithDestinationCapacityReservationId(Aws::String&& value) { SetDestinationCapacityReservationId(std::move(value)); return *this;}
    inline MoveCapacityReservationInstancesRequest& WithDestinationCapacityReservationId(const char* value) { SetDestinationCapacityReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances that you want to move from the source Capacity
     * Reservation. </p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline MoveCapacityReservationInstancesRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_sourceCapacityReservationId;
    bool m_sourceCapacityReservationIdHasBeenSet = false;

    Aws::String m_destinationCapacityReservationId;
    bool m_destinationCapacityReservationIdHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
