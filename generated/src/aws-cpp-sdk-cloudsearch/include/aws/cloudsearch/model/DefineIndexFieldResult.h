/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/model/IndexFieldStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>
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
   * <p>The result of a <code><a>DefineIndexField</a></code> request. Contains the
   * status of the newly-configured index field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineIndexFieldResponse">AWS
   * API Reference</a></p>
   */
  class DefineIndexFieldResult
  {
  public:
    AWS_CLOUDSEARCH_API DefineIndexFieldResult();
    AWS_CLOUDSEARCH_API DefineIndexFieldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDSEARCH_API DefineIndexFieldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const IndexFieldStatus& GetIndexField() const{ return m_indexField; }

    
    inline void SetIndexField(const IndexFieldStatus& value) { m_indexField = value; }

    
    inline void SetIndexField(IndexFieldStatus&& value) { m_indexField = std::move(value); }

    
    inline DefineIndexFieldResult& WithIndexField(const IndexFieldStatus& value) { SetIndexField(value); return *this;}

    
    inline DefineIndexFieldResult& WithIndexField(IndexFieldStatus&& value) { SetIndexField(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DefineIndexFieldResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DefineIndexFieldResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IndexFieldStatus m_indexField;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
