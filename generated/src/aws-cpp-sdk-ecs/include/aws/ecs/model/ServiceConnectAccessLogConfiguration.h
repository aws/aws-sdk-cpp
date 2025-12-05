/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ServiceConnectAccessLoggingFormat.h>
#include <aws/ecs/model/ServiceConnectIncludeQueryParameters.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>Configuration for Service Connect access logging. Access logs provide
 * detailed information about requests made to your service, including request
 * patterns, response codes, and timing data for debugging and monitoring
 * purposes.</p>  <p>To enable access logs, you must also specify a
 * <code>logConfiguration</code> in the
 * <code>serviceConnectConfiguration</code>.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceConnectAccessLogConfiguration">AWS
 * API Reference</a></p>
 */
class ServiceConnectAccessLogConfiguration {
 public:
  AWS_ECS_API ServiceConnectAccessLogConfiguration() = default;
  AWS_ECS_API ServiceConnectAccessLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ServiceConnectAccessLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The format for Service Connect access log output. Choose TEXT for
   * human-readable logs or JSON for structured data that integrates well with log
   * analysis tools.</p>
   */
  inline ServiceConnectAccessLoggingFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(ServiceConnectAccessLoggingFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline ServiceConnectAccessLogConfiguration& WithFormat(ServiceConnectAccessLoggingFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to include query parameters in Service Connect access
   * logs.</p> <p>When enabled, query parameters from HTTP requests are included in
   * the access logs. Consider security and privacy implications when enabling this
   * feature, as query parameters may contain sensitive information such as request
   * IDs and tokens. By default, this parameter is <code>DISABLED</code>.</p>
   */
  inline ServiceConnectIncludeQueryParameters GetIncludeQueryParameters() const { return m_includeQueryParameters; }
  inline bool IncludeQueryParametersHasBeenSet() const { return m_includeQueryParametersHasBeenSet; }
  inline void SetIncludeQueryParameters(ServiceConnectIncludeQueryParameters value) {
    m_includeQueryParametersHasBeenSet = true;
    m_includeQueryParameters = value;
  }
  inline ServiceConnectAccessLogConfiguration& WithIncludeQueryParameters(ServiceConnectIncludeQueryParameters value) {
    SetIncludeQueryParameters(value);
    return *this;
  }
  ///@}
 private:
  ServiceConnectAccessLoggingFormat m_format{ServiceConnectAccessLoggingFormat::NOT_SET};

  ServiceConnectIncludeQueryParameters m_includeQueryParameters{ServiceConnectIncludeQueryParameters::NOT_SET};
  bool m_formatHasBeenSet = false;
  bool m_includeQueryParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
