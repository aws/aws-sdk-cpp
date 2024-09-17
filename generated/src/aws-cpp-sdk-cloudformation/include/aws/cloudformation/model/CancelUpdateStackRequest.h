/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CancelUpdateStackRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API CancelUpdateStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelUpdateStack"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     *  <p>If you don't pass a parameter to <code>StackName</code>, the API
     * returns a response that describes all resources in the account.</p> <p>The IAM
     * policy below can be added to IAM policies when you want to limit resource-level
     * permissions and avoid returning a response when no parameter is sent in the
     * request:</p> <p> <code>{ "Version": "2012-10-17", "Statement": [{ "Effect":
     * "Deny", "Action": "cloudformation:DescribeStacks", "NotResource":
     * "arn:aws:cloudformation:*:*:stack/ * / *" }] }</code> </p>  <p>The name or
     * the unique stack ID that's associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline CancelUpdateStackRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline CancelUpdateStackRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline CancelUpdateStackRequest& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for this <code>CancelUpdateStack</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to cancel an update on a stack with the same name. You
     * might retry <code>CancelUpdateStack</code> requests to ensure that
     * CloudFormation successfully received them.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CancelUpdateStackRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CancelUpdateStackRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CancelUpdateStackRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
