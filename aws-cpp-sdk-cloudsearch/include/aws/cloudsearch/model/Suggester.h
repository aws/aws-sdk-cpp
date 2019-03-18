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
#include <aws/cloudsearch/model/DocumentSuggesterOptions.h>
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
   * <p>Configuration information for a search suggester. Each suggester has a unique
   * name and specifies the text field you want to use for suggestions. The following
   * options can be configured for a suggester: <code>FuzzyMatching</code>,
   * <code>SortExpression</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/Suggester">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API Suggester
  {
  public:
    Suggester();
    Suggester(const Aws::Utils::Xml::XmlNode& xmlNode);
    Suggester& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetSuggesterName() const{ return m_suggesterName; }

    
    inline bool SuggesterNameHasBeenSet() const { return m_suggesterNameHasBeenSet; }

    
    inline void SetSuggesterName(const Aws::String& value) { m_suggesterNameHasBeenSet = true; m_suggesterName = value; }

    
    inline void SetSuggesterName(Aws::String&& value) { m_suggesterNameHasBeenSet = true; m_suggesterName = std::move(value); }

    
    inline void SetSuggesterName(const char* value) { m_suggesterNameHasBeenSet = true; m_suggesterName.assign(value); }

    
    inline Suggester& WithSuggesterName(const Aws::String& value) { SetSuggesterName(value); return *this;}

    
    inline Suggester& WithSuggesterName(Aws::String&& value) { SetSuggesterName(std::move(value)); return *this;}

    
    inline Suggester& WithSuggesterName(const char* value) { SetSuggesterName(value); return *this;}


    
    inline const DocumentSuggesterOptions& GetDocumentSuggesterOptions() const{ return m_documentSuggesterOptions; }

    
    inline bool DocumentSuggesterOptionsHasBeenSet() const { return m_documentSuggesterOptionsHasBeenSet; }

    
    inline void SetDocumentSuggesterOptions(const DocumentSuggesterOptions& value) { m_documentSuggesterOptionsHasBeenSet = true; m_documentSuggesterOptions = value; }

    
    inline void SetDocumentSuggesterOptions(DocumentSuggesterOptions&& value) { m_documentSuggesterOptionsHasBeenSet = true; m_documentSuggesterOptions = std::move(value); }

    
    inline Suggester& WithDocumentSuggesterOptions(const DocumentSuggesterOptions& value) { SetDocumentSuggesterOptions(value); return *this;}

    
    inline Suggester& WithDocumentSuggesterOptions(DocumentSuggesterOptions&& value) { SetDocumentSuggesterOptions(std::move(value)); return *this;}

  private:

    Aws::String m_suggesterName;
    bool m_suggesterNameHasBeenSet;

    DocumentSuggesterOptions m_documentSuggesterOptions;
    bool m_documentSuggesterOptionsHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
