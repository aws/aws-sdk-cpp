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
#include <aws/codedeploy/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/TagFilter.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
  */
  class AWS_CODEDEPLOY_API ListOnPremisesInstancesRequest : public codedeployRequest
  {
  public:
    ListOnPremisesInstancesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const RegistrationStatus& GetRegistrationStatus() const{ return m_registrationStatus; }
    
    inline void SetRegistrationStatus(const RegistrationStatus& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }

    
    inline ListOnPremisesInstancesRequest&  WithRegistrationStatus(const RegistrationStatus& value) { SetRegistrationStatus(value); return *this;}

    
    inline const Aws::Vector<TagFilter>& GetTagFilters() const{ return m_tagFilters; }
    
    inline void SetTagFilters(const Aws::Vector<TagFilter>& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = value; }

    
    inline ListOnPremisesInstancesRequest&  WithTagFilters(const Aws::Vector<TagFilter>& value) { SetTagFilters(value); return *this;}

    
    inline ListOnPremisesInstancesRequest& AddTagFilters(const TagFilter& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(value); return *this; }

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListOnPremisesInstancesRequest&  WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListOnPremisesInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    RegistrationStatus m_registrationStatus;
    bool m_registrationStatusHasBeenSet;
    Aws::Vector<TagFilter> m_tagFilters;
    bool m_tagFiltersHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
