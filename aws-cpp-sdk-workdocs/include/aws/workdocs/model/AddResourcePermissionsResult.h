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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/ShareResult.h>
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
namespace WorkDocs
{
namespace Model
{
  class AWS_WORKDOCS_API AddResourcePermissionsResult
  {
  public:
    AddResourcePermissionsResult();
    AddResourcePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddResourcePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The share results.</p>
     */
    inline const Aws::Vector<ShareResult>& GetShareResults() const{ return m_shareResults; }

    /**
     * <p>The share results.</p>
     */
    inline void SetShareResults(const Aws::Vector<ShareResult>& value) { m_shareResults = value; }

    /**
     * <p>The share results.</p>
     */
    inline void SetShareResults(Aws::Vector<ShareResult>&& value) { m_shareResults = std::move(value); }

    /**
     * <p>The share results.</p>
     */
    inline AddResourcePermissionsResult& WithShareResults(const Aws::Vector<ShareResult>& value) { SetShareResults(value); return *this;}

    /**
     * <p>The share results.</p>
     */
    inline AddResourcePermissionsResult& WithShareResults(Aws::Vector<ShareResult>&& value) { SetShareResults(std::move(value)); return *this;}

    /**
     * <p>The share results.</p>
     */
    inline AddResourcePermissionsResult& AddShareResults(const ShareResult& value) { m_shareResults.push_back(value); return *this; }

    /**
     * <p>The share results.</p>
     */
    inline AddResourcePermissionsResult& AddShareResults(ShareResult&& value) { m_shareResults.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ShareResult> m_shareResults;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
