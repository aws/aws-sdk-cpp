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
#include <aws/xray/XRay_EXPORTS.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Details for a group without metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GroupSummary">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API GroupSummary
  {
  public:
    GroupSummary();
    GroupSummary(Aws::Utils::Json::JsonView jsonValue);
    GroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline GroupSummary& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline GroupSummary& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The unique case-sensitive name of the group.</p>
     */
    inline GroupSummary& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline const Aws::String& GetGroupARN() const{ return m_groupARN; }

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline void SetGroupARN(const Aws::String& value) { m_groupARNHasBeenSet = true; m_groupARN = value; }

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline void SetGroupARN(Aws::String&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::move(value); }

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline void SetGroupARN(const char* value) { m_groupARNHasBeenSet = true; m_groupARN.assign(value); }

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline GroupSummary& WithGroupARN(const Aws::String& value) { SetGroupARN(value); return *this;}

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline GroupSummary& WithGroupARN(Aws::String&& value) { SetGroupARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the group generated based on the GroupName.</p>
     */
    inline GroupSummary& WithGroupARN(const char* value) { SetGroupARN(value); return *this;}


    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline GroupSummary& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline GroupSummary& WithFilterExpression(Aws::String&& value) { SetFilterExpression(std::move(value)); return *this;}

    /**
     * <p>The filter expression defining the parameters to include traces.</p>
     */
    inline GroupSummary& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_groupARN;
    bool m_groupARNHasBeenSet;

    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
