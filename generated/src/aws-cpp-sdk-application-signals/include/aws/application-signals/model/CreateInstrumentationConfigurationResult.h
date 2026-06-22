/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/CaptureConfiguration.h>
#include <aws/application-signals/model/DynamicInstrumentationSignalType.h>
#include <aws/application-signals/model/InstrumentationType.h>
#include <aws/application-signals/model/Location.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {
class CreateInstrumentationConfigurationResult {
 public:
  AWS_APPLICATIONSIGNALS_API CreateInstrumentationConfigurationResult() = default;
  AWS_APPLICATIONSIGNALS_API CreateInstrumentationConfigurationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPLICATIONSIGNALS_API CreateInstrumentationConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The type of instrumentation that was created, echoed from the request.</p>
   */
  inline InstrumentationType GetInstrumentationType() const { return m_instrumentationType; }
  inline void SetInstrumentationType(InstrumentationType value) {
    m_instrumentationTypeHasBeenSet = true;
    m_instrumentationType = value;
  }
  inline CreateInstrumentationConfigurationResult& WithInstrumentationType(InstrumentationType value) {
    SetInstrumentationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service name for the instrumentation configuration, echoed from the
   * request.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  CreateInstrumentationConfigurationResult& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment for the instrumentation configuration, echoed from the
   * request.</p>
   */
  inline const Aws::String& GetEnvironment() const { return m_environment; }
  template <typename EnvironmentT = Aws::String>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = Aws::String>
  CreateInstrumentationConfigurationResult& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The telemetry signal type for the instrumentation configuration, echoed from
   * the request.</p>
   */
  inline DynamicInstrumentationSignalType GetSignalType() const { return m_signalType; }
  inline void SetSignalType(DynamicInstrumentationSignalType value) {
    m_signalTypeHasBeenSet = true;
    m_signalType = value;
  }
  inline CreateInstrumentationConfigurationResult& WithSignalType(DynamicInstrumentationSignalType value) {
    SetSignalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location where instrumentation is applied, echoed from the request.</p>
   */
  inline const Location& GetLocation() const { return m_location; }
  template <typename LocationT = Location>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Location>
  CreateInstrumentationConfigurationResult& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A stable hash computed from the location that uniquely identifies this
   * instrumentation point within the service, environment, and signal type.</p>
   */
  inline const Aws::String& GetLocationHash() const { return m_locationHash; }
  template <typename LocationHashT = Aws::String>
  void SetLocationHash(LocationHashT&& value) {
    m_locationHashHasBeenSet = true;
    m_locationHash = std::forward<LocationHashT>(value);
  }
  template <typename LocationHashT = Aws::String>
  CreateInstrumentationConfigurationResult& WithLocationHash(LocationHashT&& value) {
    SetLocationHash(std::forward<LocationHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The optional description that was stored with the instrumentation
   * configuration.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateInstrumentationConfigurationResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp after which this configuration is no longer served to clients.
   * Present only for <code>BREAKPOINT</code> configurations; <code>PROBE</code>
   * configurations do not expire.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  CreateInstrumentationConfigurationResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attribute filters returned with the configuration so SDKs can perform
   * client-side targeting.</p>
   */
  inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetAttributeFilters() const { return m_attributeFilters; }
  template <typename AttributeFiltersT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
  void SetAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters = std::forward<AttributeFiltersT>(value);
  }
  template <typename AttributeFiltersT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
  CreateInstrumentationConfigurationResult& WithAttributeFilters(AttributeFiltersT&& value) {
    SetAttributeFilters(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  template <typename AttributeFiltersT = Aws::Map<Aws::String, Aws::String>>
  CreateInstrumentationConfigurationResult& AddAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters.emplace_back(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capture settings that were stored for this instrumentation
   * configuration.</p>
   */
  inline const CaptureConfiguration& GetCaptureConfiguration() const { return m_captureConfiguration; }
  template <typename CaptureConfigurationT = CaptureConfiguration>
  void SetCaptureConfiguration(CaptureConfigurationT&& value) {
    m_captureConfigurationHasBeenSet = true;
    m_captureConfiguration = std::forward<CaptureConfigurationT>(value);
  }
  template <typename CaptureConfigurationT = CaptureConfiguration>
  CreateInstrumentationConfigurationResult& WithCaptureConfiguration(CaptureConfigurationT&& value) {
    SetCaptureConfiguration(std::forward<CaptureConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The server-generated creation timestamp for this instrumentation
   * configuration.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateInstrumentationConfigurationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN for the created instrumentation configuration</p>
   */
  inline const Aws::String& GetARN() const { return m_aRN; }
  template <typename ARNT = Aws::String>
  void SetARN(ARNT&& value) {
    m_aRNHasBeenSet = true;
    m_aRN = std::forward<ARNT>(value);
  }
  template <typename ARNT = Aws::String>
  CreateInstrumentationConfigurationResult& WithARN(ARNT&& value) {
    SetARN(std::forward<ARNT>(value));
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
  CreateInstrumentationConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  InstrumentationType m_instrumentationType{InstrumentationType::NOT_SET};

  Aws::String m_service;

  Aws::String m_environment;

  DynamicInstrumentationSignalType m_signalType{DynamicInstrumentationSignalType::NOT_SET};

  Location m_location;

  Aws::String m_locationHash;

  Aws::String m_description;

  Aws::Utils::DateTime m_expiresAt{};

  Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_attributeFilters;

  CaptureConfiguration m_captureConfiguration;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_aRN;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_instrumentationTypeHasBeenSet = false;
  bool m_serviceHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_signalTypeHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_locationHashHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_attributeFiltersHasBeenSet = false;
  bool m_captureConfigurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_aRNHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
