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
   * <p>Describes an IPv4 CIDR block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CidrBlock">AWS API
   * Reference</a></p>
   */
  class CidrBlock
  {
  public:
    AWS_EC2_API CidrBlock();
    AWS_EC2_API CidrBlock(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CidrBlock& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline CidrBlock& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline CidrBlock& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 CIDR block.</p>
     */
    inline CidrBlock& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}

  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
