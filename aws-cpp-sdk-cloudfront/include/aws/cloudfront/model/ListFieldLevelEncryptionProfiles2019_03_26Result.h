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
#include <aws/cloudfront/model/FieldLevelEncryptionProfileList.h>
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
  class AWS_CLOUDFRONT_API ListFieldLevelEncryptionProfiles2019_03_26Result
  {
  public:
    ListFieldLevelEncryptionProfiles2019_03_26Result();
    ListFieldLevelEncryptionProfiles2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListFieldLevelEncryptionProfiles2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns a list of the field-level encryption profiles that have been created
     * in CloudFront for this account.</p>
     */
    inline const FieldLevelEncryptionProfileList& GetFieldLevelEncryptionProfileList() const{ return m_fieldLevelEncryptionProfileList; }

    /**
     * <p>Returns a list of the field-level encryption profiles that have been created
     * in CloudFront for this account.</p>
     */
    inline void SetFieldLevelEncryptionProfileList(const FieldLevelEncryptionProfileList& value) { m_fieldLevelEncryptionProfileList = value; }

    /**
     * <p>Returns a list of the field-level encryption profiles that have been created
     * in CloudFront for this account.</p>
     */
    inline void SetFieldLevelEncryptionProfileList(FieldLevelEncryptionProfileList&& value) { m_fieldLevelEncryptionProfileList = std::move(value); }

    /**
     * <p>Returns a list of the field-level encryption profiles that have been created
     * in CloudFront for this account.</p>
     */
    inline ListFieldLevelEncryptionProfiles2019_03_26Result& WithFieldLevelEncryptionProfileList(const FieldLevelEncryptionProfileList& value) { SetFieldLevelEncryptionProfileList(value); return *this;}

    /**
     * <p>Returns a list of the field-level encryption profiles that have been created
     * in CloudFront for this account.</p>
     */
    inline ListFieldLevelEncryptionProfiles2019_03_26Result& WithFieldLevelEncryptionProfileList(FieldLevelEncryptionProfileList&& value) { SetFieldLevelEncryptionProfileList(std::move(value)); return *this;}

  private:

    FieldLevelEncryptionProfileList m_fieldLevelEncryptionProfileList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
