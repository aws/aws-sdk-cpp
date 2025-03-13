/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/KeyGroupList.h>
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
  class ListKeyGroups2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListKeyGroups2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListKeyGroups2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListKeyGroups2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of key groups.</p>
     */
    inline const KeyGroupList& GetKeyGroupList() const { return m_keyGroupList; }
    template<typename KeyGroupListT = KeyGroupList>
    void SetKeyGroupList(KeyGroupListT&& value) { m_keyGroupListHasBeenSet = true; m_keyGroupList = std::forward<KeyGroupListT>(value); }
    template<typename KeyGroupListT = KeyGroupList>
    ListKeyGroups2020_05_31Result& WithKeyGroupList(KeyGroupListT&& value) { SetKeyGroupList(std::forward<KeyGroupListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKeyGroups2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    KeyGroupList m_keyGroupList;
    bool m_keyGroupListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
