/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mwaa/model/UpdateError.h>
#include <aws/mwaa/model/UpdateStatus.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p>The status of the last update on the environment, and any errors that were
   * encountered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/LastUpdate">AWS API
   * Reference</a></p>
   */
  class AWS_MWAA_API LastUpdate
  {
  public:
    LastUpdate();
    LastUpdate(Aws::Utils::Json::JsonView jsonValue);
    LastUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The day and time of the last update on the environment.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The day and time of the last update on the environment.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The day and time of the last update on the environment.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The day and time of the last update on the environment.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The day and time of the last update on the environment.</p>
     */
    inline LastUpdate& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The day and time of the last update on the environment.</p>
     */
    inline LastUpdate& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The error that was encountered during the last update of the environment.</p>
     */
    inline const UpdateError& GetError() const{ return m_error; }

    /**
     * <p>The error that was encountered during the last update of the environment.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The error that was encountered during the last update of the environment.</p>
     */
    inline void SetError(const UpdateError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The error that was encountered during the last update of the environment.</p>
     */
    inline void SetError(UpdateError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The error that was encountered during the last update of the environment.</p>
     */
    inline LastUpdate& WithError(const UpdateError& value) { SetError(value); return *this;}

    /**
     * <p>The error that was encountered during the last update of the environment.</p>
     */
    inline LastUpdate& WithError(UpdateError&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The status of the last update on the environment. Valid values:
     * <code>SUCCESS</code>, <code>PENDING</code>, <code>FAILED</code>.</p>
     */
    inline const UpdateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the last update on the environment. Valid values:
     * <code>SUCCESS</code>, <code>PENDING</code>, <code>FAILED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the last update on the environment. Valid values:
     * <code>SUCCESS</code>, <code>PENDING</code>, <code>FAILED</code>.</p>
     */
    inline void SetStatus(const UpdateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the last update on the environment. Valid values:
     * <code>SUCCESS</code>, <code>PENDING</code>, <code>FAILED</code>.</p>
     */
    inline void SetStatus(UpdateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the last update on the environment. Valid values:
     * <code>SUCCESS</code>, <code>PENDING</code>, <code>FAILED</code>.</p>
     */
    inline LastUpdate& WithStatus(const UpdateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the last update on the environment. Valid values:
     * <code>SUCCESS</code>, <code>PENDING</code>, <code>FAILED</code>.</p>
     */
    inline LastUpdate& WithStatus(UpdateStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    UpdateError m_error;
    bool m_errorHasBeenSet;

    UpdateStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
