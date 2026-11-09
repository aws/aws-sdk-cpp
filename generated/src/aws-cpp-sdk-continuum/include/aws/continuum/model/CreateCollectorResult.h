/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/CollectorStatus.h>
#include <aws/continuum/model/CollectorType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {
/**
 * <p>Contains the identifier and ARN of the newly created Collector.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CreateCollectorOutput">AWS
 * API Reference</a></p>
 */
class CreateCollectorResult {
 public:
  AWS_CONTINUUM_API CreateCollectorResult() = default;
  AWS_CONTINUUM_API CreateCollectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API CreateCollectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier assigned to the Collector.</p>
   */
  inline const Aws::String& GetCollectorId() const { return m_collectorId; }
  template <typename CollectorIdT = Aws::String>
  void SetCollectorId(CollectorIdT&& value) {
    m_collectorIdHasBeenSet = true;
    m_collectorId = std::forward<CollectorIdT>(value);
  }
  template <typename CollectorIdT = Aws::String>
  CreateCollectorResult& WithCollectorId(CollectorIdT&& value) {
    SetCollectorId(std::forward<CollectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the created Collector.</p>
   */
  inline const Aws::String& GetCollectorArn() const { return m_collectorArn; }
  template <typename CollectorArnT = Aws::String>
  void SetCollectorArn(CollectorArnT&& value) {
    m_collectorArnHasBeenSet = true;
    m_collectorArn = std::forward<CollectorArnT>(value);
  }
  template <typename CollectorArnT = Aws::String>
  CreateCollectorResult& WithCollectorArn(CollectorArnT&& value) {
    SetCollectorArn(std::forward<CollectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source collected by this Collector.</p>
   */
  inline CollectorType GetType() const { return m_type; }
  inline void SetType(CollectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateCollectorResult& WithType(CollectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status.</p>
   */
  inline CollectorStatus GetStatus() const { return m_status; }
  inline void SetStatus(CollectorStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateCollectorResult& WithStatus(CollectorStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the Collector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateCollectorResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
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
  CreateCollectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_collectorId;

  Aws::String m_collectorArn;

  CollectorType m_type{CollectorType::NOT_SET};

  CollectorStatus m_status{CollectorStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_collectorIdHasBeenSet = false;
  bool m_collectorArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
