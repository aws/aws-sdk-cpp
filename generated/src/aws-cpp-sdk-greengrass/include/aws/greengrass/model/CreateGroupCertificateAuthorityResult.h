﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{
  class CreateGroupCertificateAuthorityResult
  {
  public:
    AWS_GREENGRASS_API CreateGroupCertificateAuthorityResult();
    AWS_GREENGRASS_API CreateGroupCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API CreateGroupCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the group certificate authority.
     */
    inline const Aws::String& GetGroupCertificateAuthorityArn() const{ return m_groupCertificateAuthorityArn; }
    inline void SetGroupCertificateAuthorityArn(const Aws::String& value) { m_groupCertificateAuthorityArn = value; }
    inline void SetGroupCertificateAuthorityArn(Aws::String&& value) { m_groupCertificateAuthorityArn = std::move(value); }
    inline void SetGroupCertificateAuthorityArn(const char* value) { m_groupCertificateAuthorityArn.assign(value); }
    inline CreateGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(const Aws::String& value) { SetGroupCertificateAuthorityArn(value); return *this;}
    inline CreateGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(Aws::String&& value) { SetGroupCertificateAuthorityArn(std::move(value)); return *this;}
    inline CreateGroupCertificateAuthorityResult& WithGroupCertificateAuthorityArn(const char* value) { SetGroupCertificateAuthorityArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateGroupCertificateAuthorityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateGroupCertificateAuthorityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateGroupCertificateAuthorityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_groupCertificateAuthorityArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
