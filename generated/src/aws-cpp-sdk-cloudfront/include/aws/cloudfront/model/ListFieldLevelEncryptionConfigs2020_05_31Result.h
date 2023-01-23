/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/FieldLevelEncryptionList.h>
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
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionConfigs2020_05_31Result();
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionConfigs2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListFieldLevelEncryptionConfigs2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns a list of all field-level encryption configurations that have been
     * created in CloudFront for this account.</p>
     */
    inline const FieldLevelEncryptionList& GetFieldLevelEncryptionList() const{ return m_fieldLevelEncryptionList; }

    /**
     * <p>Returns a list of all field-level encryption configurations that have been
     * created in CloudFront for this account.</p>
     */
    inline void SetFieldLevelEncryptionList(const FieldLevelEncryptionList& value) { m_fieldLevelEncryptionList = value; }

    /**
     * <p>Returns a list of all field-level encryption configurations that have been
     * created in CloudFront for this account.</p>
     */
    inline void SetFieldLevelEncryptionList(FieldLevelEncryptionList&& value) { m_fieldLevelEncryptionList = std::move(value); }

    /**
     * <p>Returns a list of all field-level encryption configurations that have been
     * created in CloudFront for this account.</p>
     */
    inline ListFieldLevelEncryptionConfigs2020_05_31Result& WithFieldLevelEncryptionList(const FieldLevelEncryptionList& value) { SetFieldLevelEncryptionList(value); return *this;}

    /**
     * <p>Returns a list of all field-level encryption configurations that have been
     * created in CloudFront for this account.</p>
     */
    inline ListFieldLevelEncryptionConfigs2020_05_31Result& WithFieldLevelEncryptionList(FieldLevelEncryptionList&& value) { SetFieldLevelEncryptionList(std::move(value)); return *this;}

  private:

    FieldLevelEncryptionList m_fieldLevelEncryptionList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
