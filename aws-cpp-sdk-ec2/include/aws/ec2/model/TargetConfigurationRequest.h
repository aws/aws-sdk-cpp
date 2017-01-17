﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
  class AWS_EC2_API TargetConfigurationRequest
  {
  public:
    TargetConfigurationRequest();
    TargetConfigurationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    TargetConfigurationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

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
    inline TargetConfigurationRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The Convertible Reserved Instance offering ID.</p>
     */
    inline TargetConfigurationRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}

    /**
     * <p>The number of instances the Covertible Reserved Instance offering can be
     * applied to. This parameter is reserved and cannot be specified in a request</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances the Covertible Reserved Instance offering can be
     * applied to. This parameter is reserved and cannot be specified in a request</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances the Covertible Reserved Instance offering can be
     * applied to. This parameter is reserved and cannot be specified in a request</p>
     */
    inline TargetConfigurationRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}

  private:
    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet;
    int m_instanceCount;
    bool m_instanceCountHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
