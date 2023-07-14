﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/DataReplicationErrorString.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Error in data replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DataReplicationError">AWS
   * API Reference</a></p>
   */
  class AWS_MGN_API DataReplicationError
  {
  public:
    DataReplicationError();
    DataReplicationError(Aws::Utils::Json::JsonView jsonValue);
    DataReplicationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Error in data replication.</p>
     */
    inline const DataReplicationErrorString& GetError() const{ return m_error; }

    /**
     * <p>Error in data replication.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Error in data replication.</p>
     */
    inline void SetError(const DataReplicationErrorString& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Error in data replication.</p>
     */
    inline void SetError(DataReplicationErrorString&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Error in data replication.</p>
     */
    inline DataReplicationError& WithError(const DataReplicationErrorString& value) { SetError(value); return *this;}

    /**
     * <p>Error in data replication.</p>
     */
    inline DataReplicationError& WithError(DataReplicationErrorString&& value) { SetError(std::move(value)); return *this;}


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
    inline DataReplicationError& WithRawError(const Aws::String& value) { SetRawError(value); return *this;}

    /**
     * <p>Error in data replication.</p>
     */
    inline DataReplicationError& WithRawError(Aws::String&& value) { SetRawError(std::move(value)); return *this;}

    /**
     * <p>Error in data replication.</p>
     */
    inline DataReplicationError& WithRawError(const char* value) { SetRawError(value); return *this;}

  private:

    DataReplicationErrorString m_error;
    bool m_errorHasBeenSet;

    Aws::String m_rawError;
    bool m_rawErrorHasBeenSet;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
