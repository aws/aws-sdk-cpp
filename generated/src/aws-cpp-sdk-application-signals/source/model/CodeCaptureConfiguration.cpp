/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/CodeCaptureConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

CodeCaptureConfiguration::CodeCaptureConfiguration(JsonView jsonValue) { *this = jsonValue; }

CodeCaptureConfiguration& CodeCaptureConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CaptureArguments")) {
    Aws::Utils::Array<JsonView> captureArgumentsJsonList = jsonValue.GetArray("CaptureArguments");
    for (unsigned captureArgumentsIndex = 0; captureArgumentsIndex < captureArgumentsJsonList.GetLength(); ++captureArgumentsIndex) {
      m_captureArguments.push_back(captureArgumentsJsonList[captureArgumentsIndex].AsString());
    }
    m_captureArgumentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CaptureReturn")) {
    m_captureReturn = jsonValue.GetBool("CaptureReturn");
    m_captureReturnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CaptureStackTrace")) {
    m_captureStackTrace = jsonValue.GetBool("CaptureStackTrace");
    m_captureStackTraceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CaptureLocals")) {
    Aws::Utils::Array<JsonView> captureLocalsJsonList = jsonValue.GetArray("CaptureLocals");
    for (unsigned captureLocalsIndex = 0; captureLocalsIndex < captureLocalsJsonList.GetLength(); ++captureLocalsIndex) {
      m_captureLocals.push_back(captureLocalsJsonList[captureLocalsIndex].AsString());
    }
    m_captureLocalsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CaptureLimits")) {
    m_captureLimits = jsonValue.GetObject("CaptureLimits");
    m_captureLimitsHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeCaptureConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_captureArgumentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> captureArgumentsJsonList(m_captureArguments.size());
    for (unsigned captureArgumentsIndex = 0; captureArgumentsIndex < captureArgumentsJsonList.GetLength(); ++captureArgumentsIndex) {
      captureArgumentsJsonList[captureArgumentsIndex].AsString(m_captureArguments[captureArgumentsIndex]);
    }
    payload.WithArray("CaptureArguments", std::move(captureArgumentsJsonList));
  }

  if (m_captureReturnHasBeenSet) {
    payload.WithBool("CaptureReturn", m_captureReturn);
  }

  if (m_captureStackTraceHasBeenSet) {
    payload.WithBool("CaptureStackTrace", m_captureStackTrace);
  }

  if (m_captureLocalsHasBeenSet) {
    Aws::Utils::Array<JsonValue> captureLocalsJsonList(m_captureLocals.size());
    for (unsigned captureLocalsIndex = 0; captureLocalsIndex < captureLocalsJsonList.GetLength(); ++captureLocalsIndex) {
      captureLocalsJsonList[captureLocalsIndex].AsString(m_captureLocals[captureLocalsIndex]);
    }
    payload.WithArray("CaptureLocals", std::move(captureLocalsJsonList));
  }

  if (m_captureLimitsHasBeenSet) {
    payload.WithObject("CaptureLimits", m_captureLimits.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
