/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/TemplateSummary.h>
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
  class ListTemplatesResult
  {
  public:
    AWS_CONNECTCASES_API ListTemplatesResult();
    AWS_CONNECTCASES_API ListTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API ListTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline ListTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline ListTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline ListTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of template summary objects.</p>
     */
    inline const Aws::Vector<TemplateSummary>& GetTemplates() const{ return m_templates; }

    /**
     * <p>List of template summary objects.</p>
     */
    inline void SetTemplates(const Aws::Vector<TemplateSummary>& value) { m_templates = value; }

    /**
     * <p>List of template summary objects.</p>
     */
    inline void SetTemplates(Aws::Vector<TemplateSummary>&& value) { m_templates = std::move(value); }

    /**
     * <p>List of template summary objects.</p>
     */
    inline ListTemplatesResult& WithTemplates(const Aws::Vector<TemplateSummary>& value) { SetTemplates(value); return *this;}

    /**
     * <p>List of template summary objects.</p>
     */
    inline ListTemplatesResult& WithTemplates(Aws::Vector<TemplateSummary>&& value) { SetTemplates(std::move(value)); return *this;}

    /**
     * <p>List of template summary objects.</p>
     */
    inline ListTemplatesResult& AddTemplates(const TemplateSummary& value) { m_templates.push_back(value); return *this; }

    /**
     * <p>List of template summary objects.</p>
     */
    inline ListTemplatesResult& AddTemplates(TemplateSummary&& value) { m_templates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<TemplateSummary> m_templates;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
