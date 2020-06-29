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
   * <p>Contains the details of the started session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/StartSessionResult">AWS
   * API Reference</a></p>
   */
  class AWS_QLDBSESSION_API StartSessionResult
  {
  public:
    StartSessionResult();
    StartSessionResult(Aws::Utils::Json::JsonView jsonValue);
    StartSessionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Session token of the started session. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>Session token of the started session. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }

    /**
     * <p>Session token of the started session. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p>Session token of the started session. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p>Session token of the started session. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p>Session token of the started session. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline StartSessionResult& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>Session token of the started session. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline StartSessionResult& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>Session token of the started session. This <code>SessionToken</code> is
     * required for every subsequent command that is issued during the current
     * session.</p>
     */
    inline StartSessionResult& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}

  private:

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
