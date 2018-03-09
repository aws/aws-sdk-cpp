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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputSecurityGroup.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListInputSecurityGroupsResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroupsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ListInputSecurityGroupsResult
  {
  public:
    ListInputSecurityGroupsResult();
    ListInputSecurityGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListInputSecurityGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * List of input security groups
     */
    inline const Aws::Vector<InputSecurityGroup>& GetInputSecurityGroups() const{ return m_inputSecurityGroups; }

    /**
     * List of input security groups
     */
    inline void SetInputSecurityGroups(const Aws::Vector<InputSecurityGroup>& value) { m_inputSecurityGroups = value; }

    /**
     * List of input security groups
     */
    inline void SetInputSecurityGroups(Aws::Vector<InputSecurityGroup>&& value) { m_inputSecurityGroups = std::move(value); }

    /**
     * List of input security groups
     */
    inline ListInputSecurityGroupsResult& WithInputSecurityGroups(const Aws::Vector<InputSecurityGroup>& value) { SetInputSecurityGroups(value); return *this;}

    /**
     * List of input security groups
     */
    inline ListInputSecurityGroupsResult& WithInputSecurityGroups(Aws::Vector<InputSecurityGroup>&& value) { SetInputSecurityGroups(std::move(value)); return *this;}

    /**
     * List of input security groups
     */
    inline ListInputSecurityGroupsResult& AddInputSecurityGroups(const InputSecurityGroup& value) { m_inputSecurityGroups.push_back(value); return *this; }

    /**
     * List of input security groups
     */
    inline ListInputSecurityGroupsResult& AddInputSecurityGroups(InputSecurityGroup&& value) { m_inputSecurityGroups.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListInputSecurityGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListInputSecurityGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListInputSecurityGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InputSecurityGroup> m_inputSecurityGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
