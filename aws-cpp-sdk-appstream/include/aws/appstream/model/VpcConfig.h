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
#include <aws/appstream/AppStream_EXPORTS.h>
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
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>VPC configuration information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/VpcConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API VpcConfig
  {
  public:
    VpcConfig();
    VpcConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    VpcConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The list of subnets to which a network interface is established from the
     * fleet instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The list of subnets to which a network interface is established from the
     * fleet instance.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The list of subnets to which a network interface is established from the
     * fleet instance.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The list of subnets to which a network interface is established from the
     * fleet instance.</p>
     */
    inline VpcConfig& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The list of subnets to which a network interface is established from the
     * fleet instance.</p>
     */
    inline VpcConfig& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The list of subnets to which a network interface is established from the
     * fleet instance.</p>
     */
    inline VpcConfig& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The list of subnets to which a network interface is established from the
     * fleet instance.</p>
     */
    inline VpcConfig& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of subnets to which a network interface is established from the
     * fleet instance.</p>
     */
    inline VpcConfig& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
