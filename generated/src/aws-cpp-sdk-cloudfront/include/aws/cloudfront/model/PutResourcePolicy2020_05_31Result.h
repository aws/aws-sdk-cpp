/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {
class PutResourcePolicy2020_05_31Result {
 public:
  AWS_CLOUDFRONT_API PutResourcePolicy2020_05_31Result() = default;
  AWS_CLOUDFRONT_API PutResourcePolicy2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_CLOUDFRONT_API PutResourcePolicy2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the CloudFront resource for which the
   * policy was created.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  PutResourcePolicy2020_05_31Result& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  PutResourcePolicy2020_05_31Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_requestId;
  bool m_resourceArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
