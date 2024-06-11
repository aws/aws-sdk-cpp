﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
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
namespace KMS
{
namespace Model
{

  /**
   * <p>KMS uses the authentication credential to sign requests that it sends to the
   * external key store proxy (XKS proxy) on your behalf. You establish these
   * credentials on your external key store proxy and report them to KMS.</p> <p>The
   * <code>XksProxyAuthenticationCredential</code> includes two required
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/XksProxyAuthenticationCredentialType">AWS
   * API Reference</a></p>
   */
  class XksProxyAuthenticationCredentialType
  {
  public:
    AWS_KMS_API XksProxyAuthenticationCredentialType();
    AWS_KMS_API XksProxyAuthenticationCredentialType(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API XksProxyAuthenticationCredentialType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the raw secret access key.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }
    inline XksProxyAuthenticationCredentialType& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}
    inline XksProxyAuthenticationCredentialType& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}
    inline XksProxyAuthenticationCredentialType& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A secret string of 43-64 characters. Valid characters are a-z, A-Z, 0-9, /,
     * +, and =.</p>
     */
    inline const Aws::String& GetRawSecretAccessKey() const{ return m_rawSecretAccessKey; }
    inline bool RawSecretAccessKeyHasBeenSet() const { return m_rawSecretAccessKeyHasBeenSet; }
    inline void SetRawSecretAccessKey(const Aws::String& value) { m_rawSecretAccessKeyHasBeenSet = true; m_rawSecretAccessKey = value; }
    inline void SetRawSecretAccessKey(Aws::String&& value) { m_rawSecretAccessKeyHasBeenSet = true; m_rawSecretAccessKey = std::move(value); }
    inline void SetRawSecretAccessKey(const char* value) { m_rawSecretAccessKeyHasBeenSet = true; m_rawSecretAccessKey.assign(value); }
    inline XksProxyAuthenticationCredentialType& WithRawSecretAccessKey(const Aws::String& value) { SetRawSecretAccessKey(value); return *this;}
    inline XksProxyAuthenticationCredentialType& WithRawSecretAccessKey(Aws::String&& value) { SetRawSecretAccessKey(std::move(value)); return *this;}
    inline XksProxyAuthenticationCredentialType& WithRawSecretAccessKey(const char* value) { SetRawSecretAccessKey(value); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_rawSecretAccessKey;
    bool m_rawSecretAccessKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
