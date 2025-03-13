/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FieldLevelEncryptionList.h>
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
  class ListFieldLevelEncryptionConfigs2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionConfigs2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionConfigs2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionConfigs2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns a list of all field-level encryption configurations that have been
     * created in CloudFront for this account.</p>
     */
    inline const FieldLevelEncryptionList& GetFieldLevelEncryptionList() const { return m_fieldLevelEncryptionList; }
    template<typename FieldLevelEncryptionListT = FieldLevelEncryptionList>
    void SetFieldLevelEncryptionList(FieldLevelEncryptionListT&& value) { m_fieldLevelEncryptionListHasBeenSet = true; m_fieldLevelEncryptionList = std::forward<FieldLevelEncryptionListT>(value); }
    template<typename FieldLevelEncryptionListT = FieldLevelEncryptionList>
    ListFieldLevelEncryptionConfigs2020_05_31Result& WithFieldLevelEncryptionList(FieldLevelEncryptionListT&& value) { SetFieldLevelEncryptionList(std::forward<FieldLevelEncryptionListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFieldLevelEncryptionConfigs2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FieldLevelEncryptionList m_fieldLevelEncryptionList;
    bool m_fieldLevelEncryptionListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
