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
  class DescribeEntityResult
  {
  public:
    AWS_MARKETPLACECATALOG_API DescribeEntityResult();
    AWS_MARKETPLACECATALOG_API DescribeEntityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API DescribeEntityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The named type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline const Aws::String& GetEntityType() const{ return m_entityType; }

    /**
     * <p>The named type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline void SetEntityType(const Aws::String& value) { m_entityType = value; }

    /**
     * <p>The named type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline void SetEntityType(Aws::String&& value) { m_entityType = std::move(value); }

    /**
     * <p>The named type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline void SetEntityType(const char* value) { m_entityType.assign(value); }

    /**
     * <p>The named type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline DescribeEntityResult& WithEntityType(const Aws::String& value) { SetEntityType(value); return *this;}

    /**
     * <p>The named type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline DescribeEntityResult& WithEntityType(Aws::String&& value) { SetEntityType(std::move(value)); return *this;}

    /**
     * <p>The named type of the entity, in the format of
     * <code>EntityType@Version</code>.</p>
     */
    inline DescribeEntityResult& WithEntityType(const char* value) { SetEntityType(value); return *this;}


    /**
     * <p>The identifier of the entity, in the format of
     * <code>EntityId@RevisionId</code>.</p>
     */
    inline const Aws::String& GetEntityIdentifier() const{ return m_entityIdentifier; }

    /**
     * <p>The identifier of the entity, in the format of
     * <code>EntityId@RevisionId</code>.</p>
     */
    inline void SetEntityIdentifier(const Aws::String& value) { m_entityIdentifier = value; }

    /**
     * <p>The identifier of the entity, in the format of
     * <code>EntityId@RevisionId</code>.</p>
     */
    inline void SetEntityIdentifier(Aws::String&& value) { m_entityIdentifier = std::move(value); }

    /**
     * <p>The identifier of the entity, in the format of
     * <code>EntityId@RevisionId</code>.</p>
     */
    inline void SetEntityIdentifier(const char* value) { m_entityIdentifier.assign(value); }

    /**
     * <p>The identifier of the entity, in the format of
     * <code>EntityId@RevisionId</code>.</p>
     */
    inline DescribeEntityResult& WithEntityIdentifier(const Aws::String& value) { SetEntityIdentifier(value); return *this;}

    /**
     * <p>The identifier of the entity, in the format of
     * <code>EntityId@RevisionId</code>.</p>
     */
    inline DescribeEntityResult& WithEntityIdentifier(Aws::String&& value) { SetEntityIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the entity, in the format of
     * <code>EntityId@RevisionId</code>.</p>
     */
    inline DescribeEntityResult& WithEntityIdentifier(const char* value) { SetEntityIdentifier(value); return *this;}


    /**
     * <p>The ARN associated to the unique identifier for the entity referenced in this
     * request.</p>
     */
    inline const Aws::String& GetEntityArn() const{ return m_entityArn; }

    /**
     * <p>The ARN associated to the unique identifier for the entity referenced in this
     * request.</p>
     */
    inline void SetEntityArn(const Aws::String& value) { m_entityArn = value; }

    /**
     * <p>The ARN associated to the unique identifier for the entity referenced in this
     * request.</p>
     */
    inline void SetEntityArn(Aws::String&& value) { m_entityArn = std::move(value); }

    /**
     * <p>The ARN associated to the unique identifier for the entity referenced in this
     * request.</p>
     */
    inline void SetEntityArn(const char* value) { m_entityArn.assign(value); }

    /**
     * <p>The ARN associated to the unique identifier for the entity referenced in this
     * request.</p>
     */
    inline DescribeEntityResult& WithEntityArn(const Aws::String& value) { SetEntityArn(value); return *this;}

    /**
     * <p>The ARN associated to the unique identifier for the entity referenced in this
     * request.</p>
     */
    inline DescribeEntityResult& WithEntityArn(Aws::String&& value) { SetEntityArn(std::move(value)); return *this;}

    /**
     * <p>The ARN associated to the unique identifier for the entity referenced in this
     * request.</p>
     */
    inline DescribeEntityResult& WithEntityArn(const char* value) { SetEntityArn(value); return *this;}


    /**
     * <p>The last modified date of the entity, in ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last modified date of the entity, in ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDate = value; }

    /**
     * <p>The last modified date of the entity, in ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The last modified date of the entity, in ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDate.assign(value); }

    /**
     * <p>The last modified date of the entity, in ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline DescribeEntityResult& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last modified date of the entity, in ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline DescribeEntityResult& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The last modified date of the entity, in ISO 8601 format
     * (2018-02-27T13:45:22Z).</p>
     */
    inline DescribeEntityResult& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>This stringified JSON object includes the details of the entity.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>This stringified JSON object includes the details of the entity.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_details = value; }

    /**
     * <p>This stringified JSON object includes the details of the entity.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_details = std::move(value); }

    /**
     * <p>This stringified JSON object includes the details of the entity.</p>
     */
    inline void SetDetails(const char* value) { m_details.assign(value); }

    /**
     * <p>This stringified JSON object includes the details of the entity.</p>
     */
    inline DescribeEntityResult& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>This stringified JSON object includes the details of the entity.</p>
     */
    inline DescribeEntityResult& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>This stringified JSON object includes the details of the entity.</p>
     */
    inline DescribeEntityResult& WithDetails(const char* value) { SetDetails(value); return *this;}

  private:

    Aws::String m_entityType;

    Aws::String m_entityIdentifier;

    Aws::String m_entityArn;

    Aws::String m_lastModifiedDate;

    Aws::String m_details;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
