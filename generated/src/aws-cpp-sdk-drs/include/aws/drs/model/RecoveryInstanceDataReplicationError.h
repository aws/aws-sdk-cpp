/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/FailbackReplicationError.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Error in data replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryInstanceDataReplicationError">AWS
   * API Reference</a></p>
   */
  class RecoveryInstanceDataReplicationError
  {
  public:
    AWS_DRS_API RecoveryInstanceDataReplicationError();
    AWS_DRS_API RecoveryInstanceDataReplicationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceDataReplicationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Error in data replication.</p>
     */
    inline const FailbackReplicationError& GetError() const{ return m_error; }

    /**
     * <p>Error in data replication.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Error in data replication.</p>
     */
    inline void SetError(const FailbackReplicationError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Error in data replication.</p>
     */
    inline void SetError(FailbackReplicationError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Error in data replication.</p>
     */
    inline RecoveryInstanceDataReplicationError& WithError(const FailbackReplicationError& value) { SetError(value); return *this;}

    /**
     * <p>Error in data replication.</p>
     */
    inline RecoveryInstanceDataReplicationError& WithError(FailbackReplicationError&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>Error in data replication.</p>
     */
    inline const Aws::String& GetRawError() const{ return m_rawError; }

    /**
     * <p>Error in data replication.</p>
     */
    inline bool RawErrorHasBeenSet() const { return m_rawErrorHasBeenSet; }

    /**
     * <p>Error in data replication.</p>
     */
    inline void SetRawError(const Aws::String& value) { m_rawErrorHasBeenSet = true; m_rawError = value; }

    /**
     * <p>Error in data replication.</p>
     */
    inline void SetRawError(Aws::String&& value) { m_rawErrorHasBeenSet = true; m_rawError = std::move(value); }

    /**
     * <p>Error in data replication.</p>
     */
    inline void SetRawError(const char* value) { m_rawErrorHasBeenSet = true; m_rawError.assign(value); }

    /**
     * <p>Error in data replication.</p>
     */
    inline RecoveryInstanceDataReplicationError& WithRawError(const Aws::String& value) { SetRawError(value); return *this;}

    /**
     * <p>Error in data replication.</p>
     */
    inline RecoveryInstanceDataReplicationError& WithRawError(Aws::String&& value) { SetRawError(std::move(value)); return *this;}

    /**
     * <p>Error in data replication.</p>
     */
    inline RecoveryInstanceDataReplicationError& WithRawError(const char* value) { SetRawError(value); return *this;}

  private:

    FailbackReplicationError m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_rawError;
    bool m_rawErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
