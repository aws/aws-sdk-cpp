/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb-session/model/ValueHolder.h>
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
   * <p>Contains details of the fetched page.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/Page">AWS
   * API Reference</a></p>
   */
  class Page
  {
  public:
    AWS_QLDBSESSION_API Page();
    AWS_QLDBSESSION_API Page(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Page& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that contains values in multiple encoding formats.</p>
     */
    inline const Aws::Vector<ValueHolder>& GetValues() const{ return m_values; }

    /**
     * <p>A structure that contains values in multiple encoding formats.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A structure that contains values in multiple encoding formats.</p>
     */
    inline void SetValues(const Aws::Vector<ValueHolder>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A structure that contains values in multiple encoding formats.</p>
     */
    inline void SetValues(Aws::Vector<ValueHolder>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A structure that contains values in multiple encoding formats.</p>
     */
    inline Page& WithValues(const Aws::Vector<ValueHolder>& value) { SetValues(value); return *this;}

    /**
     * <p>A structure that contains values in multiple encoding formats.</p>
     */
    inline Page& WithValues(Aws::Vector<ValueHolder>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A structure that contains values in multiple encoding formats.</p>
     */
    inline Page& AddValues(const ValueHolder& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A structure that contains values in multiple encoding formats.</p>
     */
    inline Page& AddValues(ValueHolder&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }


    /**
     * <p>The token of the next page.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token of the next page.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The token of the next page.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The token of the next page.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The token of the next page.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The token of the next page.</p>
     */
    inline Page& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token of the next page.</p>
     */
    inline Page& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token of the next page.</p>
     */
    inline Page& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<ValueHolder> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
