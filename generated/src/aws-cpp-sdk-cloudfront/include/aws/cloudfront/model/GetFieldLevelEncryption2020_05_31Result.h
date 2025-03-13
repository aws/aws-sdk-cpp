/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FieldLevelEncryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  class GetFieldLevelEncryption2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetFieldLevelEncryption2020_05_31Result() = default;
    AWS_CLOUDFRONT_API GetFieldLevelEncryption2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetFieldLevelEncryption2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Return the field-level encryption configuration information.</p>
     */
    inline const FieldLevelEncryption& GetFieldLevelEncryption() const { return m_fieldLevelEncryption; }
    template<typename FieldLevelEncryptionT = FieldLevelEncryption>
    void SetFieldLevelEncryption(FieldLevelEncryptionT&& value) { m_fieldLevelEncryptionHasBeenSet = true; m_fieldLevelEncryption = std::forward<FieldLevelEncryptionT>(value); }
    template<typename FieldLevelEncryptionT = FieldLevelEncryption>
    GetFieldLevelEncryption2020_05_31Result& WithFieldLevelEncryption(FieldLevelEncryptionT&& value) { SetFieldLevelEncryption(std::forward<FieldLevelEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the field level encryption configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetFieldLevelEncryption2020_05_31Result& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFieldLevelEncryption2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FieldLevelEncryption m_fieldLevelEncryption;
    bool m_fieldLevelEncryptionHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
