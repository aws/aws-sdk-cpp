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
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/S3Location.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SMS
{
namespace Model
{
  class AWS_SMS_API GenerateTemplateResult
  {
  public:
    GenerateTemplateResult();
    GenerateTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GenerateTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Location of the Amazon S3 object.</p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>Location of the Amazon S3 object.</p>
     */
    inline void SetS3Location(const S3Location& value) { m_s3Location = value; }

    /**
     * <p>Location of the Amazon S3 object.</p>
     */
    inline void SetS3Location(S3Location&& value) { m_s3Location = std::move(value); }

    /**
     * <p>Location of the Amazon S3 object.</p>
     */
    inline GenerateTemplateResult& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>Location of the Amazon S3 object.</p>
     */
    inline GenerateTemplateResult& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    S3Location m_s3Location;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
