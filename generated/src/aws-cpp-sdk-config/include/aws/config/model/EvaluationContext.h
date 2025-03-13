/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Use EvaluationContext to group independently initiated proactive resource
   * evaluations. For example, CFN Stack. If you want to check just a resource
   * definition, you do not need to provide evaluation context.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/EvaluationContext">AWS
   * API Reference</a></p>
   */
  class EvaluationContext
  {
  public:
    AWS_CONFIGSERVICE_API EvaluationContext() = default;
    AWS_CONFIGSERVICE_API EvaluationContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API EvaluationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique EvaluationContextIdentifier ID for an EvaluationContext.</p>
     */
    inline const Aws::String& GetEvaluationContextIdentifier() const { return m_evaluationContextIdentifier; }
    inline bool EvaluationContextIdentifierHasBeenSet() const { return m_evaluationContextIdentifierHasBeenSet; }
    template<typename EvaluationContextIdentifierT = Aws::String>
    void SetEvaluationContextIdentifier(EvaluationContextIdentifierT&& value) { m_evaluationContextIdentifierHasBeenSet = true; m_evaluationContextIdentifier = std::forward<EvaluationContextIdentifierT>(value); }
    template<typename EvaluationContextIdentifierT = Aws::String>
    EvaluationContext& WithEvaluationContextIdentifier(EvaluationContextIdentifierT&& value) { SetEvaluationContextIdentifier(std::forward<EvaluationContextIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evaluationContextIdentifier;
    bool m_evaluationContextIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
