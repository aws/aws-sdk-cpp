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
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/codedeploy/codedeployRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/Tag.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
    <p>Represents the input of a remove tags from on-premises instances operation.</p>
  */
  class AWS_CODEDEPLOY_API RemoveTagsFromOnPremisesInstancesRequest : public codedeployRequest
  {
  public:
    RemoveTagsFromOnPremisesInstancesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The tag key-value pairs to remove from the on-premises instances.</p>
    */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    /*
     <p>The tag key-value pairs to remove from the on-premises instances.</p>
    */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /*
     <p>The tag key-value pairs to remove from the on-premises instances.</p>
    */
    inline RemoveTagsFromOnPremisesInstancesRequest&  WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /*
     <p>The tag key-value pairs to remove from the on-premises instances.</p>
    */
    inline RemoveTagsFromOnPremisesInstancesRequest& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /*
     <p>The names of the on-premises instances to remove tags from.</p>
    */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const{ return m_instanceNames; }
    /*
     <p>The names of the on-premises instances to remove tags from.</p>
    */
    inline void SetInstanceNames(const Aws::Vector<Aws::String>& value) { m_instanceNames = value; }

    /*
     <p>The names of the on-premises instances to remove tags from.</p>
    */
    inline RemoveTagsFromOnPremisesInstancesRequest&  WithInstanceNames(const Aws::Vector<Aws::String>& value) { SetInstanceNames(value); return *this;}

    /*
     <p>The names of the on-premises instances to remove tags from.</p>
    */
    inline RemoveTagsFromOnPremisesInstancesRequest& AddInstanceNames(const Aws::String& value) { m_instanceNames.push_back(value); return *this; }

    /*
     <p>The names of the on-premises instances to remove tags from.</p>
    */
    inline RemoveTagsFromOnPremisesInstancesRequest& AddInstanceNames(const char* value) { m_instanceNames.push_back(value); return *this; }

  private:
    Aws::Vector<Tag> m_tags;
    Aws::Vector<Aws::String> m_instanceNames;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
