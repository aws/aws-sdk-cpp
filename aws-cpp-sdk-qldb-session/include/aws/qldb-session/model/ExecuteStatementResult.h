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
   * <p>Contains the details of the executed statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/ExecuteStatementResult">AWS
   * API Reference</a></p>
   */
  class AWS_QLDBSESSION_API ExecuteStatementResult
  {
  public:
    ExecuteStatementResult();
    ExecuteStatementResult(Aws::Utils::Json::JsonView jsonValue);
    ExecuteStatementResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline const Page& GetFirstPage() const{ return m_firstPage; }

    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline bool FirstPageHasBeenSet() const { return m_firstPageHasBeenSet; }

    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline void SetFirstPage(const Page& value) { m_firstPageHasBeenSet = true; m_firstPage = value; }

    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline void SetFirstPage(Page&& value) { m_firstPageHasBeenSet = true; m_firstPage = std::move(value); }

    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline ExecuteStatementResult& WithFirstPage(const Page& value) { SetFirstPage(value); return *this;}

    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline ExecuteStatementResult& WithFirstPage(Page&& value) { SetFirstPage(std::move(value)); return *this;}

  private:

    Page m_firstPage;
    bool m_firstPageHasBeenSet;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
