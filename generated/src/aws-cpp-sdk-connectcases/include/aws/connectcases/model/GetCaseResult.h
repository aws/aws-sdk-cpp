/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connectcases/model/FieldValue.h>
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
namespace ConnectCases
{
namespace Model
{
  class GetCaseResult
  {
  public:
    AWS_CONNECTCASES_API GetCaseResult();
    AWS_CONNECTCASES_API GetCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API GetCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of detailed field information. </p>
     */
    inline const Aws::Vector<FieldValue>& GetFields() const{ return m_fields; }
    inline void SetFields(const Aws::Vector<FieldValue>& value) { m_fields = value; }
    inline void SetFields(Aws::Vector<FieldValue>&& value) { m_fields = std::move(value); }
    inline GetCaseResult& WithFields(const Aws::Vector<FieldValue>& value) { SetFields(value); return *this;}
    inline GetCaseResult& WithFields(Aws::Vector<FieldValue>&& value) { SetFields(std::move(value)); return *this;}
    inline GetCaseResult& AddFields(const FieldValue& value) { m_fields.push_back(value); return *this; }
    inline GetCaseResult& AddFields(FieldValue&& value) { m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetCaseResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetCaseResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetCaseResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetCaseResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetCaseResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetCaseResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetCaseResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetCaseResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetCaseResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetCaseResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetCaseResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetCaseResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier of a template.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }
    inline void SetTemplateId(const Aws::String& value) { m_templateId = value; }
    inline void SetTemplateId(Aws::String&& value) { m_templateId = std::move(value); }
    inline void SetTemplateId(const char* value) { m_templateId.assign(value); }
    inline GetCaseResult& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}
    inline GetCaseResult& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}
    inline GetCaseResult& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FieldValue> m_fields;

    Aws::String m_nextToken;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_templateId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
