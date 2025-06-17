/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/guardduty/model/ClusterStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the Amazon EKS cluster involved in a GuardDuty
   * finding, including cluster identification, status, and network
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EksCluster">AWS
   * API Reference</a></p>
   */
  class EksCluster
  {
  public:
    AWS_GUARDDUTY_API EksCluster() = default;
    AWS_GUARDDUTY_API EksCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API EksCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the Amazon EKS
     * cluster involved in the finding.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EksCluster& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating when the Amazon EKS cluster was created, in UTC
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    EksCluster& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Amazon EKS cluster.</p>
     */
    inline ClusterStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ClusterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EksCluster& WithStatus(ClusterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Virtual Private Cloud (Amazon VPC) associated with the
     * Amazon EKS cluster.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    EksCluster& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of unique identifiers for the Amazon EC2 instances that serve as
     * worker nodes in the Amazon EKS cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2InstanceUids() const { return m_ec2InstanceUids; }
    inline bool Ec2InstanceUidsHasBeenSet() const { return m_ec2InstanceUidsHasBeenSet; }
    template<typename Ec2InstanceUidsT = Aws::Vector<Aws::String>>
    void SetEc2InstanceUids(Ec2InstanceUidsT&& value) { m_ec2InstanceUidsHasBeenSet = true; m_ec2InstanceUids = std::forward<Ec2InstanceUidsT>(value); }
    template<typename Ec2InstanceUidsT = Aws::Vector<Aws::String>>
    EksCluster& WithEc2InstanceUids(Ec2InstanceUidsT&& value) { SetEc2InstanceUids(std::forward<Ec2InstanceUidsT>(value)); return *this;}
    template<typename Ec2InstanceUidsT = Aws::String>
    EksCluster& AddEc2InstanceUids(Ec2InstanceUidsT&& value) { m_ec2InstanceUidsHasBeenSet = true; m_ec2InstanceUids.emplace_back(std::forward<Ec2InstanceUidsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ClusterStatus m_status{ClusterStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_ec2InstanceUids;
    bool m_ec2InstanceUidsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
