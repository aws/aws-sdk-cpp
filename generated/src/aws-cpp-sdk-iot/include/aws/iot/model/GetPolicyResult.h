/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetPolicyResult
  {
  public:
    AWS_IOT_API GetPolicyResult();
    AWS_IOT_API GetPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The policy name.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline void SetPolicyName(const Aws::String& value) { m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyName.assign(value); }
    inline GetPolicyResult& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline GetPolicyResult& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline GetPolicyResult& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy ARN.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    inline void SetPolicyArn(const Aws::String& value) { m_policyArn = value; }
    inline void SetPolicyArn(Aws::String&& value) { m_policyArn = std::move(value); }
    inline void SetPolicyArn(const char* value) { m_policyArn.assign(value); }
    inline GetPolicyResult& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline GetPolicyResult& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline GetPolicyResult& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocument = value; }
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocument = std::move(value); }
    inline void SetPolicyDocument(const char* value) { m_policyDocument.assign(value); }
    inline GetPolicyResult& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}
    inline GetPolicyResult& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}
    inline GetPolicyResult& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default policy version ID.</p>
     */
    inline const Aws::String& GetDefaultVersionId() const{ return m_defaultVersionId; }
    inline void SetDefaultVersionId(const Aws::String& value) { m_defaultVersionId = value; }
    inline void SetDefaultVersionId(Aws::String&& value) { m_defaultVersionId = std::move(value); }
    inline void SetDefaultVersionId(const char* value) { m_defaultVersionId.assign(value); }
    inline GetPolicyResult& WithDefaultVersionId(const Aws::String& value) { SetDefaultVersionId(value); return *this;}
    inline GetPolicyResult& WithDefaultVersionId(Aws::String&& value) { SetDefaultVersionId(std::move(value)); return *this;}
    inline GetPolicyResult& WithDefaultVersionId(const char* value) { SetDefaultVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline GetPolicyResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline GetPolicyResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline GetPolicyResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline GetPolicyResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generation ID of the policy.</p>
     */
    inline const Aws::String& GetGenerationId() const{ return m_generationId; }
    inline void SetGenerationId(const Aws::String& value) { m_generationId = value; }
    inline void SetGenerationId(Aws::String&& value) { m_generationId = std::move(value); }
    inline void SetGenerationId(const char* value) { m_generationId.assign(value); }
    inline GetPolicyResult& WithGenerationId(const Aws::String& value) { SetGenerationId(value); return *this;}
    inline GetPolicyResult& WithGenerationId(Aws::String&& value) { SetGenerationId(std::move(value)); return *this;}
    inline GetPolicyResult& WithGenerationId(const char* value) { SetGenerationId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_policyName;

    Aws::String m_policyArn;

    Aws::String m_policyDocument;

    Aws::String m_defaultVersionId;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_generationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
