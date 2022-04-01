﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Alias.h>
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
namespace GameLift
{
namespace Model
{
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateAliasOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateAliasResult
  {
  public:
    UpdateAliasResult();
    UpdateAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated alias resource.</p>
     */
    inline const Alias& GetAlias() const{ return m_alias; }

    /**
     * <p>The updated alias resource.</p>
     */
    inline void SetAlias(const Alias& value) { m_alias = value; }

    /**
     * <p>The updated alias resource.</p>
     */
    inline void SetAlias(Alias&& value) { m_alias = std::move(value); }

    /**
     * <p>The updated alias resource.</p>
     */
    inline UpdateAliasResult& WithAlias(const Alias& value) { SetAlias(value); return *this;}

    /**
     * <p>The updated alias resource.</p>
     */
    inline UpdateAliasResult& WithAlias(Alias&& value) { SetAlias(std::move(value)); return *this;}

  private:

    Alias m_alias;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
