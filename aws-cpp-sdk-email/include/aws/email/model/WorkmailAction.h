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
#include <aws/email/SES_EXPORTS.h>
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
namespace SES
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_SES_API WorkmailAction
  {
  public:
    WorkmailAction();
    WorkmailAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    WorkmailAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    
    inline WorkmailAction& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    
    inline WorkmailAction& WithTopicArn(Aws::String&& value) { SetTopicArn(value); return *this;}

    
    inline WorkmailAction& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}

    
    inline const Aws::String& GetOrganizationArn() const{ return m_organizationArn; }

    
    inline void SetOrganizationArn(const Aws::String& value) { m_organizationArnHasBeenSet = true; m_organizationArn = value; }

    
    inline void SetOrganizationArn(Aws::String&& value) { m_organizationArnHasBeenSet = true; m_organizationArn = value; }

    
    inline void SetOrganizationArn(const char* value) { m_organizationArnHasBeenSet = true; m_organizationArn.assign(value); }

    
    inline WorkmailAction& WithOrganizationArn(const Aws::String& value) { SetOrganizationArn(value); return *this;}

    
    inline WorkmailAction& WithOrganizationArn(Aws::String&& value) { SetOrganizationArn(value); return *this;}

    
    inline WorkmailAction& WithOrganizationArn(const char* value) { SetOrganizationArn(value); return *this;}

  private:
    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;
    Aws::String m_organizationArn;
    bool m_organizationArnHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
