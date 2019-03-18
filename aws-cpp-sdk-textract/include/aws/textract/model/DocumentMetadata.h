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
#include <aws/textract/Textract_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Textract
{
namespace Model
{

  /**
   * <p>Information about the input document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/DocumentMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_TEXTRACT_API DocumentMetadata
  {
  public:
    DocumentMetadata();
    DocumentMetadata(Aws::Utils::Json::JsonView jsonValue);
    DocumentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of pages detected in the document.</p>
     */
    inline int GetPages() const{ return m_pages; }

    /**
     * <p>The number of pages detected in the document.</p>
     */
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }

    /**
     * <p>The number of pages detected in the document.</p>
     */
    inline void SetPages(int value) { m_pagesHasBeenSet = true; m_pages = value; }

    /**
     * <p>The number of pages detected in the document.</p>
     */
    inline DocumentMetadata& WithPages(int value) { SetPages(value); return *this;}

  private:

    int m_pages;
    bool m_pagesHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
