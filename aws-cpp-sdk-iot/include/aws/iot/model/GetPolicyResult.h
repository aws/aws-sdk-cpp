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
#include <aws/core/utils/DateTime.h>
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
   * <p>The output from the GetPolicy operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPolicyResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API GetPolicyResult
  {
  public:
    GetPolicyResult();
    GetPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetPolicyName(Aws::String&& value) { m_policyName = std::move(value); }

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
    inline GetPolicyResult& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

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
    inline void SetPolicyArn(Aws::String&& value) { m_policyArn = std::move(value); }

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
    inline GetPolicyResult& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

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
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocument = std::move(value); }

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
    inline GetPolicyResult& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

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
    inline void SetDefaultVersionId(Aws::String&& value) { m_defaultVersionId = std::move(value); }

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
    inline GetPolicyResult& WithDefaultVersionId(Aws::String&& value) { SetDefaultVersionId(std::move(value)); return *this;}

    /**
     * <p>The default policy version ID.</p>
     */
    inline GetPolicyResult& WithDefaultVersionId(const char* value) { SetDefaultVersionId(value); return *this;}


    /**
     * <p>The date the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the policy was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date the policy was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date the policy was created.</p>
     */
    inline GetPolicyResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the policy was created.</p>
     */
    inline GetPolicyResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date the policy was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The date the policy was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date the policy was last modified.</p>
     */
    inline GetPolicyResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date the policy was last modified.</p>
     */
    inline GetPolicyResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The generation ID of the policy.</p>
     */
    inline const Aws::String& GetGenerationId() const{ return m_generationId; }

    /**
     * <p>The generation ID of the policy.</p>
     */
    inline void SetGenerationId(const Aws::String& value) { m_generationId = value; }

    /**
     * <p>The generation ID of the policy.</p>
     */
    inline void SetGenerationId(Aws::String&& value) { m_generationId = std::move(value); }

    /**
     * <p>The generation ID of the policy.</p>
     */
    inline void SetGenerationId(const char* value) { m_generationId.assign(value); }

    /**
     * <p>The generation ID of the policy.</p>
     */
    inline GetPolicyResult& WithGenerationId(const Aws::String& value) { SetGenerationId(value); return *this;}

    /**
     * <p>The generation ID of the policy.</p>
     */
    inline GetPolicyResult& WithGenerationId(Aws::String&& value) { SetGenerationId(std::move(value)); return *this;}

    /**
     * <p>The generation ID of the policy.</p>
     */
    inline GetPolicyResult& WithGenerationId(const char* value) { SetGenerationId(value); return *this;}

  private:

    Aws::String m_policyName;

    Aws::String m_policyArn;

    Aws::String m_policyDocument;

    Aws::String m_defaultVersionId;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_generationId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
