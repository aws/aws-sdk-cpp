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
   * <p>The output from the GetPolicyVersion operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPolicyVersionResponse">AWS
   * API Reference</a></p>
   */
  class GetPolicyVersionResult
  {
  public:
    AWS_IOT_API GetPolicyVersionResult();
    AWS_IOT_API GetPolicyVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetPolicyVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The policy ARN.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    inline void SetPolicyArn(const Aws::String& value) { m_policyArn = value; }
    inline void SetPolicyArn(Aws::String&& value) { m_policyArn = std::move(value); }
    inline void SetPolicyArn(const char* value) { m_policyArn.assign(value); }
    inline GetPolicyVersionResult& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline GetPolicyVersionResult& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline GetPolicyVersionResult& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy name.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline void SetPolicyName(const Aws::String& value) { m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyName.assign(value); }
    inline GetPolicyVersionResult& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline GetPolicyVersionResult& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline GetPolicyVersionResult& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON document that describes the policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocument = value; }
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocument = std::move(value); }
    inline void SetPolicyDocument(const char* value) { m_policyDocument.assign(value); }
    inline GetPolicyVersionResult& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}
    inline GetPolicyVersionResult& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}
    inline GetPolicyVersionResult& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy version ID.</p>
     */
    inline const Aws::String& GetPolicyVersionId() const{ return m_policyVersionId; }
    inline void SetPolicyVersionId(const Aws::String& value) { m_policyVersionId = value; }
    inline void SetPolicyVersionId(Aws::String&& value) { m_policyVersionId = std::move(value); }
    inline void SetPolicyVersionId(const char* value) { m_policyVersionId.assign(value); }
    inline GetPolicyVersionResult& WithPolicyVersionId(const Aws::String& value) { SetPolicyVersionId(value); return *this;}
    inline GetPolicyVersionResult& WithPolicyVersionId(Aws::String&& value) { SetPolicyVersionId(std::move(value)); return *this;}
    inline GetPolicyVersionResult& WithPolicyVersionId(const char* value) { SetPolicyVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the policy version is the default.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersion = value; }
    inline GetPolicyVersionResult& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline GetPolicyVersionResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline GetPolicyVersionResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline GetPolicyVersionResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline GetPolicyVersionResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generation ID of the policy version.</p>
     */
    inline const Aws::String& GetGenerationId() const{ return m_generationId; }
    inline void SetGenerationId(const Aws::String& value) { m_generationId = value; }
    inline void SetGenerationId(Aws::String&& value) { m_generationId = std::move(value); }
    inline void SetGenerationId(const char* value) { m_generationId.assign(value); }
    inline GetPolicyVersionResult& WithGenerationId(const Aws::String& value) { SetGenerationId(value); return *this;}
    inline GetPolicyVersionResult& WithGenerationId(Aws::String&& value) { SetGenerationId(std::move(value)); return *this;}
    inline GetPolicyVersionResult& WithGenerationId(const char* value) { SetGenerationId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPolicyVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPolicyVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPolicyVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;

    Aws::String m_policyName;

    Aws::String m_policyDocument;

    Aws::String m_policyVersionId;

    bool m_isDefaultVersion;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_generationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
