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
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionProfiles2020_05_31Result();
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionProfiles2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionProfiles2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns a list of the field-level encryption profiles that have been created
     * in CloudFront for this account.</p>
     */
    inline const FieldLevelEncryptionProfileList& GetFieldLevelEncryptionProfileList() const{ return m_fieldLevelEncryptionProfileList; }
    inline void SetFieldLevelEncryptionProfileList(const FieldLevelEncryptionProfileList& value) { m_fieldLevelEncryptionProfileList = value; }
    inline void SetFieldLevelEncryptionProfileList(FieldLevelEncryptionProfileList&& value) { m_fieldLevelEncryptionProfileList = std::move(value); }
    inline ListFieldLevelEncryptionProfiles2020_05_31Result& WithFieldLevelEncryptionProfileList(const FieldLevelEncryptionProfileList& value) { SetFieldLevelEncryptionProfileList(value); return *this;}
    inline ListFieldLevelEncryptionProfiles2020_05_31Result& WithFieldLevelEncryptionProfileList(FieldLevelEncryptionProfileList&& value) { SetFieldLevelEncryptionProfileList(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFieldLevelEncryptionProfiles2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFieldLevelEncryptionProfiles2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFieldLevelEncryptionProfiles2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FieldLevelEncryptionProfileList m_fieldLevelEncryptionProfileList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
