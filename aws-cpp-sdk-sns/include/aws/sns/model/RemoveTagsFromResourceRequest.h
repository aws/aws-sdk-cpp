/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /*
  */
  class AWS_SNS_API RemoveTagsFromResourceRequest : public SNSRequest
  {
  public:
    RemoveTagsFromResourceRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    
    inline RemoveTagsFromResourceRequest&  WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    
    inline RemoveTagsFromResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetTags() const{ return m_tags; }
    
    inline void SetTags(const Aws::Vector<Aws::String>& value) { m_tags = value; }

    
    inline RemoveTagsFromResourceRequest&  WithTags(const Aws::Vector<Aws::String>& value) { SetTags(value); return *this;}

    
    inline RemoveTagsFromResourceRequest& AddTags(const Aws::String& value) { m_tags.push_back(value); return *this; }

    
    inline RemoveTagsFromResourceRequest& AddTags(const char* value) { m_tags.push_back(value); return *this; }

  private:
    Aws::String m_resourceArn;
    Aws::Vector<Aws::String> m_tags;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
