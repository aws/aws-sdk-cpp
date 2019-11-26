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
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>VPC connection properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VpcConnectionProperties">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API VpcConnectionProperties
  {
  public:
    VpcConnectionProperties();
    VpcConnectionProperties(Aws::Utils::Json::JsonView jsonValue);
    VpcConnectionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline const Aws::String& GetVpcConnectionArn() const{ return m_vpcConnectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline bool VpcConnectionArnHasBeenSet() const { return m_vpcConnectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline void SetVpcConnectionArn(const Aws::String& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline void SetVpcConnectionArn(Aws::String&& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline void SetVpcConnectionArn(const char* value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline VpcConnectionProperties& WithVpcConnectionArn(const Aws::String& value) { SetVpcConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline VpcConnectionProperties& WithVpcConnectionArn(Aws::String&& value) { SetVpcConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline VpcConnectionProperties& WithVpcConnectionArn(const char* value) { SetVpcConnectionArn(value); return *this;}

  private:

    Aws::String m_vpcConnectionArn;
    bool m_vpcConnectionArnHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
