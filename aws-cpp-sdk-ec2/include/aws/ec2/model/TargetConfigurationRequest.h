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
    AWS_EC2_API TargetConfigurationRequest();
    AWS_EC2_API TargetConfigurationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TargetConfigurationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of instances the Convertible Reserved Instance offering can be
     * applied to. This parameter is reserved and cannot be specified in a request</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances the Convertible Reserved Instance offering can be
     * applied to. This parameter is reserved and cannot be specified in a request</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of instances the Convertible Reserved Instance offering can be
     * applied to. This parameter is reserved and cannot be specified in a request</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances the Convertible Reserved Instance offering can be
     * applied to. This parameter is reserved and cannot be specified in a request</p>
     */
    inline TargetConfigurationRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }

    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }

    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline TargetConfigurationRequest& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline TargetConfigurationRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline TargetConfigurationRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}

  private:

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
