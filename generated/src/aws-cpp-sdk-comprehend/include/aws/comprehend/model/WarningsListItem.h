/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/PageBasedWarningCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>The system identified one of the following warnings while processing the
   * input document:</p> <ul> <li> <p>The document to classify is plain text, but the
   * classifier is a native document model.</p> </li> <li> <p>The document to
   * classify is semi-structured, but the classifier is a plain-text model.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/WarningsListItem">AWS
   * API Reference</a></p>
   */
  class WarningsListItem
  {
  public:
    AWS_COMPREHEND_API WarningsListItem() = default;
    AWS_COMPREHEND_API WarningsListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API WarningsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Page number in the input document.</p>
     */
    inline int GetPage() const { return m_page; }
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }
    inline void SetPage(int value) { m_pageHasBeenSet = true; m_page = value; }
    inline WarningsListItem& WithPage(int value) { SetPage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of warning.</p>
     */
    inline PageBasedWarningCode GetWarnCode() const { return m_warnCode; }
    inline bool WarnCodeHasBeenSet() const { return m_warnCodeHasBeenSet; }
    inline void SetWarnCode(PageBasedWarningCode value) { m_warnCodeHasBeenSet = true; m_warnCode = value; }
    inline WarningsListItem& WithWarnCode(PageBasedWarningCode value) { SetWarnCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text message associated with the warning.</p>
     */
    inline const Aws::String& GetWarnMessage() const { return m_warnMessage; }
    inline bool WarnMessageHasBeenSet() const { return m_warnMessageHasBeenSet; }
    template<typename WarnMessageT = Aws::String>
    void SetWarnMessage(WarnMessageT&& value) { m_warnMessageHasBeenSet = true; m_warnMessage = std::forward<WarnMessageT>(value); }
    template<typename WarnMessageT = Aws::String>
    WarningsListItem& WithWarnMessage(WarnMessageT&& value) { SetWarnMessage(std::forward<WarnMessageT>(value)); return *this;}
    ///@}
  private:

    int m_page{0};
    bool m_pageHasBeenSet = false;

    PageBasedWarningCode m_warnCode{PageBasedWarningCode::NOT_SET};
    bool m_warnCodeHasBeenSet = false;

    Aws::String m_warnMessage;
    bool m_warnMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
