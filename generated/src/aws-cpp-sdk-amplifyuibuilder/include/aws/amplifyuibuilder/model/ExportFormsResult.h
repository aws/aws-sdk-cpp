/**
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


    /**
     * <p>Represents the configuration of the exported forms.</p>
     */
    inline const Aws::Vector<Form>& GetEntities() const{ return m_entities; }

    /**
     * <p>Represents the configuration of the exported forms.</p>
     */
    inline void SetEntities(const Aws::Vector<Form>& value) { m_entities = value; }

    /**
     * <p>Represents the configuration of the exported forms.</p>
     */
    inline void SetEntities(Aws::Vector<Form>&& value) { m_entities = std::move(value); }

    /**
     * <p>Represents the configuration of the exported forms.</p>
     */
    inline ExportFormsResult& WithEntities(const Aws::Vector<Form>& value) { SetEntities(value); return *this;}

    /**
     * <p>Represents the configuration of the exported forms.</p>
     */
    inline ExportFormsResult& WithEntities(Aws::Vector<Form>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>Represents the configuration of the exported forms.</p>
     */
    inline ExportFormsResult& AddEntities(const Form& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>Represents the configuration of the exported forms.</p>
     */
    inline ExportFormsResult& AddEntities(Form&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ExportFormsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ExportFormsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ExportFormsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Form> m_entities;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
