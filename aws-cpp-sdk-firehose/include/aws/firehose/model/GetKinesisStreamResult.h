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
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/SessionCredentials.h>
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
namespace Firehose
{
namespace Model
{
  class AWS_FIREHOSE_API GetKinesisStreamResult
  {
  public:
    GetKinesisStreamResult();
    GetKinesisStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetKinesisStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetKinesisStreamARN() const{ return m_kinesisStreamARN; }

    
    inline void SetKinesisStreamARN(const Aws::String& value) { m_kinesisStreamARN = value; }

    
    inline void SetKinesisStreamARN(Aws::String&& value) { m_kinesisStreamARN = std::move(value); }

    
    inline void SetKinesisStreamARN(const char* value) { m_kinesisStreamARN.assign(value); }

    
    inline GetKinesisStreamResult& WithKinesisStreamARN(const Aws::String& value) { SetKinesisStreamARN(value); return *this;}

    
    inline GetKinesisStreamResult& WithKinesisStreamARN(Aws::String&& value) { SetKinesisStreamARN(std::move(value)); return *this;}

    
    inline GetKinesisStreamResult& WithKinesisStreamARN(const char* value) { SetKinesisStreamARN(value); return *this;}


    
    inline const SessionCredentials& GetCredentialsForReadingKinesisStream() const{ return m_credentialsForReadingKinesisStream; }

    
    inline void SetCredentialsForReadingKinesisStream(const SessionCredentials& value) { m_credentialsForReadingKinesisStream = value; }

    
    inline void SetCredentialsForReadingKinesisStream(SessionCredentials&& value) { m_credentialsForReadingKinesisStream = std::move(value); }

    
    inline GetKinesisStreamResult& WithCredentialsForReadingKinesisStream(const SessionCredentials& value) { SetCredentialsForReadingKinesisStream(value); return *this;}

    
    inline GetKinesisStreamResult& WithCredentialsForReadingKinesisStream(SessionCredentials&& value) { SetCredentialsForReadingKinesisStream(std::move(value)); return *this;}

  private:

    Aws::String m_kinesisStreamARN;

    SessionCredentials m_credentialsForReadingKinesisStream;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
