﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The name and last modified time of the prepared statement.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/PreparedStatementSummary">AWS
   * API Reference</a></p>
   */
  class PreparedStatementSummary
  {
  public:
    AWS_ATHENA_API PreparedStatementSummary();
    AWS_ATHENA_API PreparedStatementSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API PreparedStatementSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the prepared statement.</p>
     */
    inline const Aws::String& GetStatementName() const{ return m_statementName; }
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }
    inline void SetStatementName(const Aws::String& value) { m_statementNameHasBeenSet = true; m_statementName = value; }
    inline void SetStatementName(Aws::String&& value) { m_statementNameHasBeenSet = true; m_statementName = std::move(value); }
    inline void SetStatementName(const char* value) { m_statementNameHasBeenSet = true; m_statementName.assign(value); }
    inline PreparedStatementSummary& WithStatementName(const Aws::String& value) { SetStatementName(value); return *this;}
    inline PreparedStatementSummary& WithStatementName(Aws::String&& value) { SetStatementName(std::move(value)); return *this;}
    inline PreparedStatementSummary& WithStatementName(const char* value) { SetStatementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time of the prepared statement.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline PreparedStatementSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline PreparedStatementSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_statementName;
    bool m_statementNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
