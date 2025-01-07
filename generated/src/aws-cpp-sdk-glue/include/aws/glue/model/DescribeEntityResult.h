/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Field.h>
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
namespace Glue
{
namespace Model
{
  class DescribeEntityResult
  {
  public:
    AWS_GLUE_API DescribeEntityResult();
    AWS_GLUE_API DescribeEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DescribeEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the fields for that connector entity. This is the list of
     * <code>Field</code> objects. <code>Field</code> is very similar to column in a
     * database. The <code>Field</code> object has information about different
     * properties associated with fields in the connector.</p>
     */
    inline const Aws::Vector<Field>& GetFields() const{ return m_fields; }
    inline void SetFields(const Aws::Vector<Field>& value) { m_fields = value; }
    inline void SetFields(Aws::Vector<Field>&& value) { m_fields = std::move(value); }
    inline DescribeEntityResult& WithFields(const Aws::Vector<Field>& value) { SetFields(value); return *this;}
    inline DescribeEntityResult& WithFields(Aws::Vector<Field>&& value) { SetFields(std::move(value)); return *this;}
    inline DescribeEntityResult& AddFields(const Field& value) { m_fields.push_back(value); return *this; }
    inline DescribeEntityResult& AddFields(Field&& value) { m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, present if the current segment is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeEntityResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeEntityResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeEntityResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEntityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEntityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEntityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Field> m_fields;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
