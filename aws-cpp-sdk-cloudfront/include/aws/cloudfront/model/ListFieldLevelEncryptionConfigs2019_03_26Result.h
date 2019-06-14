/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDFRONT_API ListFieldLevelEncryptionConfigs2019_03_26Result
  {
  public:
    ListFieldLevelEncryptionConfigs2019_03_26Result();
    ListFieldLevelEncryptionConfigs2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListFieldLevelEncryptionConfigs2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline ListFieldLevelEncryptionConfigs2019_03_26Result& WithFieldLevelEncryptionList(const FieldLevelEncryptionList& value) { SetFieldLevelEncryptionList(value); return *this;}

    /**
     * <p>Returns a list of all field-level encryption configurations that have been
     * created in CloudFront for this account.</p>
     */
    inline ListFieldLevelEncryptionConfigs2019_03_26Result& WithFieldLevelEncryptionList(FieldLevelEncryptionList&& value) { SetFieldLevelEncryptionList(std::move(value)); return *this;}

  private:

    FieldLevelEncryptionList m_fieldLevelEncryptionList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
