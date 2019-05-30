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
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Array.h>
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
namespace Kafka
{
namespace Model
{
  class AWS_KAFKA_API DescribeConfigurationRevisionResult
  {
  public:
    DescribeConfigurationRevisionResult();
    DescribeConfigurationRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConfigurationRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline DescribeConfigurationRevisionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline DescribeConfigurationRevisionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline DescribeConfigurationRevisionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline DescribeConfigurationRevisionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline DescribeConfigurationRevisionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline DescribeConfigurationRevisionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline DescribeConfigurationRevisionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline DescribeConfigurationRevisionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * 
            <p>The revision number.</p>
         
     */
    inline long long GetRevision() const{ return m_revision; }

    /**
     * 
            <p>The revision number.</p>
         
     */
    inline void SetRevision(long long value) { m_revision = value; }

    /**
     * 
            <p>The revision number.</p>
         
     */
    inline DescribeConfigurationRevisionResult& WithRevision(long long value) { SetRevision(value); return *this;}


    /**
     * 
            <p>Contents of the <filename>server.properties</filename> file.
     * When using the API, you must ensure that the contents of the file are base64
     * encoded. 
               When using the AWS Management Console, the SDK, or the
     * AWS CLI, the contents of <filename>server.properties</filename> can be in
     * plaintext.</p>
         
     */
    inline const Aws::Utils::ByteBuffer& GetServerProperties() const{ return m_serverProperties; }

    /**
     * 
            <p>Contents of the <filename>server.properties</filename> file.
     * When using the API, you must ensure that the contents of the file are base64
     * encoded. 
               When using the AWS Management Console, the SDK, or the
     * AWS CLI, the contents of <filename>server.properties</filename> can be in
     * plaintext.</p>
         
     */
    inline void SetServerProperties(const Aws::Utils::ByteBuffer& value) { m_serverProperties = value; }

    /**
     * 
            <p>Contents of the <filename>server.properties</filename> file.
     * When using the API, you must ensure that the contents of the file are base64
     * encoded. 
               When using the AWS Management Console, the SDK, or the
     * AWS CLI, the contents of <filename>server.properties</filename> can be in
     * plaintext.</p>
         
     */
    inline void SetServerProperties(Aws::Utils::ByteBuffer&& value) { m_serverProperties = std::move(value); }

    /**
     * 
            <p>Contents of the <filename>server.properties</filename> file.
     * When using the API, you must ensure that the contents of the file are base64
     * encoded. 
               When using the AWS Management Console, the SDK, or the
     * AWS CLI, the contents of <filename>server.properties</filename> can be in
     * plaintext.</p>
         
     */
    inline DescribeConfigurationRevisionResult& WithServerProperties(const Aws::Utils::ByteBuffer& value) { SetServerProperties(value); return *this;}

    /**
     * 
            <p>Contents of the <filename>server.properties</filename> file.
     * When using the API, you must ensure that the contents of the file are base64
     * encoded. 
               When using the AWS Management Console, the SDK, or the
     * AWS CLI, the contents of <filename>server.properties</filename> can be in
     * plaintext.</p>
         
     */
    inline DescribeConfigurationRevisionResult& WithServerProperties(Aws::Utils::ByteBuffer&& value) { SetServerProperties(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    long long m_revision;

    Aws::Utils::ByteBuffer m_serverProperties;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
