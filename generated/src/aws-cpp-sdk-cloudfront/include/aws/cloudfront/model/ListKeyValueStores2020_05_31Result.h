/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/KeyValueStoreList.h>
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
  class ListKeyValueStores2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListKeyValueStores2020_05_31Result();
    AWS_CLOUDFRONT_API ListKeyValueStores2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListKeyValueStores2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The resulting Key Value Stores list.</p>
     */
    inline const KeyValueStoreList& GetKeyValueStoreList() const{ return m_keyValueStoreList; }

    /**
     * <p>The resulting Key Value Stores list.</p>
     */
    inline void SetKeyValueStoreList(const KeyValueStoreList& value) { m_keyValueStoreList = value; }

    /**
     * <p>The resulting Key Value Stores list.</p>
     */
    inline void SetKeyValueStoreList(KeyValueStoreList&& value) { m_keyValueStoreList = std::move(value); }

    /**
     * <p>The resulting Key Value Stores list.</p>
     */
    inline ListKeyValueStores2020_05_31Result& WithKeyValueStoreList(const KeyValueStoreList& value) { SetKeyValueStoreList(value); return *this;}

    /**
     * <p>The resulting Key Value Stores list.</p>
     */
    inline ListKeyValueStores2020_05_31Result& WithKeyValueStoreList(KeyValueStoreList&& value) { SetKeyValueStoreList(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKeyValueStores2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKeyValueStores2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKeyValueStores2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    KeyValueStoreList m_keyValueStoreList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
