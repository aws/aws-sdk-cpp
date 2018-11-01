/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API CreatePortfolioShareResult
  {
  public:
    CreatePortfolioShareResult();
    CreatePortfolioShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePortfolioShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The portfolio share unique identifier. This will only be returned if
     * portfolio is shared to an organization node.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const{ return m_portfolioShareToken; }

    /**
     * <p>The portfolio share unique identifier. This will only be returned if
     * portfolio is shared to an organization node.</p>
     */
    inline void SetPortfolioShareToken(const Aws::String& value) { m_portfolioShareToken = value; }

    /**
     * <p>The portfolio share unique identifier. This will only be returned if
     * portfolio is shared to an organization node.</p>
     */
    inline void SetPortfolioShareToken(Aws::String&& value) { m_portfolioShareToken = std::move(value); }

    /**
     * <p>The portfolio share unique identifier. This will only be returned if
     * portfolio is shared to an organization node.</p>
     */
    inline void SetPortfolioShareToken(const char* value) { m_portfolioShareToken.assign(value); }

    /**
     * <p>The portfolio share unique identifier. This will only be returned if
     * portfolio is shared to an organization node.</p>
     */
    inline CreatePortfolioShareResult& WithPortfolioShareToken(const Aws::String& value) { SetPortfolioShareToken(value); return *this;}

    /**
     * <p>The portfolio share unique identifier. This will only be returned if
     * portfolio is shared to an organization node.</p>
     */
    inline CreatePortfolioShareResult& WithPortfolioShareToken(Aws::String&& value) { SetPortfolioShareToken(std::move(value)); return *this;}

    /**
     * <p>The portfolio share unique identifier. This will only be returned if
     * portfolio is shared to an organization node.</p>
     */
    inline CreatePortfolioShareResult& WithPortfolioShareToken(const char* value) { SetPortfolioShareToken(value); return *this;}

  private:

    Aws::String m_portfolioShareToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
