/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
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
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The ID of the outpost subnet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/SubnetOutpost">AWS
   * API Reference</a></p>
   */
  class SubnetOutpost
  {
  public:
    AWS_ELASTICACHE_API SubnetOutpost();
    AWS_ELASTICACHE_API SubnetOutpost(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API SubnetOutpost& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The outpost ARN of the subnet.</p>
     */
    inline const Aws::String& GetSubnetOutpostArn() const{ return m_subnetOutpostArn; }
    inline bool SubnetOutpostArnHasBeenSet() const { return m_subnetOutpostArnHasBeenSet; }
    inline void SetSubnetOutpostArn(const Aws::String& value) { m_subnetOutpostArnHasBeenSet = true; m_subnetOutpostArn = value; }
    inline void SetSubnetOutpostArn(Aws::String&& value) { m_subnetOutpostArnHasBeenSet = true; m_subnetOutpostArn = std::move(value); }
    inline void SetSubnetOutpostArn(const char* value) { m_subnetOutpostArnHasBeenSet = true; m_subnetOutpostArn.assign(value); }
    inline SubnetOutpost& WithSubnetOutpostArn(const Aws::String& value) { SetSubnetOutpostArn(value); return *this;}
    inline SubnetOutpost& WithSubnetOutpostArn(Aws::String&& value) { SetSubnetOutpostArn(std::move(value)); return *this;}
    inline SubnetOutpost& WithSubnetOutpostArn(const char* value) { SetSubnetOutpostArn(value); return *this;}
    ///@}
  private:

    Aws::String m_subnetOutpostArn;
    bool m_subnetOutpostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
