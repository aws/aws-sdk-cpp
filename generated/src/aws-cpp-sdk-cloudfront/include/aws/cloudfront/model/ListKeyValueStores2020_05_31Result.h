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
    AWS_CLOUDFRONT_API ListKeyValueStores2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListKeyValueStores2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListKeyValueStores2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The resulting key value stores list.</p>
     */
    inline const KeyValueStoreList& GetKeyValueStoreList() const { return m_keyValueStoreList; }
    template<typename KeyValueStoreListT = KeyValueStoreList>
    void SetKeyValueStoreList(KeyValueStoreListT&& value) { m_keyValueStoreListHasBeenSet = true; m_keyValueStoreList = std::forward<KeyValueStoreListT>(value); }
    template<typename KeyValueStoreListT = KeyValueStoreList>
    ListKeyValueStores2020_05_31Result& WithKeyValueStoreList(KeyValueStoreListT&& value) { SetKeyValueStoreList(std::forward<KeyValueStoreListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKeyValueStores2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    KeyValueStoreList m_keyValueStoreList;
    bool m_keyValueStoreListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
