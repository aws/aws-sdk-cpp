/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticloadbalancingv2/model/ProvisionedCapacityStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  class AWS_ELASTICLOADBALANCINGV2_API ProvisionedCapacity
  {
  public:
    ProvisionedCapacity();
    ProvisionedCapacity(const Aws::Utils::Xml::XmlNode& xmlNode);
    ProvisionedCapacity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline int GetMinimumLBCapacityUnits() const{ return m_minimumLBCapacityUnits; }

    
    inline void SetMinimumLBCapacityUnits(int value) { m_minimumLBCapacityUnitsHasBeenSet = true; m_minimumLBCapacityUnits = value; }

    
    inline ProvisionedCapacity& WithMinimumLBCapacityUnits(int value) { SetMinimumLBCapacityUnits(value); return *this;}


    
    inline const ProvisionedCapacityStatus& GetStatus() const{ return m_status; }

    
    inline void SetStatus(const ProvisionedCapacityStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(ProvisionedCapacityStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline ProvisionedCapacity& WithStatus(const ProvisionedCapacityStatus& value) { SetStatus(value); return *this;}

    
    inline ProvisionedCapacity& WithStatus(ProvisionedCapacityStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline int GetDecreasesRemaining() const{ return m_decreasesRemaining; }

    
    inline void SetDecreasesRemaining(int value) { m_decreasesRemainingHasBeenSet = true; m_decreasesRemaining = value; }

    
    inline ProvisionedCapacity& WithDecreasesRemaining(int value) { SetDecreasesRemaining(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    
    inline ProvisionedCapacity& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    
    inline ProvisionedCapacity& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    int m_minimumLBCapacityUnits;
    bool m_minimumLBCapacityUnitsHasBeenSet;

    ProvisionedCapacityStatus m_status;
    bool m_statusHasBeenSet;

    int m_decreasesRemaining;
    bool m_decreasesRemainingHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
