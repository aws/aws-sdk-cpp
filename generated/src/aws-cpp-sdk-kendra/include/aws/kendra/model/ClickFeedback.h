/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Gathers information about when a particular result was clicked by a user.
   * Your application uses the <code>SubmitFeedback</code> API to provide click
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ClickFeedback">AWS
   * API Reference</a></p>
   */
  class ClickFeedback
  {
  public:
    AWS_KENDRA_API ClickFeedback() = default;
    AWS_KENDRA_API ClickFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ClickFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the search result that was clicked.</p>
     */
    inline const Aws::String& GetResultId() const { return m_resultId; }
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
    template<typename ResultIdT = Aws::String>
    void SetResultId(ResultIdT&& value) { m_resultIdHasBeenSet = true; m_resultId = std::forward<ResultIdT>(value); }
    template<typename ResultIdT = Aws::String>
    ClickFeedback& WithResultId(ResultIdT&& value) { SetResultId(std::forward<ResultIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the result was clicked.</p>
     */
    inline const Aws::Utils::DateTime& GetClickTime() const { return m_clickTime; }
    inline bool ClickTimeHasBeenSet() const { return m_clickTimeHasBeenSet; }
    template<typename ClickTimeT = Aws::Utils::DateTime>
    void SetClickTime(ClickTimeT&& value) { m_clickTimeHasBeenSet = true; m_clickTime = std::forward<ClickTimeT>(value); }
    template<typename ClickTimeT = Aws::Utils::DateTime>
    ClickFeedback& WithClickTime(ClickTimeT&& value) { SetClickTime(std::forward<ClickTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

    Aws::Utils::DateTime m_clickTime{};
    bool m_clickTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
