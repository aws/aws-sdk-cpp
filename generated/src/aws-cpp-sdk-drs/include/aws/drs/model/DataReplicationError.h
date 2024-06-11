﻿/**
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
    AWS_DRS_API DataReplicationError();
    AWS_DRS_API DataReplicationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DataReplicationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Error in data replication.</p>
     */
    inline const DataReplicationErrorString& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const DataReplicationErrorString& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(DataReplicationErrorString&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline DataReplicationError& WithError(const DataReplicationErrorString& value) { SetError(value); return *this;}
    inline DataReplicationError& WithError(DataReplicationErrorString&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error in data replication.</p>
     */
    inline const Aws::String& GetRawError() const{ return m_rawError; }
    inline bool RawErrorHasBeenSet() const { return m_rawErrorHasBeenSet; }
    inline void SetRawError(const Aws::String& value) { m_rawErrorHasBeenSet = true; m_rawError = value; }
    inline void SetRawError(Aws::String&& value) { m_rawErrorHasBeenSet = true; m_rawError = std::move(value); }
    inline void SetRawError(const char* value) { m_rawErrorHasBeenSet = true; m_rawError.assign(value); }
    inline DataReplicationError& WithRawError(const Aws::String& value) { SetRawError(value); return *this;}
    inline DataReplicationError& WithRawError(Aws::String&& value) { SetRawError(std::move(value)); return *this;}
    inline DataReplicationError& WithRawError(const char* value) { SetRawError(value); return *this;}
    ///@}
  private:

    DataReplicationErrorString m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_rawError;
    bool m_rawErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
