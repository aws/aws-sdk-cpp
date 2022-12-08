/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/Wave.h>
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
  class ListWavesResult
  {
  public:
    AWS_MGN_API ListWavesResult();
    AWS_MGN_API ListWavesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API ListWavesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Waves list.</p>
     */
    inline const Aws::Vector<Wave>& GetItems() const{ return m_items; }

    /**
     * <p>Waves list.</p>
     */
    inline void SetItems(const Aws::Vector<Wave>& value) { m_items = value; }

    /**
     * <p>Waves list.</p>
     */
    inline void SetItems(Aws::Vector<Wave>&& value) { m_items = std::move(value); }

    /**
     * <p>Waves list.</p>
     */
    inline ListWavesResult& WithItems(const Aws::Vector<Wave>& value) { SetItems(value); return *this;}

    /**
     * <p>Waves list.</p>
     */
    inline ListWavesResult& WithItems(Aws::Vector<Wave>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Waves list.</p>
     */
    inline ListWavesResult& AddItems(const Wave& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Waves list.</p>
     */
    inline ListWavesResult& AddItems(Wave&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Response next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Response next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Response next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Response next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Response next token.</p>
     */
    inline ListWavesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Response next token.</p>
     */
    inline ListWavesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Response next token.</p>
     */
    inline ListWavesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Wave> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
