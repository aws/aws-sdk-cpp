/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkAccountInfo.h>
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
  class AWS_IOTWIRELESS_API AssociateAwsAccountWithPartnerAccountResult
  {
  public:
    AssociateAwsAccountWithPartnerAccountResult();
    AssociateAwsAccountWithPartnerAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AssociateAwsAccountWithPartnerAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline const SidewalkAccountInfo& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline void SetSidewalk(const SidewalkAccountInfo& value) { m_sidewalk = value; }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline void SetSidewalk(SidewalkAccountInfo&& value) { m_sidewalk = std::move(value); }

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline AssociateAwsAccountWithPartnerAccountResult& WithSidewalk(const SidewalkAccountInfo& value) { SetSidewalk(value); return *this;}

    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline AssociateAwsAccountWithPartnerAccountResult& WithSidewalk(SidewalkAccountInfo&& value) { SetSidewalk(std::move(value)); return *this;}

  private:

    SidewalkAccountInfo m_sidewalk;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
