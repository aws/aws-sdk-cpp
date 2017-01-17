﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudsearch/model/IndexFieldStatus.h>
#include <aws/cloudsearch/model/ResponseMetadata.h>

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
   * <p>The result of a <code><a>DeleteIndexField</a></code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DeleteIndexFieldResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API DeleteIndexFieldResult
  {
  public:
    DeleteIndexFieldResult();
    DeleteIndexFieldResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteIndexFieldResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The status of the index field being deleted.</p>
     */
    inline const IndexFieldStatus& GetIndexField() const{ return m_indexField; }

    /**
     * <p>The status of the index field being deleted.</p>
     */
    inline void SetIndexField(const IndexFieldStatus& value) { m_indexField = value; }

    /**
     * <p>The status of the index field being deleted.</p>
     */
    inline void SetIndexField(IndexFieldStatus&& value) { m_indexField = value; }

    /**
     * <p>The status of the index field being deleted.</p>
     */
    inline DeleteIndexFieldResult& WithIndexField(const IndexFieldStatus& value) { SetIndexField(value); return *this;}

    /**
     * <p>The status of the index field being deleted.</p>
     */
    inline DeleteIndexFieldResult& WithIndexField(IndexFieldStatus&& value) { SetIndexField(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DeleteIndexFieldResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteIndexFieldResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    IndexFieldStatus m_indexField;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws