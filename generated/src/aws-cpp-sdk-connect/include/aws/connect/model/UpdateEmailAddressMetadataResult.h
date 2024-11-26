/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class UpdateEmailAddressMetadataResult
  {
  public:
    AWS_CONNECT_API UpdateEmailAddressMetadataResult();
    AWS_CONNECT_API UpdateEmailAddressMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API UpdateEmailAddressMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the email address.</p>
     */
    inline const Aws::String& GetEmailAddressId() const{ return m_emailAddressId; }
    inline void SetEmailAddressId(const Aws::String& value) { m_emailAddressId = value; }
    inline void SetEmailAddressId(Aws::String&& value) { m_emailAddressId = std::move(value); }
    inline void SetEmailAddressId(const char* value) { m_emailAddressId.assign(value); }
    inline UpdateEmailAddressMetadataResult& WithEmailAddressId(const Aws::String& value) { SetEmailAddressId(value); return *this;}
    inline UpdateEmailAddressMetadataResult& WithEmailAddressId(Aws::String&& value) { SetEmailAddressId(std::move(value)); return *this;}
    inline UpdateEmailAddressMetadataResult& WithEmailAddressId(const char* value) { SetEmailAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the email address.</p>
     */
    inline const Aws::String& GetEmailAddressArn() const{ return m_emailAddressArn; }
    inline void SetEmailAddressArn(const Aws::String& value) { m_emailAddressArn = value; }
    inline void SetEmailAddressArn(Aws::String&& value) { m_emailAddressArn = std::move(value); }
    inline void SetEmailAddressArn(const char* value) { m_emailAddressArn.assign(value); }
    inline UpdateEmailAddressMetadataResult& WithEmailAddressArn(const Aws::String& value) { SetEmailAddressArn(value); return *this;}
    inline UpdateEmailAddressMetadataResult& WithEmailAddressArn(Aws::String&& value) { SetEmailAddressArn(std::move(value)); return *this;}
    inline UpdateEmailAddressMetadataResult& WithEmailAddressArn(const char* value) { SetEmailAddressArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateEmailAddressMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateEmailAddressMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateEmailAddressMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_emailAddressId;

    Aws::String m_emailAddressArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
