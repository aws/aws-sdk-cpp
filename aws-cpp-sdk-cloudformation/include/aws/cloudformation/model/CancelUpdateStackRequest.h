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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for the <a>CancelUpdateStack</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CancelUpdateStackInput">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API CancelUpdateStackRequest : public CloudFormationRequest
  {
  public:
    CancelUpdateStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelUpdateStack"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline CancelUpdateStackRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline CancelUpdateStackRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name or the unique stack ID that is associated with the stack.</p>
     */
    inline CancelUpdateStackRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>A unique identifier for this <code>CancelUpdateStack</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to cancel an update on a stack with the same name. You
     * might retry <code>CancelUpdateStack</code> requests to ensure that AWS
     * CloudFormation successfully received them.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique identifier for this <code>CancelUpdateStack</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to cancel an update on a stack with the same name. You
     * might retry <code>CancelUpdateStack</code> requests to ensure that AWS
     * CloudFormation successfully received them.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier for this <code>CancelUpdateStack</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to cancel an update on a stack with the same name. You
     * might retry <code>CancelUpdateStack</code> requests to ensure that AWS
     * CloudFormation successfully received them.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique identifier for this <code>CancelUpdateStack</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to cancel an update on a stack with the same name. You
     * might retry <code>CancelUpdateStack</code> requests to ensure that AWS
     * CloudFormation successfully received them.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique identifier for this <code>CancelUpdateStack</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to cancel an update on a stack with the same name. You
     * might retry <code>CancelUpdateStack</code> requests to ensure that AWS
     * CloudFormation successfully received them.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique identifier for this <code>CancelUpdateStack</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to cancel an update on a stack with the same name. You
     * might retry <code>CancelUpdateStack</code> requests to ensure that AWS
     * CloudFormation successfully received them.</p>
     */
    inline CancelUpdateStackRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for this <code>CancelUpdateStack</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to cancel an update on a stack with the same name. You
     * might retry <code>CancelUpdateStack</code> requests to ensure that AWS
     * CloudFormation successfully received them.</p>
     */
    inline CancelUpdateStackRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this <code>CancelUpdateStack</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to cancel an update on a stack with the same name. You
     * might retry <code>CancelUpdateStack</code> requests to ensure that AWS
     * CloudFormation successfully received them.</p>
     */
    inline CancelUpdateStackRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
