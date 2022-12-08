/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StartChangeSetResult
  {
  public:
    AWS_MARKETPLACECATALOG_API StartChangeSetResult();
    AWS_MARKETPLACECATALOG_API StartChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API StartChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
