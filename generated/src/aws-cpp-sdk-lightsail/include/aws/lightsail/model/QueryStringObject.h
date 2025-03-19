/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the query string parameters that an Amazon Lightsail content
   * delivery network (CDN) distribution to bases caching on.</p> <p>For the query
   * strings that you specify, your distribution caches separate versions of the
   * specified content based on the query string values in viewer
   * requests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/QueryStringObject">AWS
   * API Reference</a></p>
   */
  class QueryStringObject
  {
  public:
    AWS_LIGHTSAIL_API QueryStringObject() = default;
    AWS_LIGHTSAIL_API QueryStringObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API QueryStringObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the distribution forwards and caches based on query
     * strings.</p>
     */
    inline bool GetOption() const { return m_option; }
    inline bool OptionHasBeenSet() const { return m_optionHasBeenSet; }
    inline void SetOption(bool value) { m_optionHasBeenSet = true; m_option = value; }
    inline QueryStringObject& WithOption(bool value) { SetOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific query strings that the distribution forwards to the origin.</p>
     * <p>Your distribution will cache content based on the specified query
     * strings.</p> <p>If the <code>option</code> parameter is true, then your
     * distribution forwards all query strings, regardless of what you specify using
     * the <code>queryStringsAllowList</code> parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueryStringsAllowList() const { return m_queryStringsAllowList; }
    inline bool QueryStringsAllowListHasBeenSet() const { return m_queryStringsAllowListHasBeenSet; }
    template<typename QueryStringsAllowListT = Aws::Vector<Aws::String>>
    void SetQueryStringsAllowList(QueryStringsAllowListT&& value) { m_queryStringsAllowListHasBeenSet = true; m_queryStringsAllowList = std::forward<QueryStringsAllowListT>(value); }
    template<typename QueryStringsAllowListT = Aws::Vector<Aws::String>>
    QueryStringObject& WithQueryStringsAllowList(QueryStringsAllowListT&& value) { SetQueryStringsAllowList(std::forward<QueryStringsAllowListT>(value)); return *this;}
    template<typename QueryStringsAllowListT = Aws::String>
    QueryStringObject& AddQueryStringsAllowList(QueryStringsAllowListT&& value) { m_queryStringsAllowListHasBeenSet = true; m_queryStringsAllowList.emplace_back(std::forward<QueryStringsAllowListT>(value)); return *this; }
    ///@}
  private:

    bool m_option{false};
    bool m_optionHasBeenSet = false;

    Aws::Vector<Aws::String> m_queryStringsAllowList;
    bool m_queryStringsAllowListHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
