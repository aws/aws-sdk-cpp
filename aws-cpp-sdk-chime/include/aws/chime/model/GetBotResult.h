/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Bot.h>
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
namespace Chime
{
namespace Model
{
  class GetBotResult
  {
  public:
    AWS_CHIME_API GetBotResult();
    AWS_CHIME_API GetBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The chat bot details.</p>
     */
    inline const Bot& GetBot() const{ return m_bot; }

    /**
     * <p>The chat bot details.</p>
     */
    inline void SetBot(const Bot& value) { m_bot = value; }

    /**
     * <p>The chat bot details.</p>
     */
    inline void SetBot(Bot&& value) { m_bot = std::move(value); }

    /**
     * <p>The chat bot details.</p>
     */
    inline GetBotResult& WithBot(const Bot& value) { SetBot(value); return *this;}

    /**
     * <p>The chat bot details.</p>
     */
    inline GetBotResult& WithBot(Bot&& value) { SetBot(std::move(value)); return *this;}

  private:

    Bot m_bot;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
