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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/Tag.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_SNS_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListTagsForResourceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    
    inline ListTagsForResourceResult&  WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline ListTagsForResourceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListTagsForResourceResult&  WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListTagsForResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline ListTagsForResourceResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Tag> m_tags;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws