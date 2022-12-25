/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
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
namespace SES
{
namespace Model
{

  /**
   * <p>Indicates that the Template object you specified does not exist in your
   * Amazon SES account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/TemplateDoesNotExistException">AWS
   * API Reference</a></p>
   */
  class TemplateDoesNotExistException
  {
  public:
    AWS_SES_API TemplateDoesNotExistException();
    AWS_SES_API TemplateDoesNotExistException(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API TemplateDoesNotExistException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    
    inline TemplateDoesNotExistException& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    
    inline TemplateDoesNotExistException& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    
    inline TemplateDoesNotExistException& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
