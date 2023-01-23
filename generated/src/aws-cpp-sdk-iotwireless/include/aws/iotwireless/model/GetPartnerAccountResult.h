/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkAccountInfoWithFingerprint.h>
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
    AWS_IOTWIRELESS_API GetPartnerAccountResult();
    AWS_IOTWIRELESS_API GetPartnerAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetPartnerAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline const SidewalkAccountInfoWithFingerprint& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline void SetSidewalk(const SidewalkAccountInfoWithFingerprint& value) { m_sidewalk = value; }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline void SetSidewalk(SidewalkAccountInfoWithFingerprint&& value) { m_sidewalk = std::move(value); }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline GetPartnerAccountResult& WithSidewalk(const SidewalkAccountInfoWithFingerprint& value) { SetSidewalk(value); return *this;}

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline GetPartnerAccountResult& WithSidewalk(SidewalkAccountInfoWithFingerprint&& value) { SetSidewalk(std::move(value)); return *this;}


    /**
     * <p>Whether the partner account is linked to the AWS account.</p>
     */
    inline bool GetAccountLinked() const{ return m_accountLinked; }

    /**
     * <p>Whether the partner account is linked to the AWS account.</p>
     */
    inline void SetAccountLinked(bool value) { m_accountLinked = value; }

    /**
     * <p>Whether the partner account is linked to the AWS account.</p>
     */
    inline GetPartnerAccountResult& WithAccountLinked(bool value) { SetAccountLinked(value); return *this;}

  private:

    SidewalkAccountInfoWithFingerprint m_sidewalk;

    bool m_accountLinked;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
