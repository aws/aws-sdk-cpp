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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SourceIpConfig.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A single private workforce, which is automatically created when you create
   * your first private work team. You can create one private work force in each AWS
   * Region. By default, any workforce-related API operation used in a specific
   * region will apply to the workforce created in that region. To learn how to
   * create a private workforce, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
   * a Private Workforce</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Workforce">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API Workforce
  {
  public:
    Workforce();
    Workforce(Aws::Utils::Json::JsonView jsonValue);
    Workforce& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline Workforce& WithWorkforceName(const Aws::String& value) { SetWorkforceName(value); return *this;}

    /**
     * <p>The name of the private workforce whose access you want to restrict.
     * <code>WorkforceName</code> is automatically set to <code>default</code> when a
     * workforce is created and cannot be modified. </p>
     */
    inline Workforce& WithWorkforceName(Aws::String&& value) { SetWorkforceName(std::move(value)); return *this;}

    /**
     * <p>The name of the private workforce whose access you want to restrict.
     * <code>WorkforceName</code> is automatically set to <code>default</code> when a
     * workforce is created and cannot be modified. </p>
     */
    inline Workforce& WithWorkforceName(const char* value) { SetWorkforceName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the private workforce.</p>
     */
    inline const Aws::String& GetWorkforceArn() const{ return m_workforceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the private workforce.</p>
     */
    inline bool WorkforceArnHasBeenSet() const { return m_workforceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the private workforce.</p>
     */
    inline void SetWorkforceArn(const Aws::String& value) { m_workforceArnHasBeenSet = true; m_workforceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the private workforce.</p>
     */
    inline void SetWorkforceArn(Aws::String&& value) { m_workforceArnHasBeenSet = true; m_workforceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the private workforce.</p>
     */
    inline void SetWorkforceArn(const char* value) { m_workforceArnHasBeenSet = true; m_workforceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the private workforce.</p>
     */
    inline Workforce& WithWorkforceArn(const Aws::String& value) { SetWorkforceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the private workforce.</p>
     */
    inline Workforce& WithWorkforceArn(Aws::String&& value) { SetWorkforceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the private workforce.</p>
     */
    inline Workforce& WithWorkforceArn(const char* value) { SetWorkforceArn(value); return *this;}


    /**
     * <p>The most recent date that was used to successfully add one or more IP address
     * ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to a private workforce's allow list.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The most recent date that was used to successfully add one or more IP address
     * ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to a private workforce's allow list.</p>
     */
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }

    /**
     * <p>The most recent date that was used to successfully add one or more IP address
     * ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to a private workforce's allow list.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }

    /**
     * <p>The most recent date that was used to successfully add one or more IP address
     * ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to a private workforce's allow list.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The most recent date that was used to successfully add one or more IP address
     * ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to a private workforce's allow list.</p>
     */
    inline Workforce& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The most recent date that was used to successfully add one or more IP address
     * ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to a private workforce's allow list.</p>
     */
    inline Workforce& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>A list of one to four IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to be added to the workforce allow list.</p>
     */
    inline const SourceIpConfig& GetSourceIpConfig() const{ return m_sourceIpConfig; }

    /**
     * <p>A list of one to four IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to be added to the workforce allow list.</p>
     */
    inline bool SourceIpConfigHasBeenSet() const { return m_sourceIpConfigHasBeenSet; }

    /**
     * <p>A list of one to four IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to be added to the workforce allow list.</p>
     */
    inline void SetSourceIpConfig(const SourceIpConfig& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = value; }

    /**
     * <p>A list of one to four IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to be added to the workforce allow list.</p>
     */
    inline void SetSourceIpConfig(SourceIpConfig&& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = std::move(value); }

    /**
     * <p>A list of one to four IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to be added to the workforce allow list.</p>
     */
    inline Workforce& WithSourceIpConfig(const SourceIpConfig& value) { SetSourceIpConfig(value); return *this;}

    /**
     * <p>A list of one to four IP address ranges (<a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>)
     * to be added to the workforce allow list.</p>
     */
    inline Workforce& WithSourceIpConfig(SourceIpConfig&& value) { SetSourceIpConfig(std::move(value)); return *this;}

  private:

    Aws::String m_workforceName;
    bool m_workforceNameHasBeenSet;

    Aws::String m_workforceArn;
    bool m_workforceArnHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet;

    SourceIpConfig m_sourceIpConfig;
    bool m_sourceIpConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
