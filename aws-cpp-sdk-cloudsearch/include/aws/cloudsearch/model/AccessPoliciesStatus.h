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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearch/model/OptionStatus.h>
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
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>The configured access rules for the domain's document and search endpoints,
   * and the current status of those rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/AccessPoliciesStatus">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API AccessPoliciesStatus
  {
  public:
    AccessPoliciesStatus();
    AccessPoliciesStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccessPoliciesStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetOptions() const{ return m_options; }

    
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    
    inline void SetOptions(const Aws::String& value) { m_optionsHasBeenSet = true; m_options = value; }

    
    inline void SetOptions(Aws::String&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    
    inline void SetOptions(const char* value) { m_optionsHasBeenSet = true; m_options.assign(value); }

    
    inline AccessPoliciesStatus& WithOptions(const Aws::String& value) { SetOptions(value); return *this;}

    
    inline AccessPoliciesStatus& WithOptions(Aws::String&& value) { SetOptions(std::move(value)); return *this;}

    
    inline AccessPoliciesStatus& WithOptions(const char* value) { SetOptions(value); return *this;}


    
    inline const OptionStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline AccessPoliciesStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}

    
    inline AccessPoliciesStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_options;
    bool m_optionsHasBeenSet;

    OptionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
