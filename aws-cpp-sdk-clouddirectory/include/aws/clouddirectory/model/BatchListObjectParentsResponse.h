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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/ObjectIdentifierAndLinkNameTuple.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  class AWS_CLOUDDIRECTORY_API BatchListObjectParentsResponse
  {
  public:
    BatchListObjectParentsResponse();
    BatchListObjectParentsResponse(Aws::Utils::Json::JsonView jsonValue);
    BatchListObjectParentsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& GetParentLinks() const{ return m_parentLinks; }

    
    inline bool ParentLinksHasBeenSet() const { return m_parentLinksHasBeenSet; }

    
    inline void SetParentLinks(const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& value) { m_parentLinksHasBeenSet = true; m_parentLinks = value; }

    
    inline void SetParentLinks(Aws::Vector<ObjectIdentifierAndLinkNameTuple>&& value) { m_parentLinksHasBeenSet = true; m_parentLinks = std::move(value); }

    
    inline BatchListObjectParentsResponse& WithParentLinks(const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& value) { SetParentLinks(value); return *this;}

    
    inline BatchListObjectParentsResponse& WithParentLinks(Aws::Vector<ObjectIdentifierAndLinkNameTuple>&& value) { SetParentLinks(std::move(value)); return *this;}

    
    inline BatchListObjectParentsResponse& AddParentLinks(const ObjectIdentifierAndLinkNameTuple& value) { m_parentLinksHasBeenSet = true; m_parentLinks.push_back(value); return *this; }

    
    inline BatchListObjectParentsResponse& AddParentLinks(ObjectIdentifierAndLinkNameTuple&& value) { m_parentLinksHasBeenSet = true; m_parentLinks.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline BatchListObjectParentsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline BatchListObjectParentsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline BatchListObjectParentsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ObjectIdentifierAndLinkNameTuple> m_parentLinks;
    bool m_parentLinksHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
