/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API DescribeUserProfilesRequest : public OpsWorksRequest
  {
  public:
    DescribeUserProfilesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>An array of IAM or federated user ARNs that identify the users to be
     * described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIamUserArns() const{ return m_iamUserArns; }

    /**
     * <p>An array of IAM or federated user ARNs that identify the users to be
     * described.</p>
     */
    inline void SetIamUserArns(const Aws::Vector<Aws::String>& value) { m_iamUserArnsHasBeenSet = true; m_iamUserArns = value; }

    /**
     * <p>An array of IAM or federated user ARNs that identify the users to be
     * described.</p>
     */
    inline void SetIamUserArns(Aws::Vector<Aws::String>&& value) { m_iamUserArnsHasBeenSet = true; m_iamUserArns = value; }

    /**
     * <p>An array of IAM or federated user ARNs that identify the users to be
     * described.</p>
     */
    inline DescribeUserProfilesRequest& WithIamUserArns(const Aws::Vector<Aws::String>& value) { SetIamUserArns(value); return *this;}

    /**
     * <p>An array of IAM or federated user ARNs that identify the users to be
     * described.</p>
     */
    inline DescribeUserProfilesRequest& WithIamUserArns(Aws::Vector<Aws::String>&& value) { SetIamUserArns(value); return *this;}

    /**
     * <p>An array of IAM or federated user ARNs that identify the users to be
     * described.</p>
     */
    inline DescribeUserProfilesRequest& AddIamUserArns(const Aws::String& value) { m_iamUserArnsHasBeenSet = true; m_iamUserArns.push_back(value); return *this; }

    /**
     * <p>An array of IAM or federated user ARNs that identify the users to be
     * described.</p>
     */
    inline DescribeUserProfilesRequest& AddIamUserArns(Aws::String&& value) { m_iamUserArnsHasBeenSet = true; m_iamUserArns.push_back(value); return *this; }

    /**
     * <p>An array of IAM or federated user ARNs that identify the users to be
     * described.</p>
     */
    inline DescribeUserProfilesRequest& AddIamUserArns(const char* value) { m_iamUserArnsHasBeenSet = true; m_iamUserArns.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_iamUserArns;
    bool m_iamUserArnsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
