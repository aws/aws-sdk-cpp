/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/qldb-session/model/Page.h>
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
namespace QLDBSession
{
namespace Model
{

  /**
   * <p>Contains the page that was fetched.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/FetchPageResult">AWS
   * API Reference</a></p>
   */
  class AWS_QLDBSESSION_API FetchPageResult
  {
  public:
    FetchPageResult();
    FetchPageResult(Aws::Utils::Json::JsonView jsonValue);
    FetchPageResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline const Page& GetPage() const{ return m_page; }

    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }

    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline void SetPage(const Page& value) { m_pageHasBeenSet = true; m_page = value; }

    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline void SetPage(Page&& value) { m_pageHasBeenSet = true; m_page = std::move(value); }

    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline FetchPageResult& WithPage(const Page& value) { SetPage(value); return *this;}

    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline FetchPageResult& WithPage(Page&& value) { SetPage(std::move(value)); return *this;}

  private:

    Page m_page;
    bool m_pageHasBeenSet;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
