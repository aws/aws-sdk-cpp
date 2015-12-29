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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p></p>
  */
  class AWS_RDS_API ListTagsForResourceRequest : public RDSRequest
  {
  public:
    ListTagsForResourceRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The DB Instance with tags to be listed.</p>
    */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /*
     <p>The DB Instance with tags to be listed.</p>
    */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /*
     <p>The DB Instance with tags to be listed.</p>
    */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /*
     <p>The DB Instance with tags to be listed.</p>
    */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /*
     <p>The DB Instance with tags to be listed.</p>
    */
    inline ListTagsForResourceRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /*
     <p>The DB Instance with tags to be listed.</p>
    */
    inline ListTagsForResourceRequest& WithResourceName(Aws::String&& value) { SetResourceName(value); return *this;}

    /*
     <p>The DB Instance with tags to be listed.</p>
    */
    inline ListTagsForResourceRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:
    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
