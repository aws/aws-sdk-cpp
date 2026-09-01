/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/PartnerInfo.h>
#include <aws/lightsail/model/ProfileType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {
class GetProfileResult {
 public:
  AWS_LIGHTSAIL_API GetProfileResult() = default;
  AWS_LIGHTSAIL_API GetProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LIGHTSAIL_API GetProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The type of the profile.</p> <p>The following profile types are possible:</p>
   * <ul> <li> <p> <code>Lightsailor</code> – The account is not enrolled in the
   * Lightsail partner program.</p> </li> <li> <p> <code>LightsailPartner</code> –
   * The account is enrolled in the Lightsail partner program.</p> </li> </ul>
   */
  inline ProfileType GetProfileType() const { return m_profileType; }
  inline void SetProfileType(ProfileType value) {
    m_profileTypeHasBeenSet = true;
    m_profileType = value;
  }
  inline GetProfileResult& WithProfileType(ProfileType value) {
    SetProfileType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that describes the partner membership of the account, such as the
   * tier of the membership, its status, and when the account was enrolled.</p>
   * <p>This parameter is returned only for accounts that have a
   * <code>profileType</code> of <code>LightsailPartner</code>.</p>
   */
  inline const PartnerInfo& GetPartner() const { return m_partner; }
  template <typename PartnerT = PartnerInfo>
  void SetPartner(PartnerT&& value) {
    m_partnerHasBeenSet = true;
    m_partner = std::forward<PartnerT>(value);
  }
  template <typename PartnerT = PartnerInfo>
  GetProfileResult& WithPartner(PartnerT&& value) {
    SetPartner(std::forward<PartnerT>(value));
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
  GetProfileResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ProfileType m_profileType{ProfileType::NOT_SET};

  PartnerInfo m_partner;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_profileTypeHasBeenSet = false;
  bool m_partnerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
