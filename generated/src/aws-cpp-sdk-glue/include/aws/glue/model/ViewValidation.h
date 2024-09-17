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
    AWS_GLUE_API ViewValidation();
    AWS_GLUE_API ViewValidation(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ViewValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dialect of the query engine.</p>
     */
    inline const ViewDialect& GetDialect() const{ return m_dialect; }
    inline bool DialectHasBeenSet() const { return m_dialectHasBeenSet; }
    inline void SetDialect(const ViewDialect& value) { m_dialectHasBeenSet = true; m_dialect = value; }
    inline void SetDialect(ViewDialect&& value) { m_dialectHasBeenSet = true; m_dialect = std::move(value); }
    inline ViewValidation& WithDialect(const ViewDialect& value) { SetDialect(value); return *this;}
    inline ViewValidation& WithDialect(ViewDialect&& value) { SetDialect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the dialect of the query engine. For example, 3.0.0.</p>
     */
    inline const Aws::String& GetDialectVersion() const{ return m_dialectVersion; }
    inline bool DialectVersionHasBeenSet() const { return m_dialectVersionHasBeenSet; }
    inline void SetDialectVersion(const Aws::String& value) { m_dialectVersionHasBeenSet = true; m_dialectVersion = value; }
    inline void SetDialectVersion(Aws::String&& value) { m_dialectVersionHasBeenSet = true; m_dialectVersion = std::move(value); }
    inline void SetDialectVersion(const char* value) { m_dialectVersionHasBeenSet = true; m_dialectVersion.assign(value); }
    inline ViewValidation& WithDialectVersion(const Aws::String& value) { SetDialectVersion(value); return *this;}
    inline ViewValidation& WithDialectVersion(Aws::String&& value) { SetDialectVersion(std::move(value)); return *this;}
    inline ViewValidation& WithDialectVersion(const char* value) { SetDialectVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SELECT</code> query that defines the view, as provided by the
     * customer.</p>
     */
    inline const Aws::String& GetViewValidationText() const{ return m_viewValidationText; }
    inline bool ViewValidationTextHasBeenSet() const { return m_viewValidationTextHasBeenSet; }
    inline void SetViewValidationText(const Aws::String& value) { m_viewValidationTextHasBeenSet = true; m_viewValidationText = value; }
    inline void SetViewValidationText(Aws::String&& value) { m_viewValidationTextHasBeenSet = true; m_viewValidationText = std::move(value); }
    inline void SetViewValidationText(const char* value) { m_viewValidationTextHasBeenSet = true; m_viewValidationText.assign(value); }
    inline ViewValidation& WithViewValidationText(const Aws::String& value) { SetViewValidationText(value); return *this;}
    inline ViewValidation& WithViewValidationText(Aws::String&& value) { SetViewValidationText(std::move(value)); return *this;}
    inline ViewValidation& WithViewValidationText(const char* value) { SetViewValidationText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last update.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline ViewValidation& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline ViewValidation& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the validation.</p>
     */
    inline const ResourceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ResourceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ResourceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ViewValidation& WithState(const ResourceState& value) { SetState(value); return *this;}
    inline ViewValidation& WithState(ResourceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error associated with the validation.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline ViewValidation& WithError(const ErrorDetail& value) { SetError(value); return *this;}
    inline ViewValidation& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}
    ///@}
  private:

    ViewDialect m_dialect;
    bool m_dialectHasBeenSet = false;

    Aws::String m_dialectVersion;
    bool m_dialectVersionHasBeenSet = false;

    Aws::String m_viewValidationText;
    bool m_viewValidationTextHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    ResourceState m_state;
    bool m_stateHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
