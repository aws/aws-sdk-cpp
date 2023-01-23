/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Execution result information, such as the external execution
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionExecutionResult">AWS
   * API Reference</a></p>
   */
  class ActionExecutionResult
  {
  public:
    AWS_CODEPIPELINE_API ActionExecutionResult();
    AWS_CODEPIPELINE_API ActionExecutionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionExecutionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action provider's external ID for the action execution.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const{ return m_externalExecutionId; }

    /**
     * <p>The action provider's external ID for the action execution.</p>
     */
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }

    /**
     * <p>The action provider's external ID for the action execution.</p>
     */
    inline void SetExternalExecutionId(const Aws::String& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = value; }

    /**
     * <p>The action provider's external ID for the action execution.</p>
     */
    inline void SetExternalExecutionId(Aws::String&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::move(value); }

    /**
     * <p>The action provider's external ID for the action execution.</p>
     */
    inline void SetExternalExecutionId(const char* value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId.assign(value); }

    /**
     * <p>The action provider's external ID for the action execution.</p>
     */
    inline ActionExecutionResult& WithExternalExecutionId(const Aws::String& value) { SetExternalExecutionId(value); return *this;}

    /**
     * <p>The action provider's external ID for the action execution.</p>
     */
    inline ActionExecutionResult& WithExternalExecutionId(Aws::String&& value) { SetExternalExecutionId(std::move(value)); return *this;}

    /**
     * <p>The action provider's external ID for the action execution.</p>
     */
    inline ActionExecutionResult& WithExternalExecutionId(const char* value) { SetExternalExecutionId(value); return *this;}


    /**
     * <p>The action provider's summary for the action execution.</p>
     */
    inline const Aws::String& GetExternalExecutionSummary() const{ return m_externalExecutionSummary; }

    /**
     * <p>The action provider's summary for the action execution.</p>
     */
    inline bool ExternalExecutionSummaryHasBeenSet() const { return m_externalExecutionSummaryHasBeenSet; }

    /**
     * <p>The action provider's summary for the action execution.</p>
     */
    inline void SetExternalExecutionSummary(const Aws::String& value) { m_externalExecutionSummaryHasBeenSet = true; m_externalExecutionSummary = value; }

    /**
     * <p>The action provider's summary for the action execution.</p>
     */
    inline void SetExternalExecutionSummary(Aws::String&& value) { m_externalExecutionSummaryHasBeenSet = true; m_externalExecutionSummary = std::move(value); }

    /**
     * <p>The action provider's summary for the action execution.</p>
     */
    inline void SetExternalExecutionSummary(const char* value) { m_externalExecutionSummaryHasBeenSet = true; m_externalExecutionSummary.assign(value); }

    /**
     * <p>The action provider's summary for the action execution.</p>
     */
    inline ActionExecutionResult& WithExternalExecutionSummary(const Aws::String& value) { SetExternalExecutionSummary(value); return *this;}

    /**
     * <p>The action provider's summary for the action execution.</p>
     */
    inline ActionExecutionResult& WithExternalExecutionSummary(Aws::String&& value) { SetExternalExecutionSummary(std::move(value)); return *this;}

    /**
     * <p>The action provider's summary for the action execution.</p>
     */
    inline ActionExecutionResult& WithExternalExecutionSummary(const char* value) { SetExternalExecutionSummary(value); return *this;}


    /**
     * <p>The deepest external link to the external resource (for example, a repository
     * URL or deployment endpoint) that is used when running the action.</p>
     */
    inline const Aws::String& GetExternalExecutionUrl() const{ return m_externalExecutionUrl; }

    /**
     * <p>The deepest external link to the external resource (for example, a repository
     * URL or deployment endpoint) that is used when running the action.</p>
     */
    inline bool ExternalExecutionUrlHasBeenSet() const { return m_externalExecutionUrlHasBeenSet; }

    /**
     * <p>The deepest external link to the external resource (for example, a repository
     * URL or deployment endpoint) that is used when running the action.</p>
     */
    inline void SetExternalExecutionUrl(const Aws::String& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = value; }

    /**
     * <p>The deepest external link to the external resource (for example, a repository
     * URL or deployment endpoint) that is used when running the action.</p>
     */
    inline void SetExternalExecutionUrl(Aws::String&& value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl = std::move(value); }

    /**
     * <p>The deepest external link to the external resource (for example, a repository
     * URL or deployment endpoint) that is used when running the action.</p>
     */
    inline void SetExternalExecutionUrl(const char* value) { m_externalExecutionUrlHasBeenSet = true; m_externalExecutionUrl.assign(value); }

    /**
     * <p>The deepest external link to the external resource (for example, a repository
     * URL or deployment endpoint) that is used when running the action.</p>
     */
    inline ActionExecutionResult& WithExternalExecutionUrl(const Aws::String& value) { SetExternalExecutionUrl(value); return *this;}

    /**
     * <p>The deepest external link to the external resource (for example, a repository
     * URL or deployment endpoint) that is used when running the action.</p>
     */
    inline ActionExecutionResult& WithExternalExecutionUrl(Aws::String&& value) { SetExternalExecutionUrl(std::move(value)); return *this;}

    /**
     * <p>The deepest external link to the external resource (for example, a repository
     * URL or deployment endpoint) that is used when running the action.</p>
     */
    inline ActionExecutionResult& WithExternalExecutionUrl(const char* value) { SetExternalExecutionUrl(value); return *this;}

  private:

    Aws::String m_externalExecutionId;
    bool m_externalExecutionIdHasBeenSet = false;

    Aws::String m_externalExecutionSummary;
    bool m_externalExecutionSummaryHasBeenSet = false;

    Aws::String m_externalExecutionUrl;
    bool m_externalExecutionUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
