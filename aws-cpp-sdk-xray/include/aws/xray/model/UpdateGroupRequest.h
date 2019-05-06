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
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class AWS_XRAY_API UpdateGroupRequest : public XRayRequest
  {
  public:
    UpdateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline UpdateGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline UpdateGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The case-sensitive name of the group.</p>
     */
    inline UpdateGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline const Aws::String& GetGroupARN() const{ return m_groupARN; }

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline void SetGroupARN(const Aws::String& value) { m_groupARNHasBeenSet = true; m_groupARN = value; }

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline void SetGroupARN(Aws::String&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::move(value); }

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline void SetGroupARN(const char* value) { m_groupARNHasBeenSet = true; m_groupARN.assign(value); }

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline UpdateGroupRequest& WithGroupARN(const Aws::String& value) { SetGroupARN(value); return *this;}

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline UpdateGroupRequest& WithGroupARN(Aws::String&& value) { SetGroupARN(std::move(value)); return *this;}

    /**
     * <p>The ARN that was generated upon creation.</p>
     */
    inline UpdateGroupRequest& WithGroupARN(const char* value) { SetGroupARN(value); return *this;}


    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline UpdateGroupRequest& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline UpdateGroupRequest& WithFilterExpression(Aws::String&& value) { SetFilterExpression(std::move(value)); return *this;}

    /**
     * <p>The updated filter expression defining criteria by which to group traces.</p>
     */
    inline UpdateGroupRequest& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}

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
