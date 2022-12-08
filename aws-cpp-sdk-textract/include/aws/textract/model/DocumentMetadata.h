/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DocumentMetadata
  {
  public:
    AWS_TEXTRACT_API DocumentMetadata();
    AWS_TEXTRACT_API DocumentMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API DocumentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of pages that are detected in the document.</p>
     */
    inline int GetPages() const{ return m_pages; }

    /**
     * <p>The number of pages that are detected in the document.</p>
     */
    inline bool PagesHasBeenSet() const { return m_pagesHasBeenSet; }

    /**
     * <p>The number of pages that are detected in the document.</p>
     */
    inline void SetPages(int value) { m_pagesHasBeenSet = true; m_pages = value; }

    /**
     * <p>The number of pages that are detected in the document.</p>
     */
    inline DocumentMetadata& WithPages(int value) { SetPages(value); return *this;}

  private:

    int m_pages;
    bool m_pagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
