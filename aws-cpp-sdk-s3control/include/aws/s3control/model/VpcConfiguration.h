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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>The Virtual Private Cloud (VPC) configuration for an access
   * point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/VpcConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API VpcConfiguration
  {
  public:
    VpcConfiguration();
    VpcConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpcConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>If this field is specified, this access point will only allow connections
     * from the specified VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>If this field is specified, this access point will only allow connections
     * from the specified VPC ID.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>If this field is specified, this access point will only allow connections
     * from the specified VPC ID.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>If this field is specified, this access point will only allow connections
     * from the specified VPC ID.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>If this field is specified, this access point will only allow connections
     * from the specified VPC ID.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>If this field is specified, this access point will only allow connections
     * from the specified VPC ID.</p>
     */
    inline VpcConfiguration& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>If this field is specified, this access point will only allow connections
     * from the specified VPC ID.</p>
     */
    inline VpcConfiguration& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>If this field is specified, this access point will only allow connections
     * from the specified VPC ID.</p>
     */
    inline VpcConfiguration& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
