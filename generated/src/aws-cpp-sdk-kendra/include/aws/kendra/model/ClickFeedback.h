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
    AWS_KENDRA_API ClickFeedback();
    AWS_KENDRA_API ClickFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ClickFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the search result that was clicked.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }
    inline ClickFeedback& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}
    inline ClickFeedback& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}
    inline ClickFeedback& WithResultId(const char* value) { SetResultId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the result was clicked.</p>
     */
    inline const Aws::Utils::DateTime& GetClickTime() const{ return m_clickTime; }
    inline bool ClickTimeHasBeenSet() const { return m_clickTimeHasBeenSet; }
    inline void SetClickTime(const Aws::Utils::DateTime& value) { m_clickTimeHasBeenSet = true; m_clickTime = value; }
    inline void SetClickTime(Aws::Utils::DateTime&& value) { m_clickTimeHasBeenSet = true; m_clickTime = std::move(value); }
    inline ClickFeedback& WithClickTime(const Aws::Utils::DateTime& value) { SetClickTime(value); return *this;}
    inline ClickFeedback& WithClickTime(Aws::Utils::DateTime&& value) { SetClickTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

    Aws::Utils::DateTime m_clickTime;
    bool m_clickTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
