/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/KeyValueStore.h>
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
  class DescribeKeyValueStore2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API DescribeKeyValueStore2020_05_31Result();
    AWS_CLOUDFRONT_API DescribeKeyValueStore2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API DescribeKeyValueStore2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The resulting Key Value Store.</p>
     */
    inline const KeyValueStore& GetKeyValueStore() const{ return m_keyValueStore; }

    /**
     * <p>The resulting Key Value Store.</p>
     */
    inline void SetKeyValueStore(const KeyValueStore& value) { m_keyValueStore = value; }

    /**
     * <p>The resulting Key Value Store.</p>
     */
    inline void SetKeyValueStore(KeyValueStore&& value) { m_keyValueStore = std::move(value); }

    /**
     * <p>The resulting Key Value Store.</p>
     */
    inline DescribeKeyValueStore2020_05_31Result& WithKeyValueStore(const KeyValueStore& value) { SetKeyValueStore(value); return *this;}

    /**
     * <p>The resulting Key Value Store.</p>
     */
    inline DescribeKeyValueStore2020_05_31Result& WithKeyValueStore(KeyValueStore&& value) { SetKeyValueStore(std::move(value)); return *this;}


    /**
     * <p>The ETag of the resulting Key Value Store.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The ETag of the resulting Key Value Store.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The ETag of the resulting Key Value Store.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The ETag of the resulting Key Value Store.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The ETag of the resulting Key Value Store.</p>
     */
    inline DescribeKeyValueStore2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The ETag of the resulting Key Value Store.</p>
     */
    inline DescribeKeyValueStore2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The ETag of the resulting Key Value Store.</p>
     */
    inline DescribeKeyValueStore2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeKeyValueStore2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeKeyValueStore2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeKeyValueStore2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    KeyValueStore m_keyValueStore;

    Aws::String m_eTag;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
