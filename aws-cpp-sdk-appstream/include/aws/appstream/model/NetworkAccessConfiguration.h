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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the network details of the fleet or image builder
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/NetworkAccessConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API NetworkAccessConfiguration
  {
  public:
    NetworkAccessConfiguration();
    NetworkAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NetworkAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The private IP address of the elastic network interface that is attached to
     * instances in your VPC.</p>
     */
    inline const Aws::String& GetEniPrivateIpAddress() const{ return m_eniPrivateIpAddress; }

    /**
     * <p>The private IP address of the elastic network interface that is attached to
     * instances in your VPC.</p>
     */
    inline bool EniPrivateIpAddressHasBeenSet() const { return m_eniPrivateIpAddressHasBeenSet; }

    /**
     * <p>The private IP address of the elastic network interface that is attached to
     * instances in your VPC.</p>
     */
    inline void SetEniPrivateIpAddress(const Aws::String& value) { m_eniPrivateIpAddressHasBeenSet = true; m_eniPrivateIpAddress = value; }

    /**
     * <p>The private IP address of the elastic network interface that is attached to
     * instances in your VPC.</p>
     */
    inline void SetEniPrivateIpAddress(Aws::String&& value) { m_eniPrivateIpAddressHasBeenSet = true; m_eniPrivateIpAddress = std::move(value); }

    /**
     * <p>The private IP address of the elastic network interface that is attached to
     * instances in your VPC.</p>
     */
    inline void SetEniPrivateIpAddress(const char* value) { m_eniPrivateIpAddressHasBeenSet = true; m_eniPrivateIpAddress.assign(value); }

    /**
     * <p>The private IP address of the elastic network interface that is attached to
     * instances in your VPC.</p>
     */
    inline NetworkAccessConfiguration& WithEniPrivateIpAddress(const Aws::String& value) { SetEniPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IP address of the elastic network interface that is attached to
     * instances in your VPC.</p>
     */
    inline NetworkAccessConfiguration& WithEniPrivateIpAddress(Aws::String&& value) { SetEniPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IP address of the elastic network interface that is attached to
     * instances in your VPC.</p>
     */
    inline NetworkAccessConfiguration& WithEniPrivateIpAddress(const char* value) { SetEniPrivateIpAddress(value); return *this;}


    /**
     * <p>The resource identifier of the elastic network interface that is attached to
     * instances in your VPC. All network interfaces have the eni-xxxxxxxx resource
     * identifier.</p>
     */
    inline const Aws::String& GetEniId() const{ return m_eniId; }

    /**
     * <p>The resource identifier of the elastic network interface that is attached to
     * instances in your VPC. All network interfaces have the eni-xxxxxxxx resource
     * identifier.</p>
     */
    inline bool EniIdHasBeenSet() const { return m_eniIdHasBeenSet; }

    /**
     * <p>The resource identifier of the elastic network interface that is attached to
     * instances in your VPC. All network interfaces have the eni-xxxxxxxx resource
     * identifier.</p>
     */
    inline void SetEniId(const Aws::String& value) { m_eniIdHasBeenSet = true; m_eniId = value; }

    /**
     * <p>The resource identifier of the elastic network interface that is attached to
     * instances in your VPC. All network interfaces have the eni-xxxxxxxx resource
     * identifier.</p>
     */
    inline void SetEniId(Aws::String&& value) { m_eniIdHasBeenSet = true; m_eniId = std::move(value); }

    /**
     * <p>The resource identifier of the elastic network interface that is attached to
     * instances in your VPC. All network interfaces have the eni-xxxxxxxx resource
     * identifier.</p>
     */
    inline void SetEniId(const char* value) { m_eniIdHasBeenSet = true; m_eniId.assign(value); }

    /**
     * <p>The resource identifier of the elastic network interface that is attached to
     * instances in your VPC. All network interfaces have the eni-xxxxxxxx resource
     * identifier.</p>
     */
    inline NetworkAccessConfiguration& WithEniId(const Aws::String& value) { SetEniId(value); return *this;}

    /**
     * <p>The resource identifier of the elastic network interface that is attached to
     * instances in your VPC. All network interfaces have the eni-xxxxxxxx resource
     * identifier.</p>
     */
    inline NetworkAccessConfiguration& WithEniId(Aws::String&& value) { SetEniId(std::move(value)); return *this;}

    /**
     * <p>The resource identifier of the elastic network interface that is attached to
     * instances in your VPC. All network interfaces have the eni-xxxxxxxx resource
     * identifier.</p>
     */
    inline NetworkAccessConfiguration& WithEniId(const char* value) { SetEniId(value); return *this;}

  private:

    Aws::String m_eniPrivateIpAddress;
    bool m_eniPrivateIpAddressHasBeenSet;

    Aws::String m_eniId;
    bool m_eniIdHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
