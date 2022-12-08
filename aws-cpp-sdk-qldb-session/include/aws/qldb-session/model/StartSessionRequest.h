/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
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
namespace QLDBSession
{
namespace Model
{

  /**
   * <p>Specifies a request to start a new session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/StartSessionRequest">AWS
   * API Reference</a></p>
   */
  class StartSessionRequest
  {
  public:
    AWS_QLDBSESSION_API StartSessionRequest();
    AWS_QLDBSESSION_API StartSessionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API StartSessionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the ledger to start a new session against.</p>
     */
    inline const Aws::String& GetLedgerName() const{ return m_ledgerName; }

    /**
     * <p>The name of the ledger to start a new session against.</p>
     */
    inline bool LedgerNameHasBeenSet() const { return m_ledgerNameHasBeenSet; }

    /**
     * <p>The name of the ledger to start a new session against.</p>
     */
    inline void SetLedgerName(const Aws::String& value) { m_ledgerNameHasBeenSet = true; m_ledgerName = value; }

    /**
     * <p>The name of the ledger to start a new session against.</p>
     */
    inline void SetLedgerName(Aws::String&& value) { m_ledgerNameHasBeenSet = true; m_ledgerName = std::move(value); }

    /**
     * <p>The name of the ledger to start a new session against.</p>
     */
    inline void SetLedgerName(const char* value) { m_ledgerNameHasBeenSet = true; m_ledgerName.assign(value); }

    /**
     * <p>The name of the ledger to start a new session against.</p>
     */
    inline StartSessionRequest& WithLedgerName(const Aws::String& value) { SetLedgerName(value); return *this;}

    /**
     * <p>The name of the ledger to start a new session against.</p>
     */
    inline StartSessionRequest& WithLedgerName(Aws::String&& value) { SetLedgerName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger to start a new session against.</p>
     */
    inline StartSessionRequest& WithLedgerName(const char* value) { SetLedgerName(value); return *this;}

  private:

    Aws::String m_ledgerName;
    bool m_ledgerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
