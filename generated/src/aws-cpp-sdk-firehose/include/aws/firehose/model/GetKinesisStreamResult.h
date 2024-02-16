/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetKinesisStreamResult
  {
  public:
    AWS_FIREHOSE_API GetKinesisStreamResult();
    AWS_FIREHOSE_API GetKinesisStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIREHOSE_API GetKinesisStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKinesisStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKinesisStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKinesisStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_kinesisStreamARN;

    SessionCredentials m_credentialsForReadingKinesisStream;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
