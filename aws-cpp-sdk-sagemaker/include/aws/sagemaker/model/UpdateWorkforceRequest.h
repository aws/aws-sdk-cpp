/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SourceIpConfig.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API UpdateWorkforceRequest : public SageMakerRequest
  {
  public:
    UpdateWorkforceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkforce"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the private workforce whose access you want to restrict.
     * <code>WorkforceName</code> is automatically set to <code>default</code> when a
     * workforce is created and cannot be modified. </p>
     */
    inline const Aws::String& GetWorkforceName() const{ return m_workforceName; }

    /**
     * <p>The name of the private workforce whose access you want to restrict.
     * <code>WorkforceName</code> is automatically set to <code>default</code> when a
     * workforce is created and cannot be modified. </p>
     */
    inline bool WorkforceNameHasBeenSet() const { return m_workforceNameHasBeenSet; }

    /**
     * <p>The name of the private workforce whose access you want to restrict.
     * <code>WorkforceName</code> is automatically set to <code>default</code> when a
     * workforce is created and cannot be modified. </p>
     */
    inline void SetWorkforceName(const Aws::String& value) { m_workforceNameHasBeenSet = true; m_workforceName = value; }

    /**
     * <p>The name of the private workforce whose access you want to restrict.
     * <code>WorkforceName</code> is automatically set to <code>default</code> when a
     * workforce is created and cannot be modified. </p>
     */
    inline void SetWorkforceName(Aws::String&& value) { m_workforceNameHasBeenSet = true; m_workforceName = std::move(value); }

    /**
     * <p>The name of the private workforce whose access you want to restrict.
     * <code>WorkforceName</code> is automatically set to <code>default</code> when a
     * workforce is created and cannot be modified. </p>
     */
    inline void SetWorkforceName(const char* value) { m_workforceNameHasBeenSet = true; m_workforceName.assign(value); }

    /**
     * <p>The name of the private workforce whose access you want to restrict.
     * <code>WorkforceName</code> is automatically set to <code>default</code> when a
     * workforce is created and cannot be modified. </p>
     */
    inline UpdateWorkforceRequest& WithWorkforceName(const Aws::String& value) { SetWorkforceName(value); return *this;}

    /**
     * <p>The name of the private workforce whose access you want to restrict.
     * <code>WorkforceName</code> is automatically set to <code>default</code> when a
     * workforce is created and cannot be modified. </p>
     */
    inline UpdateWorkforceRequest& WithWorkforceName(Aws::String&& value) { SetWorkforceName(std::move(value)); return *this;}

    /**
     * <p>The name of the private workforce whose access you want to restrict.
     * <code>WorkforceName</code> is automatically set to <code>default</code> when a
     * workforce is created and cannot be modified. </p>
     */
    inline UpdateWorkforceRequest& WithWorkforceName(const char* value) { SetWorkforceName(value); return *this;}


    /**
     * <p>A list of one to four worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum:
     * Four CIDR values</p>
     */
    inline const SourceIpConfig& GetSourceIpConfig() const{ return m_sourceIpConfig; }

    /**
     * <p>A list of one to four worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum:
     * Four CIDR values</p>
     */
    inline bool SourceIpConfigHasBeenSet() const { return m_sourceIpConfigHasBeenSet; }

    /**
     * <p>A list of one to four worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum:
     * Four CIDR values</p>
     */
    inline void SetSourceIpConfig(const SourceIpConfig& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = value; }

    /**
     * <p>A list of one to four worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum:
     * Four CIDR values</p>
     */
    inline void SetSourceIpConfig(SourceIpConfig&& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = std::move(value); }

    /**
     * <p>A list of one to four worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum:
     * Four CIDR values</p>
     */
    inline UpdateWorkforceRequest& WithSourceIpConfig(const SourceIpConfig& value) { SetSourceIpConfig(value); return *this;}

    /**
     * <p>A list of one to four worker IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * that can be used to access tasks assigned to this workforce.</p> <p>Maximum:
     * Four CIDR values</p>
     */
    inline UpdateWorkforceRequest& WithSourceIpConfig(SourceIpConfig&& value) { SetSourceIpConfig(std::move(value)); return *this;}

  private:

    Aws::String m_workforceName;
    bool m_workforceNameHasBeenSet;

    SourceIpConfig m_sourceIpConfig;
    bool m_sourceIpConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
