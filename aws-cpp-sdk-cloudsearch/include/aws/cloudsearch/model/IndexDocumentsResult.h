/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The result of an <code>IndexDocuments</code> request. Contains the status of
   * the indexing operation, including the fields being indexed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/IndexDocumentsResponse">AWS
   * API Reference</a></p>
   */
  class IndexDocumentsResult
  {
  public:
    AWS_CLOUDSEARCH_API IndexDocumentsResult();
    AWS_CLOUDSEARCH_API IndexDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API IndexDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The names of the fields that are currently being indexed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFieldNames() const{ return m_fieldNames; }

    /**
     * <p>The names of the fields that are currently being indexed.</p>
     */
    inline void SetFieldNames(const Aws::Vector<Aws::String>& value) { m_fieldNames = value; }

    /**
     * <p>The names of the fields that are currently being indexed.</p>
     */
    inline void SetFieldNames(Aws::Vector<Aws::String>&& value) { m_fieldNames = std::move(value); }

    /**
     * <p>The names of the fields that are currently being indexed.</p>
     */
    inline IndexDocumentsResult& WithFieldNames(const Aws::Vector<Aws::String>& value) { SetFieldNames(value); return *this;}

    /**
     * <p>The names of the fields that are currently being indexed.</p>
     */
    inline IndexDocumentsResult& WithFieldNames(Aws::Vector<Aws::String>&& value) { SetFieldNames(std::move(value)); return *this;}

    /**
     * <p>The names of the fields that are currently being indexed.</p>
     */
    inline IndexDocumentsResult& AddFieldNames(const Aws::String& value) { m_fieldNames.push_back(value); return *this; }

    /**
     * <p>The names of the fields that are currently being indexed.</p>
     */
    inline IndexDocumentsResult& AddFieldNames(Aws::String&& value) { m_fieldNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the fields that are currently being indexed.</p>
     */
    inline IndexDocumentsResult& AddFieldNames(const char* value) { m_fieldNames.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline IndexDocumentsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline IndexDocumentsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_fieldNames;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
