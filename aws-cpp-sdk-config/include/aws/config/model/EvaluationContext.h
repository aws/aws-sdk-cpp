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
    AWS_CONFIGSERVICE_API EvaluationContext();
    AWS_CONFIGSERVICE_API EvaluationContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API EvaluationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique EvaluationContextIdentifier ID for an EvaluationContext.</p>
     */
    inline const Aws::String& GetEvaluationContextIdentifier() const{ return m_evaluationContextIdentifier; }

    /**
     * <p>A unique EvaluationContextIdentifier ID for an EvaluationContext.</p>
     */
    inline bool EvaluationContextIdentifierHasBeenSet() const { return m_evaluationContextIdentifierHasBeenSet; }

    /**
     * <p>A unique EvaluationContextIdentifier ID for an EvaluationContext.</p>
     */
    inline void SetEvaluationContextIdentifier(const Aws::String& value) { m_evaluationContextIdentifierHasBeenSet = true; m_evaluationContextIdentifier = value; }

    /**
     * <p>A unique EvaluationContextIdentifier ID for an EvaluationContext.</p>
     */
    inline void SetEvaluationContextIdentifier(Aws::String&& value) { m_evaluationContextIdentifierHasBeenSet = true; m_evaluationContextIdentifier = std::move(value); }

    /**
     * <p>A unique EvaluationContextIdentifier ID for an EvaluationContext.</p>
     */
    inline void SetEvaluationContextIdentifier(const char* value) { m_evaluationContextIdentifierHasBeenSet = true; m_evaluationContextIdentifier.assign(value); }

    /**
     * <p>A unique EvaluationContextIdentifier ID for an EvaluationContext.</p>
     */
    inline EvaluationContext& WithEvaluationContextIdentifier(const Aws::String& value) { SetEvaluationContextIdentifier(value); return *this;}

    /**
     * <p>A unique EvaluationContextIdentifier ID for an EvaluationContext.</p>
     */
    inline EvaluationContext& WithEvaluationContextIdentifier(Aws::String&& value) { SetEvaluationContextIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique EvaluationContextIdentifier ID for an EvaluationContext.</p>
     */
    inline EvaluationContext& WithEvaluationContextIdentifier(const char* value) { SetEvaluationContextIdentifier(value); return *this;}

  private:

    Aws::String m_evaluationContextIdentifier;
    bool m_evaluationContextIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
