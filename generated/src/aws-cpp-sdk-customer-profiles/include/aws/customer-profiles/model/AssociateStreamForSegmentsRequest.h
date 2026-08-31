/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CustomerProfiles {
namespace Model {

/**
 */
class AssociateStreamForSegmentsRequest : public CustomerProfilesRequest {
 public:
  AWS_CUSTOMERPROFILES_API AssociateStreamForSegmentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateStreamForSegments"; }

  AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique name of the domain.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  AssociateStreamForSegmentsRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream to deliver
   * segment membership events to. For example,
   * <code>arn:aws:kinesis:region:account-id:stream/stream-name</code>. </p>
   */
  inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
  inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
  template <typename DestinationArnT = Aws::String>
  void SetDestinationArn(DestinationArnT&& value) {
    m_destinationArnHasBeenSet = true;
    m_destinationArn = std::forward<DestinationArnT>(value);
  }
  template <typename DestinationArnT = Aws::String>
  AssociateStreamForSegmentsRequest& WithDestinationArn(DestinationArnT&& value) {
    SetDestinationArn(std::forward<DestinationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that allows Customer Profiles
   * service principal to assume the role for conducting AWS Key Management Service
   * (KMS) and Amazon Kinesis operations. The role must grant the following Amazon
   * Kinesis permissions to deliver segment membership events to the stream: </p>
   * <ul> <li> <p> <code>kinesis:PutRecord</code> </p> </li> <li> <p>
   * <code>kinesis:PutRecords</code> </p> </li> <li> <p>
   * <code>kinesis:DescribeStream</code> </p> </li> </ul>
   */
  inline const Aws::String& GetDestinationRoleArn() const { return m_destinationRoleArn; }
  inline bool DestinationRoleArnHasBeenSet() const { return m_destinationRoleArnHasBeenSet; }
  template <typename DestinationRoleArnT = Aws::String>
  void SetDestinationRoleArn(DestinationRoleArnT&& value) {
    m_destinationRoleArnHasBeenSet = true;
    m_destinationRoleArn = std::forward<DestinationRoleArnT>(value);
  }
  template <typename DestinationRoleArnT = Aws::String>
  AssociateStreamForSegmentsRequest& WithDestinationRoleArn(DestinationRoleArnT&& value) {
    SetDestinationRoleArn(std::forward<DestinationRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::String m_destinationArn;

  Aws::String m_destinationRoleArn;
  bool m_domainNameHasBeenSet = false;
  bool m_destinationArnHasBeenSet = false;
  bool m_destinationRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
