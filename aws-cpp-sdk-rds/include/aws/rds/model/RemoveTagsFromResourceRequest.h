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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p></p>
  */
  class AWS_RDS_API RemoveTagsFromResourceRequest : public RDSRequest
  {
  public:
    RemoveTagsFromResourceRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The DB Instance the tags will be removed from.</p>
    */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /*
     <p>The DB Instance the tags will be removed from.</p>
    */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /*
     <p>The DB Instance the tags will be removed from.</p>
    */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /*
     <p>The DB Instance the tags will be removed from.</p>
    */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /*
     <p>The DB Instance the tags will be removed from.</p>
    */
    inline RemoveTagsFromResourceRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /*
     <p>The DB Instance the tags will be removed from.</p>
    */
    inline RemoveTagsFromResourceRequest& WithResourceName(Aws::String&& value) { SetResourceName(value); return *this;}

    /*
     <p>The DB Instance the tags will be removed from.</p>
    */
    inline RemoveTagsFromResourceRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}

    /*
     <p>The tag key (name) of the tag to be removed.</p>
    */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /*
     <p>The tag key (name) of the tag to be removed.</p>
    */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /*
     <p>The tag key (name) of the tag to be removed.</p>
    */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /*
     <p>The tag key (name) of the tag to be removed.</p>
    */
    inline RemoveTagsFromResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /*
     <p>The tag key (name) of the tag to be removed.</p>
    */
    inline RemoveTagsFromResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(value); return *this;}

    /*
     <p>The tag key (name) of the tag to be removed.</p>
    */
    inline RemoveTagsFromResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /*
     <p>The tag key (name) of the tag to be removed.</p>
    */
    inline RemoveTagsFromResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /*
     <p>The tag key (name) of the tag to be removed.</p>
    */
    inline RemoveTagsFromResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:
    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
