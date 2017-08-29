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
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output of the CreatePolicyVersion operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicyVersionResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API CreatePolicyVersionResult
  {
  public:
    CreatePolicyVersionResult();
    CreatePolicyVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePolicyVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetPolicyArn(Aws::String&& value) { m_policyArn = std::move(value); }

    /**
     * <p>The policy ARN.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArn.assign(value); }

    /**
     * <p>The policy ARN.</p>
     */
    inline CreatePolicyVersionResult& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The policy ARN.</p>
     */
    inline CreatePolicyVersionResult& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The policy ARN.</p>
     */
    inline CreatePolicyVersionResult& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


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
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocument = std::move(value); }

    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocument.assign(value); }

    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline CreatePolicyVersionResult& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline CreatePolicyVersionResult& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline CreatePolicyVersionResult& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>The policy version ID.</p>
     */
    inline const Aws::String& GetPolicyVersionId() const{ return m_policyVersionId; }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetPolicyVersionId(const Aws::String& value) { m_policyVersionId = value; }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetPolicyVersionId(Aws::String&& value) { m_policyVersionId = std::move(value); }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetPolicyVersionId(const char* value) { m_policyVersionId.assign(value); }

    /**
     * <p>The policy version ID.</p>
     */
    inline CreatePolicyVersionResult& WithPolicyVersionId(const Aws::String& value) { SetPolicyVersionId(value); return *this;}

    /**
     * <p>The policy version ID.</p>
     */
    inline CreatePolicyVersionResult& WithPolicyVersionId(Aws::String&& value) { SetPolicyVersionId(std::move(value)); return *this;}

    /**
     * <p>The policy version ID.</p>
     */
    inline CreatePolicyVersionResult& WithPolicyVersionId(const char* value) { SetPolicyVersionId(value); return *this;}


    /**
     * <p>Specifies whether the policy version is the default.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }

    /**
     * <p>Specifies whether the policy version is the default.</p>
     */
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersion = value; }

    /**
     * <p>Specifies whether the policy version is the default.</p>
     */
    inline CreatePolicyVersionResult& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}

  private:

    Aws::String m_policyArn;

    Aws::String m_policyDocument;

    Aws::String m_policyVersionId;

    bool m_isDefaultVersion;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
