/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The list of instance types with the specified instance
   * attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceTypeInfoFromInstanceRequirements">AWS
   * API Reference</a></p>
   */
  class InstanceTypeInfoFromInstanceRequirements
  {
  public:
    AWS_EC2_API InstanceTypeInfoFromInstanceRequirements();
    AWS_EC2_API InstanceTypeInfoFromInstanceRequirements(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceTypeInfoFromInstanceRequirements& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The matching instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The matching instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The matching instance type.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The matching instance type.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The matching instance type.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The matching instance type.</p>
     */
    inline InstanceTypeInfoFromInstanceRequirements& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The matching instance type.</p>
     */
    inline InstanceTypeInfoFromInstanceRequirements& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The matching instance type.</p>
     */
    inline InstanceTypeInfoFromInstanceRequirements& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
