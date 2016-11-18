/*
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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudsearch/model/OptionStatus.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>The status and configuration of the domain's availability options.</p>
   */
  class AWS_CLOUDSEARCH_API AvailabilityOptionsStatus
  {
  public:
    AvailabilityOptionsStatus();
    AvailabilityOptionsStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AvailabilityOptionsStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The availability options configured for the domain.</p>
     */
    inline bool GetOptions() const{ return m_options; }

    /**
     * <p>The availability options configured for the domain.</p>
     */
    inline void SetOptions(bool value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The availability options configured for the domain.</p>
     */
    inline AvailabilityOptionsStatus& WithOptions(bool value) { SetOptions(value); return *this;}

    
    inline const OptionStatus& GetStatus() const{ return m_status; }

    
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline AvailabilityOptionsStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    
    inline AvailabilityOptionsStatus& WithStatus(OptionStatus&& value) { SetStatus(value); return *this;}

  private:
    bool m_options;
    bool m_optionsHasBeenSet;
    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
