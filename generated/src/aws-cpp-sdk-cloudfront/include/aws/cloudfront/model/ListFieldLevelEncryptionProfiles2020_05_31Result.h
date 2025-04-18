﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FieldLevelEncryptionProfileList.h>
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
  class ListFieldLevelEncryptionProfiles2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionProfiles2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionProfiles2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionProfiles2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns a list of the field-level encryption profiles that have been created
     * in CloudFront for this account.</p>
     */
    inline const FieldLevelEncryptionProfileList& GetFieldLevelEncryptionProfileList() const { return m_fieldLevelEncryptionProfileList; }
    template<typename FieldLevelEncryptionProfileListT = FieldLevelEncryptionProfileList>
    void SetFieldLevelEncryptionProfileList(FieldLevelEncryptionProfileListT&& value) { m_fieldLevelEncryptionProfileListHasBeenSet = true; m_fieldLevelEncryptionProfileList = std::forward<FieldLevelEncryptionProfileListT>(value); }
    template<typename FieldLevelEncryptionProfileListT = FieldLevelEncryptionProfileList>
    ListFieldLevelEncryptionProfiles2020_05_31Result& WithFieldLevelEncryptionProfileList(FieldLevelEncryptionProfileListT&& value) { SetFieldLevelEncryptionProfileList(std::forward<FieldLevelEncryptionProfileListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFieldLevelEncryptionProfiles2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FieldLevelEncryptionProfileList m_fieldLevelEncryptionProfileList;
    bool m_fieldLevelEncryptionProfileListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
