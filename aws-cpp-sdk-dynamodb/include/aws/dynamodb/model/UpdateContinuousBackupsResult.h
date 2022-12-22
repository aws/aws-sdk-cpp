/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ContinuousBackupsDescription.h>
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
  class UpdateContinuousBackupsResult
  {
  public:
    AWS_DYNAMODB_API UpdateContinuousBackupsResult();
    AWS_DYNAMODB_API UpdateContinuousBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API UpdateContinuousBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateContinuousBackupsResult& WithContinuousBackupsDescription(const ContinuousBackupsDescription& value) { SetContinuousBackupsDescription(value); return *this;}

    /**
     * <p>Represents the continuous backups and point in time recovery settings on the
     * table.</p>
     */
    inline UpdateContinuousBackupsResult& WithContinuousBackupsDescription(ContinuousBackupsDescription&& value) { SetContinuousBackupsDescription(std::move(value)); return *this;}

  private:

    ContinuousBackupsDescription m_continuousBackupsDescription;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
