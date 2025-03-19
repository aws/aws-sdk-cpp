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
    AWS_ELASTICACHE_API SubnetOutpost() = default;
    AWS_ELASTICACHE_API SubnetOutpost(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API SubnetOutpost& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The outpost ARN of the subnet.</p>
     */
    inline const Aws::String& GetSubnetOutpostArn() const { return m_subnetOutpostArn; }
    inline bool SubnetOutpostArnHasBeenSet() const { return m_subnetOutpostArnHasBeenSet; }
    template<typename SubnetOutpostArnT = Aws::String>
    void SetSubnetOutpostArn(SubnetOutpostArnT&& value) { m_subnetOutpostArnHasBeenSet = true; m_subnetOutpostArn = std::forward<SubnetOutpostArnT>(value); }
    template<typename SubnetOutpostArnT = Aws::String>
    SubnetOutpost& WithSubnetOutpostArn(SubnetOutpostArnT&& value) { SetSubnetOutpostArn(std::forward<SubnetOutpostArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subnetOutpostArn;
    bool m_subnetOutpostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
