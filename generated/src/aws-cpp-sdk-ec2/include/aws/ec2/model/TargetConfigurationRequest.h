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
   * <p>Details about the target configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TargetConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class TargetConfigurationRequest
  {
  public:
    AWS_EC2_API TargetConfigurationRequest() = default;
    AWS_EC2_API TargetConfigurationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TargetConfigurationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of instances the Convertible Reserved Instance offering can be
     * applied to. This parameter is reserved and cannot be specified in a request</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline TargetConfigurationRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    TargetConfigurationRequest& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}
  private:

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
