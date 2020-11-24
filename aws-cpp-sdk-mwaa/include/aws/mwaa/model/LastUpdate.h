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
   * <p>Last update information for the environment.</p><p><h3>See Also:</h3>   <a
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
     * <p>Time that last update occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Time that last update occurred.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Time that last update occurred.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Time that last update occurred.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Time that last update occurred.</p>
     */
    inline LastUpdate& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Time that last update occurred.</p>
     */
    inline LastUpdate& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Error string of last update, if applicable.</p>
     */
    inline const UpdateError& GetError() const{ return m_error; }

    /**
     * <p>Error string of last update, if applicable.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Error string of last update, if applicable.</p>
     */
    inline void SetError(const UpdateError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Error string of last update, if applicable.</p>
     */
    inline void SetError(UpdateError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Error string of last update, if applicable.</p>
     */
    inline LastUpdate& WithError(const UpdateError& value) { SetError(value); return *this;}

    /**
     * <p>Error string of last update, if applicable.</p>
     */
    inline LastUpdate& WithError(UpdateError&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>Status of last update of SUCCESS, FAILED, CREATING, DELETING.</p>
     */
    inline const UpdateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of last update of SUCCESS, FAILED, CREATING, DELETING.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of last update of SUCCESS, FAILED, CREATING, DELETING.</p>
     */
    inline void SetStatus(const UpdateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of last update of SUCCESS, FAILED, CREATING, DELETING.</p>
     */
    inline void SetStatus(UpdateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of last update of SUCCESS, FAILED, CREATING, DELETING.</p>
     */
    inline LastUpdate& WithStatus(const UpdateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of last update of SUCCESS, FAILED, CREATING, DELETING.</p>
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
