/**
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
    AWS_KMS_API XksProxyAuthenticationCredentialType() = default;
    AWS_KMS_API XksProxyAuthenticationCredentialType(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API XksProxyAuthenticationCredentialType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the raw secret access key.</p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    XksProxyAuthenticationCredentialType& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A secret string of 43-64 characters. Valid characters are a-z, A-Z, 0-9, /,
     * +, and =.</p>
     */
    inline const Aws::String& GetRawSecretAccessKey() const { return m_rawSecretAccessKey; }
    inline bool RawSecretAccessKeyHasBeenSet() const { return m_rawSecretAccessKeyHasBeenSet; }
    template<typename RawSecretAccessKeyT = Aws::String>
    void SetRawSecretAccessKey(RawSecretAccessKeyT&& value) { m_rawSecretAccessKeyHasBeenSet = true; m_rawSecretAccessKey = std::forward<RawSecretAccessKeyT>(value); }
    template<typename RawSecretAccessKeyT = Aws::String>
    XksProxyAuthenticationCredentialType& WithRawSecretAccessKey(RawSecretAccessKeyT&& value) { SetRawSecretAccessKey(std::forward<RawSecretAccessKeyT>(value)); return *this;}
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
