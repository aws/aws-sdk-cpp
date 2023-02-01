/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p> Describes a custom rewrite or redirect rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CustomRule">AWS
   * API Reference</a></p>
   */
  class CustomRule
  {
  public:
    AWS_AMPLIFY_API CustomRule();
    AWS_AMPLIFY_API CustomRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API CustomRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p> The source pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p> The target pattern for a URL rewrite or redirect rule. </p>
     */
    inline CustomRule& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p> The status code for a URL rewrite or redirect rule. </p> <dl> <dt>200</dt>
     * <dd> <p>Represents a 200 rewrite rule.</p> </dd> <dt>301</dt> <dd> <p>Represents
     * a 301 (moved pemanently) redirect rule. This and all future requests should be
     * directed to the target URL. </p> </dd> <dt>302</dt> <dd> <p>Represents a 302
     * temporary redirect rule.</p> </dd> <dt>404</dt> <dd> <p>Represents a 404
     * redirect rule.</p> </dd> <dt>404-200</dt> <dd> <p>Represents a 404 rewrite
     * rule.</p> </dd> </dl>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p> <dl> <dt>200</dt>
     * <dd> <p>Represents a 200 rewrite rule.</p> </dd> <dt>301</dt> <dd> <p>Represents
     * a 301 (moved pemanently) redirect rule. This and all future requests should be
     * directed to the target URL. </p> </dd> <dt>302</dt> <dd> <p>Represents a 302
     * temporary redirect rule.</p> </dd> <dt>404</dt> <dd> <p>Represents a 404
     * redirect rule.</p> </dd> <dt>404-200</dt> <dd> <p>Represents a 404 rewrite
     * rule.</p> </dd> </dl>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p> <dl> <dt>200</dt>
     * <dd> <p>Represents a 200 rewrite rule.</p> </dd> <dt>301</dt> <dd> <p>Represents
     * a 301 (moved pemanently) redirect rule. This and all future requests should be
     * directed to the target URL. </p> </dd> <dt>302</dt> <dd> <p>Represents a 302
     * temporary redirect rule.</p> </dd> <dt>404</dt> <dd> <p>Represents a 404
     * redirect rule.</p> </dd> <dt>404-200</dt> <dd> <p>Represents a 404 rewrite
     * rule.</p> </dd> </dl>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p> <dl> <dt>200</dt>
     * <dd> <p>Represents a 200 rewrite rule.</p> </dd> <dt>301</dt> <dd> <p>Represents
     * a 301 (moved pemanently) redirect rule. This and all future requests should be
     * directed to the target URL. </p> </dd> <dt>302</dt> <dd> <p>Represents a 302
     * temporary redirect rule.</p> </dd> <dt>404</dt> <dd> <p>Represents a 404
     * redirect rule.</p> </dd> <dt>404-200</dt> <dd> <p>Represents a 404 rewrite
     * rule.</p> </dd> </dl>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p> <dl> <dt>200</dt>
     * <dd> <p>Represents a 200 rewrite rule.</p> </dd> <dt>301</dt> <dd> <p>Represents
     * a 301 (moved pemanently) redirect rule. This and all future requests should be
     * directed to the target URL. </p> </dd> <dt>302</dt> <dd> <p>Represents a 302
     * temporary redirect rule.</p> </dd> <dt>404</dt> <dd> <p>Represents a 404
     * redirect rule.</p> </dd> <dt>404-200</dt> <dd> <p>Represents a 404 rewrite
     * rule.</p> </dd> </dl>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p> <dl> <dt>200</dt>
     * <dd> <p>Represents a 200 rewrite rule.</p> </dd> <dt>301</dt> <dd> <p>Represents
     * a 301 (moved pemanently) redirect rule. This and all future requests should be
     * directed to the target URL. </p> </dd> <dt>302</dt> <dd> <p>Represents a 302
     * temporary redirect rule.</p> </dd> <dt>404</dt> <dd> <p>Represents a 404
     * redirect rule.</p> </dd> <dt>404-200</dt> <dd> <p>Represents a 404 rewrite
     * rule.</p> </dd> </dl>
     */
    inline CustomRule& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p> <dl> <dt>200</dt>
     * <dd> <p>Represents a 200 rewrite rule.</p> </dd> <dt>301</dt> <dd> <p>Represents
     * a 301 (moved pemanently) redirect rule. This and all future requests should be
     * directed to the target URL. </p> </dd> <dt>302</dt> <dd> <p>Represents a 302
     * temporary redirect rule.</p> </dd> <dt>404</dt> <dd> <p>Represents a 404
     * redirect rule.</p> </dd> <dt>404-200</dt> <dd> <p>Represents a 404 rewrite
     * rule.</p> </dd> </dl>
     */
    inline CustomRule& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The status code for a URL rewrite or redirect rule. </p> <dl> <dt>200</dt>
     * <dd> <p>Represents a 200 rewrite rule.</p> </dd> <dt>301</dt> <dd> <p>Represents
     * a 301 (moved pemanently) redirect rule. This and all future requests should be
     * directed to the target URL. </p> </dd> <dt>302</dt> <dd> <p>Represents a 302
     * temporary redirect rule.</p> </dd> <dt>404</dt> <dd> <p>Represents a 404
     * redirect rule.</p> </dd> <dt>404-200</dt> <dd> <p>Represents a 404 rewrite
     * rule.</p> </dd> </dl>
     */
    inline CustomRule& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p> The condition for a URL rewrite or redirect rule, such as a country code.
     * </p>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }

    /**
     * <p> The condition for a URL rewrite or redirect rule, such as a country code.
     * </p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p> The condition for a URL rewrite or redirect rule, such as a country code.
     * </p>
     */
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p> The condition for a URL rewrite or redirect rule, such as a country code.
     * </p>
     */
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p> The condition for a URL rewrite or redirect rule, such as a country code.
     * </p>
     */
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }

    /**
     * <p> The condition for a URL rewrite or redirect rule, such as a country code.
     * </p>
     */
    inline CustomRule& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}

    /**
     * <p> The condition for a URL rewrite or redirect rule, such as a country code.
     * </p>
     */
    inline CustomRule& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}

    /**
     * <p> The condition for a URL rewrite or redirect rule, such as a country code.
     * </p>
     */
    inline CustomRule& WithCondition(const char* value) { SetCondition(value); return *this;}

  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
