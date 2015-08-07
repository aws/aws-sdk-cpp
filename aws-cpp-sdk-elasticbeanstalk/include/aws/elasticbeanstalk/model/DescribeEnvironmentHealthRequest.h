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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/EnvironmentHealthAttribute.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /*
  */
  class AWS_ELASTICBEANSTALK_API DescribeEnvironmentHealthRequest : public ElasticBeanstalkRequest
  {
  public:
    DescribeEnvironmentHealthRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    
    inline DescribeEnvironmentHealthRequest&  WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    
    inline DescribeEnvironmentHealthRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

    
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    
    inline DescribeEnvironmentHealthRequest&  WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    
    inline DescribeEnvironmentHealthRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

    
    inline const Aws::Vector<EnvironmentHealthAttribute>& GetAttributeNames() const{ return m_attributeNames; }
    
    inline void SetAttributeNames(const Aws::Vector<EnvironmentHealthAttribute>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    
    inline DescribeEnvironmentHealthRequest&  WithAttributeNames(const Aws::Vector<EnvironmentHealthAttribute>& value) { SetAttributeNames(value); return *this;}

    
    inline DescribeEnvironmentHealthRequest& AddAttributeNames(const EnvironmentHealthAttribute& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

  private:
    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;
    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet;
    Aws::Vector<EnvironmentHealthAttribute> m_attributeNames;
    bool m_attributeNamesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
