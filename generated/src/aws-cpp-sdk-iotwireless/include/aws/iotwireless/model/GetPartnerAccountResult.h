/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkAccountInfoWithFingerprint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{
  class GetPartnerAccountResult
  {
  public:
    AWS_IOTWIRELESS_API GetPartnerAccountResult() = default;
    AWS_IOTWIRELESS_API GetPartnerAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetPartnerAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline const SidewalkAccountInfoWithFingerprint& GetSidewalk() const { return m_sidewalk; }
    template<typename SidewalkT = SidewalkAccountInfoWithFingerprint>
    void SetSidewalk(SidewalkT&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::forward<SidewalkT>(value); }
    template<typename SidewalkT = SidewalkAccountInfoWithFingerprint>
    GetPartnerAccountResult& WithSidewalk(SidewalkT&& value) { SetSidewalk(std::forward<SidewalkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the partner account is linked to the AWS account.</p>
     */
    inline bool GetAccountLinked() const { return m_accountLinked; }
    inline void SetAccountLinked(bool value) { m_accountLinkedHasBeenSet = true; m_accountLinked = value; }
    inline GetPartnerAccountResult& WithAccountLinked(bool value) { SetAccountLinked(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPartnerAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SidewalkAccountInfoWithFingerprint m_sidewalk;
    bool m_sidewalkHasBeenSet = false;

    bool m_accountLinked{false};
    bool m_accountLinkedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
