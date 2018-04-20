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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/EC2InstanceDetails.h>
#include <aws/ce/model/RDSInstanceDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Details about the instances that AWS recommends that you
   * purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/InstanceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API InstanceDetails
  {
  public:
    InstanceDetails();
    InstanceDetails(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceDetails& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The EC2 instances that AWS recommends that you purchase.</p>
     */
    inline const EC2InstanceDetails& GetEC2InstanceDetails() const{ return m_eC2InstanceDetails; }

    /**
     * <p>The EC2 instances that AWS recommends that you purchase.</p>
     */
    inline void SetEC2InstanceDetails(const EC2InstanceDetails& value) { m_eC2InstanceDetailsHasBeenSet = true; m_eC2InstanceDetails = value; }

    /**
     * <p>The EC2 instances that AWS recommends that you purchase.</p>
     */
    inline void SetEC2InstanceDetails(EC2InstanceDetails&& value) { m_eC2InstanceDetailsHasBeenSet = true; m_eC2InstanceDetails = std::move(value); }

    /**
     * <p>The EC2 instances that AWS recommends that you purchase.</p>
     */
    inline InstanceDetails& WithEC2InstanceDetails(const EC2InstanceDetails& value) { SetEC2InstanceDetails(value); return *this;}

    /**
     * <p>The EC2 instances that AWS recommends that you purchase.</p>
     */
    inline InstanceDetails& WithEC2InstanceDetails(EC2InstanceDetails&& value) { SetEC2InstanceDetails(std::move(value)); return *this;}


    /**
     * <p>The RDS instances that AWS recommends that you purchase.</p>
     */
    inline const RDSInstanceDetails& GetRDSInstanceDetails() const{ return m_rDSInstanceDetails; }

    /**
     * <p>The RDS instances that AWS recommends that you purchase.</p>
     */
    inline void SetRDSInstanceDetails(const RDSInstanceDetails& value) { m_rDSInstanceDetailsHasBeenSet = true; m_rDSInstanceDetails = value; }

    /**
     * <p>The RDS instances that AWS recommends that you purchase.</p>
     */
    inline void SetRDSInstanceDetails(RDSInstanceDetails&& value) { m_rDSInstanceDetailsHasBeenSet = true; m_rDSInstanceDetails = std::move(value); }

    /**
     * <p>The RDS instances that AWS recommends that you purchase.</p>
     */
    inline InstanceDetails& WithRDSInstanceDetails(const RDSInstanceDetails& value) { SetRDSInstanceDetails(value); return *this;}

    /**
     * <p>The RDS instances that AWS recommends that you purchase.</p>
     */
    inline InstanceDetails& WithRDSInstanceDetails(RDSInstanceDetails&& value) { SetRDSInstanceDetails(std::move(value)); return *this;}

  private:

    EC2InstanceDetails m_eC2InstanceDetails;
    bool m_eC2InstanceDetailsHasBeenSet;

    RDSInstanceDetails m_rDSInstanceDetails;
    bool m_rDSInstanceDetailsHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
