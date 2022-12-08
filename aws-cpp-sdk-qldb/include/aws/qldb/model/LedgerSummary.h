/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/LedgerState.h>
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
namespace QLDB
{
namespace Model
{

  /**
   * <p>Information about a ledger, including its name, state, and when it was
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/LedgerSummary">AWS
   * API Reference</a></p>
   */
  class LedgerSummary
  {
  public:
    AWS_QLDB_API LedgerSummary();
    AWS_QLDB_API LedgerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API LedgerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline LedgerSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline LedgerSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline LedgerSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the ledger.</p>
     */
    inline const LedgerState& GetState() const{ return m_state; }

    /**
     * <p>The current status of the ledger.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current status of the ledger.</p>
     */
    inline void SetState(const LedgerState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current status of the ledger.</p>
     */
    inline void SetState(LedgerState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current status of the ledger.</p>
     */
    inline LedgerSummary& WithState(const LedgerState& value) { SetState(value); return *this;}

    /**
     * <p>The current status of the ledger.</p>
     */
    inline LedgerSummary& WithState(LedgerState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline LedgerSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time, in epoch time format, when the ledger was created. (Epoch
     * time format is the number of seconds elapsed since 12:00:00 AM January 1, 1970
     * UTC.)</p>
     */
    inline LedgerSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    LedgerState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
