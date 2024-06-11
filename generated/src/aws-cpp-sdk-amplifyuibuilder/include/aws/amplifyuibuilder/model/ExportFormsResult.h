﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/Form.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{
  class ExportFormsResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ExportFormsResult();
    AWS_AMPLIFYUIBUILDER_API ExportFormsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API ExportFormsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the configuration of the exported forms.</p>
     */
    inline const Aws::Vector<Form>& GetEntities() const{ return m_entities; }
    inline void SetEntities(const Aws::Vector<Form>& value) { m_entities = value; }
    inline void SetEntities(Aws::Vector<Form>&& value) { m_entities = std::move(value); }
    inline ExportFormsResult& WithEntities(const Aws::Vector<Form>& value) { SetEntities(value); return *this;}
    inline ExportFormsResult& WithEntities(Aws::Vector<Form>&& value) { SetEntities(std::move(value)); return *this;}
    inline ExportFormsResult& AddEntities(const Form& value) { m_entities.push_back(value); return *this; }
    inline ExportFormsResult& AddEntities(Form&& value) { m_entities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ExportFormsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ExportFormsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ExportFormsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExportFormsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExportFormsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExportFormsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Form> m_entities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
