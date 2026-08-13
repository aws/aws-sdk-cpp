/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/ResourceRecord.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Contains the CNAME record that you must add to your DNS configuration to
 * validate domain ownership using DNS validation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DnsValidationChallenge">AWS
 * API Reference</a></p>
 */
class DnsValidationChallenge {
 public:
  AWS_ACM_API DnsValidationChallenge() = default;
  AWS_ACM_API DnsValidationChallenge(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API DnsValidationChallenge& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CNAME record that ACM creates for DNS validation. Add this record to your
   * DNS configuration to prove that you own or control the domain.</p>
   */
  inline const ResourceRecord& GetResourceRecord() const { return m_resourceRecord; }
  inline bool ResourceRecordHasBeenSet() const { return m_resourceRecordHasBeenSet; }
  template <typename ResourceRecordT = ResourceRecord>
  void SetResourceRecord(ResourceRecordT&& value) {
    m_resourceRecordHasBeenSet = true;
    m_resourceRecord = std::forward<ResourceRecordT>(value);
  }
  template <typename ResourceRecordT = ResourceRecord>
  DnsValidationChallenge& WithResourceRecord(ResourceRecordT&& value) {
    SetResourceRecord(std::forward<ResourceRecordT>(value));
    return *this;
  }
  ///@}
 private:
  ResourceRecord m_resourceRecord;
  bool m_resourceRecordHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
