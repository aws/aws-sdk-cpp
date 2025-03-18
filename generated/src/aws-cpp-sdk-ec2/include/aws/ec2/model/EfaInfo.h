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
   * <p>Describes the Elastic Fabric Adapters for the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EfaInfo">AWS API
   * Reference</a></p>
   */
  class EfaInfo
  {
  public:
    AWS_EC2_API EfaInfo() = default;
    AWS_EC2_API EfaInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EfaInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The maximum number of Elastic Fabric Adapters for the instance type.</p>
     */
    inline int GetMaximumEfaInterfaces() const { return m_maximumEfaInterfaces; }
    inline bool MaximumEfaInterfacesHasBeenSet() const { return m_maximumEfaInterfacesHasBeenSet; }
    inline void SetMaximumEfaInterfaces(int value) { m_maximumEfaInterfacesHasBeenSet = true; m_maximumEfaInterfaces = value; }
    inline EfaInfo& WithMaximumEfaInterfaces(int value) { SetMaximumEfaInterfaces(value); return *this;}
    ///@}
  private:

    int m_maximumEfaInterfaces{0};
    bool m_maximumEfaInterfacesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
