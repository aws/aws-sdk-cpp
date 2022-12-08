/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/TemplateActionDocument.h>
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
namespace mgn
{
namespace Model
{
  class ListTemplateActionsResult
  {
  public:
    AWS_MGN_API ListTemplateActionsResult();
    AWS_MGN_API ListTemplateActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API ListTemplateActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of template post migration custom actions.</p>
     */
    inline const Aws::Vector<TemplateActionDocument>& GetItems() const{ return m_items; }

    /**
     * <p>List of template post migration custom actions.</p>
     */
    inline void SetItems(const Aws::Vector<TemplateActionDocument>& value) { m_items = value; }

    /**
     * <p>List of template post migration custom actions.</p>
     */
    inline void SetItems(Aws::Vector<TemplateActionDocument>&& value) { m_items = std::move(value); }

    /**
     * <p>List of template post migration custom actions.</p>
     */
    inline ListTemplateActionsResult& WithItems(const Aws::Vector<TemplateActionDocument>& value) { SetItems(value); return *this;}

    /**
     * <p>List of template post migration custom actions.</p>
     */
    inline ListTemplateActionsResult& WithItems(Aws::Vector<TemplateActionDocument>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>List of template post migration custom actions.</p>
     */
    inline ListTemplateActionsResult& AddItems(const TemplateActionDocument& value) { m_items.push_back(value); return *this; }

    /**
     * <p>List of template post migration custom actions.</p>
     */
    inline ListTemplateActionsResult& AddItems(TemplateActionDocument&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Next token returned when listing template post migration custom actions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token returned when listing template post migration custom actions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Next token returned when listing template post migration custom actions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Next token returned when listing template post migration custom actions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Next token returned when listing template post migration custom actions.</p>
     */
    inline ListTemplateActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token returned when listing template post migration custom actions.</p>
     */
    inline ListTemplateActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token returned when listing template post migration custom actions.</p>
     */
    inline ListTemplateActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TemplateActionDocument> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
