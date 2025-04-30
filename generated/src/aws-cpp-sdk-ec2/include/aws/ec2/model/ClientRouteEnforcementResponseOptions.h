/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>The current status of Client Route Enforcement. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientRouteEnforcementResponseOptions">AWS
   * API Reference</a></p>
   */
  class ClientRouteEnforcementResponseOptions
  {
  public:
    AWS_EC2_API ClientRouteEnforcementResponseOptions() = default;
    AWS_EC2_API ClientRouteEnforcementResponseOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientRouteEnforcementResponseOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Status of the client route enforcement feature, indicating whether Client
     * Route Enforcement is <code>true</code> (enabled) or <code>false</code>
     * (disabled).</p> <p>Valid values: <code>true | false</code> </p> <p>Default
     * value: <code>false</code> </p>
     */
    inline bool GetEnforced() const { return m_enforced; }
    inline bool EnforcedHasBeenSet() const { return m_enforcedHasBeenSet; }
    inline void SetEnforced(bool value) { m_enforcedHasBeenSet = true; m_enforced = value; }
    inline ClientRouteEnforcementResponseOptions& WithEnforced(bool value) { SetEnforced(value); return *this;}
    ///@}
  private:

    bool m_enforced{false};
    bool m_enforcedHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
