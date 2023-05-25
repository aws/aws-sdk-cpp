/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ContinuousBackupsDescription.h>
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
namespace DynamoDB
{
namespace Model
{
  class DescribeContinuousBackupsResult
  {
  public:
    AWS_DYNAMODB_API DescribeContinuousBackupsResult();
    AWS_DYNAMODB_API DescribeContinuousBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeContinuousBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline const ContinuousBackupsDescription& GetContinuousBackupsDescription() const{ return m_continuousBackupsDescription; }

    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline void SetContinuousBackupsDescription(const ContinuousBackupsDescription& value) { m_continuousBackupsDescription = value; }

    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline void SetContinuousBackupsDescription(ContinuousBackupsDescription&& value) { m_continuousBackupsDescription = std::move(value); }

    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline DescribeContinuousBackupsResult& WithContinuousBackupsDescription(const ContinuousBackupsDescription& value) { SetContinuousBackupsDescription(value); return *this;}

    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline DescribeContinuousBackupsResult& WithContinuousBackupsDescription(ContinuousBackupsDescription&& value) { SetContinuousBackupsDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeContinuousBackupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeContinuousBackupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeContinuousBackupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ContinuousBackupsDescription m_continuousBackupsDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
