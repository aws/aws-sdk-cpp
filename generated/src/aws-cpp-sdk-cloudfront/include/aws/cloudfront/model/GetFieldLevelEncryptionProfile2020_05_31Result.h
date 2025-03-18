/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FieldLevelEncryptionProfile.h>
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
  class GetFieldLevelEncryptionProfile2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetFieldLevelEncryptionProfile2020_05_31Result() = default;
    AWS_CLOUDFRONT_API GetFieldLevelEncryptionProfile2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetFieldLevelEncryptionProfile2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Return the field-level encryption profile information.</p>
     */
    inline const FieldLevelEncryptionProfile& GetFieldLevelEncryptionProfile() const { return m_fieldLevelEncryptionProfile; }
    template<typename FieldLevelEncryptionProfileT = FieldLevelEncryptionProfile>
    void SetFieldLevelEncryptionProfile(FieldLevelEncryptionProfileT&& value) { m_fieldLevelEncryptionProfileHasBeenSet = true; m_fieldLevelEncryptionProfile = std::forward<FieldLevelEncryptionProfileT>(value); }
    template<typename FieldLevelEncryptionProfileT = FieldLevelEncryptionProfile>
    GetFieldLevelEncryptionProfile2020_05_31Result& WithFieldLevelEncryptionProfile(FieldLevelEncryptionProfileT&& value) { SetFieldLevelEncryptionProfile(std::forward<FieldLevelEncryptionProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the field level encryption profile. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetFieldLevelEncryptionProfile2020_05_31Result& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFieldLevelEncryptionProfile2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FieldLevelEncryptionProfile m_fieldLevelEncryptionProfile;
    bool m_fieldLevelEncryptionProfileHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
