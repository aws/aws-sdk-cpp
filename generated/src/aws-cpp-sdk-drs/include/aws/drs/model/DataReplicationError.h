/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/DataReplicationErrorString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DataReplicationError">AWS
   * API Reference</a></p>
   */
  class DataReplicationError
  {
  public:
    AWS_DRS_API DataReplicationError() = default;
    AWS_DRS_API DataReplicationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DataReplicationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Error in data replication.</p>
     */
    inline DataReplicationErrorString GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(DataReplicationErrorString value) { m_errorHasBeenSet = true; m_error = value; }
    inline DataReplicationError& WithError(DataReplicationErrorString value) { SetError(value); return *this;}
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
    DataReplicationError& WithRawError(RawErrorT&& value) { SetRawError(std::forward<RawErrorT>(value)); return *this;}
    ///@}
  private:

    DataReplicationErrorString m_error{DataReplicationErrorString::NOT_SET};
    bool m_errorHasBeenSet = false;

    Aws::String m_rawError;
    bool m_rawErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
