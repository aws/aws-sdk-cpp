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
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
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
namespace MarketplaceCatalog
{
namespace Model
{
  class AWS_MARKETPLACECATALOG_API StartChangeSetResult
  {
  public:
    StartChangeSetResult();
    StartChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Unique identifier generated for the request.</p>
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }

    /**
     * <p>Unique identifier generated for the request.</p>
     */
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetId = value; }

    /**
     * <p>Unique identifier generated for the request.</p>
     */
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetId = std::move(value); }

    /**
     * <p>Unique identifier generated for the request.</p>
     */
    inline void SetChangeSetId(const char* value) { m_changeSetId.assign(value); }

    /**
     * <p>Unique identifier generated for the request.</p>
     */
    inline StartChangeSetResult& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}

    /**
     * <p>Unique identifier generated for the request.</p>
     */
    inline StartChangeSetResult& WithChangeSetId(Aws::String&& value) { SetChangeSetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier generated for the request.</p>
     */
    inline StartChangeSetResult& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}


    /**
     * <p>The ARN associated to the unique identifier generated for the request.</p>
     */
    inline const Aws::String& GetChangeSetArn() const{ return m_changeSetArn; }

    /**
     * <p>The ARN associated to the unique identifier generated for the request.</p>
     */
    inline void SetChangeSetArn(const Aws::String& value) { m_changeSetArn = value; }

    /**
     * <p>The ARN associated to the unique identifier generated for the request.</p>
     */
    inline void SetChangeSetArn(Aws::String&& value) { m_changeSetArn = std::move(value); }

    /**
     * <p>The ARN associated to the unique identifier generated for the request.</p>
     */
    inline void SetChangeSetArn(const char* value) { m_changeSetArn.assign(value); }

    /**
     * <p>The ARN associated to the unique identifier generated for the request.</p>
     */
    inline StartChangeSetResult& WithChangeSetArn(const Aws::String& value) { SetChangeSetArn(value); return *this;}

    /**
     * <p>The ARN associated to the unique identifier generated for the request.</p>
     */
    inline StartChangeSetResult& WithChangeSetArn(Aws::String&& value) { SetChangeSetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN associated to the unique identifier generated for the request.</p>
     */
    inline StartChangeSetResult& WithChangeSetArn(const char* value) { SetChangeSetArn(value); return *this;}

  private:

    Aws::String m_changeSetId;

    Aws::String m_changeSetArn;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
