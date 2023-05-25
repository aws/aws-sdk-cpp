/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Suggester
  {
  public:
    AWS_CLOUDSEARCH_API Suggester();
    AWS_CLOUDSEARCH_API Suggester(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API Suggester& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
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
    bool m_suggesterNameHasBeenSet = false;

    DocumentSuggesterOptions m_documentSuggesterOptions;
    bool m_documentSuggesterOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
