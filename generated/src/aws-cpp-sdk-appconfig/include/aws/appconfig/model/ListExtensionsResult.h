/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/ExtensionSummary.h>
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
namespace AppConfig
{
namespace Model
{
  class ListExtensionsResult
  {
  public:
    AWS_APPCONFIG_API ListExtensionsResult();
    AWS_APPCONFIG_API ListExtensionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API ListExtensionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of available extensions. The list includes Amazon Web
     * Services-authored and user-created extensions.</p>
     */
    inline const Aws::Vector<ExtensionSummary>& GetItems() const{ return m_items; }

    /**
     * <p>The list of available extensions. The list includes Amazon Web
     * Services-authored and user-created extensions.</p>
     */
    inline void SetItems(const Aws::Vector<ExtensionSummary>& value) { m_items = value; }

    /**
     * <p>The list of available extensions. The list includes Amazon Web
     * Services-authored and user-created extensions.</p>
     */
    inline void SetItems(Aws::Vector<ExtensionSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>The list of available extensions. The list includes Amazon Web
     * Services-authored and user-created extensions.</p>
     */
    inline ListExtensionsResult& WithItems(const Aws::Vector<ExtensionSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of available extensions. The list includes Amazon Web
     * Services-authored and user-created extensions.</p>
     */
    inline ListExtensionsResult& WithItems(Aws::Vector<ExtensionSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of available extensions. The list includes Amazon Web
     * Services-authored and user-created extensions.</p>
     */
    inline ListExtensionsResult& AddItems(const ExtensionSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The list of available extensions. The list includes Amazon Web
     * Services-authored and user-created extensions.</p>
     */
    inline ListExtensionsResult& AddItems(ExtensionSummary&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListExtensionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListExtensionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListExtensionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ExtensionSummary> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
