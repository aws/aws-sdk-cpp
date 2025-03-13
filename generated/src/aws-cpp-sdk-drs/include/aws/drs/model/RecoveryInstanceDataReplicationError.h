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
    AWS_DRS_API RecoveryInstanceDataReplicationError() = default;
    AWS_DRS_API RecoveryInstanceDataReplicationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceDataReplicationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Error in data replication.</p>
     */
    inline FailbackReplicationError GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(FailbackReplicationError value) { m_errorHasBeenSet = true; m_error = value; }
    inline RecoveryInstanceDataReplicationError& WithError(FailbackReplicationError value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error in data replication.</p>
     */
    inline const Aws::String& GetRawError() const { return m_rawError; }
    inline bool RawErrorHasBeenSet() const { return m_rawErrorHasBeenSet; }
    template<typename RawErrorT = Aws::String>
    void SetRawError(RawErrorT&& value) { m_rawErrorHasBeenSet = true; m_rawError = std::forward<RawErrorT>(value); }
    template<typename RawErrorT = Aws::String>
    RecoveryInstanceDataReplicationError& WithRawError(RawErrorT&& value) { SetRawError(std::forward<RawErrorT>(value)); return *this;}
    ///@}
  private:

    FailbackReplicationError m_error{FailbackReplicationError::NOT_SET};
    bool m_errorHasBeenSet = false;

    Aws::String m_rawError;
    bool m_rawErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
