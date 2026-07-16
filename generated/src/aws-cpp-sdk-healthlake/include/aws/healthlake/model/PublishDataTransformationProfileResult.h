/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/SourceFormat.h>
#include <aws/healthlake/model/TargetFormat.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {
/**
 * <p>The response from the <code>PublishDataTransformationProfile</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/PublishDataTransformationProfileResponse">AWS
 * API Reference</a></p>
 */
class PublishDataTransformationProfileResult {
 public:
  AWS_HEALTHLAKE_API PublishDataTransformationProfileResult() = default;
  AWS_HEALTHLAKE_API PublishDataTransformationProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_HEALTHLAKE_API PublishDataTransformationProfileResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the published profile.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  PublishDataTransformationProfileResult& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new version number that was created.</p>
   */
  inline int GetVersion() const { return m_version; }
  inline void SetVersion(int value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline PublishDataTransformationProfileResult& WithVersion(int value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source data format of the profile.</p>
   */
  inline SourceFormat GetSourceFormat() const { return m_sourceFormat; }
  inline void SetSourceFormat(SourceFormat value) {
    m_sourceFormatHasBeenSet = true;
    m_sourceFormat = value;
  }
  inline PublishDataTransformationProfileResult& WithSourceFormat(SourceFormat value) {
    SetSourceFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target output format of the profile.</p>
   */
  inline TargetFormat GetTargetFormat() const { return m_targetFormat; }
  inline void SetTargetFormat(TargetFormat value) {
    m_targetFormatHasBeenSet = true;
    m_targetFormat = value;
  }
  inline PublishDataTransformationProfileResult& WithTargetFormat(TargetFormat value) {
    SetTargetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the published profile.</p>
   */
  inline const Aws::String& GetProfileName() const { return m_profileName; }
  template <typename ProfileNameT = Aws::String>
  void SetProfileName(ProfileNameT&& value) {
    m_profileNameHasBeenSet = true;
    m_profileName = std::forward<ProfileNameT>(value);
  }
  template <typename ProfileNameT = Aws::String>
  PublishDataTransformationProfileResult& WithProfileName(ProfileNameT&& value) {
    SetProfileName(std::forward<ProfileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the profile was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  PublishDataTransformationProfileResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
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
  PublishDataTransformationProfileResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_profileId;

  int m_version{0};

  SourceFormat m_sourceFormat{SourceFormat::NOT_SET};

  TargetFormat m_targetFormat{TargetFormat::NOT_SET};

  Aws::String m_profileName;

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_profileIdHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_sourceFormatHasBeenSet = false;
  bool m_targetFormatHasBeenSet = false;
  bool m_profileNameHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
