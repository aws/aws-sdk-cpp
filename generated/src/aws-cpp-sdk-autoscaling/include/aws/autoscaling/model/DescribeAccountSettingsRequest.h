/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AutoScaling {
namespace Model {

/**
 */
class DescribeAccountSettingsRequest : public AutoScalingRequest {
 public:
  AWS_AUTOSCALING_API DescribeAccountSettingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeAccountSettings"; }

  AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

 protected:
  AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p> The name of the account setting to describe. If you omit this parameter, all
   * account settings are described. </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DescribeAccountSettingsRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token for the next set of items to return. (You received this token from
   * a previous call.) </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeAccountSettingsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum number of items to return with this call. The default value is
   * <code>50</code> and the maximum value is <code>100</code>. </p>
   */
  inline int GetMaxRecords() const { return m_maxRecords; }
  inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
  inline void SetMaxRecords(int value) {
    m_maxRecordsHasBeenSet = true;
    m_maxRecords = value;
  }
  inline DescribeAccountSettingsRequest& WithMaxRecords(int value) {
    SetMaxRecords(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_nextToken;

  int m_maxRecords{0};
  bool m_nameHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxRecordsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
