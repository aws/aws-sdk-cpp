/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb-session/model/TimingInformation.h>
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
  class StartSessionResult
  {
  public:
    AWS_QLDBSESSION_API StartSessionResult();
    AWS_QLDBSESSION_API StartSessionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API StartSessionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


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


    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline const TimingInformation& GetTimingInformation() const{ return m_timingInformation; }

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline bool TimingInformationHasBeenSet() const { return m_timingInformationHasBeenSet; }

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline void SetTimingInformation(const TimingInformation& value) { m_timingInformationHasBeenSet = true; m_timingInformation = value; }

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline void SetTimingInformation(TimingInformation&& value) { m_timingInformationHasBeenSet = true; m_timingInformation = std::move(value); }

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline StartSessionResult& WithTimingInformation(const TimingInformation& value) { SetTimingInformation(value); return *this;}

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline StartSessionResult& WithTimingInformation(TimingInformation&& value) { SetTimingInformation(std::move(value)); return *this;}

  private:

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    TimingInformation m_timingInformation;
    bool m_timingInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
