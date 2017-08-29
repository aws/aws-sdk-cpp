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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/Export.h>
#include <utility>

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
namespace CloudFormation
{
namespace Model
{
  class AWS_CLOUDFORMATION_API ListExportsResult
  {
  public:
    ListExportsResult();
    ListExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The output for the <a>ListExports</a> action.</p>
     */
    inline const Aws::Vector<Export>& GetExports() const{ return m_exports; }

    /**
     * <p>The output for the <a>ListExports</a> action.</p>
     */
    inline void SetExports(const Aws::Vector<Export>& value) { m_exports = value; }

    /**
     * <p>The output for the <a>ListExports</a> action.</p>
     */
    inline void SetExports(Aws::Vector<Export>&& value) { m_exports = std::move(value); }

    /**
     * <p>The output for the <a>ListExports</a> action.</p>
     */
    inline ListExportsResult& WithExports(const Aws::Vector<Export>& value) { SetExports(value); return *this;}

    /**
     * <p>The output for the <a>ListExports</a> action.</p>
     */
    inline ListExportsResult& WithExports(Aws::Vector<Export>&& value) { SetExports(std::move(value)); return *this;}

    /**
     * <p>The output for the <a>ListExports</a> action.</p>
     */
    inline ListExportsResult& AddExports(const Export& value) { m_exports.push_back(value); return *this; }

    /**
     * <p>The output for the <a>ListExports</a> action.</p>
     */
    inline ListExportsResult& AddExports(Export&& value) { m_exports.push_back(std::move(value)); return *this; }


    /**
     * <p>If the output exceeds 100 exported output values, a string that identifies
     * the next page of exports. If there is no additional page, this value is
     * null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the output exceeds 100 exported output values, a string that identifies
     * the next page of exports. If there is no additional page, this value is
     * null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the output exceeds 100 exported output values, a string that identifies
     * the next page of exports. If there is no additional page, this value is
     * null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the output exceeds 100 exported output values, a string that identifies
     * the next page of exports. If there is no additional page, this value is
     * null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the output exceeds 100 exported output values, a string that identifies
     * the next page of exports. If there is no additional page, this value is
     * null.</p>
     */
    inline ListExportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the output exceeds 100 exported output values, a string that identifies
     * the next page of exports. If there is no additional page, this value is
     * null.</p>
     */
    inline ListExportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the output exceeds 100 exported output values, a string that identifies
     * the next page of exports. If there is no additional page, this value is
     * null.</p>
     */
    inline ListExportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListExportsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListExportsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Export> m_exports;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
