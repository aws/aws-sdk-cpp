/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/AccountSetting.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace AutoScaling {
namespace Model {
class DescribeAccountSettingsResult {
 public:
  AWS_AUTOSCALING_API DescribeAccountSettingsResult() = default;
  AWS_AUTOSCALING_API DescribeAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_AUTOSCALING_API DescribeAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> Information about the account settings. </p>
   */
  inline const Aws::Vector<AccountSetting>& GetSettings() const { return m_settings; }
  template <typename SettingsT = Aws::Vector<AccountSetting>>
  void SetSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings = std::forward<SettingsT>(value);
  }
  template <typename SettingsT = Aws::Vector<AccountSetting>>
  DescribeAccountSettingsResult& WithSettings(SettingsT&& value) {
    SetSettings(std::forward<SettingsT>(value));
    return *this;
  }
  template <typename SettingsT = AccountSetting>
  DescribeAccountSettingsResult& AddSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings.emplace_back(std::forward<SettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A string that indicates that the response contains more items than can be
   * returned in a single response. To receive additional items, specify this string
   * for the <code>NextToken</code> value when requesting the next set of items. This
   * value is <code>null</code> when there are no more items to return. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeAccountSettingsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  DescribeAccountSettingsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AccountSetting> m_settings;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_settingsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
