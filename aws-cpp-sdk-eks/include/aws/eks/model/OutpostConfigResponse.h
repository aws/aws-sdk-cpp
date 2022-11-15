/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing the configuration of your local Amazon EKS cluster on
   * an Amazon Web Services Outpost. This API isn't available for Amazon EKS clusters
   * on the Amazon Web Services cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/OutpostConfigResponse">AWS
   * API Reference</a></p>
   */
  class AWS_EKS_API OutpostConfigResponse
  {
  public:
    OutpostConfigResponse();
    OutpostConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    OutpostConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Outpost that you specified for use with your local Amazon EKS
     * cluster on Outposts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutpostArns() const{ return m_outpostArns; }

    /**
     * <p>The ARN of the Outpost that you specified for use with your local Amazon EKS
     * cluster on Outposts.</p>
     */
    inline bool OutpostArnsHasBeenSet() const { return m_outpostArnsHasBeenSet; }

    /**
     * <p>The ARN of the Outpost that you specified for use with your local Amazon EKS
     * cluster on Outposts.</p>
     */
    inline void SetOutpostArns(const Aws::Vector<Aws::String>& value) { m_outpostArnsHasBeenSet = true; m_outpostArns = value; }

    /**
     * <p>The ARN of the Outpost that you specified for use with your local Amazon EKS
     * cluster on Outposts.</p>
     */
    inline void SetOutpostArns(Aws::Vector<Aws::String>&& value) { m_outpostArnsHasBeenSet = true; m_outpostArns = std::move(value); }

    /**
     * <p>The ARN of the Outpost that you specified for use with your local Amazon EKS
     * cluster on Outposts.</p>
     */
    inline OutpostConfigResponse& WithOutpostArns(const Aws::Vector<Aws::String>& value) { SetOutpostArns(value); return *this;}

    /**
     * <p>The ARN of the Outpost that you specified for use with your local Amazon EKS
     * cluster on Outposts.</p>
     */
    inline OutpostConfigResponse& WithOutpostArns(Aws::Vector<Aws::String>&& value) { SetOutpostArns(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Outpost that you specified for use with your local Amazon EKS
     * cluster on Outposts.</p>
     */
    inline OutpostConfigResponse& AddOutpostArns(const Aws::String& value) { m_outpostArnsHasBeenSet = true; m_outpostArns.push_back(value); return *this; }

    /**
     * <p>The ARN of the Outpost that you specified for use with your local Amazon EKS
     * cluster on Outposts.</p>
     */
    inline OutpostConfigResponse& AddOutpostArns(Aws::String&& value) { m_outpostArnsHasBeenSet = true; m_outpostArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN of the Outpost that you specified for use with your local Amazon EKS
     * cluster on Outposts.</p>
     */
    inline OutpostConfigResponse& AddOutpostArns(const char* value) { m_outpostArnsHasBeenSet = true; m_outpostArns.push_back(value); return *this; }


    /**
     * <p>The Amazon EC2 instance type used for the control plane. The instance type is
     * the same for all control plane instances.</p>
     */
    inline const Aws::String& GetControlPlaneInstanceType() const{ return m_controlPlaneInstanceType; }

    /**
     * <p>The Amazon EC2 instance type used for the control plane. The instance type is
     * the same for all control plane instances.</p>
     */
    inline bool ControlPlaneInstanceTypeHasBeenSet() const { return m_controlPlaneInstanceTypeHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance type used for the control plane. The instance type is
     * the same for all control plane instances.</p>
     */
    inline void SetControlPlaneInstanceType(const Aws::String& value) { m_controlPlaneInstanceTypeHasBeenSet = true; m_controlPlaneInstanceType = value; }

    /**
     * <p>The Amazon EC2 instance type used for the control plane. The instance type is
     * the same for all control plane instances.</p>
     */
    inline void SetControlPlaneInstanceType(Aws::String&& value) { m_controlPlaneInstanceTypeHasBeenSet = true; m_controlPlaneInstanceType = std::move(value); }

    /**
     * <p>The Amazon EC2 instance type used for the control plane. The instance type is
     * the same for all control plane instances.</p>
     */
    inline void SetControlPlaneInstanceType(const char* value) { m_controlPlaneInstanceTypeHasBeenSet = true; m_controlPlaneInstanceType.assign(value); }

    /**
     * <p>The Amazon EC2 instance type used for the control plane. The instance type is
     * the same for all control plane instances.</p>
     */
    inline OutpostConfigResponse& WithControlPlaneInstanceType(const Aws::String& value) { SetControlPlaneInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 instance type used for the control plane. The instance type is
     * the same for all control plane instances.</p>
     */
    inline OutpostConfigResponse& WithControlPlaneInstanceType(Aws::String&& value) { SetControlPlaneInstanceType(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 instance type used for the control plane. The instance type is
     * the same for all control plane instances.</p>
     */
    inline OutpostConfigResponse& WithControlPlaneInstanceType(const char* value) { SetControlPlaneInstanceType(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_outpostArns;
    bool m_outpostArnsHasBeenSet = false;

    Aws::String m_controlPlaneInstanceType;
    bool m_controlPlaneInstanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
