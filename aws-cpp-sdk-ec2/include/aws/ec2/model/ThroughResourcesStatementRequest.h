/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ResourceStatementRequest.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ThroughResourcesStatementRequest">AWS
   * API Reference</a></p>
   */
  class ThroughResourcesStatementRequest
  {
  public:
    AWS_EC2_API ThroughResourcesStatementRequest();
    AWS_EC2_API ThroughResourcesStatementRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ThroughResourcesStatementRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The resource statement.</p>
     */
    inline const ResourceStatementRequest& GetResourceStatement() const{ return m_resourceStatement; }

    /**
     * <p>The resource statement.</p>
     */
    inline bool ResourceStatementHasBeenSet() const { return m_resourceStatementHasBeenSet; }

    /**
     * <p>The resource statement.</p>
     */
    inline void SetResourceStatement(const ResourceStatementRequest& value) { m_resourceStatementHasBeenSet = true; m_resourceStatement = value; }

    /**
     * <p>The resource statement.</p>
     */
    inline void SetResourceStatement(ResourceStatementRequest&& value) { m_resourceStatementHasBeenSet = true; m_resourceStatement = std::move(value); }

    /**
     * <p>The resource statement.</p>
     */
    inline ThroughResourcesStatementRequest& WithResourceStatement(const ResourceStatementRequest& value) { SetResourceStatement(value); return *this;}

    /**
     * <p>The resource statement.</p>
     */
    inline ThroughResourcesStatementRequest& WithResourceStatement(ResourceStatementRequest&& value) { SetResourceStatement(std::move(value)); return *this;}

  private:

    ResourceStatementRequest m_resourceStatement;
    bool m_resourceStatementHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
