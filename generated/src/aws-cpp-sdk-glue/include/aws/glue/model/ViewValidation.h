/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ViewDialect.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/ResourceState.h>
#include <aws/glue/model/ErrorDetail.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure that contains information for an analytical engine to validate a
   * view, prior to persisting the view metadata. Used in the case of direct
   * <code>UpdateTable</code> or <code>CreateTable</code> API calls.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ViewValidation">AWS
   * API Reference</a></p>
   */
  class ViewValidation
  {
  public:
    AWS_GLUE_API ViewValidation() = default;
    AWS_GLUE_API ViewValidation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ViewValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dialect of the query engine.</p>
     */
    inline ViewDialect GetDialect() const { return m_dialect; }
    inline bool DialectHasBeenSet() const { return m_dialectHasBeenSet; }
    inline void SetDialect(ViewDialect value) { m_dialectHasBeenSet = true; m_dialect = value; }
    inline ViewValidation& WithDialect(ViewDialect value) { SetDialect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the dialect of the query engine. For example, 3.0.0.</p>
     */
    inline const Aws::String& GetDialectVersion() const { return m_dialectVersion; }
    inline bool DialectVersionHasBeenSet() const { return m_dialectVersionHasBeenSet; }
    template<typename DialectVersionT = Aws::String>
    void SetDialectVersion(DialectVersionT&& value) { m_dialectVersionHasBeenSet = true; m_dialectVersion = std::forward<DialectVersionT>(value); }
    template<typename DialectVersionT = Aws::String>
    ViewValidation& WithDialectVersion(DialectVersionT&& value) { SetDialectVersion(std::forward<DialectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SELECT</code> query that defines the view, as provided by the
     * customer.</p>
     */
    inline const Aws::String& GetViewValidationText() const { return m_viewValidationText; }
    inline bool ViewValidationTextHasBeenSet() const { return m_viewValidationTextHasBeenSet; }
    template<typename ViewValidationTextT = Aws::String>
    void SetViewValidationText(ViewValidationTextT&& value) { m_viewValidationTextHasBeenSet = true; m_viewValidationText = std::forward<ViewValidationTextT>(value); }
    template<typename ViewValidationTextT = Aws::String>
    ViewValidation& WithViewValidationText(ViewValidationTextT&& value) { SetViewValidationText(std::forward<ViewValidationTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last update.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    ViewValidation& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the validation.</p>
     */
    inline ResourceState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ResourceState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ViewValidation& WithState(ResourceState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error associated with the validation.</p>
     */
    inline const ErrorDetail& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorDetail>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetail>
    ViewValidation& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    ViewDialect m_dialect{ViewDialect::NOT_SET};
    bool m_dialectHasBeenSet = false;

    Aws::String m_dialectVersion;
    bool m_dialectVersionHasBeenSet = false;

    Aws::String m_viewValidationText;
    bool m_viewValidationTextHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    ResourceState m_state{ResourceState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
