/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
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
namespace ElasticBeanstalk
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_ELASTICBEANSTALK_API InstanceHealthSummary
  {
  public:
    InstanceHealthSummary();
    InstanceHealthSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceHealthSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline long GetNoData() const{ return m_noData; }
    
    inline void SetNoData(long value) { m_noDataHasBeenSet = true; m_noData = value; }

    
    inline InstanceHealthSummary&  WithNoData(long value) { SetNoData(value); return *this;}

    
    inline long GetUnknown() const{ return m_unknown; }
    
    inline void SetUnknown(long value) { m_unknownHasBeenSet = true; m_unknown = value; }

    
    inline InstanceHealthSummary&  WithUnknown(long value) { SetUnknown(value); return *this;}

    
    inline long GetPending() const{ return m_pending; }
    
    inline void SetPending(long value) { m_pendingHasBeenSet = true; m_pending = value; }

    
    inline InstanceHealthSummary&  WithPending(long value) { SetPending(value); return *this;}

    
    inline long GetOk() const{ return m_ok; }
    
    inline void SetOk(long value) { m_okHasBeenSet = true; m_ok = value; }

    
    inline InstanceHealthSummary&  WithOk(long value) { SetOk(value); return *this;}

    
    inline long GetInfo() const{ return m_info; }
    
    inline void SetInfo(long value) { m_infoHasBeenSet = true; m_info = value; }

    
    inline InstanceHealthSummary&  WithInfo(long value) { SetInfo(value); return *this;}

    
    inline long GetWarning() const{ return m_warning; }
    
    inline void SetWarning(long value) { m_warningHasBeenSet = true; m_warning = value; }

    
    inline InstanceHealthSummary&  WithWarning(long value) { SetWarning(value); return *this;}

    
    inline long GetDegraded() const{ return m_degraded; }
    
    inline void SetDegraded(long value) { m_degradedHasBeenSet = true; m_degraded = value; }

    
    inline InstanceHealthSummary&  WithDegraded(long value) { SetDegraded(value); return *this;}

    
    inline long GetSevere() const{ return m_severe; }
    
    inline void SetSevere(long value) { m_severeHasBeenSet = true; m_severe = value; }

    
    inline InstanceHealthSummary&  WithSevere(long value) { SetSevere(value); return *this;}

  private:
    long m_noData;
    bool m_noDataHasBeenSet;
    long m_unknown;
    bool m_unknownHasBeenSet;
    long m_pending;
    bool m_pendingHasBeenSet;
    long m_ok;
    bool m_okHasBeenSet;
    long m_info;
    bool m_infoHasBeenSet;
    long m_warning;
    bool m_warningHasBeenSet;
    long m_degraded;
    bool m_degradedHasBeenSet;
    long m_severe;
    bool m_severeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
