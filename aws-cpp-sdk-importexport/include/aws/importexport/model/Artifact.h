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
#include <aws/importexport/ImportExport_EXPORTS.h>
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
namespace ImportExport
{
namespace Model
{

  /**
   * A discrete item that contains the description and URL of an artifact (such as a
   * PDF).<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/Artifact">AWS
   * API Reference</a></p>
   */
  class AWS_IMPORTEXPORT_API Artifact
  {
  public:
    Artifact();
    Artifact(const Aws::Utils::Xml::XmlNode& xmlNode);
    Artifact& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline Artifact& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline Artifact& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline Artifact& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetURL() const{ return m_uRL; }

    
    inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }

    
    inline void SetURL(const Aws::String& value) { m_uRLHasBeenSet = true; m_uRL = value; }

    
    inline void SetURL(Aws::String&& value) { m_uRLHasBeenSet = true; m_uRL = std::move(value); }

    
    inline void SetURL(const char* value) { m_uRLHasBeenSet = true; m_uRL.assign(value); }

    
    inline Artifact& WithURL(const Aws::String& value) { SetURL(value); return *this;}

    
    inline Artifact& WithURL(Aws::String&& value) { SetURL(std::move(value)); return *this;}

    
    inline Artifact& WithURL(const char* value) { SetURL(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_uRL;
    bool m_uRLHasBeenSet;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
