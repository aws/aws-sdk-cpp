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
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class AWS_IOTSITEWISE_API CreateAccessPolicyResult
  {
  public:
    CreateAccessPolicyResult();
    CreateAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the access policy.</p>
     */
    inline const Aws::String& GetAccessPolicyId() const{ return m_accessPolicyId; }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetAccessPolicyId(const Aws::String& value) { m_accessPolicyId = value; }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetAccessPolicyId(Aws::String&& value) { m_accessPolicyId = std::move(value); }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetAccessPolicyId(const char* value) { m_accessPolicyId.assign(value); }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline CreateAccessPolicyResult& WithAccessPolicyId(const Aws::String& value) { SetAccessPolicyId(value); return *this;}

    /**
     * <p>The ID of the access policy.</p>
     */
    inline CreateAccessPolicyResult& WithAccessPolicyId(Aws::String&& value) { SetAccessPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access policy.</p>
     */
    inline CreateAccessPolicyResult& WithAccessPolicyId(const char* value) { SetAccessPolicyId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline const Aws::String& GetAccessPolicyArn() const{ return m_accessPolicyArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline void SetAccessPolicyArn(const Aws::String& value) { m_accessPolicyArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline void SetAccessPolicyArn(Aws::String&& value) { m_accessPolicyArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline void SetAccessPolicyArn(const char* value) { m_accessPolicyArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline CreateAccessPolicyResult& WithAccessPolicyArn(const Aws::String& value) { SetAccessPolicyArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline CreateAccessPolicyResult& WithAccessPolicyArn(Aws::String&& value) { SetAccessPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline CreateAccessPolicyResult& WithAccessPolicyArn(const char* value) { SetAccessPolicyArn(value); return *this;}

  private:

    Aws::String m_accessPolicyId;

    Aws::String m_accessPolicyArn;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
