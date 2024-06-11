/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
  class ListImportsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListImportsResult();
    AWS_CLOUDFORMATION_API ListImportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListImportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of stack names that are importing the specified exported output
     * value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImports() const{ return m_imports; }
    inline void SetImports(const Aws::Vector<Aws::String>& value) { m_imports = value; }
    inline void SetImports(Aws::Vector<Aws::String>&& value) { m_imports = std::move(value); }
    inline ListImportsResult& WithImports(const Aws::Vector<Aws::String>& value) { SetImports(value); return *this;}
    inline ListImportsResult& WithImports(Aws::Vector<Aws::String>&& value) { SetImports(std::move(value)); return *this;}
    inline ListImportsResult& AddImports(const Aws::String& value) { m_imports.push_back(value); return *this; }
    inline ListImportsResult& AddImports(Aws::String&& value) { m_imports.push_back(std::move(value)); return *this; }
    inline ListImportsResult& AddImports(const char* value) { m_imports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that identifies the next page of exports. If there is no additional
     * page, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListImportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListImportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListImportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListImportsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListImportsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_imports;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
