/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>

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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Array of the number of characters extracted from each page.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ExtractedCharactersListItem">AWS
   * API Reference</a></p>
   */
  class ExtractedCharactersListItem
  {
  public:
    AWS_COMPREHEND_API ExtractedCharactersListItem();
    AWS_COMPREHEND_API ExtractedCharactersListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API ExtractedCharactersListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Page number.</p>
     */
    inline int GetPage() const{ return m_page; }

    /**
     * <p>Page number.</p>
     */
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }

    /**
     * <p>Page number.</p>
     */
    inline void SetPage(int value) { m_pageHasBeenSet = true; m_page = value; }

    /**
     * <p>Page number.</p>
     */
    inline ExtractedCharactersListItem& WithPage(int value) { SetPage(value); return *this;}


    /**
     * <p>Number of characters extracted from each page.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>Number of characters extracted from each page.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>Number of characters extracted from each page.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>Number of characters extracted from each page.</p>
     */
    inline ExtractedCharactersListItem& WithCount(int value) { SetCount(value); return *this;}

  private:

    int m_page;
    bool m_pageHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
