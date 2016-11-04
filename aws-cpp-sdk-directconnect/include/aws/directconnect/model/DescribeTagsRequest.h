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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Container for the parameters to the DescribeTags operation.</p>
   */
  class AWS_DIRECTCONNECT_API DescribeTagsRequest : public DirectConnectRequest
  {
  public:
    DescribeTagsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Names (ARNs) of the Direct Connect resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Direct Connect resources.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Direct Connect resources.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Direct Connect resources.</p>
     */
    inline DescribeTagsRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Direct Connect resources.</p>
     */
    inline DescribeTagsRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Direct Connect resources.</p>
     */
    inline DescribeTagsRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Direct Connect resources.</p>
     */
    inline DescribeTagsRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Direct Connect resources.</p>
     */
    inline DescribeTagsRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
