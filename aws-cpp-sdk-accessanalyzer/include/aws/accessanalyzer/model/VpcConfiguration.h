/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p> The proposed virtual private cloud (VPC) configuration for the Amazon S3
   * access point. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_VpcConfiguration.html">VpcConfiguration</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/VpcConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API VpcConfiguration
  {
  public:
    VpcConfiguration();
    VpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    VpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline VpcConfiguration& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline VpcConfiguration& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p> If this field is specified, this access point will only allow connections
     * from the specified VPC ID. </p>
     */
    inline VpcConfiguration& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
