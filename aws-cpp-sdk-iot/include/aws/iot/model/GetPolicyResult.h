﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the GetPolicy operation.</p>
   */
  class AWS_IOT_API GetPolicyResult
  {
  public:
    GetPolicyResult();
    GetPolicyResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The policy name.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyName = value; }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyName = value; }

    /**
     * <p>The policy name.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyName.assign(value); }

    /**
     * <p>The policy name.</p>
     */
    inline GetPolicyResult& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy name.</p>
     */
    inline GetPolicyResult& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy name.</p>
     */
    inline GetPolicyResult& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy ARN.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The policy ARN.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArn = value; }

    /**
     * <p>The policy ARN.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArn = value; }

    /**
     * <p>The policy ARN.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArn.assign(value); }

    /**
     * <p>The policy ARN.</p>
     */
    inline GetPolicyResult& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The policy ARN.</p>
     */
    inline GetPolicyResult& WithPolicyArn(Aws::String&& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The policy ARN.</p>
     */
    inline GetPolicyResult& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocument = value; }

    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocument = value; }

    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocument.assign(value); }

    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline GetPolicyResult& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline GetPolicyResult& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline GetPolicyResult& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The default policy version ID.</p>
     */
    inline const Aws::String& GetDefaultVersionId() const{ return m_defaultVersionId; }

    /**
     * <p>The default policy version ID.</p>
     */
    inline void SetDefaultVersionId(const Aws::String& value) { m_defaultVersionId = value; }

    /**
     * <p>The default policy version ID.</p>
     */
    inline void SetDefaultVersionId(Aws::String&& value) { m_defaultVersionId = value; }

    /**
     * <p>The default policy version ID.</p>
     */
    inline void SetDefaultVersionId(const char* value) { m_defaultVersionId.assign(value); }

    /**
     * <p>The default policy version ID.</p>
     */
    inline GetPolicyResult& WithDefaultVersionId(const Aws::String& value) { SetDefaultVersionId(value); return *this;}

    /**
     * <p>The default policy version ID.</p>
     */
    inline GetPolicyResult& WithDefaultVersionId(Aws::String&& value) { SetDefaultVersionId(value); return *this;}

    /**
     * <p>The default policy version ID.</p>
     */
    inline GetPolicyResult& WithDefaultVersionId(const char* value) { SetDefaultVersionId(value); return *this;}

  private:
    Aws::String m_policyName;
    Aws::String m_policyArn;
    Aws::String m_policyDocument;
    Aws::String m_defaultVersionId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
