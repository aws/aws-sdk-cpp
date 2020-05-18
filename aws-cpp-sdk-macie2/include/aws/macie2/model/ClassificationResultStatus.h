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
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the status of a sensitive data
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ClassificationResultStatus">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API ClassificationResultStatus
  {
  public:
    ClassificationResultStatus();
    ClassificationResultStatus(Aws::Utils::Json::JsonView jsonValue);
    ClassificationResultStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the finding, such as COMPLETE.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The status of the finding, such as COMPLETE.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The status of the finding, such as COMPLETE.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status of the finding, such as COMPLETE.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The status of the finding, such as COMPLETE.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The status of the finding, such as COMPLETE.</p>
     */
    inline ClassificationResultStatus& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The status of the finding, such as COMPLETE.</p>
     */
    inline ClassificationResultStatus& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The status of the finding, such as COMPLETE.</p>
     */
    inline ClassificationResultStatus& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A brief description of the status of the finding. Amazon Macie uses this
     * value to notify you of any errors, warnings, or considerations that might impact
     * your analysis of the finding.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A brief description of the status of the finding. Amazon Macie uses this
     * value to notify you of any errors, warnings, or considerations that might impact
     * your analysis of the finding.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A brief description of the status of the finding. Amazon Macie uses this
     * value to notify you of any errors, warnings, or considerations that might impact
     * your analysis of the finding.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A brief description of the status of the finding. Amazon Macie uses this
     * value to notify you of any errors, warnings, or considerations that might impact
     * your analysis of the finding.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A brief description of the status of the finding. Amazon Macie uses this
     * value to notify you of any errors, warnings, or considerations that might impact
     * your analysis of the finding.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A brief description of the status of the finding. Amazon Macie uses this
     * value to notify you of any errors, warnings, or considerations that might impact
     * your analysis of the finding.</p>
     */
    inline ClassificationResultStatus& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A brief description of the status of the finding. Amazon Macie uses this
     * value to notify you of any errors, warnings, or considerations that might impact
     * your analysis of the finding.</p>
     */
    inline ClassificationResultStatus& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A brief description of the status of the finding. Amazon Macie uses this
     * value to notify you of any errors, warnings, or considerations that might impact
     * your analysis of the finding.</p>
     */
    inline ClassificationResultStatus& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
