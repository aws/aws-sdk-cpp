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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/cloudsearch/model/IndexFieldStatus.h>
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
namespace CloudSearch
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeIndexFields</code> request. Contains the index
   * fields configured for the domain specified in the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DescribeIndexFieldsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API DescribeIndexFieldsResult
  {
  public:
    DescribeIndexFieldsResult();
    DescribeIndexFieldsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeIndexFieldsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The index fields configured for the domain.</p>
     */
    inline const Aws::Vector<IndexFieldStatus>& GetIndexFields() const{ return m_indexFields; }

    /**
     * <p>The index fields configured for the domain.</p>
     */
    inline void SetIndexFields(const Aws::Vector<IndexFieldStatus>& value) { m_indexFields = value; }

    /**
     * <p>The index fields configured for the domain.</p>
     */
    inline void SetIndexFields(Aws::Vector<IndexFieldStatus>&& value) { m_indexFields = std::move(value); }

    /**
     * <p>The index fields configured for the domain.</p>
     */
    inline DescribeIndexFieldsResult& WithIndexFields(const Aws::Vector<IndexFieldStatus>& value) { SetIndexFields(value); return *this;}

    /**
     * <p>The index fields configured for the domain.</p>
     */
    inline DescribeIndexFieldsResult& WithIndexFields(Aws::Vector<IndexFieldStatus>&& value) { SetIndexFields(std::move(value)); return *this;}

    /**
     * <p>The index fields configured for the domain.</p>
     */
    inline DescribeIndexFieldsResult& AddIndexFields(const IndexFieldStatus& value) { m_indexFields.push_back(value); return *this; }

    /**
     * <p>The index fields configured for the domain.</p>
     */
    inline DescribeIndexFieldsResult& AddIndexFields(IndexFieldStatus&& value) { m_indexFields.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeIndexFieldsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeIndexFieldsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<IndexFieldStatus> m_indexFields;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
