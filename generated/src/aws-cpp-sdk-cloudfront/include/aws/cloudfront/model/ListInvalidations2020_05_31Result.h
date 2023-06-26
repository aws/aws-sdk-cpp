﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/InvalidationList.h>
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
namespace CloudFront
{
namespace Model
{
  /**
   * <p>The returned result of the corresponding request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListInvalidationsResult">AWS
   * API Reference</a></p>
   */
  class ListInvalidations2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListInvalidations2020_05_31Result();
    AWS_CLOUDFRONT_API ListInvalidations2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListInvalidations2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about invalidation batches.</p>
     */
    inline const InvalidationList& GetInvalidationList() const{ return m_invalidationList; }

    /**
     * <p>Information about invalidation batches.</p>
     */
    inline void SetInvalidationList(const InvalidationList& value) { m_invalidationList = value; }

    /**
     * <p>Information about invalidation batches.</p>
     */
    inline void SetInvalidationList(InvalidationList&& value) { m_invalidationList = std::move(value); }

    /**
     * <p>Information about invalidation batches.</p>
     */
    inline ListInvalidations2020_05_31Result& WithInvalidationList(const InvalidationList& value) { SetInvalidationList(value); return *this;}

    /**
     * <p>Information about invalidation batches.</p>
     */
    inline ListInvalidations2020_05_31Result& WithInvalidationList(InvalidationList&& value) { SetInvalidationList(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListInvalidations2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListInvalidations2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListInvalidations2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InvalidationList m_invalidationList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
