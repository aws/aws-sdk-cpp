/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkAccountInfo.h>
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
  class AssociateAwsAccountWithPartnerAccountResult
  {
  public:
    AWS_IOTWIRELESS_API AssociateAwsAccountWithPartnerAccountResult();
    AWS_IOTWIRELESS_API AssociateAwsAccountWithPartnerAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API AssociateAwsAccountWithPartnerAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Sidewalk account credentials.</p>
     */
    inline const SidewalkAccountInfo& GetSidewalk() const{ return m_sidewalk; }
    inline void SetSidewalk(const SidewalkAccountInfo& value) { m_sidewalk = value; }
    inline void SetSidewalk(SidewalkAccountInfo&& value) { m_sidewalk = std::move(value); }
    inline AssociateAwsAccountWithPartnerAccountResult& WithSidewalk(const SidewalkAccountInfo& value) { SetSidewalk(value); return *this;}
    inline AssociateAwsAccountWithPartnerAccountResult& WithSidewalk(SidewalkAccountInfo&& value) { SetSidewalk(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline AssociateAwsAccountWithPartnerAccountResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AssociateAwsAccountWithPartnerAccountResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AssociateAwsAccountWithPartnerAccountResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateAwsAccountWithPartnerAccountResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateAwsAccountWithPartnerAccountResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateAwsAccountWithPartnerAccountResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SidewalkAccountInfo m_sidewalk;

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
