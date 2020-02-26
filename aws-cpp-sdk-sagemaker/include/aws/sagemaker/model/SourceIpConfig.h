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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A list of IP address ranges (<a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>).
   * Used to create an allow list of IP addresses for a private workforce. For more
   * information, see .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SourceIpConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API SourceIpConfig
  {
  public:
    SourceIpConfig();
    SourceIpConfig(Aws::Utils::Json::JsonView jsonValue);
    SourceIpConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of one to four <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Classless
     * Inter-Domain Routing</a> (CIDR) values.</p> <p>Maximum: Four CIDR values</p>
     * <note> <p>The following Length Constraints apply to individual CIDR values in
     * the CIDR value list.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const{ return m_cidrs; }

    /**
     * <p>A list of one to four <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Classless
     * Inter-Domain Routing</a> (CIDR) values.</p> <p>Maximum: Four CIDR values</p>
     * <note> <p>The following Length Constraints apply to individual CIDR values in
     * the CIDR value list.</p> </note>
     */
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }

    /**
     * <p>A list of one to four <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Classless
     * Inter-Domain Routing</a> (CIDR) values.</p> <p>Maximum: Four CIDR values</p>
     * <note> <p>The following Length Constraints apply to individual CIDR values in
     * the CIDR value list.</p> </note>
     */
    inline void SetCidrs(const Aws::Vector<Aws::String>& value) { m_cidrsHasBeenSet = true; m_cidrs = value; }

    /**
     * <p>A list of one to four <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Classless
     * Inter-Domain Routing</a> (CIDR) values.</p> <p>Maximum: Four CIDR values</p>
     * <note> <p>The following Length Constraints apply to individual CIDR values in
     * the CIDR value list.</p> </note>
     */
    inline void SetCidrs(Aws::Vector<Aws::String>&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::move(value); }

    /**
     * <p>A list of one to four <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Classless
     * Inter-Domain Routing</a> (CIDR) values.</p> <p>Maximum: Four CIDR values</p>
     * <note> <p>The following Length Constraints apply to individual CIDR values in
     * the CIDR value list.</p> </note>
     */
    inline SourceIpConfig& WithCidrs(const Aws::Vector<Aws::String>& value) { SetCidrs(value); return *this;}

    /**
     * <p>A list of one to four <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Classless
     * Inter-Domain Routing</a> (CIDR) values.</p> <p>Maximum: Four CIDR values</p>
     * <note> <p>The following Length Constraints apply to individual CIDR values in
     * the CIDR value list.</p> </note>
     */
    inline SourceIpConfig& WithCidrs(Aws::Vector<Aws::String>&& value) { SetCidrs(std::move(value)); return *this;}

    /**
     * <p>A list of one to four <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Classless
     * Inter-Domain Routing</a> (CIDR) values.</p> <p>Maximum: Four CIDR values</p>
     * <note> <p>The following Length Constraints apply to individual CIDR values in
     * the CIDR value list.</p> </note>
     */
    inline SourceIpConfig& AddCidrs(const Aws::String& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }

    /**
     * <p>A list of one to four <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Classless
     * Inter-Domain Routing</a> (CIDR) values.</p> <p>Maximum: Four CIDR values</p>
     * <note> <p>The following Length Constraints apply to individual CIDR values in
     * the CIDR value list.</p> </note>
     */
    inline SourceIpConfig& AddCidrs(Aws::String&& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of one to four <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">Classless
     * Inter-Domain Routing</a> (CIDR) values.</p> <p>Maximum: Four CIDR values</p>
     * <note> <p>The following Length Constraints apply to individual CIDR values in
     * the CIDR value list.</p> </note>
     */
    inline SourceIpConfig& AddCidrs(const char* value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
