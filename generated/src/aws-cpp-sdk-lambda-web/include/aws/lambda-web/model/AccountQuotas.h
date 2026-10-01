/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>The quotas that apply to web functions in your account in the current AWS
 * Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/AccountQuotas">AWS
 * API Reference</a></p>
 */
class AccountQuotas {
 public:
  AWS_LAMBDAWEB_API AccountQuotas() = default;
  AWS_LAMBDAWEB_API AccountQuotas(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API AccountQuotas& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum total number of Arm vCPUs that you can allocate across all of
   * your web functions in the current AWS Region.</p>
   */
  inline int GetMaxTotalArmVCpus() const { return m_maxTotalArmVCpus; }
  inline bool MaxTotalArmVCpusHasBeenSet() const { return m_maxTotalArmVCpusHasBeenSet; }
  inline void SetMaxTotalArmVCpus(int value) {
    m_maxTotalArmVCpusHasBeenSet = true;
    m_maxTotalArmVCpus = value;
  }
  inline AccountQuotas& WithMaxTotalArmVCpus(int value) {
    SetMaxTotalArmVCpus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of requests per second allowed across all of your web
   * function endpoints in your account in the current AWS Region.</p>
   */
  inline int GetMaxTotalRateLimit() const { return m_maxTotalRateLimit; }
  inline bool MaxTotalRateLimitHasBeenSet() const { return m_maxTotalRateLimitHasBeenSet; }
  inline void SetMaxTotalRateLimit(int value) {
    m_maxTotalRateLimitHasBeenSet = true;
    m_maxTotalRateLimit = value;
  }
  inline AccountQuotas& WithMaxTotalRateLimit(int value) {
    SetMaxTotalRateLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of revisions that a single web function can have.</p>
   */
  inline int GetMaxRevisionsPerFunction() const { return m_maxRevisionsPerFunction; }
  inline bool MaxRevisionsPerFunctionHasBeenSet() const { return m_maxRevisionsPerFunctionHasBeenSet; }
  inline void SetMaxRevisionsPerFunction(int value) {
    m_maxRevisionsPerFunctionHasBeenSet = true;
    m_maxRevisionsPerFunction = value;
  }
  inline AccountQuotas& WithMaxRevisionsPerFunction(int value) {
    SetMaxRevisionsPerFunction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of endpoints that a single web function can have.</p>
   */
  inline int GetMaxEndpointsPerFunction() const { return m_maxEndpointsPerFunction; }
  inline bool MaxEndpointsPerFunctionHasBeenSet() const { return m_maxEndpointsPerFunctionHasBeenSet; }
  inline void SetMaxEndpointsPerFunction(int value) {
    m_maxEndpointsPerFunctionHasBeenSet = true;
    m_maxEndpointsPerFunction = value;
  }
  inline AccountQuotas& WithMaxEndpointsPerFunction(int value) {
    SetMaxEndpointsPerFunction(value);
    return *this;
  }
  ///@}
 private:
  int m_maxTotalArmVCpus{0};

  int m_maxTotalRateLimit{0};

  int m_maxRevisionsPerFunction{0};

  int m_maxEndpointsPerFunction{0};
  bool m_maxTotalArmVCpusHasBeenSet = false;
  bool m_maxTotalRateLimitHasBeenSet = false;
  bool m_maxRevisionsPerFunctionHasBeenSet = false;
  bool m_maxEndpointsPerFunctionHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
