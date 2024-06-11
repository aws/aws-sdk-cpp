/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/finspace/model/KxNodeStatus.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>A structure that stores metadata for a kdb node.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxNode">AWS
   * API Reference</a></p>
   */
  class KxNode
  {
  public:
    AWS_FINSPACE_API KxNode();
    AWS_FINSPACE_API KxNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the node.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }
    inline KxNode& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}
    inline KxNode& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}
    inline KxNode& WithNodeId(const char* value) { SetNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the availability zones where subnets for the environment
     * are created.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline KxNode& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline KxNode& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline KxNode& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when a particular node is started. The value is determined as epoch
     * time in milliseconds. For example, the value for Monday, November 1, 2021
     * 12:00:00 PM UTC is specified as 1635768000000.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const{ return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    inline void SetLaunchTime(const Aws::Utils::DateTime& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }
    inline void SetLaunchTime(Aws::Utils::DateTime&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::move(value); }
    inline KxNode& WithLaunchTime(const Aws::Utils::DateTime& value) { SetLaunchTime(value); return *this;}
    inline KxNode& WithLaunchTime(Aws::Utils::DateTime&& value) { SetLaunchTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the status of the cluster nodes. </p> <ul> <li> <p>
     * <code>RUNNING</code> – The node is actively serving.</p> </li> <li> <p>
     * <code>PROVISIONING</code> – The node is being prepared.</p> </li> </ul>
     */
    inline const KxNodeStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const KxNodeStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(KxNodeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline KxNode& WithStatus(const KxNodeStatus& value) { SetStatus(value); return *this;}
    inline KxNode& WithStatus(KxNodeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime;
    bool m_launchTimeHasBeenSet = false;

    KxNodeStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
