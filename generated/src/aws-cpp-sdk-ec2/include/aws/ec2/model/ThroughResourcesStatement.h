/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ResourceStatement.h>
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
   * <p>Describes a through resource statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ThroughResourcesStatement">AWS
   * API Reference</a></p>
   */
  class ThroughResourcesStatement
  {
  public:
    AWS_EC2_API ThroughResourcesStatement() = default;
    AWS_EC2_API ThroughResourcesStatement(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ThroughResourcesStatement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The resource statement.</p>
     */
    inline const ResourceStatement& GetResourceStatement() const { return m_resourceStatement; }
    inline bool ResourceStatementHasBeenSet() const { return m_resourceStatementHasBeenSet; }
    template<typename ResourceStatementT = ResourceStatement>
    void SetResourceStatement(ResourceStatementT&& value) { m_resourceStatementHasBeenSet = true; m_resourceStatement = std::forward<ResourceStatementT>(value); }
    template<typename ResourceStatementT = ResourceStatement>
    ThroughResourcesStatement& WithResourceStatement(ResourceStatementT&& value) { SetResourceStatement(std::forward<ResourceStatementT>(value)); return *this;}
    ///@}
  private:

    ResourceStatement m_resourceStatement;
    bool m_resourceStatementHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
